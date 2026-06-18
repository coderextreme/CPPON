#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void bubs(int argc, char ** argv) {
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
meta3.setContent(std::string("bubs.x3d"));
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
meta7.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
NavigationInfo& NavigationInfo9 =  NavigationInfo();
NavigationInfo9.setType(new std::string[]{"EXAMINE"}, 1);
Scene8.addChild(&NavigationInfo9);

Viewpoint& Viewpoint10 =  Viewpoint();
Viewpoint10.setPosition(new float[]{0.0,0.0,4.0});
Viewpoint10.setOrientation(new float[]{1.0,0.0,0.0,0.0});
Viewpoint10.setDescription(std::string("Bubbles in action"));
Scene8.addChild(&Viewpoint10);

Background& Background11 =  Background();
Background11.setBackUrl(new std::string[]{"../resources/images/BK.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"}, 2);
Background11.setBottomUrl(new std::string[]{"../resources/images/BT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"}, 2);
Background11.setFrontUrl(new std::string[]{"../resources/images/FR.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"}, 2);
Background11.setLeftUrl(new std::string[]{"../resources/images/LF.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"}, 2);
Background11.setRightUrl(new std::string[]{"../resources/images/RT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"}, 2);
Background11.setTopUrl(new std::string[]{"../resources/images/TP.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"}, 2);
Scene8.addChild(&Background11);

ProtoDeclare& ProtoDeclare12 =  ProtoDeclare();
ProtoDeclare12.setName(std::string("Bubble"));
ProtoBody& ProtoBody13 =  ProtoBody();
Transform& Transform14 =  Transform();
Transform14.setDEF(std::string("body_trans"));
Shape& Shape15 =  Shape();
Sphere& Sphere16 =  Sphere();
Sphere16.setRadius(0.25);
Shape15.setGeometry(&Sphere16);

Appearance& Appearance17 =  Appearance();
Appearance17.setContainerField("appearance");
Material& Material18 =  Material();
Material18.setContainerField("material");
Material18.setDiffuseColor(new float[]{1.0,0.0,0.0});
Material18.setTransparency(0.2);
Appearance17.addChild(&Material18);

Shape15.addChild(&Appearance17);

Transform14.addChild(&Shape15);

Script& Script19 =  Script();
Script19.setDEF(std::string("bounce1"));
field& field20 =  field();
field20.setName(std::string("scale"));
field20.setAccessType(std::string("inputOutput"));
field20.setType(std::string("SFVec3f"));
field20.setValue(std::string("1 1 1"));
Script19.addChild(&field20);

field& field21 =  field();
field21.setName(std::string("translation"));
field21.setAccessType(std::string("inputOutput"));
field21.setType(std::string("SFVec3f"));
field21.setValue(std::string("0 0 0"));
Script19.addChild(&field21);

field& field22 =  field();
field22.setName(std::string("velocity"));
field22.setAccessType(std::string("inputOutput"));
field22.setType(std::string("SFVec3f"));
field22.setValue(std::string("0 0 0"));
Script19.addChild(&field22);

field& field23 =  field();
field23.setName(std::string("scalvel"));
field23.setAccessType(std::string("inputOutput"));
field23.setType(std::string("SFVec3f"));
field23.setValue(std::string("0 0 0"));
Script19.addChild(&field23);

field& field24 =  field();
field24.setName(std::string("set_fraction"));
field24.setAccessType(std::string("inputOnly"));
field24.setType(std::string("SFFloat"));
Script19.addChild(&field24);


//Script19.setSourceCode(std::string("ecmascript:")+
//_T("function initialize() {")+
//_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
//_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
//_T("}")+
//_T("function set_fraction(value) {")+
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
Transform14.addChild(&Script19);

TimeSensor& TimeSensor25 =  TimeSensor();
TimeSensor25.setDEF(std::string("bubbleClock"));
TimeSensor25.setCycleInterval(10);
TimeSensor25.setLoop(true);
Transform14.addChild(&TimeSensor25);

ROUTE& ROUTE26 =  ROUTE();
ROUTE26.setFromNode(std::string("bounce1"));
ROUTE26.setFromField(std::string("translation_changed"));
ROUTE26.setToNode(std::string("body_trans"));
ROUTE26.setToField(std::string("set_translation"));
Transform14.addChild(&ROUTE26);

ROUTE& ROUTE27 =  ROUTE();
ROUTE27.setFromNode(std::string("bounce1"));
ROUTE27.setFromField(std::string("scale_changed"));
ROUTE27.setToNode(std::string("body_trans"));
ROUTE27.setToField(std::string("set_scale"));
Transform14.addChild(&ROUTE27);

ROUTE& ROUTE28 =  ROUTE();
ROUTE28.setFromNode(std::string("bubbleClock"));
ROUTE28.setFromField(std::string("fraction_changed"));
ROUTE28.setToNode(std::string("bounce1"));
ROUTE28.setToField(std::string("set_fraction"));
Transform14.addChild(&ROUTE28);

ProtoBody13.addChild(&Transform14);

ProtoDeclare12.addChild(&ProtoBody13);

Scene8.addChild(&ProtoDeclare12);

ProtoInstance& ProtoInstance29 =  ProtoInstance();
ProtoInstance29.setName(std::string("Bubble"));
ProtoInstance29.setDEF(std::string("bubbleA"));
Scene8.addChild(&ProtoInstance29);

ProtoInstance& ProtoInstance30 =  ProtoInstance();
ProtoInstance30.setName(std::string("Bubble"));
ProtoInstance30.setDEF(std::string("bubbleB"));
Scene8.addChild(&ProtoInstance30);

ProtoInstance& ProtoInstance31 =  ProtoInstance();
ProtoInstance31.setName(std::string("Bubble"));
ProtoInstance31.setDEF(std::string("bubbleC"));
Scene8.addChild(&ProtoInstance31);

ProtoInstance& ProtoInstance32 =  ProtoInstance();
ProtoInstance32.setName(std::string("Bubble"));
ProtoInstance32.setDEF(std::string("bubbleD"));
Scene8.addChild(&ProtoInstance32);

X3D0.setScene(&Scene8);

}
