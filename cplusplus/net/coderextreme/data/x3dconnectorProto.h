#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
int x3dconnectorProto(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("x3dconnectorProto.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("creator"));
meta3.setContent(std::string("Lost, Doug Sanden I think"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("created"));
meta4.setContent(std::string("Unknown"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("modified"));
meta5.setContent(std::string("July 30 2023"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("generator"));
meta6.setContent(std::string("manual"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("identifier"));
meta7.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("description"));
meta8.setContent(std::string("a generic proto to connect two objects"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("license"));
meta9.setContent(std::string("https://www.web3d.org/x3d/content/examples/license.html"));
head1.addMeta(&meta9);

X3D0.setHead(&head1);

Scene& Scene10 =  Scene();
WorldInfo& WorldInfo11 =  WorldInfo();
WorldInfo11.setTitle(std::string("Connector Proto"));
Scene10.addChild(&WorldInfo11);

Viewpoint& Viewpoint12 =  Viewpoint();
Viewpoint12.setPosition(new float[]{0.0,0.0,5.0});
Viewpoint12.setDescription(std::string("Only Viewpoint"));
Scene10.addChild(&Viewpoint12);

Background& Background13 =  Background();
Background13.setSkyColor(new float[]{0.4,0.4,0.4}, 3);
Scene10.addChild(&Background13);

Transform& Transform14 =  Transform();
Transform14.setDEF(std::string("G1"));
Shape& Shape15 =  Shape();
Appearance& Appearance16 =  Appearance();
Appearance16.setContainerField("appearance");
Material& Material17 =  Material();
Material17.setContainerField("material");
Material17.setDiffuseColor(new float[]{0.7,0.2,0.2});
Appearance16.addChild(&Material17);

Shape15.addChild(&Appearance16);

Sphere& Sphere18 =  Sphere();
Sphere18.setRadius(0.1);
Shape15.setGeometry(&Sphere18);

Transform14.addChild(&Shape15);

PlaneSensor& PlaneSensor19 =  PlaneSensor();
PlaneSensor19.setDescription(std::string("Grab to move"));
PlaneSensor19.setDEF(std::string("PS1"));
Transform14.addChild(&PlaneSensor19);

ROUTE& ROUTE20 =  ROUTE();
ROUTE20.setFromNode(std::string("PS1"));
ROUTE20.setFromField(std::string("translation_changed"));
ROUTE20.setToNode(std::string("G1"));
ROUTE20.setToField(std::string("set_translation"));
Transform14.addChild(&ROUTE20);

Scene10.addChild(&Transform14);

Transform& Transform21 =  Transform();
Transform21.setDEF(std::string("G2"));
Transform21.setTranslation(new float[]{1.0,-1.0,0.01});
Shape& Shape22 =  Shape();
Appearance& Appearance23 =  Appearance();
Appearance23.setContainerField("appearance");
Material& Material24 =  Material();
Material24.setContainerField("material");
Material24.setDiffuseColor(new float[]{0.2,0.7,0.2});
Appearance23.addChild(&Material24);

Shape22.addChild(&Appearance23);

Sphere& Sphere25 =  Sphere();
Sphere25.setRadius(0.1);
Shape22.setGeometry(&Sphere25);

Transform21.addChild(&Shape22);

PlaneSensor& PlaneSensor26 =  PlaneSensor();
PlaneSensor26.setDescription(std::string("Grab to move"));
PlaneSensor26.setOffset(new float[]{1.0,-1.0,0.01});
PlaneSensor26.setDEF(std::string("PS2"));
Transform21.addChild(&PlaneSensor26);

ROUTE& ROUTE27 =  ROUTE();
ROUTE27.setFromNode(std::string("PS2"));
ROUTE27.setFromField(std::string("translation_changed"));
ROUTE27.setToNode(std::string("G2"));
ROUTE27.setToField(std::string("set_translation"));
Transform21.addChild(&ROUTE27);

Scene10.addChild(&Transform21);

Transform& Transform28 =  Transform();
Transform28.setDEF(std::string("G3"));
Transform28.setTranslation(new float[]{1.0,1.0,0.01});
Shape& Shape29 =  Shape();
Appearance& Appearance30 =  Appearance();
Appearance30.setContainerField("appearance");
Material& Material31 =  Material();
Material31.setContainerField("material");
Material31.setDiffuseColor(new float[]{0.2,0.7,0.2});
Appearance30.addChild(&Material31);

Shape29.addChild(&Appearance30);

Sphere& Sphere32 =  Sphere();
Sphere32.setRadius(0.1);
Shape29.setGeometry(&Sphere32);

Transform28.addChild(&Shape29);

PlaneSensor& PlaneSensor33 =  PlaneSensor();
PlaneSensor33.setDescription(std::string("Grab to move"));
PlaneSensor33.setOffset(new float[]{1.0,1.0,0.01});
PlaneSensor33.setDEF(std::string("PS3"));
Transform28.addChild(&PlaneSensor33);

ROUTE& ROUTE34 =  ROUTE();
ROUTE34.setFromNode(std::string("PS3"));
ROUTE34.setFromField(std::string("translation_changed"));
ROUTE34.setToNode(std::string("G3"));
ROUTE34.setToField(std::string("set_translation"));
Transform28.addChild(&ROUTE34);

Scene10.addChild(&Transform28);

Transform& Transform35 =  Transform();
Transform35.setDEF(std::string("G4"));
Transform35.setTranslation(new float[]{-1.0,1.0,0.01});
Shape& Shape36 =  Shape();
Appearance& Appearance37 =  Appearance();
Appearance37.setContainerField("appearance");
Material& Material38 =  Material();
Material38.setContainerField("material");
Material38.setDiffuseColor(new float[]{0.2,0.7,0.2});
Appearance37.addChild(&Material38);

Shape36.addChild(&Appearance37);

Sphere& Sphere39 =  Sphere();
Sphere39.setRadius(0.1);
Shape36.setGeometry(&Sphere39);

Transform35.addChild(&Shape36);

PlaneSensor& PlaneSensor40 =  PlaneSensor();
PlaneSensor40.setDescription(std::string("Grab to move"));
PlaneSensor40.setOffset(new float[]{-1.0,1.0,0.01});
PlaneSensor40.setDEF(std::string("PS4"));
Transform35.addChild(&PlaneSensor40);

ROUTE& ROUTE41 =  ROUTE();
ROUTE41.setFromNode(std::string("PS4"));
ROUTE41.setFromField(std::string("translation_changed"));
ROUTE41.setToNode(std::string("G4"));
ROUTE41.setToField(std::string("set_translation"));
Transform35.addChild(&ROUTE41);

Scene10.addChild(&Transform35);

Transform& Transform42 =  Transform();
Transform42.setDEF(std::string("transC1"));
Transform& Transform43 =  Transform();
Transform43.setDEF(std::string("rotscaleC1"));
Shape& Shape44 =  Shape();
Appearance& Appearance45 =  Appearance();
Appearance45.setContainerField("appearance");
Material& Material46 =  Material();
Material46.setContainerField("material");
Material46.setDiffuseColor(new float[]{0.2,0.7,0.7});
Material46.setTransparency(0.5);
Appearance45.addChild(&Material46);

Shape44.addChild(&Appearance45);

Cylinder& Cylinder47 =  Cylinder();
Cylinder47.setRadius(0.05);
Shape44.setGeometry(&Cylinder47);

Transform43.addChild(&Shape44);

Transform42.addChild(&Transform43);

Scene10.addChild(&Transform42);

Transform& Transform48 =  Transform();
Transform48.setDEF(std::string("transC2"));
Transform& Transform49 =  Transform();
Transform49.setDEF(std::string("rotscaleC2"));
Shape& Shape50 =  Shape();
Appearance& Appearance51 =  Appearance();
Appearance51.setContainerField("appearance");
Material& Material52 =  Material();
Material52.setContainerField("material");
Material52.setDiffuseColor(new float[]{0.2,0.7,0.7});
Material52.setTransparency(0.5);
Appearance51.addChild(&Material52);

Shape50.addChild(&Appearance51);

Cylinder& Cylinder53 =  Cylinder();
Cylinder53.setRadius(0.05);
Shape50.setGeometry(&Cylinder53);

Transform49.addChild(&Shape50);

Transform48.addChild(&Transform49);

Scene10.addChild(&Transform48);

Transform& Transform54 =  Transform();
Transform54.setDEF(std::string("transC3"));
Transform& Transform55 =  Transform();
Transform55.setDEF(std::string("rotscaleC3"));
Shape& Shape56 =  Shape();
Appearance& Appearance57 =  Appearance();
Appearance57.setContainerField("appearance");
Material& Material58 =  Material();
Material58.setContainerField("material");
Material58.setDiffuseColor(new float[]{0.2,0.7,0.7});
Material58.setTransparency(0.5);
Appearance57.addChild(&Material58);

Shape56.addChild(&Appearance57);

Cylinder& Cylinder59 =  Cylinder();
Cylinder59.setRadius(0.05);
Shape56.setGeometry(&Cylinder59);

Transform55.addChild(&Shape56);

Transform54.addChild(&Transform55);

Scene10.addChild(&Transform54);

ProtoDeclare& ProtoDeclare60 =  ProtoDeclare();
ProtoDeclare60.setName(std::string("x3dconnector"));
ProtoInterface& ProtoInterface61 =  ProtoInterface();
field& field62 =  field();
field62.setName(std::string("startnode"));
field62.setAccessType(std::string("initializeOnly"));
field62.setType(std::string("SFNode"));
ProtoInterface61.addChild(&field62);

field& field63 =  field();
field63.setName(std::string("endnode"));
field63.setAccessType(std::string("initializeOnly"));
field63.setType(std::string("SFNode"));
ProtoInterface61.addChild(&field63);

field& field64 =  field();
field64.setName(std::string("transnode"));
field64.setAccessType(std::string("initializeOnly"));
field64.setType(std::string("SFNode"));
ProtoInterface61.addChild(&field64);

field& field65 =  field();
field65.setName(std::string("rotscalenode"));
field65.setAccessType(std::string("initializeOnly"));
field65.setType(std::string("SFNode"));
ProtoInterface61.addChild(&field65);

field& field66 =  field();
field66.setName(std::string("set_startpoint"));
field66.setAccessType(std::string("inputOnly"));
field66.setType(std::string("SFVec3f"));
ProtoInterface61.addChild(&field66);

field& field67 =  field();
field67.setName(std::string("set_endpoint"));
field67.setAccessType(std::string("inputOnly"));
field67.setType(std::string("SFVec3f"));
ProtoInterface61.addChild(&field67);

ProtoDeclare60.addChild(&ProtoInterface61);

ProtoBody& ProtoBody68 =  ProtoBody();
Script& Script69 =  Script();
Script69.setDEF(std::string("S1"));
Script69.setDirectOutput(true);
field& field70 =  field();
field70.setName(std::string("startnode"));
field70.setAccessType(std::string("initializeOnly"));
field70.setType(std::string("SFNode"));
Script69.addChild(&field70);

field& field71 =  field();
field71.setName(std::string("endnode"));
field71.setAccessType(std::string("initializeOnly"));
field71.setType(std::string("SFNode"));
Script69.addChild(&field71);

field& field72 =  field();
field72.setName(std::string("transnode"));
field72.setAccessType(std::string("initializeOnly"));
field72.setType(std::string("SFNode"));
Script69.addChild(&field72);

field& field73 =  field();
field73.setName(std::string("rotscalenode"));
field73.setAccessType(std::string("initializeOnly"));
field73.setType(std::string("SFNode"));
Script69.addChild(&field73);

field& field74 =  field();
field74.setName(std::string("set_startpoint"));
field74.setAccessType(std::string("inputOnly"));
field74.setType(std::string("SFVec3f"));
Script69.addChild(&field74);

field& field75 =  field();
field75.setName(std::string("set_endpoint"));
field75.setAccessType(std::string("inputOnly"));
field75.setType(std::string("SFVec3f"));
Script69.addChild(&field75);

IS& IS76 =  IS();
Connect& connect77 =  Connect();
connect77.setNodeField(std::string("startnode"));
connect77.setProtoField(std::string("startnode"));
IS76.addChild(&connect77);

Connect& connect78 =  Connect();
connect78.setNodeField(std::string("endnode"));
connect78.setProtoField(std::string("endnode"));
IS76.addChild(&connect78);

Connect& connect79 =  Connect();
connect79.setNodeField(std::string("transnode"));
connect79.setProtoField(std::string("transnode"));
IS76.addChild(&connect79);

Connect& connect80 =  Connect();
connect80.setNodeField(std::string("rotscalenode"));
connect80.setProtoField(std::string("rotscalenode"));
IS76.addChild(&connect80);

Connect& connect81 =  Connect();
connect81.setNodeField(std::string("set_startpoint"));
connect81.setProtoField(std::string("set_startpoint"));
IS76.addChild(&connect81);

Connect& connect82 =  Connect();
connect82.setNodeField(std::string("set_endpoint"));
connect82.setProtoField(std::string("set_endpoint"));
IS76.addChild(&connect82);

Script69.addChild(&IS76);


//Script69.setSourceCode(std::string("ecmascript:")+
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
ProtoBody68.addChild(&Script69);

ProtoDeclare60.addChild(&ProtoBody68);

Scene10.addChild(&ProtoDeclare60);

ProtoInstance& ProtoInstance83 =  ProtoInstance();
ProtoInstance83.setName(std::string("x3dconnector"));
ProtoInstance83.setDEF(std::string("connector1"));
fieldValue& fieldValue84 =  fieldValue();
fieldValue84.setName(std::string("startnode"));
Transform& Transform85 =  Transform();
Transform85.setUSE(std::string("G1"));
fieldValue84.addChild(&Transform85);

ProtoInstance83.addChild(&fieldValue84);

fieldValue& fieldValue86 =  fieldValue();
fieldValue86.setName(std::string("endnode"));
Transform& Transform87 =  Transform();
Transform87.setUSE(std::string("G2"));
fieldValue86.addChild(&Transform87);

ProtoInstance83.addChild(&fieldValue86);

fieldValue& fieldValue88 =  fieldValue();
fieldValue88.setName(std::string("transnode"));
Transform& Transform89 =  Transform();
Transform89.setUSE(std::string("transC1"));
fieldValue88.addChild(&Transform89);

ProtoInstance83.addChild(&fieldValue88);

fieldValue& fieldValue90 =  fieldValue();
fieldValue90.setName(std::string("rotscalenode"));
Transform& Transform91 =  Transform();
Transform91.setUSE(std::string("rotscaleC1"));
fieldValue90.addChild(&Transform91);

ProtoInstance83.addChild(&fieldValue90);

Scene10.addChild(&ProtoInstance83);

ProtoInstance& ProtoInstance92 =  ProtoInstance();
ProtoInstance92.setName(std::string("x3dconnector"));
ProtoInstance92.setDEF(std::string("connector2"));
fieldValue& fieldValue93 =  fieldValue();
fieldValue93.setName(std::string("startnode"));
Transform& Transform94 =  Transform();
Transform94.setUSE(std::string("G1"));
fieldValue93.addChild(&Transform94);

ProtoInstance92.addChild(&fieldValue93);

fieldValue& fieldValue95 =  fieldValue();
fieldValue95.setName(std::string("endnode"));
Transform& Transform96 =  Transform();
Transform96.setUSE(std::string("G3"));
fieldValue95.addChild(&Transform96);

ProtoInstance92.addChild(&fieldValue95);

fieldValue& fieldValue97 =  fieldValue();
fieldValue97.setName(std::string("transnode"));
Transform& Transform98 =  Transform();
Transform98.setUSE(std::string("transC2"));
fieldValue97.addChild(&Transform98);

ProtoInstance92.addChild(&fieldValue97);

fieldValue& fieldValue99 =  fieldValue();
fieldValue99.setName(std::string("rotscalenode"));
Transform& Transform100 =  Transform();
Transform100.setUSE(std::string("rotscaleC2"));
fieldValue99.addChild(&Transform100);

ProtoInstance92.addChild(&fieldValue99);

Scene10.addChild(&ProtoInstance92);

ProtoInstance& ProtoInstance101 =  ProtoInstance();
ProtoInstance101.setName(std::string("x3dconnector"));
ProtoInstance101.setDEF(std::string("connector3"));
fieldValue& fieldValue102 =  fieldValue();
fieldValue102.setName(std::string("startnode"));
Transform& Transform103 =  Transform();
Transform103.setUSE(std::string("G1"));
fieldValue102.addChild(&Transform103);

ProtoInstance101.addChild(&fieldValue102);

fieldValue& fieldValue104 =  fieldValue();
fieldValue104.setName(std::string("endnode"));
Transform& Transform105 =  Transform();
Transform105.setUSE(std::string("G4"));
fieldValue104.addChild(&Transform105);

ProtoInstance101.addChild(&fieldValue104);

fieldValue& fieldValue106 =  fieldValue();
fieldValue106.setName(std::string("transnode"));
Transform& Transform107 =  Transform();
Transform107.setUSE(std::string("transC3"));
fieldValue106.addChild(&Transform107);

ProtoInstance101.addChild(&fieldValue106);

fieldValue& fieldValue108 =  fieldValue();
fieldValue108.setName(std::string("rotscalenode"));
Transform& Transform109 =  Transform();
Transform109.setUSE(std::string("rotscaleC3"));
fieldValue108.addChild(&Transform109);

ProtoInstance101.addChild(&fieldValue108);

Scene10.addChild(&ProtoInstance101);

ROUTE& ROUTE110 =  ROUTE();
ROUTE110.setFromNode(std::string("G1"));
ROUTE110.setFromField(std::string("translation_changed"));
ROUTE110.setToNode(std::string("connector1"));
ROUTE110.setToField(std::string("set_startpoint"));
Scene10.addChild(&ROUTE110);

ROUTE& ROUTE111 =  ROUTE();
ROUTE111.setFromNode(std::string("G2"));
ROUTE111.setFromField(std::string("translation_changed"));
ROUTE111.setToNode(std::string("connector1"));
ROUTE111.setToField(std::string("set_endpoint"));
Scene10.addChild(&ROUTE111);

ROUTE& ROUTE112 =  ROUTE();
ROUTE112.setFromNode(std::string("G1"));
ROUTE112.setFromField(std::string("translation_changed"));
ROUTE112.setToNode(std::string("connector2"));
ROUTE112.setToField(std::string("set_startpoint"));
Scene10.addChild(&ROUTE112);

ROUTE& ROUTE113 =  ROUTE();
ROUTE113.setFromNode(std::string("G3"));
ROUTE113.setFromField(std::string("translation_changed"));
ROUTE113.setToNode(std::string("connector2"));
ROUTE113.setToField(std::string("set_endpoint"));
Scene10.addChild(&ROUTE113);

ROUTE& ROUTE114 =  ROUTE();
ROUTE114.setFromNode(std::string("G1"));
ROUTE114.setFromField(std::string("translation_changed"));
ROUTE114.setToNode(std::string("connector3"));
ROUTE114.setToField(std::string("set_startpoint"));
Scene10.addChild(&ROUTE114);

ROUTE& ROUTE115 =  ROUTE();
ROUTE115.setFromNode(std::string("G4"));
ROUTE115.setFromField(std::string("translation_changed"));
ROUTE115.setToNode(std::string("connector3"));
ROUTE115.setToField(std::string("set_endpoint"));
Scene10.addChild(&ROUTE115);

X3D0.setScene(&Scene10);

}
