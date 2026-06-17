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
meta2.setContent(std::string("bubs3.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("creator"));
meta3.setContent(std::string("John Carlson"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("description"));
meta4.setContent(std::string("Tour around a prismatic sphere"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("generator"));
meta5.setContent(std::string("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("identifier"));
meta6.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
NavigationInfo8.setType((std::string[]){"EXAMINE"}, 1);
Scene7.addChild(&NavigationInfo8);

Viewpoint& Viewpoint9 =  Viewpoint();
Viewpoint9.setPosition(new float[]{0.0,0.0,4.0});
Viewpoint9.setOrientation(new float[]{1.0,0.0,0.0,0.0});
Viewpoint9.setDescription(std::string("Bubbles in action"));
Scene7.addChild(&Viewpoint9);

Background& Background10 =  Background();
Background10.setBackUrl((std::string[]){"../resources/images/BK.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"}, 2);
Background10.setBottomUrl((std::string[]){"../resources/images/BT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"}, 2);
Background10.setFrontUrl((std::string[]){"../resources/images/FR.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"}, 2);
Background10.setLeftUrl((std::string[]){"../resources/images/LF.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"}, 2);
Background10.setRightUrl((std::string[]){"../resources/images/RT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"}, 2);
Background10.setTopUrl((std::string[]){"../resources/images/TP.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"}, 2);
Scene7.addChild(&Background10);

Transform& Transform11 =  Transform();
Transform11.setDEF(std::string("DECLBubble_bubbleA"));
Shape& Shape12 =  Shape();
Sphere& Sphere13 =  Sphere();
Sphere13.setRadius(0.25);
Shape12.setGeometry(&Sphere13);

Appearance& Appearance14 =  Appearance();
Material& Material15 =  Material();
Material15.setDiffuseColor(new float[]{1.0,0.0,0.0});
Material15.setTransparency(0.2);
Appearance14.addChild(&Material15);

Shape12.addChild(&Appearance14);

Transform11.addChild(&Shape12);

Script& Script16 =  Script();
Script16.setDEF(std::string("DECLBubble_bubbleA_bounce"));
field& field17 =  field();
field17.setName(std::string("scale"));
field17.setAccessType(std::string("inputOutput"));
field17.setType(std::string("SFVec3f"));
field17.setValue(std::string("1 1 1"));
Script16.addChild(&field17);

field& field18 =  field();
field18.setName(std::string("translation"));
field18.setAccessType(std::string("inputOutput"));
field18.setType(std::string("SFVec3f"));
field18.setValue(std::string("0 0 0"));
Script16.addChild(&field18);

field& field19 =  field();
field19.setName(std::string("velocity"));
field19.setAccessType(std::string("inputOutput"));
field19.setType(std::string("SFVec3f"));
field19.setValue(std::string("0 0 0"));
Script16.addChild(&field19);

field& field20 =  field();
field20.setName(std::string("scalvel"));
field20.setAccessType(std::string("inputOutput"));
field20.setType(std::string("SFVec3f"));
field20.setValue(std::string("0 0 0"));
Script16.addChild(&field20);

field& field21 =  field();
field21.setName(std::string("set_fraction"));
field21.setAccessType(std::string("inputOnly"));
field21.setType(std::string("SFFloat"));
Script16.addChild(&field21);


//Script16.setSourceCode(std::string("ecmascript:")+
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
Transform11.addChild(&Script16);

TimeSensor& TimeSensor22 =  TimeSensor();
TimeSensor22.setDEF(std::string("DECLBubble_bubbleA_bubbleClock"));
TimeSensor22.setCycleInterval(10);
TimeSensor22.setLoop(true);
Transform11.addChild(&TimeSensor22);

ROUTE& ROUTE23 =  ROUTE();
ROUTE23.setFromNode(std::string("DECLBubble_bubbleA_bubbleClock"));
ROUTE23.setFromField(std::string("fraction_changed"));
ROUTE23.setToNode(std::string("DECLBubble_bubbleA_bounce"));
ROUTE23.setToField(std::string("set_fraction"));
Transform11.addChild(&ROUTE23);

Scene7.addChild(&Transform11);

Transform& Transform24 =  Transform();
Transform24.setDEF(std::string("DECLBubble_bubbleB"));
Shape& Shape25 =  Shape();
Sphere& Sphere26 =  Sphere();
Sphere26.setRadius(0.25);
Shape25.setGeometry(&Sphere26);

Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setDiffuseColor(new float[]{1.0,0.0,0.0});
Material28.setTransparency(0.2);
Appearance27.addChild(&Material28);

Shape25.addChild(&Appearance27);

Transform24.addChild(&Shape25);

Script& Script29 =  Script();
Script29.setDEF(std::string("DECLBubble_bubbleB_bounce"));
field& field30 =  field();
field30.setName(std::string("scale"));
field30.setAccessType(std::string("inputOutput"));
field30.setType(std::string("SFVec3f"));
field30.setValue(std::string("1 1 1"));
Script29.addChild(&field30);

field& field31 =  field();
field31.setName(std::string("translation"));
field31.setAccessType(std::string("inputOutput"));
field31.setType(std::string("SFVec3f"));
field31.setValue(std::string("0 0 0"));
Script29.addChild(&field31);

field& field32 =  field();
field32.setName(std::string("velocity"));
field32.setAccessType(std::string("inputOutput"));
field32.setType(std::string("SFVec3f"));
field32.setValue(std::string("0 0 0"));
Script29.addChild(&field32);

field& field33 =  field();
field33.setName(std::string("scalvel"));
field33.setAccessType(std::string("inputOutput"));
field33.setType(std::string("SFVec3f"));
field33.setValue(std::string("0 0 0"));
Script29.addChild(&field33);

field& field34 =  field();
field34.setName(std::string("set_fraction"));
field34.setAccessType(std::string("inputOnly"));
field34.setType(std::string("SFFloat"));
Script29.addChild(&field34);


//Script29.setSourceCode(std::string("ecmascript:")+
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
Transform24.addChild(&Script29);

TimeSensor& TimeSensor35 =  TimeSensor();
TimeSensor35.setDEF(std::string("DECLBubble_bubbleB_bubbleClock"));
TimeSensor35.setCycleInterval(10);
TimeSensor35.setLoop(true);
Transform24.addChild(&TimeSensor35);

ROUTE& ROUTE36 =  ROUTE();
ROUTE36.setFromNode(std::string("DECLBubble_bubbleB_bubbleClock"));
ROUTE36.setFromField(std::string("fraction_changed"));
ROUTE36.setToNode(std::string("DECLBubble_bubbleB_bounce"));
ROUTE36.setToField(std::string("set_fraction"));
Transform24.addChild(&ROUTE36);

Scene7.addChild(&Transform24);

Transform& Transform37 =  Transform();
Transform37.setDEF(std::string("DECLBubble_bubbleC"));
Shape& Shape38 =  Shape();
Sphere& Sphere39 =  Sphere();
Sphere39.setRadius(0.25);
Shape38.setGeometry(&Sphere39);

Appearance& Appearance40 =  Appearance();
Material& Material41 =  Material();
Material41.setDiffuseColor(new float[]{1.0,0.0,0.0});
Material41.setTransparency(0.2);
Appearance40.addChild(&Material41);

Shape38.addChild(&Appearance40);

Transform37.addChild(&Shape38);

Script& Script42 =  Script();
Script42.setDEF(std::string("DECLBubble_bubbleC_bounce"));
field& field43 =  field();
field43.setName(std::string("scale"));
field43.setAccessType(std::string("inputOutput"));
field43.setType(std::string("SFVec3f"));
field43.setValue(std::string("1 1 1"));
Script42.addChild(&field43);

field& field44 =  field();
field44.setName(std::string("translation"));
field44.setAccessType(std::string("inputOutput"));
field44.setType(std::string("SFVec3f"));
field44.setValue(std::string("0 0 0"));
Script42.addChild(&field44);

field& field45 =  field();
field45.setName(std::string("velocity"));
field45.setAccessType(std::string("inputOutput"));
field45.setType(std::string("SFVec3f"));
field45.setValue(std::string("0 0 0"));
Script42.addChild(&field45);

field& field46 =  field();
field46.setName(std::string("scalvel"));
field46.setAccessType(std::string("inputOutput"));
field46.setType(std::string("SFVec3f"));
field46.setValue(std::string("0 0 0"));
Script42.addChild(&field46);

field& field47 =  field();
field47.setName(std::string("set_fraction"));
field47.setAccessType(std::string("inputOnly"));
field47.setType(std::string("SFFloat"));
Script42.addChild(&field47);


//Script42.setSourceCode(std::string("ecmascript:")+
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
Transform37.addChild(&Script42);

TimeSensor& TimeSensor48 =  TimeSensor();
TimeSensor48.setDEF(std::string("DECLBubble_bubbleC_bubbleClock"));
TimeSensor48.setCycleInterval(10);
TimeSensor48.setLoop(true);
Transform37.addChild(&TimeSensor48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(std::string("DECLBubble_bubbleC_bubbleClock"));
ROUTE49.setFromField(std::string("fraction_changed"));
ROUTE49.setToNode(std::string("DECLBubble_bubbleC_bounce"));
ROUTE49.setToField(std::string("set_fraction"));
Transform37.addChild(&ROUTE49);

Scene7.addChild(&Transform37);

Transform& Transform50 =  Transform();
Transform50.setDEF(std::string("DECLBubble_bubbleD"));
Shape& Shape51 =  Shape();
Sphere& Sphere52 =  Sphere();
Sphere52.setRadius(0.25);
Shape51.setGeometry(&Sphere52);

Appearance& Appearance53 =  Appearance();
Material& Material54 =  Material();
Material54.setDiffuseColor(new float[]{1.0,0.0,0.0});
Material54.setTransparency(0.2);
Appearance53.addChild(&Material54);

Shape51.addChild(&Appearance53);

Transform50.addChild(&Shape51);

Script& Script55 =  Script();
Script55.setDEF(std::string("DECLBubble_bubbleD_bounce"));
field& field56 =  field();
field56.setName(std::string("scale"));
field56.setAccessType(std::string("inputOutput"));
field56.setType(std::string("SFVec3f"));
field56.setValue(std::string("1 1 1"));
Script55.addChild(&field56);

field& field57 =  field();
field57.setName(std::string("translation"));
field57.setAccessType(std::string("inputOutput"));
field57.setType(std::string("SFVec3f"));
field57.setValue(std::string("0 0 0"));
Script55.addChild(&field57);

field& field58 =  field();
field58.setName(std::string("velocity"));
field58.setAccessType(std::string("inputOutput"));
field58.setType(std::string("SFVec3f"));
field58.setValue(std::string("0 0 0"));
Script55.addChild(&field58);

field& field59 =  field();
field59.setName(std::string("scalvel"));
field59.setAccessType(std::string("inputOutput"));
field59.setType(std::string("SFVec3f"));
field59.setValue(std::string("0 0 0"));
Script55.addChild(&field59);

field& field60 =  field();
field60.setName(std::string("set_fraction"));
field60.setAccessType(std::string("inputOnly"));
field60.setType(std::string("SFFloat"));
Script55.addChild(&field60);


//Script55.setSourceCode(std::string("ecmascript:")+
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
Transform50.addChild(&Script55);

TimeSensor& TimeSensor61 =  TimeSensor();
TimeSensor61.setDEF(std::string("DECLBubble_bubbleD_bubbleClock"));
TimeSensor61.setCycleInterval(10);
TimeSensor61.setLoop(true);
Transform50.addChild(&TimeSensor61);

ROUTE& ROUTE62 =  ROUTE();
ROUTE62.setFromNode(std::string("DECLBubble_bubbleD_bubbleClock"));
ROUTE62.setFromField(std::string("fraction_changed"));
ROUTE62.setToNode(std::string("DECLBubble_bubbleD_bounce"));
ROUTE62.setToField(std::string("set_fraction"));
Transform50.addChild(&ROUTE62);

Scene7.addChild(&Transform50);

X3D0.setScene(&Scene7);

//}
