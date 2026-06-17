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
#include <string>
#include "X3DLib.h"
int arcold(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("arcold.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("creator"));
meta3.setContent(std::string("John Carlson"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("generator"));
meta4.setContent(std::string("manual"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("identifier"));
meta5.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("description"));
meta6.setContent(std::string("an attempt to implement an arc in a graph"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Viewpoint& Viewpoint8 =  Viewpoint();
Viewpoint8.setPosition(new float[]{0.0,0.0,5.0});
Viewpoint8.setDescription(std::string("a moving graph"));
Scene7.addChild(&Viewpoint8);

Background& Background9 =  Background();
Background9.setSkyColor(new float[]{0.4,0.4,0.4}, 3);
Scene7.addChild(&Background9);

Transform& Transform10 =  Transform();
Transform10.setDEF(std::string("trans1"));
Transform& Transform11 =  Transform();
Transform11.setDEF(std::string("rotscale1"));
Shape& Shape12 =  Shape();
Appearance& Appearance13 =  Appearance();
Material& Material14 =  Material();
Material14.setDiffuseColor(new float[]{0.2,0.7,0.7});
Appearance13.addChild(&Material14);

Shape12.addChild(&Appearance13);

Cylinder& Cylinder15 =  Cylinder();
Cylinder15.setRadius(0.1);
Shape12.setGeometry(&Cylinder15);

Transform11.addChild(&Shape12);

Transform10.addChild(&Transform11);

Scene7.addChild(&Transform10);

Transform& Transform16 =  Transform();
Transform16.setDEF(std::string("trans2"));
Transform& Transform17 =  Transform();
Transform17.setDEF(std::string("rotscale2"));
Shape& Shape18 =  Shape();
Appearance& Appearance19 =  Appearance();
Material& Material20 =  Material();
Material20.setDiffuseColor(new float[]{0.2,0.7,0.7});
Appearance19.addChild(&Material20);

Shape18.addChild(&Appearance19);

Cylinder& Cylinder21 =  Cylinder();
Cylinder21.setRadius(0.1);
Shape18.setGeometry(&Cylinder21);

Transform17.addChild(&Shape18);

Transform16.addChild(&Transform17);

Scene7.addChild(&Transform16);

Transform& Transform22 =  Transform();
Transform22.setDEF(std::string("trans3"));
Transform& Transform23 =  Transform();
Transform23.setDEF(std::string("rotscale3"));
Shape& Shape24 =  Shape();
Appearance& Appearance25 =  Appearance();
Material& Material26 =  Material();
Material26.setDiffuseColor(new float[]{0.2,0.7,0.7});
Appearance25.addChild(&Material26);

Shape24.addChild(&Appearance25);

Cylinder& Cylinder27 =  Cylinder();
Cylinder27.setRadius(0.1);
Shape24.setGeometry(&Cylinder27);

Transform23.addChild(&Shape24);

Transform22.addChild(&Transform23);

Scene7.addChild(&Transform22);

ProtoDeclare& ProtoDeclare28 =  ProtoDeclare();
ProtoDeclare28.setName(std::string("point"));
ProtoInterface& ProtoInterface29 =  ProtoInterface();
field& field30 =  field();
field30.setName(std::string("translation"));
field30.setAccessType(std::string("inputOutput"));
field30.setType(std::string("SFVec3f"));
field30.setValue(std::string("0 0 0"));
ProtoInterface29.addChild(&field30);

ProtoDeclare28.addChild(&ProtoInterface29);

ProtoBody& ProtoBody31 =  ProtoBody();
Transform& Transform32 =  Transform();
Transform32.setDEF(std::string("node"));
IS& IS33 =  IS();
Connect& connect34 =  Connect();
connect34.setNodeField(std::string("translation"));
connect34.setProtoField(std::string("translation"));
IS33.addChild(&connect34);

Transform32.addChild(&IS33);

Shape& Shape35 =  Shape();
Sphere& Sphere36 =  Sphere();
Sphere36.setRadius(0.1);
Shape35.setGeometry(&Sphere36);

Appearance& Appearance37 =  Appearance();
Material& Material38 =  Material();
Material38.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance37.addChild(&Material38);

Shape35.addChild(&Appearance37);

Transform32.addChild(&Shape35);

PositionInterpolator& PositionInterpolator39 =  PositionInterpolator();
PositionInterpolator39.setDEF(std::string("PI1"));
PositionInterpolator39.setKey(new float[]{0.0,1.0}, 2);
PositionInterpolator39.setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
Transform32.addChild(&PositionInterpolator39);

Script& Script40 =  Script();
Script40.setDEF(std::string("MB1"));
field& field41 =  field();
field41.setName(std::string("translation"));
field41.setAccessType(std::string("inputOutput"));
field41.setType(std::string("SFVec3f"));
field41.setValue(std::string("50 50 0"));
Script40.addChild(&field41);

field& field42 =  field();
field42.setName(std::string("old"));
field42.setAccessType(std::string("inputOutput"));
field42.setType(std::string("SFVec3f"));
field42.setValue(std::string("0 0 0"));
Script40.addChild(&field42);

field& field43 =  field();
field43.setName(std::string("set_location"));
field43.setAccessType(std::string("inputOnly"));
field43.setType(std::string("SFTime"));
Script40.addChild(&field43);

field& field44 =  field();
field44.setName(std::string("keyValue"));
field44.setAccessType(std::string("outputOnly"));
field44.setType(std::string("MFVec3f"));
Script40.addChild(&field44);


//Script40.setSourceCode(std::string("ecmascript:")+
//_T("		function set_location(value) {")+
//_T("                    old = translation;")+
//_T("		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
//_T("                    keyValue = new MFVec3f([old, translation]);")+
//_T("		    // Browser.println(translation);")+
//_T("		}"));
Transform32.addChild(&Script40);

TimeSensor& TimeSensor45 =  TimeSensor();
TimeSensor45.setDEF(std::string("CL1"));
TimeSensor45.setCycleInterval(3);
TimeSensor45.setLoop(true);
Transform32.addChild(&TimeSensor45);

ROUTE& ROUTE46 =  ROUTE();
ROUTE46.setFromNode(std::string("CL1"));
ROUTE46.setFromField(std::string("cycleTime"));
ROUTE46.setToNode(std::string("MB1"));
ROUTE46.setToField(std::string("set_location"));
Transform32.addChild(&ROUTE46);

ROUTE& ROUTE47 =  ROUTE();
ROUTE47.setFromNode(std::string("CL1"));
ROUTE47.setFromField(std::string("fraction_changed"));
ROUTE47.setToNode(std::string("PI1"));
ROUTE47.setToField(std::string("set_fraction"));
Transform32.addChild(&ROUTE47);

ROUTE& ROUTE48 =  ROUTE();
ROUTE48.setFromNode(std::string("MB1"));
ROUTE48.setFromField(std::string("keyValue"));
ROUTE48.setToNode(std::string("PI1"));
ROUTE48.setToField(std::string("keyValue"));
Transform32.addChild(&ROUTE48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(std::string("PI1"));
ROUTE49.setFromField(std::string("value_changed"));
ROUTE49.setToNode(std::string("node"));
ROUTE49.setToField(std::string("set_translation"));
Transform32.addChild(&ROUTE49);

ProtoBody31.addChild(&Transform32);

ProtoDeclare28.addChild(&ProtoBody31);

Scene7.addChild(&ProtoDeclare28);

//from doug sanden
ProtoDeclare& ProtoDeclare50 =  ProtoDeclare();
ProtoDeclare50.setName(std::string("x3dconnector"));
ProtoInterface& ProtoInterface51 =  ProtoInterface();
field& field52 =  field();
field52.setName(std::string("startnode"));
field52.setAccessType(std::string("inputOutput"));
field52.setType(std::string("SFNode"));
ProtoInterface51.addChild(&field52);

field& field53 =  field();
field53.setName(std::string("endnode"));
field53.setAccessType(std::string("inputOutput"));
field53.setType(std::string("SFNode"));
ProtoInterface51.addChild(&field53);

field& field54 =  field();
field54.setName(std::string("transnode"));
field54.setAccessType(std::string("inputOutput"));
field54.setType(std::string("SFNode"));
ProtoInterface51.addChild(&field54);

field& field55 =  field();
field55.setName(std::string("rotscalenode"));
field55.setAccessType(std::string("inputOutput"));
field55.setType(std::string("SFNode"));
ProtoInterface51.addChild(&field55);

field& field56 =  field();
field56.setName(std::string("set_startpoint"));
field56.setAccessType(std::string("inputOnly"));
field56.setType(std::string("SFVec3f"));
ProtoInterface51.addChild(&field56);

field& field57 =  field();
field57.setName(std::string("set_endpoint"));
field57.setAccessType(std::string("inputOnly"));
field57.setType(std::string("SFVec3f"));
ProtoInterface51.addChild(&field57);

ProtoDeclare50.addChild(&ProtoInterface51);

ProtoBody& ProtoBody58 =  ProtoBody();
Script& Script59 =  Script();
Script59.setDEF(std::string("S1"));
field& field60 =  field();
field60.setName(std::string("startnode"));
field60.setAccessType(std::string("inputOutput"));
field60.setType(std::string("SFNode"));
Script59.addChild(&field60);

field& field61 =  field();
field61.setName(std::string("endnode"));
field61.setAccessType(std::string("inputOutput"));
field61.setType(std::string("SFNode"));
Script59.addChild(&field61);

field& field62 =  field();
field62.setName(std::string("transnode"));
field62.setAccessType(std::string("inputOutput"));
field62.setType(std::string("SFNode"));
Script59.addChild(&field62);

field& field63 =  field();
field63.setName(std::string("rotscalenode"));
field63.setAccessType(std::string("inputOutput"));
field63.setType(std::string("SFNode"));
Script59.addChild(&field63);

field& field64 =  field();
field64.setName(std::string("set_startpoint"));
field64.setAccessType(std::string("inputOnly"));
field64.setType(std::string("SFVec3f"));
Script59.addChild(&field64);

field& field65 =  field();
field65.setName(std::string("set_endpoint"));
field65.setAccessType(std::string("inputOnly"));
field65.setType(std::string("SFVec3f"));
Script59.addChild(&field65);

IS& IS66 =  IS();
Connect& connect67 =  Connect();
connect67.setNodeField(std::string("startnode"));
connect67.setProtoField(std::string("startnode"));
IS66.addChild(&connect67);

Connect& connect68 =  Connect();
connect68.setNodeField(std::string("endnode"));
connect68.setProtoField(std::string("endnode"));
IS66.addChild(&connect68);

Connect& connect69 =  Connect();
connect69.setNodeField(std::string("transnode"));
connect69.setProtoField(std::string("transnode"));
IS66.addChild(&connect69);

Connect& connect70 =  Connect();
connect70.setNodeField(std::string("rotscalenode"));
connect70.setProtoField(std::string("rotscalenode"));
IS66.addChild(&connect70);

Connect& connect71 =  Connect();
connect71.setNodeField(std::string("set_startpoint"));
connect71.setProtoField(std::string("set_startpoint"));
IS66.addChild(&connect71);

Connect& connect72 =  Connect();
connect72.setNodeField(std::string("set_endpoint"));
connect72.setProtoField(std::string("set_endpoint"));
IS66.addChild(&connect72);

Script59.addChild(&IS66);


//Script59.setSourceCode(std::string("ecmascript:")+
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
//_T("		var trafo = recompute(startpoint, endpoint);")+
//_T("		if (typeof trafo !== 'undefined') {")+
//_T("			transnode.translation = trafo.translation;")+
//_T("			rotscalenode.rotation = trafo.rotation;")+
//_T("			rotscalenode.scale = trafo.scale;")+
//_T("		} else {")+
//_T("			Browser.print(\"recompute returned undefined\");")+
//_T("		}")+
//_T("	}")+
//_T("        function initialize(){")+
//_T("            recompute_and_route(startnode.translation,endnode.translation);")+
//_T("        }")+
//_T("        function set_startpoint(val,t){")+
//_T("            recompute_and_route(val || startnode.translation,endnode.translation);")+
//_T("        }")+
//_T("        function set_endpoint(val,t){")+
//_T("            recompute_and_route(startnode.translation,val || endnode.translation);")+
//_T("        }"));
ProtoBody58.addChild(&Script59);

ProtoDeclare50.addChild(&ProtoBody58);

Scene7.addChild(&ProtoDeclare50);

ProtoInstance& ProtoInstance73 =  ProtoInstance();
ProtoInstance73.setName(std::string("point"));
ProtoInstance73.setDEF(std::string("G1"));
Scene7.addChild(&ProtoInstance73);

ProtoInstance& ProtoInstance74 =  ProtoInstance();
ProtoInstance74.setName(std::string("point"));
ProtoInstance74.setDEF(std::string("G2"));
Scene7.addChild(&ProtoInstance74);

ProtoInstance& ProtoInstance75 =  ProtoInstance();
ProtoInstance75.setName(std::string("point"));
ProtoInstance75.setDEF(std::string("G3"));
Scene7.addChild(&ProtoInstance75);

ProtoInstance& ProtoInstance76 =  ProtoInstance();
ProtoInstance76.setName(std::string("point"));
ProtoInstance76.setDEF(std::string("G4"));
Scene7.addChild(&ProtoInstance76);

ProtoInstance& ProtoInstance77 =  ProtoInstance();
ProtoInstance77.setName(std::string("x3dconnector"));
ProtoInstance77.setDEF(std::string("connector1"));
fieldValue& fieldValue78 =  fieldValue();
fieldValue78.setName(std::string("startnode"));
ProtoInstance& ProtoInstance79 =  ProtoInstance();
ProtoInstance79.setName(std::string("point"));
ProtoInstance79.setUSE(std::string("G1"));
fieldValue78.addChild(&ProtoInstance79);

ProtoInstance77.addChild(&fieldValue78);

fieldValue& fieldValue80 =  fieldValue();
fieldValue80.setName(std::string("endnode"));
ProtoInstance& ProtoInstance81 =  ProtoInstance();
ProtoInstance81.setName(std::string("point"));
ProtoInstance81.setUSE(std::string("G2"));
fieldValue80.addChild(&ProtoInstance81);

ProtoInstance77.addChild(&fieldValue80);

fieldValue& fieldValue82 =  fieldValue();
fieldValue82.setName(std::string("transnode"));
Transform& Transform83 =  Transform();
Transform83.setUSE(std::string("trans1"));
fieldValue82.addChild(&Transform83);

ProtoInstance77.addChild(&fieldValue82);

fieldValue& fieldValue84 =  fieldValue();
fieldValue84.setName(std::string("rotscalenode"));
Transform& Transform85 =  Transform();
Transform85.setUSE(std::string("rotscale1"));
fieldValue84.addChild(&Transform85);

ProtoInstance77.addChild(&fieldValue84);

Scene7.addChild(&ProtoInstance77);

ProtoInstance& ProtoInstance86 =  ProtoInstance();
ProtoInstance86.setName(std::string("x3dconnector"));
ProtoInstance86.setDEF(std::string("connector2"));
fieldValue& fieldValue87 =  fieldValue();
fieldValue87.setName(std::string("startnode"));
ProtoInstance& ProtoInstance88 =  ProtoInstance();
ProtoInstance88.setName(std::string("point"));
ProtoInstance88.setUSE(std::string("G1"));
fieldValue87.addChild(&ProtoInstance88);

ProtoInstance86.addChild(&fieldValue87);

fieldValue& fieldValue89 =  fieldValue();
fieldValue89.setName(std::string("endnode"));
ProtoInstance& ProtoInstance90 =  ProtoInstance();
ProtoInstance90.setName(std::string("point"));
ProtoInstance90.setUSE(std::string("G3"));
fieldValue89.addChild(&ProtoInstance90);

ProtoInstance86.addChild(&fieldValue89);

fieldValue& fieldValue91 =  fieldValue();
fieldValue91.setName(std::string("transnode"));
Transform& Transform92 =  Transform();
Transform92.setUSE(std::string("trans2"));
fieldValue91.addChild(&Transform92);

ProtoInstance86.addChild(&fieldValue91);

fieldValue& fieldValue93 =  fieldValue();
fieldValue93.setName(std::string("rotscalenode"));
Transform& Transform94 =  Transform();
Transform94.setUSE(std::string("rotscale2"));
fieldValue93.addChild(&Transform94);

ProtoInstance86.addChild(&fieldValue93);

Scene7.addChild(&ProtoInstance86);

ProtoInstance& ProtoInstance95 =  ProtoInstance();
ProtoInstance95.setName(std::string("x3dconnector"));
ProtoInstance95.setDEF(std::string("connector3"));
fieldValue& fieldValue96 =  fieldValue();
fieldValue96.setName(std::string("startnode"));
ProtoInstance& ProtoInstance97 =  ProtoInstance();
ProtoInstance97.setName(std::string("point"));
ProtoInstance97.setUSE(std::string("G1"));
fieldValue96.addChild(&ProtoInstance97);

ProtoInstance95.addChild(&fieldValue96);

fieldValue& fieldValue98 =  fieldValue();
fieldValue98.setName(std::string("endnode"));
ProtoInstance& ProtoInstance99 =  ProtoInstance();
ProtoInstance99.setName(std::string("point"));
ProtoInstance99.setUSE(std::string("G4"));
fieldValue98.addChild(&ProtoInstance99);

ProtoInstance95.addChild(&fieldValue98);

fieldValue& fieldValue100 =  fieldValue();
fieldValue100.setName(std::string("transnode"));
Transform& Transform101 =  Transform();
Transform101.setUSE(std::string("trans3"));
fieldValue100.addChild(&Transform101);

ProtoInstance95.addChild(&fieldValue100);

fieldValue& fieldValue102 =  fieldValue();
fieldValue102.setName(std::string("rotscalenode"));
Transform& Transform103 =  Transform();
Transform103.setUSE(std::string("rotscale3"));
fieldValue102.addChild(&Transform103);

ProtoInstance95.addChild(&fieldValue102);

Scene7.addChild(&ProtoInstance95);

ROUTE& ROUTE104 =  ROUTE();
ROUTE104.setFromNode(std::string("G1"));
ROUTE104.setFromField(std::string("translation_changed"));
ROUTE104.setToNode(std::string("connector1"));
ROUTE104.setToField(std::string("set_startpoint"));
Scene7.addChild(&ROUTE104);

ROUTE& ROUTE105 =  ROUTE();
ROUTE105.setFromNode(std::string("G2"));
ROUTE105.setFromField(std::string("translation_changed"));
ROUTE105.setToNode(std::string("connector1"));
ROUTE105.setToField(std::string("set_endpoint"));
Scene7.addChild(&ROUTE105);

ROUTE& ROUTE106 =  ROUTE();
ROUTE106.setFromNode(std::string("G1"));
ROUTE106.setFromField(std::string("translation_changed"));
ROUTE106.setToNode(std::string("connector2"));
ROUTE106.setToField(std::string("set_startpoint"));
Scene7.addChild(&ROUTE106);

ROUTE& ROUTE107 =  ROUTE();
ROUTE107.setFromNode(std::string("G3"));
ROUTE107.setFromField(std::string("translation_changed"));
ROUTE107.setToNode(std::string("connector2"));
ROUTE107.setToField(std::string("set_endpoint"));
Scene7.addChild(&ROUTE107);

ROUTE& ROUTE108 =  ROUTE();
ROUTE108.setFromNode(std::string("G1"));
ROUTE108.setFromField(std::string("translation_changed"));
ROUTE108.setToNode(std::string("connector3"));
ROUTE108.setToField(std::string("set_startpoint"));
Scene7.addChild(&ROUTE108);

ROUTE& ROUTE109 =  ROUTE();
ROUTE109.setFromNode(std::string("G4"));
ROUTE109.setFromField(std::string("translation_changed"));
ROUTE109.setToNode(std::string("connector3"));
ROUTE109.setToField(std::string("set_endpoint"));
Scene7.addChild(&ROUTE109);

X3D0.setScene(&Scene7);

}
