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
#include <string>
#include "X3DLib.h"
int asphere(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Interchange"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(std::string("Scripting"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(std::string("title"));
meta3.setContent(std::string("asphere.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("John Carlson"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("generator"));
meta5.setContent(std::string("manual"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("identifier"));
meta6.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/asphere.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("description"));
meta7.setContent(std::string("a sphere"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
Group& Group9 =  Group();
Shape& Shape10 =  Shape();
Appearance& Appearance11 =  Appearance();
Material& Material12 =  Material();
Material12.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance11.addChild(&Material12);

Shape10.addChild(&Appearance11);

Sphere& Sphere13 =  Sphere();
Shape10.setGeometry(&Sphere13);

Group9.addChild(&Shape10);

Scene8.addChild(&Group9);

X3D0.setScene(&Scene8);

}
