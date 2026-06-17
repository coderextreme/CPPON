#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define BOOL bool
#define XML_PARSER_H
//#include "pch.h"
//#include "framework.h"
//#include "glut.h"
//#include "X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("arc1.x3d"));
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
meta5.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d"));
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

ProtoDeclare& ProtoDeclare10 =  ProtoDeclare();
ProtoDeclare10.setName(std::string("point"));
ProtoInterface& ProtoInterface11 =  ProtoInterface();
field& field12 =  field();
field12.setName(std::string("translation"));
field12.setAccessType(std::string("inputOutput"));
field12.setType(std::string("SFVec3f"));
field12.setValue(std::string("0 0 0"));
ProtoInterface11.addChild(&field12);

ProtoDeclare10.addChild(&ProtoInterface11);

ProtoBody& ProtoBody13 =  ProtoBody();
Transform& Transform14 =  Transform();
Transform14.setDEF(std::string("node"));
IS& IS15 =  IS();
Connect& connect16 =  Connect();
connect16.setNodeField(std::string("translation"));
connect16.setProtoField(std::string("translation"));
IS15.addChild(&connect16);

Transform14.addChild(&IS15);

Shape& Shape17 =  Shape();
Sphere& Sphere18 =  Sphere();
Sphere18.setRadius(0.1);
Shape17.setGeometry(&Sphere18);

Appearance& Appearance19 =  Appearance();
Material& Material20 =  Material();
Material20.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance19.addChild(&Material20);

Shape17.addChild(&Appearance19);

Transform14.addChild(&Shape17);

PositionInterpolator& PositionInterpolator21 =  PositionInterpolator();
PositionInterpolator21.setDEF(std::string("PI1"));
PositionInterpolator21.setKey(new float[]{0.0,1.0}, 2);
PositionInterpolator21.setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
Transform14.addChild(&PositionInterpolator21);

Script& Script22 =  Script();
Script22.setDEF(std::string("MB1"));
field& field23 =  field();
field23.setName(std::string("translation"));
field23.setAccessType(std::string("inputOutput"));
field23.setType(std::string("SFVec3f"));
field23.setValue(std::string("50 50 0"));
Script22.addChild(&field23);

field& field24 =  field();
field24.setName(std::string("old"));
field24.setAccessType(std::string("inputOutput"));
field24.setType(std::string("SFVec3f"));
field24.setValue(std::string("0 0 0"));
Script22.addChild(&field24);

field& field25 =  field();
field25.setName(std::string("set_location"));
field25.setAccessType(std::string("inputOnly"));
field25.setType(std::string("SFTime"));
Script22.addChild(&field25);

field& field26 =  field();
field26.setName(std::string("keyValue"));
field26.setAccessType(std::string("inputOutput"));
field26.setType(std::string("MFVec3f"));
field26.setValue(std::string("0 0 0 0 5 0"));
Script22.addChild(&field26);


//Script22.setSourceCode(std::string("ecmascript:")+
//_T("               function set_location(value) {")+
//_T("                    old = translation;")+
//_T("                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
//_T("                    keyValue = new MFVec3f([old, translation]);")+
//_T("               }"));
Transform14.addChild(&Script22);

TimeSensor& TimeSensor27 =  TimeSensor();
TimeSensor27.setDEF(std::string("CL1"));
TimeSensor27.setCycleInterval(3);
TimeSensor27.setLoop(true);
Transform14.addChild(&TimeSensor27);

ROUTE& ROUTE28 =  ROUTE();
ROUTE28.setFromNode(std::string("CL1"));
ROUTE28.setFromField(std::string("cycleTime"));
ROUTE28.setToNode(std::string("MB1"));
ROUTE28.setToField(std::string("set_location"));
Transform14.addChild(&ROUTE28);

ROUTE& ROUTE29 =  ROUTE();
ROUTE29.setFromNode(std::string("CL1"));
ROUTE29.setFromField(std::string("fraction_changed"));
ROUTE29.setToNode(std::string("PI1"));
ROUTE29.setToField(std::string("set_fraction"));
Transform14.addChild(&ROUTE29);

ROUTE& ROUTE30 =  ROUTE();
ROUTE30.setFromNode(std::string("MB1"));
ROUTE30.setFromField(std::string("keyValue"));
ROUTE30.setToNode(std::string("PI1"));
ROUTE30.setToField(std::string("keyValue"));
Transform14.addChild(&ROUTE30);

