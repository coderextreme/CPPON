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
meta2.setName(std::string("creator"));
meta2.setContent(std::string("John W Carlson"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("created"));
meta3.setContent(std::string("December 13 2015"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("title"));
meta4.setContent(std::string("extrusion.x3d"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("identifier"));
meta5.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("description"));
meta6.setContent(std::string("beginnings of a force directed graph in 3D"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("generator"));
meta7.setContent(std::string("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
Group& Group9 =  Group();
Shape& Shape10 =  Shape();
Extrusion& Extrusion11 =  Extrusion();
Extrusion11.setDEF(std::string("extrusion"));
Extrusion11.setSpine(new float[]{-50.0,-50.0,0.0,50.0,50.0,0.0}, 6);
Extrusion11.setCreaseAngle(0.785);
Extrusion11.setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
Shape10.setGeometry(&Extrusion11);

Appearance& Appearance12 =  Appearance();
Material& Material13 =  Material();
Material13.setDiffuseColor(new float[]{0.0,1.0,0.0});
Appearance12.addChild(&Material13);

Shape10.addChild(&Appearance12);

Group9.addChild(&Shape10);

TimeSensor& TimeSensor14 =  TimeSensor();
TimeSensor14.setDEF(std::string("TourTime"));
TimeSensor14.setLoop(true);
Group9.addChild(&TimeSensor14);

Script& Script15 =  Script();
Script15.setDEF(std::string("MoveCylinder"));
field& field16 =  field();
field16.setName(std::string("set_cycle"));
field16.setAccessType(std::string("inputOnly"));
field16.setType(std::string("SFTime"));
Script15.addChild(&field16);

field& field17 =  field();
field17.setName(std::string("spine"));
field17.setAccessType(std::string("inputOutput"));
field17.setType(std::string("MFVec3f"));
field17.setValue(std::string("-50 -50 0 50 50 0"));
Script15.addChild(&field17);


//Script15.setSourceCode(std::string("ecmascript:")+
//_T("                function set_cycle(value) {")+
//_T("                        Browser.print(value);")+
//_T("                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);")+
//_T("                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);")+
//_T("		        spine = new MFVec3f([endA, endB]);")+
//_T("                }"));
Group9.addChild(&Script15);

ROUTE& ROUTE18 =  ROUTE();
ROUTE18.setFromNode(std::string("TourTime"));
ROUTE18.setFromField(std::string("cycleTime"));
ROUTE18.setToNode(std::string("MoveCylinder"));
ROUTE18.setToField(std::string("set_cycle"));
Group9.addChild(&ROUTE18);

ROUTE& ROUTE19 =  ROUTE();
ROUTE19.setFromNode(std::string("MoveCylinder"));
ROUTE19.setFromField(std::string("spine_changed"));
ROUTE19.setToNode(std::string("extrusion"));
ROUTE19.setToField(std::string("set_spine"));
Group9.addChild(&ROUTE19);

Scene8.addChild(&Group9);

X3D0.setScene(&Scene8);

//}
