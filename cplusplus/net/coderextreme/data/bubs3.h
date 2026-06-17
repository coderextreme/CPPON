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
Transform11.setDEF(std::string("DECLBubble_transformA"));
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
ROUTE23.setFromNode(std::string("DECLBubble_bubbleA_bounce"));
ROUTE23.setFromField(std::string("translation_changed"));
ROUTE23.setToNode(std::string("DECLBubble_transformA"));
ROUTE23.setToField(std::string("set_translation"));
Transform11.addChild(&ROUTE23);

ROUTE& ROUTE24 =  ROUTE();
ROUTE24.setFromNode(std::string("DECLBubble_bubbleA_bounce"));
ROUTE24.setFromField(std::string("scale_changed"));
ROUTE24.setToNode(std::string("DECLBubble_transformA"));
ROUTE24.setToField(std::string("set_scale"));
Transform11.addChild(&ROUTE24);

ROUTE& ROUTE25 =  ROUTE();
ROUTE25.setFromNode(std::string("DECLBubble_bubbleA_bubbleClock"));
ROUTE25.setFromField(std::string("fraction_changed"));
ROUTE25.setToNode(std::string("DECLBubble_bubbleA_bounce"));
ROUTE25.setToField(std::string("set_fraction"));
Transform11.addChild(&ROUTE25);

Scene7.addChild(&Transform11);

Transform& Transform26 =  Transform();
Transform26.setDEF(std::string("DECLBubble_transformB"));
Shape& Shape27 =  Shape();
Sphere& Sphere28 =  Sphere();
Sphere28.setRadius(0.25);
Shape27.setGeometry(&Sphere28);

Appearance& Appearance29 =  Appearance();
Material& Material30 =  Material();
Material30.setDiffuseColor(new float[]{1.0,0.0,0.0});
Material30.setTransparency(0.2);
Appearance29.addChild(&Material30);

Shape27.addChild(&Appearance29);

Transform26.addChild(&Shape27);

Script& Script31 =  Script();
Script31.setDEF(std::string("DECLBubble_bubbleB_bounce"));
field& field32 =  field();
field32.setName(std::string("scale"));
field32.setAccessType(std::string("inputOutput"));
field32.setType(std::string("SFVec3f"));
field32.setValue(std::string("1 1 1"));
Script31.addChild(&field32);

field& field33 =  field();
field33.setName(std::string("translation"));
field33.setAccessType(std::string("inputOutput"));
field33.setType(std::string("SFVec3f"));
field33.setValue(std::string("0 0 0"));
Script31.addChild(&field33);

field& field34 =  field();
field34.setName(std::string("velocity"));
field34.setAccessType(std::string("inputOutput"));
field34.setType(std::string("SFVec3f"));
field34.setValue(std::string("0 0 0"));
Script31.addChild(&field34);

field& field35 =  field();
field35.setName(std::string("scalvel"));
field35.setAccessType(std::string("inputOutput"));
field35.setType(std::string("SFVec3f"));
field35.setValue(std::string("0 0 0"));
Script31.addChild(&field35);

field& field36 =  field();
field36.setName(std::string("set_fraction"));
field36.setAccessType(std::string("inputOnly"));
field36.setType(std::string("SFFloat"));
Script31.addChild(&field36);


//Script31.setSourceCode(std::string("ecmascript:")+
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
Transform26.addChild(&Script31);

TimeSensor& TimeSensor37 =  TimeSensor();
TimeSensor37.setDEF(std::string("DECLBubble_bubbleB_bubbleClock"));
TimeSensor37.setCycleInterval(10);
TimeSensor37.setLoop(true);
Transform26.addChild(&TimeSensor37);

ROUTE& ROUTE38 =  ROUTE();
ROUTE38.setFromNode(std::string("DECLBubble_bubbleB_bounce"));
ROUTE38.setFromField(std::string("translation_changed"));
ROUTE38.setToNode(std::string("DECLBubble_transformB"));
ROUTE38.setToField(std::string("set_translation"));
Transform26.addChild(&ROUTE38);

