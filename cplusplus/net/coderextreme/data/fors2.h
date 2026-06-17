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
component& component2 =  component();
component2.setName(std::string("Scripting"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(std::string("creator"));
meta3.setContent(std::string("John W Carlson"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("created"));
meta4.setContent(std::string("December 13 2015"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("modified"));
meta5.setContent(std::string("July 14 2025"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("title"));
meta6.setContent(std::string("fors2.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("identifier"));
meta7.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("description"));
meta8.setContent(std::string("beginnings of a force directed graph in 3D"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("generator"));
meta9.setContent(std::string("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta9);

X3D0.setHead(&head1);

Scene& Scene10 =  Scene();
ProtoDeclare& ProtoDeclare11 =  ProtoDeclare();
ProtoDeclare11.setName(std::string("node"));
ProtoInterface& ProtoInterface12 =  ProtoInterface();
field& field13 =  field();
field13.setName(std::string("position"));
field13.setAccessType(std::string("inputOutput"));
field13.setType(std::string("SFVec3f"));
field13.setValue(std::string("0 0 0"));
ProtoInterface12.addChild(&field13);

ProtoDeclare11.addChild(&ProtoInterface12);

ProtoBody& ProtoBody14 =  ProtoBody();
Group& Group15 =  Group();
Transform& Transform16 =  Transform();
Transform16.setDEF(std::string("transform"));
IS& IS17 =  IS();
Connect& connect18 =  Connect();
connect18.setNodeField(std::string("translation"));
connect18.setProtoField(std::string("position"));
IS17.addChild(&connect18);

Transform16.addChild(&IS17);

Shape& Shape19 =  Shape();
//comment before Sphere
//comment after Sphere
//comment after Appearance
Sphere& Sphere20 =  Sphere();
Shape19.setGeometry(&Sphere20);

Appearance& Appearance21 =  Appearance();
//comment before Material
//comment after Material
Material& Material22 =  Material();
Material22.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance21.addChild(&Material22);

Shape19.addChild(&Appearance21);

Transform16.addChild(&Shape19);

Group15.addChild(&Transform16);

PositionInterpolator& PositionInterpolator23 =  PositionInterpolator();
PositionInterpolator23.setDEF(std::string("NodePosition"));
PositionInterpolator23.setKey(new float[]{0.0,1.0}, 2);
PositionInterpolator23.setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
Group15.addChild(&PositionInterpolator23);

Script& Script24 =  Script();
Script24.setDEF(std::string("MoveBall"));
field& field25 =  field();
field25.setName(std::string("translation"));
field25.setAccessType(std::string("inputOutput"));
field25.setType(std::string("SFVec3f"));
field25.setValue(std::string("50 50 0"));
Script24.addChild(&field25);

field& field26 =  field();
field26.setName(std::string("old"));
field26.setAccessType(std::string("inputOutput"));
field26.setType(std::string("SFVec3f"));
field26.setValue(std::string("0 0 0"));
Script24.addChild(&field26);

field& field27 =  field();
field27.setName(std::string("set_cycle"));
field27.setAccessType(std::string("inputOnly"));
field27.setType(std::string("SFTime"));
Script24.addChild(&field27);

field& field28 =  field();
field28.setName(std::string("keyValue"));
field28.setAccessType(std::string("outputOnly"));
field28.setType(std::string("MFVec3f"));
Script24.addChild(&field28);


//Script24.setSourceCode(std::string("ecmascript:")+
//_T("			function set_cycle(value) {")+
//_T("				old = translation;")+
//_T("				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
//_T("				keyValue = new MFVec3f(old, translation);")+
//_T("			}"));
Group15.addChild(&Script24);

TimeSensor& TimeSensor29 =  TimeSensor();
TimeSensor29.setDEF(std::string("nodeClock"));
TimeSensor29.setCycleInterval(3);
TimeSensor29.setLoop(true);
Group15.addChild(&TimeSensor29);

ROUTE& ROUTE30 =  ROUTE();
ROUTE30.setFromNode(std::string("nodeClock"));
ROUTE30.setFromField(std::string("cycleTime"));
ROUTE30.setToNode(std::string("MoveBall"));
ROUTE30.setToField(std::string("set_cycle"));
Group15.addChild(&ROUTE30);

ROUTE& ROUTE31 =  ROUTE();
ROUTE31.setFromNode(std::string("nodeClock"));
ROUTE31.setFromField(std::string("fraction_changed"));
ROUTE31.setToNode(std::string("NodePosition"));
ROUTE31.setToField(std::string("set_fraction"));
Group15.addChild(&ROUTE31);

ROUTE& ROUTE32 =  ROUTE();
ROUTE32.setFromNode(std::string("MoveBall"));
ROUTE32.setFromField(std::string("keyValue"));
ROUTE32.setToNode(std::string("NodePosition"));
ROUTE32.setToField(std::string("keyValue"));
Group15.addChild(&ROUTE32);

ROUTE& ROUTE33 =  ROUTE();
ROUTE33.setFromNode(std::string("NodePosition"));
ROUTE33.setFromField(std::string("value_changed"));
ROUTE33.setToNode(std::string("transform"));
ROUTE33.setToField(std::string("set_translation"));
Group15.addChild(&ROUTE33);

ProtoBody14.addChild(&Group15);

ProtoDeclare11.addChild(&ProtoBody14);

Scene10.addChild(&ProtoDeclare11);

ProtoDeclare& ProtoDeclare34 =  ProtoDeclare();
ProtoDeclare34.setName(std::string("cyl"));
ProtoInterface& ProtoInterface35 =  ProtoInterface();
field& field36 =  field();
field36.setName(std::string("positionA"));
field36.setAccessType(std::string("inputOutput"));
field36.setType(std::string("SFVec3f"));
ProtoInterface35.addChild(&field36);

field& field37 =  field();
field37.setName(std::string("positionB"));
field37.setAccessType(std::string("inputOutput"));
field37.setType(std::string("SFVec3f"));
ProtoInterface35.addChild(&field37);

ProtoDeclare34.addChild(&ProtoInterface35);

ProtoBody& ProtoBody38 =  ProtoBody();
Group& Group39 =  Group();
Shape& Shape40 =  Shape();
Extrusion& Extrusion41 =  Extrusion();
Extrusion41.setDEF(std::string("extrusion"));
Extrusion41.setCreaseAngle(0.785);
Extrusion41.setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
Extrusion41.setSpine(new float[]{0.0,-50.0,0.0,0.0,0.0,0.0,0.0,50.0,0.0}, 9);
Shape40.setGeometry(&Extrusion41);

Appearance& Appearance42 =  Appearance();
Material& Material43 =  Material();
Material43.setDiffuseColor(new float[]{0.0,1.0,0.0});
Appearance42.addChild(&Material43);

Shape40.addChild(&Appearance42);

Group39.addChild(&Shape40);

Script& Script44 =  Script();
Script44.setDEF(std::string("MoveCylinder"));
field& field45 =  field();
field45.setName(std::string("spine"));
field45.setAccessType(std::string("inputOutput"));
field45.setType(std::string("MFVec3f"));
field45.setValue(std::string("0 -50 0 0 0 0 0 50 0"));
Script44.addChild(&field45);

field& field46 =  field();
field46.setName(std::string("endA"));
field46.setAccessType(std::string("inputOutput"));
field46.setType(std::string("SFVec3f"));
field46.setValue(std::string("0 0 0"));
Script44.addChild(&field46);

field& field47 =  field();
field47.setName(std::string("endB"));
field47.setAccessType(std::string("inputOutput"));
field47.setType(std::string("SFVec3f"));
field47.setValue(std::string("50 50 50"));
Script44.addChild(&field47);

IS& IS48 =  IS();
Connect& connect49 =  Connect();
connect49.setNodeField(std::string("endA"));
connect49.setProtoField(std::string("positionA"));
IS48.addChild(&connect49);

Connect& connect50 =  Connect();
connect50.setNodeField(std::string("endB"));
connect50.setProtoField(std::string("positionB"));
IS48.addChild(&connect50);

Script44.addChild(&IS48);


//Script44.setSourceCode(std::string("ecmascript:")+
//_T("			function set_endA(value) {")+
//_T("				spine = new MFVec3f(value, spine[1]);")+
//_T("			}")+
//_T("			function set_endB(value) {")+
//_T("				spine = new MFVec3f(spine[0], value);")+
//_T("			}"));
Group39.addChild(&Script44);

ROUTE& ROUTE51 =  ROUTE();
ROUTE51.setFromNode(std::string("MoveCylinder"));
ROUTE51.setFromField(std::string("spine"));
ROUTE51.setToNode(std::string("extrusion"));
ROUTE51.setToField(std::string("set_spine"));
Group39.addChild(&ROUTE51);

ProtoBody38.addChild(&Group39);

ProtoDeclare34.addChild(&ProtoBody38);

Scene10.addChild(&ProtoDeclare34);

Transform& Transform52 =  Transform();
Transform52.setScale(new float[]{0.1,0.1,0.1});
ProtoInstance& ProtoInstance53 =  ProtoInstance();
ProtoInstance53.setName(std::string("node"));
ProtoInstance53.setDEF(std::string("nodeA"));
fieldValue& fieldValue54 =  fieldValue();
fieldValue54.setName(std::string("position"));
fieldValue54.setValue(std::string("-50 -50 -50"));
ProtoInstance53.addChild(&fieldValue54);

Transform52.addChild(&ProtoInstance53);

ProtoInstance& ProtoInstance55 =  ProtoInstance();
ProtoInstance55.setName(std::string("node"));
ProtoInstance55.setDEF(std::string("nodeB"));
fieldValue& fieldValue56 =  fieldValue();
fieldValue56.setName(std::string("position"));
fieldValue56.setValue(std::string("50 50 50"));
ProtoInstance55.addChild(&fieldValue56);

Transform52.addChild(&ProtoInstance55);

ProtoInstance& ProtoInstance57 =  ProtoInstance();
ProtoInstance57.setName(std::string("cyl"));
ProtoInstance57.setDEF(std::string("linkA"));
Transform52.addChild(&ProtoInstance57);

Scene10.addChild(&Transform52);

ROUTE& ROUTE58 =  ROUTE();
ROUTE58.setFromNode(std::string("nodeA"));
ROUTE58.setFromField(std::string("position"));
ROUTE58.setToNode(std::string("linkA"));
ROUTE58.setToField(std::string("positionA"));
Scene10.addChild(&ROUTE58);

ROUTE& ROUTE59 =  ROUTE();
ROUTE59.setFromNode(std::string("nodeB"));
ROUTE59.setFromField(std::string("position"));
ROUTE59.setToNode(std::string("linkA"));
ROUTE59.setToField(std::string("positionB"));
Scene10.addChild(&ROUTE59);

X3D0.setScene(&Scene10);

//}
