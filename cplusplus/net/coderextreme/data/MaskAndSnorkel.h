#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void MaskAndSnorkel(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("MaskAndSnorkel.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("Diving mask and snorkel tube."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("Etsuko Lippi"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("created"));
meta5.setContent(std::string("January 24, 2001"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("modified"));
meta6.setContent(std::string("23 May 2020"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("identifier"));
meta7.setContent(std::string("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d"));
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
WorldInfo11.setTitle(std::string("MaskAndSnorkel.x3d"));
Scene10.addChild(&WorldInfo11);

Background& Background12 =  Background();
Background12.setSkyColor(new float[]{0.0,0.0,0.9}, 3);
Scene10.addChild(&Background12);

Transform& Transform13 =  Transform();
Transform13.setDEF(std::string("maskAndSnorkel"));
Transform& Transform14 =  Transform();
Shape& Shape15 =  Shape();
Shape15.setDEF(std::string("maskFrame"));
Appearance& Appearance16 =  Appearance();
Appearance16.setContainerField("appearance");
Material& Material17 =  Material();
Material17.setContainerField("material");
Material17.setDEF(std::string("frameColor"));
Material17.setDiffuseColor(new float[]{0.0,0.0,0.0});
Appearance16.addChild(&Material17);

Shape15.addChild(&Appearance16);

IndexedFaceSet& IndexedFaceSet18 =  IndexedFaceSet();
IndexedFaceSet18.setCoordIndex(new int32_t[]{0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1}, 80);
IndexedFaceSet18.setCreaseAngle(1.45);
IndexedFaceSet18.setSolid(false);
Coordinate& Coordinate19 =  Coordinate();
Coordinate19.setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0}, 78);
IndexedFaceSet18.setCoord(&Coordinate19);

Shape15.setGeometry(&IndexedFaceSet18);

Transform14.addChild(&Shape15);

Transform13.addChild(&Transform14);

Transform& Transform20 =  Transform();
Transform20.setDEF(std::string("snorkelHoldRing"));
Transform20.setTranslation(new float[]{0.075,0.075,-0.02});
Shape& Shape21 =  Shape();
Appearance& Appearance22 =  Appearance();
Appearance22.setContainerField("appearance");
Material& Material23 =  Material();
Material23.setContainerField("material");
Material23.setUSE(std::string("frameColor"));
Appearance22.addChild(&Material23);

Shape21.addChild(&Appearance22);

Cylinder& Cylinder24 =  Cylinder();
Cylinder24.setHeight(0.003);
Cylinder24.setRadius(0.015);
Shape21.setGeometry(&Cylinder24);

Transform20.addChild(&Shape21);

Transform13.addChild(&Transform20);

Group& Group25 =  Group();
Group25.setDEF(std::string("snorkel"));
Transform& Transform26 =  Transform();
Transform26.setTranslation(new float[]{0.0,-0.02,0.0});
Transform& Transform27 =  Transform();
Transform27.setScale(new float[]{0.9,0.9,0.9});
Transform27.setTranslation(new float[]{0.035,-0.07,-0.02});
Shape& Shape28 =  Shape();
Appearance& Appearance29 =  Appearance();
Appearance29.setContainerField("appearance");
Material& Material30 =  Material();
Material30.setContainerField("material");
Material30.setDEF(std::string("snorkelTube"));
Material30.setDiffuseColor(new float[]{0.678,1.0,0.184});
Material30.setTransparency(0.4);
Appearance29.addChild(&Material30);

Shape28.addChild(&Appearance29);

Extrusion& Extrusion31 =  Extrusion();
Extrusion31.setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0.0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0.0,0.013}, 34);
Extrusion31.setSpine(new float[]{-0.01,-0.04,0.0,0.0,0.0,0.0,0.03,0.05,0.0,0.05,0.2,0.0,0.03,0.4,0.03}, 15);
Shape28.setGeometry(&Extrusion31);

Transform27.addChild(&Shape28);