ROUTE& ROUTE39 =  ROUTE();
ROUTE39.setFromNode(std::string("DECLBubble_bubbleB_bounce"));
ROUTE39.setFromField(std::string("scale_changed"));
ROUTE39.setToNode(std::string("DECLBubble_transformB"));
ROUTE39.setToField(std::string("set_scale"));
Transform26.addChild(&ROUTE39);

ROUTE& ROUTE40 =  ROUTE();
ROUTE40.setFromNode(std::string("DECLBubble_bubbleB_bubbleClock"));
ROUTE40.setFromField(std::string("fraction_changed"));
ROUTE40.setToNode(std::string("DECLBubble_bubbleB_bounce"));
ROUTE40.setToField(std::string("set_fraction"));
Transform26.addChild(&ROUTE40);

Scene7.addChild(&Transform26);

Transform& Transform41 =  Transform();
Transform41.setDEF(std::string("DECLBubble_transformC"));
Shape& Shape42 =  Shape();
Sphere& Sphere43 =  Sphere();
Sphere43.setRadius(0.25);
Shape42.setGeometry(&Sphere43);

Appearance& Appearance44 =  Appearance();
Material& Material45 =  Material();
Material45.setDiffuseColor(new float[]{1.0,0.0,0.0});
Material45.setTransparency(0.2);
Appearance44.addChild(&Material45);

Shape42.addChild(&Appearance44);

Transform41.addChild(&Shape42);

Script& Script46 =  Script();
Script46.setDEF(std::string("DECLBubble_bubbleC_bounce"));
field& field47 =  field();
field47.setName(std::string("scale"));
field47.setAccessType(std::string("inputOutput"));
field47.setType(std::string("SFVec3f"));
field47.setValue(std::string("1 1 1"));
Script46.addChild(&field47);

field& field48 =  field();
field48.setName(std::string("translation"));
field48.setAccessType(std::string("inputOutput"));
field48.setType(std::string("SFVec3f"));
field48.setValue(std::string("0 0 0"));
Script46.addChild(&field48);

field& field49 =  field();
field49.setName(std::string("velocity"));
field49.setAccessType(std::string("inputOutput"));
field49.setType(std::string("SFVec3f"));
field49.setValue(std::string("0 0 0"));
Script46.addChild(&field49);

field& field50 =  field();
field50.setName(std::string("scalvel"));
field50.setAccessType(std::string("inputOutput"));
field50.setType(std::string("SFVec3f"));
field50.setValue(std::string("0 0 0"));
Script46.addChild(&field50);

field& field51 =  field();
field51.setName(std::string("set_fraction"));
field51.setAccessType(std::string("inputOnly"));
field51.setType(std::string("SFFloat"));
Script46.addChild(&field51);


//Script46.setSourceCode(std::string("ecmascript:")+
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
Transform41.addChild(&Script46);

TimeSensor& TimeSensor52 =  TimeSensor();
TimeSensor52.setDEF(std::string("DECLBubble_bubbleC_bubbleClock"));
TimeSensor52.setCycleInterval(10);
TimeSensor52.setLoop(true);
Transform41.addChild(&TimeSensor52);

ROUTE& ROUTE53 =  ROUTE();
ROUTE53.setFromNode(std::string("DECLBubble_bubbleC_bounce"));
ROUTE53.setFromField(std::string("translation_changed"));
ROUTE53.setToNode(std::string("DECLBubble_transformC"));
ROUTE53.setToField(std::string("set_translation"));
Transform41.addChild(&ROUTE53);

ROUTE& ROUTE54 =  ROUTE();
ROUTE54.setFromNode(std::string("DECLBubble_bubbleC_bounce"));
ROUTE54.setFromField(std::string("scale_changed"));
ROUTE54.setToNode(std::string("DECLBubble_transformC"));
ROUTE54.setToField(std::string("set_scale"));
Transform41.addChild(&ROUTE54);

