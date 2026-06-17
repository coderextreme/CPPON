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
meta2.setContent(std::string("AllenBox.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("creator"));
meta3.setContent(std::string("Allen Box"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("created"));
meta4.setContent(std::string("8 July 2025"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("license"));
meta5.setContent(std::string("../license.html"));
head1.addMeta(&meta5);

X3D0.setHead(&head1);

Scene& Scene6 =  Scene();
WorldInfo& WorldInfo7 =  WorldInfo();
WorldInfo7.setTitle(std::string("AllenBox.x3d"));
Scene6.addChild(&WorldInfo7);

NavigationInfo& NavigationInfo8 =  NavigationInfo();
NavigationInfo8.setAvatarSize(new float[]{0.15,1.53,0.75}, 3);
NavigationInfo8.setSpeed(0.5);
NavigationInfo8.setType((std::string[]){"EXAMINE"}, 1);
Scene6.addChild(&NavigationInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(std::string("Floor"));
Transform9.setScale(new float[]{1.0,0.0125,1.0});
Transform9.setTranslation(new float[]{0.0,-0.0125,0.0});
Shape& Shape10 =  Shape();
Box& Box11 =  Box();
Shape10.setGeometry(&Box11);

Appearance& Appearance12 =  Appearance();
Material& Material13 =  Material();
Appearance12.addChild(&Material13);

Shape10.addChild(&Appearance12);

Transform9.addChild(&Shape10);

Scene6.addChild(&Transform9);

X3D0.setScene(&Scene6);

//}
