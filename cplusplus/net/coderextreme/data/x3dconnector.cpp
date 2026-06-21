#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("x3dconnector.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("creator"));
meta3.setContent(std::string("Lost, Doug Sanden I think"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("generator"));
meta4.setContent(std::string("manual"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("identifier"));
meta5.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("description"));
meta6.setContent(std::string("a generic proto to connect two objects"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Viewpoint& Viewpoint8 =  Viewpoint();
Viewpoint8.setPosition(new float[]{0.0,0.0,5.0});
Viewpoint8.setDescription(std::string("Only Viewpoint"));
Scene7.addChild(&Viewpoint8);

Background& Background9 =  Background();
Background9.setSkyColor(new float[]{0.4,0.4,0.4}, 3);
Scene7.addChild(&Background9);

Transform& Transform10 =  Transform();
Transform10.setDEF(std::string("G1"));
Shape& Shape11 =  Shape();
Appearance& Appearance12 =  Appearance();
Appearance12.setContainerField("appearance");
Material& Material13 =  Material();
Material13.setContainerField("material");
Material13.setDiffuseColor(new float[]{0.7,0.2,0.2});
Appearance12.addChild(&Material13);

Shape11.addChild(&Appearance12);

Sphere& Sphere14 =  Sphere();
Sphere14.setRadius(0.1);
Shape11.setGeometry(&Sphere14);

Transform10.addChild(&Shape11);

PlaneSensor& PlaneSensor15 =  PlaneSensor();
PlaneSensor15.setDescription(std::string("Grab to move"));
PlaneSensor15.setDEF(std::string("PS1"));
Transform10.addChild(&PlaneSensor15);

ROUTE& ROUTE16 =  ROUTE();
ROUTE16.setFromNode(std::string("PS1"));
ROUTE16.setFromField(std::string("translation_changed"));
ROUTE16.setToNode(std::string("G1"));
ROUTE16.setToField(std::string("set_translation"));
Transform10.addChild(&ROUTE16);

Scene7.addChild(&Transform10);

Transform& Transform17 =  Transform();
Transform17.setDEF(std::string("G2"));
Transform17.setTranslation(new float[]{1.0,-1.0,0.01});
Shape& Shape18 =  Shape();
Appearance& Appearance19 =  Appearance();
Appearance19.setContainerField("appearance");
Material& Material20 =  Material();
Material20.setContainerField("material");
Material20.setDiffuseColor(new float[]{0.2,0.7,0.2});
Appearance19.addChild(&Material20);

Shape18.addChild(&Appearance19);

Sphere& Sphere21 =  Sphere();
Sphere21.setRadius(0.1);
Shape18.setGeometry(&Sphere21);

Transform17.addChild(&Shape18);

PlaneSensor& PlaneSensor22 =  PlaneSensor();
PlaneSensor22.setDescription(std::string("Grab to move"));
PlaneSensor22.setOffset(new float[]{1.0,-1.0,0.01});
PlaneSensor22.setDEF(std::string("PS2"));
Transform17.addChild(&PlaneSensor22);

ROUTE& ROUTE23 =  ROUTE();
ROUTE23.setFromNode(std::string("PS2"));
ROUTE23.setFromField(std::string("translation_changed"));
ROUTE23.setToNode(std::string("G2"));
ROUTE23.setToField(std::string("set_translation"));
Transform17.addChild(&ROUTE23);

Scene7.addChild(&Transform17);

Transform& Transform24 =  Transform();
Transform24.setDEF(std::string("transC1"));
Transform& Transform25 =  Transform();
Transform25.setDEF(std::string("rotscaleC1"));
Shape& Shape26 =  Shape();
Appearance& Appearance27 =  Appearance();
Appearance27.setContainerField("appearance");
Material& Material28 =  Material();
Material28.setContainerField("material");
Material28.setDiffuseColor(new float[]{0.2,0.7,0.7});
Material28.setTransparency(0.5);
Appearance27.addChild(&Material28);

Shape26.addChild(&Appearance27);

Cylinder& Cylinder29 =  Cylinder();
Cylinder29.setRadius(0.05);
Shape26.setGeometry(&Cylinder29);

Transform25.addChild(&Shape26);

Transform24.addChild(&Transform25);

Scene7.addChild(&Transform24);

ProtoDeclare& ProtoDeclare30 =  ProtoDeclare();
ProtoDeclare30.setName(std::string("x3dconnector"));
ProtoInterface& ProtoInterface31 =  ProtoInterface();
field& field32 =  field();
field32.setName(std::string("startnode"));
field32.setAccessType(std::string("initializeOnly"));
field32.setType(std::string("SFNode"));
ProtoInterface31.addChild(&field32);

field& field33 =  field();
field33.setName(std::string("endnode"));
field33.setAccessType(std::string("initializeOnly"));
field33.setType(std::string("SFNode"));
ProtoInterface31.addChild(&field33);

field& field34 =  field();
field34.setName(std::string("transnode"));
field34.setAccessType(std::string("initializeOnly"));
field34.setType(std::string("SFNode"));
ProtoInterface31.addChild(&field34);

field& field35 =  field();
field35.setName(std::string("rotscalenode"));
field35.setAccessType(std::string("initializeOnly"));
field35.setType(std::string("SFNode"));
ProtoInterface31.addChild(&field35);

field& field36 =  field();
field36.setName(std::string("set_startpoint"));
field36.setAccessType(std::string("inputOnly"));
field36.setType(std::string("SFVec3f"));
ProtoInterface31.addChild(&field36);

field& field37 =  field();
field37.setName(std::string("set_endpoint"));
field37.setAccessType(std::string("inputOnly"));
field37.setType(std::string("SFVec3f"));
ProtoInterface31.addChild(&field37);

ProtoDeclare30.addChild(&ProtoInterface31);

ProtoBody& ProtoBody38 =  ProtoBody();
Script& Script39 =  Script();
Script39.setDEF(std::string("S1"));
field& field40 =  field();
field40.setName(std::string("startnode"));
field40.setAccessType(std::string("initializeOnly"));
field40.setType(std::string("SFNode"));
Script39.addChild(&field40);

field& field41 =  field();
field41.setName(std::string("endnode"));
field41.setAccessType(std::string("initializeOnly"));
field41.setType(std::string("SFNode"));
Script39.addChild(&field41);

field& field42 =  field();
field42.setName(std::string("transnode"));
field42.setAccessType(std::string("initializeOnly"));
field42.setType(std::string("SFNode"));
Script39.addChild(&field42);

field& field43 =  field();
field43.setName(std::string("rotscalenode"));
field43.setAccessType(std::string("initializeOnly"));
field43.setType(std::string("SFNode"));
Script39.addChild(&field43);

field& field44 =  field();
field44.setName(std::string("set_startpoint"));
field44.setAccessType(std::string("inputOnly"));
field44.setType(std::string("SFVec3f"));
Script39.addChild(&field44);

field& field45 =  field();
field45.setName(std::string("set_endpoint"));
field45.setAccessType(std::string("inputOnly"));
field45.setType(std::string("SFVec3f"));
Script39.addChild(&field45);

IS& IS46 =  IS();
Connect& connect47 =  Connect();
connect47.setNodeField(std::string("startnode"));
connect47.setProtoField(std::string("startnode"));
IS46.addChild(&connect47);

Connect& connect48 =  Connect();
connect48.setNodeField(std::string("endnode"));
connect48.setProtoField(std::string("endnode"));
IS46.addChild(&connect48);

Connect& connect49 =  Connect();
connect49.setNodeField(std::string("transnode"));
connect49.setProtoField(std::string("transnode"));
IS46.addChild(&connect49);

Connect& connect50 =  Connect();
connect50.setNodeField(std::string("rotscalenode"));
connect50.setProtoField(std::string("rotscalenode"));
IS46.addChild(&connect50);

Connect& connect51 =  Connect();
connect51.setNodeField(std::string("set_startpoint"));
connect51.setProtoField(std::string("set_startpoint"));
IS46.addChild(&connect51);

Connect& connect52 =  Connect();
connect52.setNodeField(std::string("set_endpoint"));
connect52.setProtoField(std::string("set_endpoint"));
IS46.addChild(&connect52);

Script39.addChild(&IS46);


//Script39.setSourceCode(std::string("ecmascript:")+
//_T("        function recompute(startpoint,endpoint){")+
//_T("	    if (typeof endpoint === 'undefined') {")+
//_T("		return;")+
//_T("	    }")+
//_T("            var dif = endpoint.subtract(startpoint);")+
//_T("            var dist = dif.length()*0.5;")+
//_T("            var dif2 = dif.multiply(0.5);")+
//_T("            var norm = dif.normalize();")+
//_T("            var transl = startpoint.add(dif2);")+
//_T("	    if (typeof Quaternion !== 'undefined') {")+
//_T("		    return {")+
//_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
//_T("			    translation : transl,")+
//_T("			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)")+
//_T("		    };")+
//_T("	    } else {")+
//_T("		    return {")+
//_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
//_T("			    translation : transl,")+
//_T("			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)")+
//_T("		    };")+
//_T("	    }")+
//_T("	}")+
//_T("	function recompute_and_route(startpoint, endpoint) {")+
//_T("	      var trafo = recompute(startpoint, endpoint);")+
//_T("	      if (trafo) {")+
//_T("		      transnode.translation = trafo.translation;")+
//_T("		      rotscalenode.rotation = trafo.rotation;")+
//_T("		      rotscalenode.scale = trafo.scale;")+
//_T("	      }")+
//_T("	}")+
//_T("        function initialize(){")+
//_T("            recompute_and_route(startnode.translation,endnode.translation);")+
//_T("        }")+
//_T("        function set_startpoint(val,t){")+
//_T("            recompute_and_route(val,endnode.translation);")+
//_T("        }")+
//_T("        function set_endpoint(val,t){")+
//_T("            recompute_and_route(startnode.translation,val);")+
//_T("        }"));
ProtoBody38.addChild(&Script39);

ProtoDeclare30.addChild(&ProtoBody38);

Scene7.addChild(&ProtoDeclare30);

ProtoInstance& ProtoInstance53 =  ProtoInstance();
ProtoInstance53.setName(std::string("x3dconnector"));
ProtoInstance53.setDEF(std::string("connector1"));
fieldValue& fieldValue54 =  fieldValue();
fieldValue54.setName(std::string("startnode"));
Transform& Transform55 =  Transform();
Transform55.setUSE(std::string("G1"));
fieldValue54.addChild(&Transform55);

ProtoInstance53.addChild(&fieldValue54);

fieldValue& fieldValue56 =  fieldValue();
fieldValue56.setName(std::string("endnode"));
Transform& Transform57 =  Transform();
Transform57.setUSE(std::string("G2"));
fieldValue56.addChild(&Transform57);

ProtoInstance53.addChild(&fieldValue56);

fieldValue& fieldValue58 =  fieldValue();
fieldValue58.setName(std::string("transnode"));
Transform& Transform59 =  Transform();
Transform59.setUSE(std::string("transC1"));
fieldValue58.addChild(&Transform59);

ProtoInstance53.addChild(&fieldValue58);

fieldValue& fieldValue60 =  fieldValue();
fieldValue60.setName(std::string("rotscalenode"));
Transform& Transform61 =  Transform();
Transform61.setUSE(std::string("rotscaleC1"));
fieldValue60.addChild(&Transform61);

ProtoInstance53.addChild(&fieldValue60);

//<fieldValue name='set_startpoint'>
//</fieldValue>
//<fieldValue name='set_endpoint'>
//</fieldValue>
Scene7.addChild(&ProtoInstance53);

ROUTE& ROUTE62 =  ROUTE();
ROUTE62.setFromNode(std::string("G1"));
ROUTE62.setFromField(std::string("translation_changed"));
ROUTE62.setToNode(std::string("connector1"));
ROUTE62.setToField(std::string("set_startpoint"));
Scene7.addChild(&ROUTE62);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(std::string("G2"));
ROUTE63.setFromField(std::string("translation_changed"));
ROUTE63.setToNode(std::string("connector1"));
ROUTE63.setToField(std::string("set_endpoint"));
Scene7.addChild(&ROUTE63);

X3D0.setScene(&Scene7);

}
