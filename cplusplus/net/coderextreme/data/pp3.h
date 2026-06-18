#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
int pp3(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("pp3.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("creator"));
meta3.setContent(std::string("John Carlson"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("translator"));
meta4.setContent(std::string("John Carlson"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("created"));
meta5.setContent(std::string("5 May 2015"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("modified"));
meta6.setContent(std::string("23 Dec 2022"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("description"));
meta7.setContent(std::string("A process pipeline between three spheres (try typing on spheres and blue"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("identifier"));
meta8.setContent(std::string("https://coderextreme.net/x3d/pp3.x3d"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("generator"));
meta9.setContent(std::string("manual"));
head1.addMeta(&meta9);

X3D0.setHead(&head1);

Scene& Scene10 =  Scene();
ProtoDeclare& ProtoDeclare11 =  ProtoDeclare();
ProtoDeclare11.setName(std::string("Process"));
ProtoBody& ProtoBody12 =  ProtoBody();
Group& Group13 =  Group();
//left
Transform& Transform14 =  Transform();
Transform14.setScale(new float[]{0.5,0.5,0.5});
Shape& Shape15 =  Shape();
Appearance& Appearance16 =  Appearance();
Appearance16.setContainerField("appearance");
Material& Material17 =  Material();
Material17.setContainerField("material");
Material17.setDiffuseColor(new float[]{0.7,1.0,0.0});
Material17.setTransparency(0.5);
Appearance16.addChild(&Material17);

Shape15.addChild(&Appearance16);

Extrusion& Extrusion18 =  Extrusion();
Extrusion18.setCreaseAngle(0.785);
Extrusion18.setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
Extrusion18.setSpine(new float[]{-2.5,0.0,0.0,-2.0,0.0,0.0,-1.5,0.0,0.0}, 9);
Shape15.setGeometry(&Extrusion18);

Transform14.addChild(&Shape15);

//<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>
Group13.addChild(&Transform14);

//right
Transform& Transform19 =  Transform();
Transform19.setScale(new float[]{0.5,0.5,0.5});
Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
Appearance21.setContainerField("appearance");
Material& Material22 =  Material();
Material22.setContainerField("material");
Material22.setDiffuseColor(new float[]{0.0,0.7,1.0});
Material22.setTransparency(0.5);
Appearance21.addChild(&Material22);

Shape20.addChild(&Appearance21);

Extrusion& Extrusion23 =  Extrusion();
Extrusion23.setCreaseAngle(0.785);
Extrusion23.setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
Extrusion23.setSpine(new float[]{1.5,0.0,0.0,2.0,0.0,0.0,2.5,0.0,0.0}, 9);
Shape20.setGeometry(&Extrusion23);

Transform19.addChild(&Shape20);

Transform& Transform24 =  Transform();
Transform24.setTranslation(new float[]{2.0,0.0,0.0});
Shape& Shape25 =  Shape();
Appearance& Appearance26 =  Appearance();
Appearance26.setContainerField("appearance");
Material& Material27 =  Material();
Material27.setContainerField("material");
Material27.setDEF(std::string("MaterialLightBlue"));
Material27.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance26.addChild(&Material27);

Shape25.addChild(&Appearance26);

Text& Text28 =  Text();
Text28.setDEF(std::string("RightString"));
Text28.setString((std::string[]){"r"}, 1);
Shape25.setGeometry(&Text28);

Transform24.addChild(&Shape25);

Transform19.addChild(&Transform24);

StringSensor& StringSensor29 =  StringSensor();
StringSensor29.setDEF(std::string("RightSensor"));
StringSensor29.setEnabled(false);
Transform19.addChild(&StringSensor29);

TouchSensor& TouchSensor30 =  TouchSensor();
TouchSensor30.setDescription(std::string("touch to activate"));
TouchSensor30.setDEF(std::string("RightTouch"));
Transform19.addChild(&TouchSensor30);

Group13.addChild(&Transform19);

//up
Transform& Transform31 =  Transform();
Transform31.setScale(new float[]{0.5,0.5,0.5});
Shape& Shape32 =  Shape();
Appearance& Appearance33 =  Appearance();
Appearance33.setContainerField("appearance");
Material& Material34 =  Material();
Material34.setContainerField("material");
Material34.setDiffuseColor(new float[]{0.0,0.7,1.0});
Material34.setTransparency(0.5);
Appearance33.addChild(&Material34);

Shape32.addChild(&Appearance33);

Extrusion& Extrusion35 =  Extrusion();
Extrusion35.setCreaseAngle(0.785);
Extrusion35.setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
Extrusion35.setSpine(new float[]{0.0,1.5,0.0,0.0,2.0,0.0,0.0,2.5,0.0}, 9);
Shape32.setGeometry(&Extrusion35);

Transform31.addChild(&Shape32);

Transform& Transform36 =  Transform();
Transform36.setTranslation(new float[]{-0.5,2.0,0.0});
Shape& Shape37 =  Shape();
Appearance& Appearance38 =  Appearance();
Appearance38.setContainerField("appearance");
Material& Material39 =  Material();
Material39.setContainerField("material");
Material39.setUSE(std::string("MaterialLightBlue"));
Appearance38.addChild(&Material39);

Shape37.addChild(&Appearance38);

Text& Text40 =  Text();
Text40.setDEF(std::string("UpString"));
Text40.setString((std::string[]){"u"}, 1);
Shape37.setGeometry(&Text40);

Transform36.addChild(&Shape37);

Transform31.addChild(&Transform36);

StringSensor& StringSensor41 =  StringSensor();
StringSensor41.setDEF(std::string("UpSensor"));
StringSensor41.setEnabled(false);
Transform31.addChild(&StringSensor41);

TouchSensor& TouchSensor42 =  TouchSensor();
TouchSensor42.setDescription(std::string("touch to activate"));
TouchSensor42.setDEF(std::string("UpTouch"));
Transform31.addChild(&TouchSensor42);

Group13.addChild(&Transform31);

//down
Transform& Transform43 =  Transform();
Transform43.setScale(new float[]{0.5,0.5,0.5});
Shape& Shape44 =  Shape();
Appearance& Appearance45 =  Appearance();
Appearance45.setContainerField("appearance");
Material& Material46 =  Material();
Material46.setContainerField("material");
Material46.setDiffuseColor(new float[]{0.7,1.0,0.0});
Material46.setTransparency(0.5);
Appearance45.addChild(&Material46);

Shape44.addChild(&Appearance45);

Extrusion& Extrusion47 =  Extrusion();
Extrusion47.setCreaseAngle(0.785);
Extrusion47.setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
Extrusion47.setSpine(new float[]{0.0,-2.5,0.0,0.0,-2.0,0.0,0.0,-1.5,0.0}, 9);
Shape44.setGeometry(&Extrusion47);

Transform43.addChild(&Shape44);

//<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>
Group13.addChild(&Transform43);

//center
Transform& Transform48 =  Transform();
Shape& Shape49 =  Shape();
Appearance& Appearance50 =  Appearance();
Appearance50.setContainerField("appearance");
Material& Material51 =  Material();
Material51.setContainerField("material");
Material51.setDiffuseColor(new float[]{1.0,0.0,0.7});
Appearance50.addChild(&Material51);

Shape49.addChild(&Appearance50);

Sphere& Sphere52 =  Sphere();
Shape49.setGeometry(&Sphere52);

Transform48.addChild(&Shape49);

Transform& Transform53 =  Transform();
Transform53.setScale(new float[]{0.5,0.5,0.5});
Transform53.setTranslation(new float[]{-0.5,0.0,1.0});
Shape& Shape54 =  Shape();
Appearance& Appearance55 =  Appearance();
Appearance55.setContainerField("appearance");
Material& Material56 =  Material();
Material56.setContainerField("material");
Material56.setUSE(std::string("MaterialLightBlue"));
Appearance55.addChild(&Material56);

Shape54.addChild(&Appearance55);

Text& Text57 =  Text();
Text57.setDEF(std::string("CenterString"));
Shape54.setGeometry(&Text57);

Transform53.addChild(&Shape54);

Transform48.addChild(&Transform53);

StringSensor& StringSensor58 =  StringSensor();
StringSensor58.setDEF(std::string("CenterSensor"));
StringSensor58.setEnabled(false);
Transform48.addChild(&StringSensor58);

TouchSensor& TouchSensor59 =  TouchSensor();
TouchSensor59.setDescription(std::string("touch to activate"));
TouchSensor59.setDEF(std::string("CenterTouch"));
Transform48.addChild(&TouchSensor59);

Group13.addChild(&Transform48);

ProtoBody12.addChild(&Group13);

Script& Script60 =  Script();
Script60.setDEF(std::string("RightSingleToMultiString"));
field& field61 =  field();
field61.setName(std::string("set_rightstring"));
field61.setAccessType(std::string("inputOnly"));
field61.setType(std::string("SFString"));
Script60.addChild(&field61);

field& field62 =  field();
field62.setName(std::string("rightlines"));
field62.setAccessType(std::string("outputOnly"));
field62.setType(std::string("MFString"));
Script60.addChild(&field62);


//Script60.setSourceCode(std::string("ecmascript:")+
//_T("function initialize() {")+
//_T("	rightlines = new MFString(\"\");")+
//_T("}")+
//_T("function set_rightstring(rightstr) {")+
//_T("	rightlines = new MFString(rightstr);")+
//_T("}"));
ProtoBody12.addChild(&Script60);

Script& Script63 =  Script();
Script63.setDEF(std::string("UpSingleToMultiString"));
field& field64 =  field();
field64.setName(std::string("set_upstring"));
field64.setAccessType(std::string("inputOnly"));
field64.setType(std::string("SFString"));
Script63.addChild(&field64);

field& field65 =  field();
field65.setName(std::string("uplines"));
field65.setAccessType(std::string("outputOnly"));
field65.setType(std::string("MFString"));
Script63.addChild(&field65);


//Script63.setSourceCode(std::string("ecmascript:")+
//_T("function initialize() {")+
//_T("	uplines = new MFString(\"\");")+
//_T("}")+
//_T("function set_upstring(upstr) {")+
//_T("	uplines = new MFString(upstr);")+
//_T("}"));
ProtoBody12.addChild(&Script63);

Script& Script66 =  Script();
Script66.setDEF(std::string("CenterSingleToMultiString"));
field& field67 =  field();
field67.setName(std::string("set_centerstring"));
field67.setAccessType(std::string("inputOnly"));
field67.setType(std::string("SFString"));
Script66.addChild(&field67);

field& field68 =  field();
field68.setName(std::string("centerlines"));
field68.setAccessType(std::string("outputOnly"));
field68.setType(std::string("MFString"));
Script66.addChild(&field68);


//Script66.setSourceCode(std::string("ecmascript:")+
//_T("function initialize() {")+
//_T("	centerlines = new MFString(\"\");")+
//_T("}")+
//_T("function set_centerstring(centerstr) {")+
//_T("	centerlines = new MFString(centerstr);")+
//_T("}"));
ProtoBody12.addChild(&Script66);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromField(std::string("enteredText"));
ROUTE69.setFromNode(std::string("CenterSensor"));
ROUTE69.setToField(std::string("set_centerstring"));
ROUTE69.setToNode(std::string("CenterSingleToMultiString"));
ProtoBody12.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromField(std::string("centerlines"));
ROUTE70.setFromNode(std::string("CenterSingleToMultiString"));
ROUTE70.setToField(std::string("set_string"));
ROUTE70.setToNode(std::string("CenterString"));
ProtoBody12.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromField(std::string("isOver"));
ROUTE71.setFromNode(std::string("CenterTouch"));
ROUTE71.setToField(std::string("set_enabled"));
ROUTE71.setToNode(std::string("CenterSensor"));
ProtoBody12.addChild(&ROUTE71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromField(std::string("enteredText"));
ROUTE72.setFromNode(std::string("RightSensor"));
ROUTE72.setToField(std::string("set_rightstring"));
ROUTE72.setToNode(std::string("RightSingleToMultiString"));
ProtoBody12.addChild(&ROUTE72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromField(std::string("rightlines"));
ROUTE73.setFromNode(std::string("RightSingleToMultiString"));
ROUTE73.setToField(std::string("set_string"));
ROUTE73.setToNode(std::string("RightString"));
ProtoBody12.addChild(&ROUTE73);

ROUTE& ROUTE74 =  ROUTE();
ROUTE74.setFromField(std::string("isOver"));
ROUTE74.setFromNode(std::string("RightTouch"));
ROUTE74.setToField(std::string("set_enabled"));
ROUTE74.setToNode(std::string("RightSensor"));
ProtoBody12.addChild(&ROUTE74);

ROUTE& ROUTE75 =  ROUTE();
ROUTE75.setFromField(std::string("enteredText"));
ROUTE75.setFromNode(std::string("UpSensor"));
ROUTE75.setToField(std::string("set_upstring"));
ROUTE75.setToNode(std::string("UpSingleToMultiString"));
ProtoBody12.addChild(&ROUTE75);

ROUTE& ROUTE76 =  ROUTE();
ROUTE76.setFromField(std::string("uplines"));
ROUTE76.setFromNode(std::string("UpSingleToMultiString"));
ROUTE76.setToField(std::string("set_string"));
ROUTE76.setToNode(std::string("UpString"));
ProtoBody12.addChild(&ROUTE76);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromField(std::string("isOver"));
ROUTE77.setFromNode(std::string("UpTouch"));
ROUTE77.setToField(std::string("set_enabled"));
ROUTE77.setToNode(std::string("UpSensor"));
ProtoBody12.addChild(&ROUTE77);

ProtoDeclare11.addChild(&ProtoBody12);

Scene10.addChild(&ProtoDeclare11);

NavigationInfo& NavigationInfo78 =  NavigationInfo();
Scene10.addChild(&NavigationInfo78);

Viewpoint& Viewpoint79 =  Viewpoint();
Viewpoint79.setDescription(std::string("Process pipes"));
Viewpoint79.setOrientation(new float[]{1.0,0.0,0.0,-0.4});
Viewpoint79.setPosition(new float[]{0.0,5.0,12.0});
Scene10.addChild(&Viewpoint79);

Transform& Transform80 =  Transform();
Transform80.setTranslation(new float[]{0.0,-2.5,0.0});
ProtoInstance& ProtoInstance81 =  ProtoInstance();
ProtoInstance81.setName(std::string("Process"));
Transform80.addChild(&ProtoInstance81);

Scene10.addChild(&Transform80);

Transform& Transform82 =  Transform();
ProtoInstance& ProtoInstance83 =  ProtoInstance();
ProtoInstance83.setName(std::string("Process"));
Transform82.addChild(&ProtoInstance83);

Scene10.addChild(&Transform82);

Transform& Transform84 =  Transform();
Transform84.setTranslation(new float[]{0.0,2.5,0.0});
ProtoInstance& ProtoInstance85 =  ProtoInstance();
ProtoInstance85.setName(std::string("Process"));
Transform84.addChild(&ProtoInstance85);

Scene10.addChild(&Transform84);

X3D0.setScene(&Scene10);

}