ROUTE& ROUTE31 =  ROUTE();
ROUTE31.setFromNode(std::string("PI1"));
ROUTE31.setFromField(std::string("value_changed"));
ROUTE31.setToNode(std::string("node"));
ROUTE31.setToField(std::string("set_translation"));
Transform14.addChild(&ROUTE31);

ROUTE& ROUTE32 =  ROUTE();
ROUTE32.setFromNode(std::string("MB1"));
ROUTE32.setFromField(std::string("translation_changed"));
ROUTE32.setToNode(std::string("node"));
ROUTE32.setToField(std::string("set_translation"));
Transform14.addChild(&ROUTE32);

ProtoBody13.addChild(&Transform14);

ProtoDeclare10.addChild(&ProtoBody13);

Scene7.addChild(&ProtoDeclare10);

Transform& Transform33 =  Transform();
Transform33.setDEF(std::string("G1"));
ProtoInstance& ProtoInstance34 =  ProtoInstance();
ProtoInstance34.setName(std::string("point"));
Transform33.addChild(&ProtoInstance34);

Scene7.addChild(&Transform33);

Transform& Transform35 =  Transform();
Transform35.setDEF(std::string("G2"));
ProtoInstance& ProtoInstance36 =  ProtoInstance();
ProtoInstance36.setName(std::string("point"));
Transform35.addChild(&ProtoInstance36);

Scene7.addChild(&Transform35);

Transform& Transform37 =  Transform();
Transform37.setDEF(std::string("transC1"));
Transform& Transform38 =  Transform();
Transform38.setDEF(std::string("rotscaleC1"));
Shape& Shape39 =  Shape();
Appearance& Appearance40 =  Appearance();
Material& Material41 =  Material();
Material41.setDiffuseColor(new float[]{0.2,0.7,0.7});
Material41.setTransparency(0.5);
Appearance40.addChild(&Material41);

Shape39.addChild(&Appearance40);

Cylinder& Cylinder42 =  Cylinder();
Cylinder42.setRadius(0.05);
Shape39.setGeometry(&Cylinder42);

Transform38.addChild(&Shape39);

Transform37.addChild(&Transform38);

Scene7.addChild(&Transform37);

ProtoDeclare& ProtoDeclare43 =  ProtoDeclare();
ProtoDeclare43.setName(std::string("x3dconnector"));
ProtoInterface& ProtoInterface44 =  ProtoInterface();
field& field45 =  field();
field45.setName(std::string("startnode"));
field45.setAccessType(std::string("initializeOnly"));
field45.setType(std::string("SFNode"));
ProtoInterface44.addChild(&field45);

field& field46 =  field();
field46.setName(std::string("endnode"));
field46.setAccessType(std::string("initializeOnly"));
field46.setType(std::string("SFNode"));
ProtoInterface44.addChild(&field46);

field& field47 =  field();
field47.setName(std::string("transnode"));
field47.setAccessType(std::string("inputOutput"));
field47.setType(std::string("SFNode"));
ProtoInterface44.addChild(&field47);

field& field48 =  field();
field48.setName(std::string("rotscalenode"));
field48.setAccessType(std::string("inputOutput"));
field48.setType(std::string("SFNode"));
ProtoInterface44.addChild(&field48);

field& field49 =  field();
field49.setName(std::string("set_startpoint"));
field49.setAccessType(std::string("inputOnly"));
field49.setType(std::string("SFVec3f"));
ProtoInterface44.addChild(&field49);

field& field50 =  field();
field50.setName(std::string("set_endpoint"));
field50.setAccessType(std::string("inputOnly"));
field50.setType(std::string("SFVec3f"));
ProtoInterface44.addChild(&field50);

ProtoDeclare43.addChild(&ProtoInterface44);

ProtoBody& ProtoBody51 =  ProtoBody();
Script& Script52 =  Script();
Script52.setDEF(std::string("S1"));
field& field53 =  field();
field53.setName(std::string("startnode"));
field53.setAccessType(std::string("initializeOnly"));
field53.setType(std::string("SFNode"));
Script52.addChild(&field53);

field& field54 =  field();
field54.setName(std::string("endnode"));
field54.setAccessType(std::string("initializeOnly"));
field54.setType(std::string("SFNode"));
Script52.addChild(&field54);

field& field55 =  field();
field55.setName(std::string("transnode"));
field55.setAccessType(std::string("initializeOnly"));
field55.setType(std::string("SFNode"));
Script52.addChild(&field55);

