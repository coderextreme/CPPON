#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("bubs3.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("creator"));
meta3.setContent(CString("John Carlson"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("Tour around a prismatic sphere"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
NavigationInfo8.setType(new CString[]{CString("EXAMINE")}, 1);
Scene7.addChild(&NavigationInfo8);

Viewpoint& Viewpoint9 =  Viewpoint();
Viewpoint9.setPosition(new float[]{0,0,4});
Viewpoint9.setOrientation(new float[]{1,0,0,0});
Viewpoint9.setDescription(CString("Bubbles in action"));
Scene7.addChild(&Viewpoint9);

Background& Background10 =  Background();
Background10.setBackUrl(new CString[]{CString("../resources/images/BK.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png")}, 2);
Background10.setBottomUrl(new CString[]{CString("../resources/images/BT.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png")}, 2);
Background10.setFrontUrl(new CString[]{CString("../resources/images/FR.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png")}, 2);
Background10.setLeftUrl(new CString[]{CString("../resources/images/LF.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png")}, 2);
Background10.setRightUrl(new CString[]{CString("../resources/images/RT.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png")}, 2);
Background10.setTopUrl(new CString[]{CString("../resources/images/TP.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png")}, 2);
Scene7.addChild(&Background10);

Transform& Transform11 =  Transform();
Transform11.setDEF(CString("DECLBubble_bubbleA"));
Shape& Shape12 =  Shape();
Sphere& Sphere13 =  Sphere();
Sphere13.setRadius(0.25);
Shape12.setGeometry(&Sphere13);

Appearance& Appearance14 =  Appearance();
Material& Material15 =  Material();
Material15.setDiffuseColor(new float[]{1,0,0});
Material15.setTransparency(0.2);
Appearance14.addChild(&Material15);

Shape12.addChild(&Appearance14);

Transform11.addChild(&Shape12);

Script& Script16 =  Script();
Script16.setDEF(CString("DECLBubble_bubbleA_bounce"));
field& field17 =  field();
field17.setName(CString("scale"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFVec3f"));
field17.setValue(CString("1 1 1"));
Script16.addChild(&field17);

field& field18 =  field();
field18.setName(CString("translation"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFVec3f"));
field18.setValue(CString("0 0 0"));
Script16.addChild(&field18);

field& field19 =  field();
field19.setName(CString("velocity"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFVec3f"));
field19.setValue(CString("0 0 0"));
Script16.addChild(&field19);

field& field20 =  field();
field20.setName(CString("scalvel"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFVec3f"));
field20.setValue(CString("0 0 0"));
Script16.addChild(&field20);

field& field21 =  field();
field21.setName(CString("set_fraction"));
field21.setAccessType(CString("inputOnly"));
field21.setType(CString("SFFloat"));
Script16.addChild(&field21);


Script16.setSourceCode(CString("ecmascript:")+
_T("function initialize() {")+
_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
_T("}")+
_T("function set_fraction(value) {")+
_T("    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);")+
_T("    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);")+
_T("    // if you get to far away or too big, explode")+
_T("    if ( Math.abs(translation.x) > 256) {")+
_T("	translation.x = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if ( Math.abs(translation.y) > 256) {")+
_T("	translation.y = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if ( Math.abs(translation.z) > 256) {")+
_T("	translation.z = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.x) > 20) {")+
_T("	scale.x = scale.x/20;")+
_T("	translation.x = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.y) > 20) {")+
_T("	scale.y = scale.y/20;")+
_T("	translation.y = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.z) > 20) {")+
_T("	scale.z = scale.z/20;")+
_T("	translation.z = 0;")+
_T("	initialize();")+
_T("    }")+
_T("}"));
Transform11.addChild(&Script16);

TimeSensor& TimeSensor22 =  TimeSensor();
TimeSensor22.setDEF(CString("DECLBubble_bubbleA_bubbleClock"));
TimeSensor22.setCycleInterval(10);
TimeSensor22.setLoop(True);
Transform11.addChild(&TimeSensor22);

ROUTE& ROUTE23 =  ROUTE();
ROUTE23.setFromNode(CString("DECLBubble_bubbleA_bubbleClock"));
ROUTE23.setFromField(CString("fraction_changed"));
ROUTE23.setToNode(CString("DECLBubble_bubbleA_bounce"));
ROUTE23.setToField(CString("set_fraction"));
Transform11.addChild(&ROUTE23);

Scene7.addChild(&Transform11);

Transform& Transform24 =  Transform();
Transform24.setDEF(CString("DECLBubble_bubbleB"));
Shape& Shape25 =  Shape();
Sphere& Sphere26 =  Sphere();
Sphere26.setRadius(0.25);
Shape25.setGeometry(&Sphere26);

Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setDiffuseColor(new float[]{1,0,0});
Material28.setTransparency(0.2);
Appearance27.addChild(&Material28);

Shape25.addChild(&Appearance27);

Transform24.addChild(&Shape25);

Script& Script29 =  Script();
Script29.setDEF(CString("DECLBubble_bubbleB_bounce"));
field& field30 =  field();
field30.setName(CString("scale"));
field30.setAccessType(CString("inputOutput"));
field30.setType(CString("SFVec3f"));
field30.setValue(CString("1 1 1"));
Script29.addChild(&field30);

field& field31 =  field();
field31.setName(CString("translation"));
field31.setAccessType(CString("inputOutput"));
field31.setType(CString("SFVec3f"));
field31.setValue(CString("0 0 0"));
Script29.addChild(&field31);

field& field32 =  field();
field32.setName(CString("velocity"));
field32.setAccessType(CString("inputOutput"));
field32.setType(CString("SFVec3f"));
field32.setValue(CString("0 0 0"));
Script29.addChild(&field32);

field& field33 =  field();
field33.setName(CString("scalvel"));
field33.setAccessType(CString("inputOutput"));
field33.setType(CString("SFVec3f"));
field33.setValue(CString("0 0 0"));
Script29.addChild(&field33);

field& field34 =  field();
field34.setName(CString("set_fraction"));
field34.setAccessType(CString("inputOnly"));
field34.setType(CString("SFFloat"));
Script29.addChild(&field34);


Script29.setSourceCode(CString("ecmascript:")+
_T("function initialize() {")+
_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
_T("}")+
_T("function set_fraction(value) {")+
_T("    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);")+
_T("    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);")+
_T("    // if you get to far away or too big, explode")+
_T("    if ( Math.abs(translation.x) > 256) {")+
_T("	translation.x = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if ( Math.abs(translation.y) > 256) {")+
_T("	translation.y = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if ( Math.abs(translation.z) > 256) {")+
_T("	translation.z = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.x) > 20) {")+
_T("	scale.x = scale.x/20;")+
_T("	translation.x = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.y) > 20) {")+
_T("	scale.y = scale.y/20;")+
_T("	translation.y = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.z) > 20) {")+
_T("	scale.z = scale.z/20;")+
_T("	translation.z = 0;")+
_T("	initialize();")+
_T("    }")+
_T("}"));
Transform24.addChild(&Script29);

TimeSensor& TimeSensor35 =  TimeSensor();
TimeSensor35.setDEF(CString("DECLBubble_bubbleB_bubbleClock"));
TimeSensor35.setCycleInterval(10);
TimeSensor35.setLoop(True);
Transform24.addChild(&TimeSensor35);

ROUTE& ROUTE36 =  ROUTE();
ROUTE36.setFromNode(CString("DECLBubble_bubbleB_bubbleClock"));
ROUTE36.setFromField(CString("fraction_changed"));
ROUTE36.setToNode(CString("DECLBubble_bubbleB_bounce"));
ROUTE36.setToField(CString("set_fraction"));
Transform24.addChild(&ROUTE36);

Scene7.addChild(&Transform24);

Transform& Transform37 =  Transform();
Transform37.setDEF(CString("DECLBubble_bubbleC"));
Shape& Shape38 =  Shape();
Sphere& Sphere39 =  Sphere();
Sphere39.setRadius(0.25);
Shape38.setGeometry(&Sphere39);

Appearance& Appearance40 =  Appearance();
Material& Material41 =  Material();
Material41.setDiffuseColor(new float[]{1,0,0});
Material41.setTransparency(0.2);
Appearance40.addChild(&Material41);

Shape38.addChild(&Appearance40);

Transform37.addChild(&Shape38);

Script& Script42 =  Script();
Script42.setDEF(CString("DECLBubble_bubbleC_bounce"));
field& field43 =  field();
field43.setName(CString("scale"));
field43.setAccessType(CString("inputOutput"));
field43.setType(CString("SFVec3f"));
field43.setValue(CString("1 1 1"));
Script42.addChild(&field43);

field& field44 =  field();
field44.setName(CString("translation"));
field44.setAccessType(CString("inputOutput"));
field44.setType(CString("SFVec3f"));
field44.setValue(CString("0 0 0"));
Script42.addChild(&field44);

field& field45 =  field();
field45.setName(CString("velocity"));
field45.setAccessType(CString("inputOutput"));
field45.setType(CString("SFVec3f"));
field45.setValue(CString("0 0 0"));
Script42.addChild(&field45);

field& field46 =  field();
field46.setName(CString("scalvel"));
field46.setAccessType(CString("inputOutput"));
field46.setType(CString("SFVec3f"));
field46.setValue(CString("0 0 0"));
Script42.addChild(&field46);

field& field47 =  field();
field47.setName(CString("set_fraction"));
field47.setAccessType(CString("inputOnly"));
field47.setType(CString("SFFloat"));
Script42.addChild(&field47);


Script42.setSourceCode(CString("ecmascript:")+
_T("function initialize() {")+
_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
_T("}")+
_T("function set_fraction(value) {")+
_T("    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);")+
_T("    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);")+
_T("    // if you get to far away or too big, explode")+
_T("    if ( Math.abs(translation.x) > 256) {")+
_T("	translation.x = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if ( Math.abs(translation.y) > 256) {")+
_T("	translation.y = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if ( Math.abs(translation.z) > 256) {")+
_T("	translation.z = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.x) > 20) {")+
_T("	scale.x = scale.x/20;")+
_T("	translation.x = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.y) > 20) {")+
_T("	scale.y = scale.y/20;")+
_T("	translation.y = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.z) > 20) {")+
_T("	scale.z = scale.z/20;")+
_T("	translation.z = 0;")+
_T("	initialize();")+
_T("    }")+
_T("}"));
Transform37.addChild(&Script42);

TimeSensor& TimeSensor48 =  TimeSensor();
TimeSensor48.setDEF(CString("DECLBubble_bubbleC_bubbleClock"));
TimeSensor48.setCycleInterval(10);
TimeSensor48.setLoop(True);
Transform37.addChild(&TimeSensor48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(CString("DECLBubble_bubbleC_bubbleClock"));
ROUTE49.setFromField(CString("fraction_changed"));
ROUTE49.setToNode(CString("DECLBubble_bubbleC_bounce"));
ROUTE49.setToField(CString("set_fraction"));
Transform37.addChild(&ROUTE49);

Scene7.addChild(&Transform37);

Transform& Transform50 =  Transform();
Transform50.setDEF(CString("DECLBubble_bubbleD"));
Shape& Shape51 =  Shape();
Sphere& Sphere52 =  Sphere();
Sphere52.setRadius(0.25);
Shape51.setGeometry(&Sphere52);

Appearance& Appearance53 =  Appearance();
Material& Material54 =  Material();
Material54.setDiffuseColor(new float[]{1,0,0});
Material54.setTransparency(0.2);
Appearance53.addChild(&Material54);

Shape51.addChild(&Appearance53);

Transform50.addChild(&Shape51);

Script& Script55 =  Script();
Script55.setDEF(CString("DECLBubble_bubbleD_bounce"));
field& field56 =  field();
field56.setName(CString("scale"));
field56.setAccessType(CString("inputOutput"));
field56.setType(CString("SFVec3f"));
field56.setValue(CString("1 1 1"));
Script55.addChild(&field56);

field& field57 =  field();
field57.setName(CString("translation"));
field57.setAccessType(CString("inputOutput"));
field57.setType(CString("SFVec3f"));
field57.setValue(CString("0 0 0"));
Script55.addChild(&field57);

field& field58 =  field();
field58.setName(CString("velocity"));
field58.setAccessType(CString("inputOutput"));
field58.setType(CString("SFVec3f"));
field58.setValue(CString("0 0 0"));
Script55.addChild(&field58);

field& field59 =  field();
field59.setName(CString("scalvel"));
field59.setAccessType(CString("inputOutput"));
field59.setType(CString("SFVec3f"));
field59.setValue(CString("0 0 0"));
Script55.addChild(&field59);

field& field60 =  field();
field60.setName(CString("set_fraction"));
field60.setAccessType(CString("inputOnly"));
field60.setType(CString("SFFloat"));
Script55.addChild(&field60);


Script55.setSourceCode(CString("ecmascript:")+
_T("function initialize() {")+
_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
_T("}")+
_T("function set_fraction(value) {")+
_T("    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);")+
_T("    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);")+
_T("    // if you get to far away or too big, explode")+
_T("    if ( Math.abs(translation.x) > 256) {")+
_T("	translation.x = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if ( Math.abs(translation.y) > 256) {")+
_T("	translation.y = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if ( Math.abs(translation.z) > 256) {")+
_T("	translation.z = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.x) > 20) {")+
_T("	scale.x = scale.x/20;")+
_T("	translation.x = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.y) > 20) {")+
_T("	scale.y = scale.y/20;")+
_T("	translation.y = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.z) > 20) {")+
_T("	scale.z = scale.z/20;")+
_T("	translation.z = 0;")+
_T("	initialize();")+
_T("    }")+
_T("}"));
Transform50.addChild(&Script55);

TimeSensor& TimeSensor61 =  TimeSensor();
TimeSensor61.setDEF(CString("DECLBubble_bubbleD_bubbleClock"));
TimeSensor61.setCycleInterval(10);
TimeSensor61.setLoop(True);
Transform50.addChild(&TimeSensor61);

ROUTE& ROUTE62 =  ROUTE();
ROUTE62.setFromNode(CString("DECLBubble_bubbleD_bubbleClock"));
ROUTE62.setFromField(CString("fraction_changed"));
ROUTE62.setToNode(CString("DECLBubble_bubbleD_bounce"));
ROUTE62.setToField(CString("set_fraction"));
Transform50.addChild(&ROUTE62);

Scene7.addChild(&Transform50);

X3D0.setScene(&Scene7);

}