ROUTE& ROUTE55 =  ROUTE();
ROUTE55.setFromNode(std::string("DECLBubble_bubbleC_bubbleClock"));
ROUTE55.setFromField(std::string("fraction_changed"));
ROUTE55.setToNode(std::string("DECLBubble_bubbleC_bounce"));
ROUTE55.setToField(std::string("set_fraction"));
Transform41.addChild(&ROUTE55);

Scene7.addChild(&Transform41);

Transform& Transform56 =  Transform();
Transform56.setDEF(std::string("DECLBubble_transformD"));
Shape& Shape57 =  Shape();
Sphere& Sphere58 =  Sphere();
Sphere58.setRadius(0.25);
Shape57.setGeometry(&Sphere58);

Appearance& Appearance59 =  Appearance();
Material& Material60 =  Material();
Material60.setDiffuseColor(new float[]{1.0,0.0,0.0});
Material60.setTransparency(0.2);
Appearance59.addChild(&Material60);

Shape57.addChild(&Appearance59);

Transform56.addChild(&Shape57);

Script& Script61 =  Script();
Script61.setDEF(std::string("DECLBubble_bubbleD_bounce"));
field& field62 =  field();
field62.setName(std::string("scale"));
field62.setAccessType(std::string("inputOutput"));
field62.setType(std::string("SFVec3f"));
field62.setValue(std::string("1 1 1"));
Script61.addChild(&field62);

field& field63 =  field();
field63.setName(std::string("translation"));
field63.setAccessType(std::string("inputOutput"));
field63.setType(std::string("SFVec3f"));
field63.setValue(std::string("0 0 0"));
Script61.addChild(&field63);

field& field64 =  field();
field64.setName(std::string("velocity"));
field64.setAccessType(std::string("inputOutput"));
field64.setType(std::string("SFVec3f"));
field64.setValue(std::string("0 0 0"));
Script61.addChild(&field64);

field& field65 =  field();
field65.setName(std::string("scalvel"));
field65.setAccessType(std::string("inputOutput"));
field65.setType(std::string("SFVec3f"));
field65.setValue(std::string("0 0 0"));
Script61.addChild(&field65);

field& field66 =  field();
field66.setName(std::string("set_fraction"));
field66.setAccessType(std::string("inputOnly"));
field66.setType(std::string("SFFloat"));
Script61.addChild(&field66);


//Script61.setSourceCode(std::string("ecmascript:")+
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
Transform56.addChild(&Script61);

TimeSensor& TimeSensor67 =  TimeSensor();
TimeSensor67.setDEF(std::string("DECLBubble_bubbleD_bubbleClock"));
TimeSensor67.setCycleInterval(10);
TimeSensor67.setLoop(true);
Transform56.addChild(&TimeSensor67);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(std::string("DECLBubble_bubbleD_bounce"));
ROUTE68.setFromField(std::string("translation_changed"));
ROUTE68.setToNode(std::string("DECLBubble_transformD"));
ROUTE68.setToField(std::string("set_translation"));
Transform56.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(std::string("DECLBubble_bubbleD_bounce"));
ROUTE69.setFromField(std::string("scale_changed"));
ROUTE69.setToNode(std::string("DECLBubble_transformD"));
ROUTE69.setToField(std::string("set_scale"));
Transform56.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(std::string("DECLBubble_bubbleD_bubbleClock"));
ROUTE70.setFromField(std::string("fraction_changed"));
ROUTE70.setToNode(std::string("DECLBubble_bubbleD_bounce"));
ROUTE70.setToField(std::string("set_fraction"));
Transform56.addChild(&ROUTE70);

Scene7.addChild(&Transform56);

X3D0.setScene(&Scene7);

//}
