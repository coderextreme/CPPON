#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
int ThreeInARow(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("ThreeInARow.x3d"));
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
meta5.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/ThreeInARow.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("description"));
meta6.setContent(std::string("3 boxes"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
NavigationInfo8.setType((std::string[]){"EXAMINE"}, 1);
Scene7.addChild(&NavigationInfo8);

Viewpoint& Viewpoint9 =  Viewpoint();
Viewpoint9.setDescription(std::string("Cubes"));
Viewpoint9.setPosition(new float[]{0.0,0.0,12.0});
Scene7.addChild(&Viewpoint9);

Transform& Transform10 =  Transform();
Transform10.setDEF(std::string("first"));
Transform10.setTranslation(new float[]{0.0,2.0,0.0});
Shape& Shape11 =  Shape();
Shape11.setDEF(std::string("ball"));
Sphere& Sphere12 =  Sphere();
Shape11.setGeometry(&Sphere12);

Appearance& Appearance13 =  Appearance();
Appearance13.setContainerField("appearance");
Material& Material14 =  Material();
Material14.setContainerField("material");
Material14.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance13.addChild(&Material14);

Shape11.addChild(&Appearance13);

Transform10.addChild(&Shape11);

Scene7.addChild(&Transform10);

Transform& Transform15 =  Transform();
Shape& Shape16 =  Shape();
Shape16.setUSE(std::string("ball"));
Transform15.addChild(&Shape16);

Scene7.addChild(&Transform15);

Transform& Transform17 =  Transform();
Transform17.setTranslation(new float[]{0.0,-2.0,0.0});
Shape& Shape18 =  Shape();
Shape18.setUSE(std::string("ball"));
Transform17.addChild(&Shape18);

Scene7.addChild(&Transform17);

X3D0.setScene(&Scene7);

}
