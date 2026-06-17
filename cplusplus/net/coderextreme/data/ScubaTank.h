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
X3D0.setProfile(std::string("Interchange"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("ScubaTank.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("Scuba gear used by Nancy Diving example."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("Etsuko Lippi"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("created"));
meta5.setContent(std::string("24 January 2001"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("modified"));
meta6.setContent(std::string("23 May 2020"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("identifier"));
meta7.setContent(std::string("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("generator"));
meta8.setContent(std::string("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("license"));
meta9.setContent(std::string("../license.html"));
head1.addMeta(&meta9);

X3D0.setHead(&head1);

Scene& Scene10 =  Scene();
WorldInfo& WorldInfo11 =  WorldInfo();
WorldInfo11.setTitle(std::string("ScubaTank.x3d"));
Scene10.addChild(&WorldInfo11);

Transform& Transform12 =  Transform();
Transform12.setDEF(std::string("ScubaTank"));
Transform& Transform13 =  Transform();
Shape& Shape14 =  Shape();
Appearance& Appearance15 =  Appearance();
Material& Material16 =  Material();
Material16.setDEF(std::string("tank"));
Material16.setAmbientIntensity(0.3);
Material16.setDiffuseColor(new float[]{0.3,0.3,0.5});
Material16.setShininess(0.1);
Material16.setSpecularColor(new float[]{0.7,0.7,0.8});
Appearance15.addChild(&Material16);

Shape14.addChild(&Appearance15);

Cylinder& Cylinder17 =  Cylinder();
Cylinder17.setHeight(0.7);
Cylinder17.setRadius(0.1);
Shape14.setGeometry(&Cylinder17);

Transform13.addChild(&Shape14);

Transform12.addChild(&Transform13);

Transform& Transform18 =  Transform();
Transform18.setTranslation(new float[]{0.0,0.35,0.0});
Shape& Shape19 =  Shape();
Appearance& Appearance20 =  Appearance();
Material& Material21 =  Material();
Material21.setUSE(std::string("tank"));
Appearance20.addChild(&Material21);

Shape19.addChild(&Appearance20);

Sphere& Sphere22 =  Sphere();
Sphere22.setRadius(0.098);
Shape19.setGeometry(&Sphere22);

Transform18.addChild(&Shape19);

Transform12.addChild(&Transform18);

Transform& Transform23 =  Transform();
Transform23.setTranslation(new float[]{0.0,-0.35,0.0});
Shape& Shape24 =  Shape();
Shape24.setDEF(std::string("tankBottom"));
Appearance& Appearance25 =  Appearance();
Material& Material26 =  Material();
Material26.setDEF(std::string("black"));
Material26.setAmbientIntensity(0.3);
Material26.setDiffuseColor(new float[]{0.0,0.0,0.0});
Appearance25.addChild(&Material26);

Shape24.addChild(&Appearance25);

Cylinder& Cylinder27 =  Cylinder();
Cylinder27.setHeight(0.06);
Cylinder27.setRadius(0.115);
Shape24.setGeometry(&Cylinder27);

Transform23.addChild(&Shape24);

Transform12.addChild(&Transform23);

Group& Group28 =  Group();
Group28.setDEF(std::string("tankNozzle"));
Transform& Transform29 =  Transform();
Transform& Transform30 =  Transform();
Transform30.setTranslation(new float[]{0.0,0.45,0.0});
Shape& Shape31 =  Shape();
Shape31.setDEF(std::string("pressure"));
Appearance& Appearance32 =  Appearance();
Material& Material33 =  Material();
Material33.setDEF(std::string("pressureColor"));
Material33.setAmbientIntensity(0.4);
Material33.setDiffuseColor(new float[]{0.91,0.91,0.91});
Material33.setShininess(0.16);
Material33.setSpecularColor(new float[]{0.91,0.9,0.91});
Appearance32.addChild(&Material33);

Shape31.addChild(&Appearance32);

Cylinder& Cylinder34 =  Cylinder();
Cylinder34.setHeight(0.1);
Cylinder34.setRadius(0.015);
Shape31.setGeometry(&Cylinder34);

Transform30.addChild(&Shape31);

Transform29.addChild(&Transform30);

Transform& Transform35 =  Transform();
Transform35.setTranslation(new float[]{0.0,0.5,0.0});
Shape& Shape36 =  Shape();
Shape36.setDEF(std::string("pressureTop"));
Appearance& Appearance37 =  Appearance();
Material& Material38 =  Material();
Material38.setUSE(std::string("black"));
Appearance37.addChild(&Material38);

Shape36.addChild(&Appearance37);

Cylinder& Cylinder39 =  Cylinder();
Cylinder39.setHeight(0.02);
Cylinder39.setRadius(0.025);
Shape36.setGeometry(&Cylinder39);

Transform35.addChild(&Shape36);

Transform29.addChild(&Transform35);

Transform& Transform40 =  Transform();
Transform40.setRotation(new float[]{0.0,0.0,1.0,1.57});
Transform40.setTranslation(new float[]{-0.028,0.462,0.0});
Transform& Transform41 =  Transform();
Shape& Shape42 =  Shape();
Shape42.setDEF(std::string("connectorToRegulator"));
Appearance& Appearance43 =  Appearance();
Material& Material44 =  Material();
Material44.setUSE(std::string("pressureColor"));
Appearance43.addChild(&Material44);

Shape42.addChild(&Appearance43);

Cylinder& Cylinder45 =  Cylinder();
Cylinder45.setHeight(0.03);
Cylinder45.setRadius(0.01);
Shape42.setGeometry(&Cylinder45);

Transform41.addChild(&Shape42);

Transform40.addChild(&Transform41);

Transform& Transform46 =  Transform();
Transform46.setTranslation(new float[]{0.0,0.02,0.0});
Shape& Shape47 =  Shape();
Shape47.setDEF(std::string("connectorToRegulatorTop"));
Appearance& Appearance48 =  Appearance();
Material& Material49 =  Material();
Material49.setUSE(std::string("black"));
Appearance48.addChild(&Material49);

Shape47.addChild(&Appearance48);

Cylinder& Cylinder50 =  Cylinder();
Cylinder50.setHeight(0.02);
Cylinder50.setRadius(0.02);
Shape47.setGeometry(&Cylinder50);

Transform46.addChild(&Shape47);

Transform40.addChild(&Transform46);

Transform29.addChild(&Transform40);

Group28.addChild(&Transform29);

Transform12.addChild(&Group28);

Transform& Transform51 =  Transform();
Transform51.setTranslation(new float[]{0.0,0.2,0.0});
Shape& Shape52 =  Shape();
Shape52.setDEF(std::string("tankHoldBelt"));
Appearance& Appearance53 =  Appearance();
Material& Material54 =  Material();
Material54.setUSE(std::string("black"));
Appearance53.addChild(&Material54);

Shape52.addChild(&Appearance53);

Cylinder& Cylinder55 =  Cylinder();
Cylinder55.setHeight(0.1);
Cylinder55.setRadius(0.115);
Shape52.setGeometry(&Cylinder55);

Transform51.addChild(&Shape52);

Transform12.addChild(&Transform51);

Scene10.addChild(&Transform12);

Background& Background56 =  Background();
Background56.setSkyColor(new float[]{0.6,0.6,0.6}, 3);
Scene10.addChild(&Background56);

X3D0.setScene(&Scene10);

//}