field& field56 =  field();
field56.setName(std::string("rotscalenode"));
field56.setAccessType(std::string("initializeOnly"));
field56.setType(std::string("SFNode"));
Script52.addChild(&field56);

field& field57 =  field();
field57.setName(std::string("set_startpoint"));
field57.setAccessType(std::string("inputOnly"));
field57.setType(std::string("SFVec3f"));
Script52.addChild(&field57);

field& field58 =  field();
field58.setName(std::string("set_endpoint"));
field58.setAccessType(std::string("inputOnly"));
field58.setType(std::string("SFVec3f"));
Script52.addChild(&field58);

IS& IS59 =  IS();
Connect& connect60 =  Connect();
connect60.setNodeField(std::string("startnode"));
connect60.setProtoField(std::string("startnode"));
IS59.addChild(&connect60);

Connect& connect61 =  Connect();
connect61.setNodeField(std::string("endnode"));
connect61.setProtoField(std::string("endnode"));
IS59.addChild(&connect61);

Connect& connect62 =  Connect();
connect62.setNodeField(std::string("transnode"));
connect62.setProtoField(std::string("transnode"));
IS59.addChild(&connect62);

Connect& connect63 =  Connect();
connect63.setNodeField(std::string("rotscalenode"));
connect63.setProtoField(std::string("rotscalenode"));
IS59.addChild(&connect63);

Connect& connect64 =  Connect();
connect64.setNodeField(std::string("set_startpoint"));
connect64.setProtoField(std::string("set_startpoint"));
IS59.addChild(&connect64);

Connect& connect65 =  Connect();
connect65.setNodeField(std::string("set_endpoint"));
connect65.setProtoField(std::string("set_endpoint"));
IS59.addChild(&connect65);

Script52.addChild(&IS59);


//Script52.setSourceCode(std::string("ecmascript:")+
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
ProtoBody51.addChild(&Script52);

ProtoDeclare43.addChild(&ProtoBody51);

Scene7.addChild(&ProtoDeclare43);

ProtoInstance& ProtoInstance66 =  ProtoInstance();
ProtoInstance66.setName(std::string("x3dconnector"));
ProtoInstance66.setDEF(std::string("connector1"));
fieldValue& fieldValue67 =  fieldValue();
fieldValue67.setName(std::string("startnode"));
Transform& Transform68 =  Transform();
Transform68.setUSE(std::string("G1"));
fieldValue67.addChild(&Transform68);

ProtoInstance66.addChild(&fieldValue67);

fieldValue& fieldValue69 =  fieldValue();
fieldValue69.setName(std::string("endnode"));
Transform& Transform70 =  Transform();
Transform70.setUSE(std::string("G2"));
fieldValue69.addChild(&Transform70);

ProtoInstance66.addChild(&fieldValue69);

fieldValue& fieldValue71 =  fieldValue();
fieldValue71.setName(std::string("transnode"));
Transform& Transform72 =  Transform();
Transform72.setUSE(std::string("transC1"));
fieldValue71.addChild(&Transform72);

ProtoInstance66.addChild(&fieldValue71);

fieldValue& fieldValue73 =  fieldValue();
fieldValue73.setName(std::string("rotscalenode"));
Transform& Transform74 =  Transform();
Transform74.setUSE(std::string("rotscaleC1"));
fieldValue73.addChild(&Transform74);

ProtoInstance66.addChild(&fieldValue73);

fieldValue& fieldValue75 =  fieldValue();
fieldValue75.setName(std::string("set_startpoint"));
ProtoInstance66.addChild(&fieldValue75);

fieldValue& fieldValue76 =  fieldValue();
fieldValue76.setName(std::string("set_endpoint"));
ProtoInstance66.addChild(&fieldValue76);

Scene7.addChild(&ProtoInstance66);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromNode(std::string("G1"));
ROUTE77.setFromField(std::string("translation_changed"));
ROUTE77.setToNode(std::string("connector1"));
ROUTE77.setToField(std::string("set_startpoint"));
Scene7.addChild(&ROUTE77);

ROUTE& ROUTE78 =  ROUTE();
ROUTE78.setFromNode(std::string("G2"));
ROUTE78.setFromField(std::string("translation_changed"));
ROUTE78.setToNode(std::string("connector1"));
ROUTE78.setToField(std::string("set_endpoint"));
Scene7.addChild(&ROUTE78);

X3D0.setScene(&Scene7);

//}
