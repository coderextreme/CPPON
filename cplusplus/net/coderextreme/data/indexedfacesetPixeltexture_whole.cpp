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
meta2.setContent(std::string("indexedfaceset_pixeltexture_whole.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("warning"));
meta3.setContent(std::string("file did not transform to vrml97"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("Image"));
meta4.setContent(std::string("indexedfaceset_pixeltexture_whole-front.jpg"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("Image"));
meta5.setContent(std::string("indexedfaceset_pixeltexture_whole-rear.jpg"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("Image"));
meta6.setContent(std::string("indexedfaceset_pixeltexture_whole-top.jpg"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("Image"));
meta7.setContent(std::string("indexedfaceset_pixeltexture_whole-bottom.jpg"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("Image"));
meta8.setContent(std::string("indexedfaceset_pixeltexture_whole-left.jpg"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("Image"));
meta9.setContent(std::string("indexedfaceset_pixeltexture_whole-right.jpg"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("reference"));
meta10.setContent(std::string("http://www.nist.gov/vrml.html"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("reference"));
meta11.setContent(std::string("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("creator"));
meta12.setContent(std::string("http://www.itl.nist.gov/div897/ctg/vrml/members.html"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("disclaimer"));
meta13.setContent(std::string("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("info"));
meta14.setContent(std::string("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("translator"));
meta15.setContent(std::string("Michael Kass NIST, Don Brutzman NPS"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(std::string("translated"));
meta16.setContent(std::string("21 January 2001"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(std::string("modified"));
meta17.setContent(std::string("13 January 2014"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(std::string("description"));
meta18.setContent(std::string("Test of browser ability to map the entire portion of an PixelTexture onto an IndexedFaceSet geometry. Four equal sized red (bottom left), green (bottom right) yellow (top left) and white (top right) squares in the pixel texture map all the faces of the cube."));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(std::string("identifier"));
meta19.setContent(std::string("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_whole.x3d"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(std::string("generator"));
meta20.setContent(std::string("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(std::string("generator"));
meta21.setContent(std::string("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(std::string("license"));
meta22.setContent(std::string("../../license.html"));
head1.addMeta(&meta22);

X3D0.setHead(&head1);

Scene& Scene23 =  Scene();
Viewpoint& Viewpoint24 =  Viewpoint();
Viewpoint24.setDescription(std::string("Front View"));
Scene23.addChild(&Viewpoint24);

Viewpoint& Viewpoint25 =  Viewpoint();
Viewpoint25.setDescription(std::string("Rear View"));
Viewpoint25.setOrientation(new float[]{0.0,1.0,0.0,3.14});
Viewpoint25.setPosition(new float[]{0.0,0.0,-10.0});
Scene23.addChild(&Viewpoint25);

Viewpoint& Viewpoint26 =  Viewpoint();
Viewpoint26.setDescription(std::string("Top View"));
Viewpoint26.setOrientation(new float[]{1.0,0.0,0.0,-1.57});
Viewpoint26.setPosition(new float[]{0.0,10.0,0.0});
Scene23.addChild(&Viewpoint26);

Viewpoint& Viewpoint27 =  Viewpoint();
Viewpoint27.setDescription(std::string("Bottom View"));
Viewpoint27.setOrientation(new float[]{1.0,0.0,0.0,1.57});
Viewpoint27.setPosition(new float[]{0.0,-10.0,0.0});
Scene23.addChild(&Viewpoint27);

Viewpoint& Viewpoint28 =  Viewpoint();
Viewpoint28.setDescription(std::string("Right View"));
Viewpoint28.setOrientation(new float[]{0.0,1.0,0.0,1.57});
Viewpoint28.setPosition(new float[]{10.0,0.0,0.0});
Scene23.addChild(&Viewpoint28);

Viewpoint& Viewpoint29 =  Viewpoint();
Viewpoint29.setDescription(std::string("Left View"));
Viewpoint29.setOrientation(new float[]{0.0,1.0,0.0,-1.57});
Viewpoint29.setPosition(new float[]{-10.0,0.0,0.0});
Scene23.addChild(&Viewpoint29);

NavigationInfo& NavigationInfo30 =  NavigationInfo();
NavigationInfo30.setType(new std::string[]{"EXAMINE"}, 1);
Scene23.addChild(&NavigationInfo30);

//<Environment id=\"gamma\" gammaCorrectionDefault=\"none\"></Environment>
Shape& Shape31 =  Shape();
Appearance& Appearance32 =  Appearance();
Appearance32.setContainerField("appearance");
Material& Material33 =  Material();
Material33.setContainerField("material");
Appearance32.addChild(&Material33);

PixelTexture& PixelTexture34 =  PixelTexture();
PixelTexture34.setContainerField("texture");
PixelTexture34.setImage(std::string("2 2 4 4278190335 16711935 4294967295 4294902015"));
TextureProperties& TextureProperties35 =  TextureProperties();
TextureProperties35.setContainerField("textureProperties");
TextureProperties35.setMagnificationFilter(std::string("NEAREST_PIXEL"));
PixelTexture34.setTextureProperties(TextureProperties35);

Appearance32.addChild(&PixelTexture34);

Shape31.addChild(&Appearance32);

IndexedFaceSet& IndexedFaceSet36 =  IndexedFaceSet();
IndexedFaceSet36.setColorPerVertex(false);
IndexedFaceSet36.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
IndexedFaceSet36.setCreaseAngle(0.5);
IndexedFaceSet36.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
Color& Color37 =  Color();
Color37.setContainerField("color");
Color37.setColor(new float[]{0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0}, 18);
IndexedFaceSet36.setColor(Color37);

Coordinate& Coordinate38 =  Coordinate();
Coordinate38.setPoint(new float[]{-2.0,1.0,1.0,-2.0,-1.0,1.0,2.0,1.0,1.0,2.0,-1.0,1.0,2.0,1.0,-1.0,2.0,-1.0,-1.0,-2.0,1.0,-1.0,-2.0,-1.0,-1.0}, 24);
IndexedFaceSet36.setCoord(&Coordinate38);

TextureCoordinate& TextureCoordinate39 =  TextureCoordinate();
TextureCoordinate39.setContainerField("texCoord");
TextureCoordinate39.setPoint(new float[]{0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0}, 8);
IndexedFaceSet36.setTexCoord(&TextureCoordinate39);

Shape31.setGeometry(&IndexedFaceSet36);

Scene23.addChild(&Shape31);

X3D0.setScene(&Scene23);

}
