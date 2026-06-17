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
meta2.setContent(std::string("flower.x3d"));
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
meta5.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/flower.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("description"));
meta6.setContent(std::string("a flower"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
Scene7.addChild(&NavigationInfo8);

DirectionalLight& DirectionalLight9 =  DirectionalLight();
DirectionalLight9.setDirection(new float[]{0.0,-0.8,-0.2});
DirectionalLight9.setIntensity(0.5);
Scene7.addChild(&DirectionalLight9);

Background& Background10 =  Background();
Background10.setSkyColor(new float[]{1.0,1.0,1.0}, 3);
Scene7.addChild(&Background10);

Viewpoint& Viewpoint11 =  Viewpoint();
Viewpoint11.setDescription(std::string("One mathematical orbital"));
Viewpoint11.setPosition(new float[]{0.0,0.0,50.0});
Scene7.addChild(&Viewpoint11);

Transform& Transform12 =  Transform();
Transform12.setTranslation(new float[]{0.0,-1.0,1.0});
Transform12.setRotation(new float[]{0.0,1.0,0.0,3.1415926});
Transform12.setScale(new float[]{1.5,1.5,1.5});
Shape& Shape13 =  Shape();
Appearance& Appearance14 =  Appearance();
Material& Material15 =  Material();
Material15.setTransparency(0.1);
Material15.setDiffuseColor(new float[]{0.9,0.3,0.3});
Material15.setSpecularColor(new float[]{0.8,0.8,0.8});
Material15.setShininess(0.145);
Appearance14.addChild(&Material15);

Shape13.addChild(&Appearance14);

IndexedFaceSet& IndexedFaceSet16 =  IndexedFaceSet();
IndexedFaceSet16.setCcw(false);
IndexedFaceSet16.setConvex(false);
IndexedFaceSet16.setCoordIndex(new int32_t[]{0,1,2,-1}, 4);
IndexedFaceSet16.setDEF(std::string("Orbit"));
Coordinate& Coordinate17 =  Coordinate();
Coordinate17.setDEF(std::string("OrbitCoordinates"));
Coordinate17.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0}, 9);
IndexedFaceSet16.setCoord(&Coordinate17);

Shape13.setGeometry(&IndexedFaceSet16);

Transform12.addChild(&Shape13);

Scene7.addChild(&Transform12);

Script& Script18 =  Script();
Script18.setDEF(std::string("OrbitScript"));
field& field19 =  field();
field19.setName(std::string("set_fraction"));
field19.setAccessType(std::string("inputOnly"));
field19.setType(std::string("SFFloat"));
Script18.addChild(&field19);

field& field20 =  field();
field20.setName(std::string("coordinates"));
field20.setAccessType(std::string("outputOnly"));
field20.setType(std::string("MFVec3f"));
Script18.addChild(&field20);

field& field21 =  field();
field21.setName(std::string("coordIndexes"));
field21.setAccessType(std::string("outputOnly"));
field21.setType(std::string("MFInt32"));
Script18.addChild(&field21);

//<field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"resolution\" type=\"SFInt32\" value=\"150\"/>

//Script18.setSourceCode(std::string("ecmascript:")+
//_T("var e = 5;")+
//_T("var f = 5;")+
//_T("var g = 5;")+
//_T("var h = 5;")+
//_T("var resolution = 100;")+
//_T("var t = 0;")+
//_T("var p = 0;")+
//_T("function initialize() {")+
//_T("     generateCoordinates(resolution);")+
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
//_T("function generateCoordinates(resolution) {")+
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
//_T("	t += 0.5;")+
//_T("	p += 0.5;")+
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
//_T("	if (f < 1) {")+
//_T("		f = 10;")+
//_T("	}")+
//_T("	if (g < 1) {")+
//_T("		g = 4;")+
//_T("	}")+
//_T("	if (h < 1) {")+
//_T("		h = 4;")+
//_T("	}")+
//_T("	generateCoordinates(resolution);")+
//_T("}"));
Scene7.addChild(&Script18);

TimeSensor& TimeSensor22 =  TimeSensor();
TimeSensor22.setDEF(std::string("Clock"));
TimeSensor22.setCycleInterval(16);
TimeSensor22.setLoop(true);
Scene7.addChild(&TimeSensor22);

ROUTE& ROUTE23 =  ROUTE();
ROUTE23.setFromNode(std::string("OrbitScript"));
ROUTE23.setFromField(std::string("coordIndexes"));
ROUTE23.setToNode(std::string("Orbit"));
ROUTE23.setToField(std::string("set_coordIndex"));
Scene7.addChild(&ROUTE23);

ROUTE& ROUTE24 =  ROUTE();
ROUTE24.setFromNode(std::string("OrbitScript"));
ROUTE24.setFromField(std::string("coordinates"));
ROUTE24.setToNode(std::string("OrbitCoordinates"));
ROUTE24.setToField(std::string("point"));
Scene7.addChild(&ROUTE24);

ROUTE& ROUTE25 =  ROUTE();
ROUTE25.setFromNode(std::string("Clock"));
ROUTE25.setFromField(std::string("fraction_changed"));
ROUTE25.setToNode(std::string("OrbitScript"));
ROUTE25.setToField(std::string("set_fraction"));
Scene7.addChild(&ROUTE25);

X3D0.setScene(&Scene7);

//}
