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
meta3.setName(std::string("title"));
meta3.setContent(std::string("bubs2.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("John Carlson"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("description"));
meta5.setContent(std::string("Tour around a prismatic sphere"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("generator"));
meta6.setContent(std::string("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("identifier"));
meta7.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("translated"));
meta8.setContent(std::string("13 March 2016"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("generator"));
meta9.setContent(std::string("X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"));
head1.addMeta(&meta9);

X3D0.setHead(&head1);

Scene& Scene10 =  Scene();
NavigationInfo& NavigationInfo11 =  NavigationInfo();
NavigationInfo11.setType((std::string[]){"EXAMINE"}, 1);
Scene10.addChild(&NavigationInfo11);

Viewpoint& Viewpoint12 =  Viewpoint();
Viewpoint12.setPosition(new float[]{0.0,0.0,4.0});
Viewpoint12.setOrientation(new float[]{1.0,0.0,0.0,0.0});
Viewpoint12.setDescription(std::string("Bubbles in action"));
Scene10.addChild(&Viewpoint12);

Background& Background13 =  Background();
Background13.setBackUrl((std::string[]){"../resources/images/BK.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"}, 2);
Background13.setBottomUrl((std::string[]){"../resources/images/BT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"}, 2);
Background13.setFrontUrl((std::string[]){"../resources/images/FR.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"}, 2);
Background13.setLeftUrl((std::string[]){"../resources/images/LF.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"}, 2);
Background13.setRightUrl((std::string[]){"../resources/images/RT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"}, 2);
Background13.setTopUrl((std::string[]){"../resources/images/TP.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"}, 2);
Scene10.addChild(&Background13);

ProtoDeclare& ProtoDeclare14 =  ProtoDeclare();
ProtoDeclare14.setName(std::string("Bubble"));
ProtoBody& ProtoBody15 =  ProtoBody();
Transform& Transform16 =  Transform();
Transform16.setDEF(std::string("body_trans"));
Shape& Shape17 =  Shape();
Sphere& Sphere18 =  Sphere();
Sphere18.setRadius(0.25);
Shape17.setGeometry(&Sphere18);

Appearance& Appearance19 =  Appearance();
Material& Material20 =  Material();
Material20.setDiffuseColor(new float[]{1.0,0.0,0.0});
Material20.setTransparency(0.2);
Appearance19.addChild(&Material20);

Shape17.addChild(&Appearance19);

Transform16.addChild(&Shape17);

Script& Script21 =  Script();
Script21.setDEF(std::string("bounce"));
field& field22 =  field();
field22.setName(std::string("scale"));
field22.setAccessType(std::string("inputOutput"));
field22.setType(std::string("SFVec3f"));
field22.setValue(std::string("1 1 1"));
Script21.addChild(&field22);

field& field23 =  field();
field23.setName(std::string("translation"));
field23.setAccessType(std::string("inputOutput"));
field23.setType(std::string("SFVec3f"));
field23.setValue(std::string("0 0 0"));
Script21.addChild(&field23);

field& field24 =  field();
field24.setName(std::string("velocity"));
field24.setAccessType(std::string("inputOutput"));
field24.setType(std::string("SFVec3f"));
field24.setValue(std::string("0 0 0"));
Script21.addChild(&field24);

field& field25 =  field();
field25.setName(std::string("scalvel"));
field25.setAccessType(std::string("inputOutput"));
field25.setType(std::string("SFVec3f"));
field25.setValue(std::string("0 0 0"));
Script21.addChild(&field25);

field& field26 =  field();
field26.setName(std::string("set_fraction"));
field26.setAccessType(std::string("inputOnly"));
field26.setType(std::string("SFFloat"));
Script21.addChild(&field26);


//Script21.setSourceCode(std::string("ecmascript:")+
//_T("function initialize() {")+
//_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
//_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
//_T("}")+
//_T("function set_fraction(value) {")+
//_T("    if (typeof translation === 'undefined') {")+
//_T("		translation = new SFVec3f(0, 0, 0);")+
//_T("    }")+
//_T("    if (typeof velocity === 'undefined') {")+
//_T("		velocity = new SFVec3f(0, 0, 0);")+
//_T("    }")+
//_T("    if (typeof scalvel === 'undefined') {")+
//_T("		scalvel = new SFVec3f(0, 0, 0);")+
//_T("    }")+
//_T("    if (typeof scale === 'undefined') {")+
//_T("		scale = new SFVec3f(1, 1, 1);")+
//_T("    }")+
//_T("    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);")+
//_T("    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);")+
//_T("    // if you get to far away or too big, explode")+
//_T("    if ( Math.abs(translation.x) > 256) {")+
//_T("	translation.x = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if ( Math.abs(translation.y) > 256) {")+
//_T("	translation.y = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if ( Math.abs(translation.z) > 256) {")+
//_T("	translation.z = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.x) > 20) {")+
//_T("	scale.x = scale.x/20;")+
//_T("	translation.x = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.y) > 20) {")+
//_T("	scale.y = scale.y/20;")+
//_T("	translation.y = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.z) > 20) {")+
//_T("	scale.z = scale.z/20;")+
//_T("	translation.z = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("}"));
Transform16.addChild(&Script21);

TimeSensor& TimeSensor27 =  TimeSensor();
TimeSensor27.setDEF(std::string("bubbleClock"));
TimeSensor27.setCycleInterval(10);
TimeSensor27.setLoop(true);
Transform16.addChild(&TimeSensor27);

ROUTE& ROUTE28 =  ROUTE();
ROUTE28.setFromNode(std::string("bounce"));
ROUTE28.setFromField(std::string("translation_changed"));
ROUTE28.setToNode(std::string("body_trans"));
ROUTE28.setToField(std::string("set_translation"));
Transform16.addChild(&ROUTE28);

ROUTE& ROUTE29 =  ROUTE();
ROUTE29.setFromNode(std::string("bounce"));
ROUTE29.setFromField(std::string("scale_changed"));
ROUTE29.setToNode(std::string("body_trans"));
ROUTE29.setToField(std::string("set_scale"));
Transform16.addChild(&ROUTE29);

ROUTE& ROUTE30 =  ROUTE();
ROUTE30.setFromNode(std::string("bubbleClock"));
ROUTE30.setFromField(std::string("fraction_changed"));
ROUTE30.setToNode(std::string("bounce"));
ROUTE30.setToField(std::string("set_fraction"));
Transform16.addChild(&ROUTE30);

ProtoBody15.addChild(&Transform16);

ProtoDeclare14.addChild(&ProtoBody15);

Scene10.addChild(&ProtoDeclare14);

ProtoInstance& ProtoInstance31 =  ProtoInstance();
ProtoInstance31.setName(std::string("Bubble"));
ProtoInstance31.setDEF(std::string("bubbleA"));
Scene10.addChild(&ProtoInstance31);

ProtoInstance& ProtoInstance32 =  ProtoInstance();
ProtoInstance32.setName(std::string("Bubble"));
ProtoInstance32.setDEF(std::string("bubbleB"));
Scene10.addChild(&ProtoInstance32);

ProtoInstance& ProtoInstance33 =  ProtoInstance();
ProtoInstance33.setName(std::string("Bubble"));
ProtoInstance33.setDEF(std::string("bubbleC"));
Scene10.addChild(&ProtoInstance33);

ProtoInstance& ProtoInstance34 =  ProtoInstance();
ProtoInstance34.setName(std::string("Bubble"));
ProtoInstance34.setDEF(std::string("bubbleD"));
Scene10.addChild(&ProtoInstance34);

X3D0.setScene(&Scene10);

//}