Transform26.addChild(&Transform27);

Transform& Transform32 =  Transform();
Transform32.setRotation(new float[]{0.0,0.0,1.0,1.57});
Transform32.setScale(new float[]{0.9,0.9,0.9});
Transform32.setTranslation(new float[]{0.01,-0.04,-0.02});
Shape& Shape33 =  Shape();
Appearance& Appearance34 =  Appearance();
Appearance34.setContainerField("appearance");
Material& Material35 =  Material();
Material35.setContainerField("material");
Material35.setDEF(std::string("Mouthpiece"));
Material35.setDiffuseColor(new float[]{0.678,1.0,0.8});
Material35.setTransparency(0.4);
Appearance34.addChild(&Material35);

Shape33.addChild(&Appearance34);

Extrusion& Extrusion36 =  Extrusion();
Extrusion36.setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0.0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0.0,0.013}, 34);
Extrusion36.setSpine(new float[]{-0.01,-0.03,0.0,0.0,0.0,0.0,0.02,0.01,0.0}, 9);
Shape33.setGeometry(&Extrusion36);

Transform32.addChild(&Shape33);

Transform26.addChild(&Transform32);

Transform& Transform37 =  Transform();
Transform37.setRotation(new float[]{0.0,0.0,1.0,-0.85});
Transform37.setScale(new float[]{0.9,0.9,0.9});
Transform37.setTranslation(new float[]{0.005,-0.01,-0.02});
Shape& Shape38 =  Shape();
Appearance& Appearance39 =  Appearance();
Appearance39.setContainerField("appearance");
Material& Material40 =  Material();
Material40.setContainerField("material");
Material40.setUSE(std::string("Mouthpiece"));
Appearance39.addChild(&Material40);

Shape38.addChild(&Appearance39);

Extrusion& Extrusion41 =  Extrusion();
Extrusion41.setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013}, 18);
Extrusion41.setSpine(new float[]{-0.02,-0.03,0.0,-0.01,-0.03,0.0,0.0,-0.0175,0.0,0.0,-0.0135,0.0,-0.01,0.0,0.0,-0.02,0.0,0.0}, 18);
Shape38.setGeometry(&Extrusion41);

Transform37.addChild(&Shape38);

Transform26.addChild(&Transform37);

Group25.addChild(&Transform26);

Transform13.addChild(&Group25);

Transform& Transform42 =  Transform();
Shape& Shape43 =  Shape();
Shape43.setDEF(std::string("maskLensR"));
Appearance& Appearance44 =  Appearance();
Appearance44.setContainerField("appearance");
Material& Material45 =  Material();
Material45.setContainerField("material");
Material45.setDEF(std::string("plastic"));
Material45.setDiffuseColor(new float[]{0.941,0.973,1.0});
Material45.setTransparency(0.8);
Appearance44.addChild(&Material45);

Shape43.addChild(&Appearance44);

IndexedFaceSet& IndexedFaceSet46 =  IndexedFaceSet();
IndexedFaceSet46.setCoordIndex(new int32_t[]{12,13,14,15,16,17,18,12,-1}, 9);
IndexedFaceSet46.setCreaseAngle(1.45);
IndexedFaceSet46.setSolid(false);
Coordinate& Coordinate47 =  Coordinate();
Coordinate47.setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0}, 78);
IndexedFaceSet46.setCoord(&Coordinate47);

Shape43.setGeometry(&IndexedFaceSet46);

Transform42.addChild(&Shape43);

Transform13.addChild(&Transform42);

Transform& Transform48 =  Transform();
Shape& Shape49 =  Shape();
Shape49.setDEF(std::string("maskLensL"));
Appearance& Appearance50 =  Appearance();
Appearance50.setContainerField("appearance");
Material& Material51 =  Material();
Material51.setContainerField("material");
Material51.setUSE(std::string("plastic"));
Appearance50.addChild(&Material51);

Shape49.addChild(&Appearance50);

