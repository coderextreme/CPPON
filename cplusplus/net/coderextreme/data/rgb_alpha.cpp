#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Interchange"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("rgb_alpha.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("Image"));
meta3.setContent(std::string("rgb_alpha-front.jpg"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("Image"));
meta4.setContent(std::string("rgb_alpha-rear.jpg"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("Image"));
meta5.setContent(std::string("rgb_alpha-top.jpg"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("Image"));
meta6.setContent(std::string("rgb_alpha-bottom.jpg"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("reference"));
meta7.setContent(std::string("http://www.nist.gov/vrml.html"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("reference"));
meta8.setContent(std::string("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("creator"));
meta9.setContent(std::string("http://www.itl.nist.gov/div897/ctg/vrml/members.html"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("disclaimer"));
meta10.setContent(std::string("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("info"));
meta11.setContent(std::string("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("translator"));
meta12.setContent(std::string("Michael Kass NIST, Don Brutzman NPS"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("translated"));
meta13.setContent(std::string("21 January 2001"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("modified"));
meta14.setContent(std::string("16 January 2011"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("description"));
meta15.setContent(std::string("Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box."));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(std::string("identifier"));
meta16.setContent(std::string("https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(std::string("generator"));
meta17.setContent(std::string("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(std::string("generator"));
meta18.setContent(std::string("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(std::string("license"));
meta19.setContent(std::string("../../license.html"));
head1.addMeta(&meta19);

X3D0.setHead(&head1);

Scene& Scene20 =  Scene();
NavigationInfo& NavigationInfo21 =  NavigationInfo();
NavigationInfo21.setType(new std::string[]{"EXAMINE", "WALK", "FLY", "ANY"}, 4);
Scene20.addChild(&NavigationInfo21);

Group& Group22 =  Group();
Transform& Transform23 =  Transform();
Transform23.setTranslation(new float[]{6.14221,0.0694613,-0.000999451});
Shape& Shape24 =  Shape();
Appearance& Appearance25 =  Appearance();
Appearance25.setContainerField("appearance");
Material& Material26 =  Material();
Material26.setContainerField("material");
Appearance25.addChild(&Material26);

PixelTexture& PixelTexture27 =  PixelTexture();
PixelTexture27.setContainerField("texture");
PixelTexture27.setDEF(std::string("RgbOpacityCheckerboard"));
PixelTexture27.setImage(std::string("2 2 4 4278190335 4294901760 4294901760 4278190335"));
Appearance25.addChild(&PixelTexture27);

Shape24.addChild(&Appearance25);

Box& Box28 =  Box();
Shape24.setGeometry(&Box28);

Transform23.addChild(&Shape24);

Group22.addChild(&Transform23);

Transform& Transform29 =  Transform();
Transform29.setTranslation(new float[]{-4.85443,0.0694381,-0.00149918});
Shape& Shape30 =  Shape();
Appearance& Appearance31 =  Appearance();
Appearance31.setContainerField("appearance");
Material& Material32 =  Material();
Material32.setContainerField("material");
Appearance31.addChild(&Material32);

PixelTexture& PixelTexture33 =  PixelTexture();
PixelTexture33.setContainerField("texture");
PixelTexture33.setUSE(std::string("RgbOpacityCheckerboard"));
Appearance31.addChild(&PixelTexture33);

Shape30.addChild(&Appearance31);

Sphere& Sphere34 =  Sphere();
Shape30.setGeometry(&Sphere34);

Transform29.addChild(&Shape30);

Group22.addChild(&Transform29);

Transform& Transform35 =  Transform();
Transform35.setTranslation(new float[]{-1.47341,0.036672,-0.00175095});
Shape& Shape36 =  Shape();
Appearance& Appearance37 =  Appearance();
Appearance37.setContainerField("appearance");
Material& Material38 =  Material();
Material38.setContainerField("material");
Appearance37.addChild(&Material38);

PixelTexture& PixelTexture39 =  PixelTexture();
PixelTexture39.setContainerField("texture");
PixelTexture39.setUSE(std::string("RgbOpacityCheckerboard"));
Appearance37.addChild(&PixelTexture39);

Shape36.addChild(&Appearance37);

Cone& Cone40 =  Cone();
Shape36.setGeometry(&Cone40);

Transform35.addChild(&Shape36);

Group22.addChild(&Transform35);

Transform& Transform41 =  Transform();
Transform41.setTranslation(new float[]{2.31094,0.0694206,-0.00187683});
Shape& Shape42 =  Shape();
Appearance& Appearance43 =  Appearance();
Appearance43.setContainerField("appearance");
Material& Material44 =  Material();
Material44.setContainerField("material");
Appearance43.addChild(&Material44);

PixelTexture& PixelTexture45 =  PixelTexture();
PixelTexture45.setContainerField("texture");
PixelTexture45.setUSE(std::string("RgbOpacityCheckerboard"));
Appearance43.addChild(&PixelTexture45);

Shape42.addChild(&Appearance43);

Cylinder& Cylinder46 =  Cylinder();
Shape42.setGeometry(&Cylinder46);

Transform41.addChild(&Shape42);

Group22.addChild(&Transform41);

Scene20.addChild(&Group22);

X3D0.setScene(&Scene20);

}
