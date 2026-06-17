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

component& component3 =  component();
component3.setName(std::string("EnvironmentalEffects"));
component3.setLevel(3);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(std::string("Shaders"));
component4.setLevel(1);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(std::string("CubeMapTexturing"));
component5.setLevel(1);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(std::string("Texturing"));
component6.setLevel(1);
head1.addChild(&component6);

component& component7 =  component();
component7.setName(std::string("Rendering"));
component7.setLevel(1);
head1.addChild(&component7);

component& component8 =  component();
component8.setName(std::string("Shape"));
component8.setLevel(4);
head1.addChild(&component8);

component& component9 =  component();
component9.setName(std::string("Grouping"));
component9.setLevel(3);
head1.addChild(&component9);

component& component10 =  component();
component10.setName(std::string("Core"));
component10.setLevel(1);
head1.addChild(&component10);

meta& meta11 =  meta();
meta11.setName(std::string("title"));
meta11.setContent(std::string("flowers4.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("creator"));
meta12.setContent(std::string("John Carlson"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("generator"));
meta13.setContent(std::string("manual"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("identifier"));
meta14.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("description"));
meta15.setContent(std::string("an animated flower"));
head1.addMeta(&meta15);

X3D0.setHead(&head1);

Scene& Scene16 =  Scene();
NavigationInfo& NavigationInfo17 =  NavigationInfo();
Scene16.addChild(&NavigationInfo17);

Background& Background18 =  Background();
Background18.setBackUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background18.setBottomUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background18.setFrontUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background18.setLeftUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background18.setRightUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background18.setTopUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Scene16.addChild(&Background18);

Transform& Transform19 =  Transform();
Transform19.setDEF(std::string("transform"));
Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Material22.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material22.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance21.addChild(&Material22);

ComposedCubeMapTexture& ComposedCubeMapTexture23 =  ComposedCubeMapTexture();
ImageTexture& ImageTexture24 =  ImageTexture();
ImageTexture24.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture23.setBack(ImageTexture24);

ImageTexture& ImageTexture25 =  ImageTexture();
ImageTexture25.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture23.setBottom(ImageTexture25);

ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture23.setFront(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture23.setLeft(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture23.setRight(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture23.setTop(ImageTexture29);

Appearance21.addChild(&ComposedCubeMapTexture23);

ComposedShader& ComposedShader30 =  ComposedShader();
ComposedShader30.setDEF(std::string("shader"));
ComposedShader30.setLanguage(std::string("GLSL"));
field& field31 =  field();
field31.setName(std::string("cube"));
field31.setType(std::string("SFInt32"));
field31.setAccessType(std::string("inputOutput"));
field31.setValue(std::string("0"));
ComposedShader30.addChild(&field31);

field& field32 =  field();
field32.setName(std::string("chromaticDispertion"));
field32.setAccessType(std::string("inputOutput"));
field32.setType(std::string("SFVec3f"));
field32.setValue(std::string("0.98 1 1.033"));
ComposedShader30.addChild(&field32);

field& field33 =  field();
field33.setName(std::string("bias"));
field33.setType(std::string("SFFloat"));
field33.setAccessType(std::string("inputOutput"));
field33.setValue(std::string("0.5"));
ComposedShader30.addChild(&field33);

field& field34 =  field();
field34.setName(std::string("scale"));
field34.setType(std::string("SFFloat"));
field34.setAccessType(std::string("inputOutput"));
field34.setValue(std::string("0.5"));
ComposedShader30.addChild(&field34);

field& field35 =  field();
field35.setName(std::string("power"));
field35.setType(std::string("SFFloat"));
field35.setAccessType(std::string("inputOutput"));
field35.setValue(std::string("2"));
ComposedShader30.addChild(&field35);

ShaderPart& ShaderPart36 =  ShaderPart();
ShaderPart36.setUrl((std::string[]){"../shaders/x_ite.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 3);
ShaderPart36.setType(std::string("VERTEX"));
ComposedShader30.setParts(&ShaderPart36);

ShaderPart& ShaderPart37 =  ShaderPart();
ShaderPart37.setUrl((std::string[]){"../shaders/x_ite.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}, 3);
ShaderPart37.setType(std::string("FRAGMENT"));
ComposedShader30.setParts(&ShaderPart37);

Appearance21.addChild(&ComposedShader30);

Shape20.addChild(&Appearance21);

//<Sphere>
IndexedFaceSet& IndexedFaceSet38 =  IndexedFaceSet();
IndexedFaceSet38.setConvex(false);
IndexedFaceSet38.setDEF(std::string("Orbit"));
Coordinate& Coordinate39 =  Coordinate();
Coordinate39.setDEF(std::string("OrbitCoordinates"));
IndexedFaceSet38.setCoord(&Coordinate39);

Shape20.setGeometry(&IndexedFaceSet38);

Transform19.addChild(&Shape20);

Scene16.addChild(&Transform19);

Script& Script40 =  Script();
Script40.setDEF(std::string("OrbitScript"));
field& field41 =  field();
field41.setName(std::string("set_fraction"));
field41.setAccessType(std::string("inputOnly"));
field41.setType(std::string("SFFloat"));
Script40.addChild(&field41);

field& field42 =  field();
field42.setName(std::string("coordinates"));
field42.setAccessType(std::string("inputOutput"));
field42.setType(std::string("MFVec3f"));
Script40.addChild(&field42);

field& field43 =  field();
field43.setName(std::string("coordIndexes"));
field43.setAccessType(std::string("outputOnly"));
field43.setType(std::string("MFInt32"));
Script40.addChild(&field43);

field& field44 =  field();
field44.setName(std::string("e"));
field44.setType(std::string("SFFloat"));
field44.setAccessType(std::string("inputOutput"));
field44.setValue(std::string("5"));
Script40.addChild(&field44);

field& field45 =  field();
field45.setName(std::string("f"));
field45.setType(std::string("SFFloat"));
field45.setAccessType(std::string("inputOutput"));
field45.setValue(std::string("5"));
Script40.addChild(&field45);

field& field46 =  field();
field46.setName(std::string("g"));
field46.setType(std::string("SFFloat"));
field46.setAccessType(std::string("inputOutput"));
field46.setValue(std::string("5"));
Script40.addChild(&field46);

field& field47 =  field();
field47.setName(std::string("h"));
field47.setType(std::string("SFFloat"));
field47.setAccessType(std::string("inputOutput"));
field47.setValue(std::string("5"));
Script40.addChild(&field47);


//Script40.setSourceCode(std::string("ecmascript:")+
//_T("function initialize() {")+
//_T("     var resolution = 100;")+
//_T("     updateCoordinates(resolution);")+
//_T("     var localci = new MFInt32();")+
//_T("     var arrIndex = 0;")+
//_T("     for (var i = 0; i < resolution-1; i++) {")+
//_T("     	for (var j = 0; j < resolution-1; j++) {")+
//_T("	     localci[arrIndex++] = i*resolution+j;")+
//_T("	     localci[arrIndex++] = i*resolution+j+1;")+
//_T("	     localci[arrIndex++] = (i+1)*resolution+j+1;")+
//_T("	     localci[arrIndex++] = (i+1)*resolution+j;")+
//_T("	     localci[arrIndex++] = -1;")+
//_T("	}")+
//_T("    }")+
//_T("    coordIndexes = localci;")+
//_T("}")+
//_T("function updateCoordinates(resolution) {")+
//_T("     var theta = 0.0;")+
//_T("     var phi = 0.0;")+
//_T("     var delta = (2 * 3.141592653) / (resolution-1);")+
//_T("     var localc = new MFVec3f();")+
//_T("     var arrIndex = 0;")+
//_T("     for (var i = 0; i < resolution; i++) {")+
//_T("     	for (var j = 0; j < resolution; j++) {")+
//_T("		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);")+
//_T("		localc[arrIndex++] = new SFVec3f(")+
//_T("			rho * Math.cos(phi) * Math.cos(theta),")+
//_T("			rho * Math.cos(phi) * Math.sin(theta),")+
//_T("			rho * Math.sin(phi)")+
//_T("		);")+
//_T("		theta += delta;")+
//_T("	}")+
//_T("	phi += delta;")+
//_T("     }")+
//_T("     coordinates = localc;")+
//_T("}")+
//_T("function set_fraction(fraction, eventTime) {")+
//_T("	var choice = Math.floor(Math.random() * 4);")+
//_T("	switch (choice) {")+
//_T("	case 0:")+
//_T("		e += Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("		break;")+
//_T("	case 1:")+
//_T("		f += Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("		break;")+
//_T("	case 2:")+
//_T("		g += Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("		break;")+
//_T("	case 3:")+
//_T("		h += Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("		break;")+
//_T("	}")+
//_T("	if (e < 1) {")+
//_T("		e = 10;")+
//_T("	}")+
//_T("	if (f < 1) {")+
//_T("		f = 10;")+
//_T("	}")+
//_T("	if (g < 1) {")+
//_T("		g = 4;")+
//_T("	}")+
//_T("	if (h < 1) {")+
//_T("		h = 4;")+
//_T("	}")+
//_T("	var resolution = 100;")+
//_T("	updateCoordinates(resolution);")+
//_T("}"));
Scene16.addChild(&Script40);

TimeSensor& TimeSensor48 =  TimeSensor();
TimeSensor48.setDEF(std::string("Clock"));
TimeSensor48.setCycleInterval(16);
TimeSensor48.setLoop(true);
Scene16.addChild(&TimeSensor48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromField(std::string("coordIndexes"));
ROUTE49.setFromNode(std::string("OrbitScript"));
ROUTE49.setToField(std::string("set_coordIndex"));
ROUTE49.setToNode(std::string("Orbit"));
Scene16.addChild(&ROUTE49);

ROUTE& ROUTE50 =  ROUTE();
ROUTE50.setFromField(std::string("coordinates"));
ROUTE50.setFromNode(std::string("OrbitScript"));
ROUTE50.setToField(std::string("set_point"));
ROUTE50.setToNode(std::string("OrbitCoordinates"));
Scene16.addChild(&ROUTE50);

ROUTE& ROUTE51 =  ROUTE();
ROUTE51.setFromField(std::string("fraction_changed"));
ROUTE51.setFromNode(std::string("Clock"));
ROUTE51.setToField(std::string("set_fraction"));
ROUTE51.setToNode(std::string("OrbitScript"));
Scene16.addChild(&ROUTE51);

X3D0.setScene(&Scene16);

//}