IndexedFaceSet& IndexedFaceSet52 =  IndexedFaceSet();
IndexedFaceSet52.setCoordIndex(new int32_t[]{19,20,21,22,23,24,25,19,-1}, 9);
IndexedFaceSet52.setCreaseAngle(1.45);
IndexedFaceSet52.setSolid(false);
Coordinate& Coordinate53 =  Coordinate();
Coordinate53.setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0}, 78);
IndexedFaceSet52.setCoord(&Coordinate53);

Shape49.setGeometry(&IndexedFaceSet52);

Transform48.addChild(&Shape49);

Transform13.addChild(&Transform48);

Transform& Transform54 =  Transform();
Shape& Shape55 =  Shape();
Shape55.setDEF(std::string("nose"));
Appearance& Appearance56 =  Appearance();
Appearance56.setContainerField("appearance");
Material& Material57 =  Material();
Material57.setContainerField("material");
Material57.setDEF(std::string("plasticFit"));
Material57.setDiffuseColor(new float[]{0.678,1.0,0.184});
Material57.setTransparency(0.7);
Appearance56.addChild(&Material57);

Shape55.addChild(&Appearance56);

IndexedFaceSet& IndexedFaceSet58 =  IndexedFaceSet();
IndexedFaceSet58.setCoordIndex(new int32_t[]{0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1}, 25);
IndexedFaceSet58.setCreaseAngle(1.45);
IndexedFaceSet58.setSolid(false);
Coordinate& Coordinate59 =  Coordinate();
Coordinate59.setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0,0.0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0.0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02}, 114);
IndexedFaceSet58.setCoord(&Coordinate59);

Shape55.setGeometry(&IndexedFaceSet58);

Transform54.addChild(&Shape55);

Transform13.addChild(&Transform54);

Transform& Transform60 =  Transform();
Shape& Shape61 =  Shape();
Shape61.setDEF(std::string("faceFit"));
Appearance& Appearance62 =  Appearance();
Appearance62.setContainerField("appearance");
Material& Material63 =  Material();
Material63.setContainerField("material");
Material63.setUSE(std::string("plasticFit"));
Appearance62.addChild(&Material63);

Shape61.addChild(&Appearance62);

IndexedFaceSet& IndexedFaceSet64 =  IndexedFaceSet();
IndexedFaceSet64.setCoordIndex(new int32_t[]{1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1}, 60);
IndexedFaceSet64.setCreaseAngle(1.45);
IndexedFaceSet64.setSolid(false);
Coordinate& Coordinate65 =  Coordinate();
Coordinate65.setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0,0.0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0.0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02}, 114);
IndexedFaceSet64.setCoord(&Coordinate65);

Shape61.setGeometry(&IndexedFaceSet64);

Transform60.addChild(&Shape61);

Transform13.addChild(&Transform60);

Transform& Transform66 =  Transform();
Shape& Shape67 =  Shape();
Shape67.setDEF(std::string("belt"));
Appearance& Appearance68 =  Appearance();
Appearance68.setContainerField("appearance");
Material& Material69 =  Material();
Material69.setContainerField("material");
Material69.setUSE(std::string("plastic"));
Appearance68.addChild(&Material69);

Shape67.addChild(&Appearance68);

IndexedFaceSet& IndexedFaceSet70 =  IndexedFaceSet();
IndexedFaceSet70.setCoordIndex(new int32_t[]{3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1}, 36);
IndexedFaceSet70.setCreaseAngle(1.45);
IndexedFaceSet70.setSolid(false);
Coordinate& Coordinate71 =  Coordinate();
Coordinate71.setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0,0.0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0.0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135,-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0.0,0.09,-0.2,0.0,0.06,-0.175}, 144);
IndexedFaceSet70.setCoord(&Coordinate71);

Shape67.setGeometry(&IndexedFaceSet70);

Transform66.addChild(&Shape67);

Transform13.addChild(&Transform66);

Scene10.addChild(&Transform13);

X3D0.setScene(&Scene10);

//}
