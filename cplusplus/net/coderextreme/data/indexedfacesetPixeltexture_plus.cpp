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
int indexedfacesetPixeltexture_plus(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Interchange"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("indexedfaceset_pixeltexture_plus.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("Image"));
meta3.setContent(std::string("indexedfaceset_pixeltexture_plus-front.jpg"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("Image"));
meta4.setContent(std::string("indexedfaceset_pixeltexture_plus-rear.jpg"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("Image"));
meta5.setContent(std::string("indexedfaceset_pixeltexture_plus-top.jpg"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("Image"));
meta6.setContent(std::string("indexedfaceset_pixeltexture_plus-bottom.jpg"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("Image"));
meta7.setContent(std::string("indexedfaceset_pixeltexture_plus-left.jpg"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("Image"));
meta8.setContent(std::string("indexedfaceset_pixeltexture_plus-right.jpg"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("reference"));
meta9.setContent(std::string("http://www.nist.gov/vrml.html"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("reference"));
meta10.setContent(std::string("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("creator"));
meta11.setContent(std::string("http://www.itl.nist.gov/div897/ctg/vrml/members.html"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("disclaimer"));
meta12.setContent(std::string("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("info"));
meta13.setContent(std::string("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("translator"));
meta14.setContent(std::string("Michael Kass NIST, Don Brutzman NPS"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("translated"));
meta15.setContent(std::string("21 January 2001"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(std::string("modified"));
meta16.setContent(std::string("13 January 2014"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(std::string("description"));
meta17.setContent(std::string("Test of browser ability to map a 3 times multiple of an PixelTexture onto an IndexedFaceSet geometry. A 3 by 3 matrix of four equal sized red, green, white and yellow squares in the pixel texture map all the faces of the cube."));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(std::string("identifier"));
meta18.setContent(std::string("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plus.x3d"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(std::string("generator"));
meta19.setContent(std::string("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(std::string("generator"));
meta20.setContent(std::string("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(std::string("license"));
meta21.setContent(std::string("../../license.html"));
head1.addMeta(&meta21);

X3D0.setHead(&head1);

Scene& Scene22 =  Scene();
Viewpoint& Viewpoint23 =  Viewpoint();
Viewpoint23.setDescription(std::string("Front View"));
Scene22.addChild(&Viewpoint23);

Viewpoint& Viewpoint24 =  Viewpoint();
Viewpoint24.setDescription(std::string("Rear View"));
Viewpoint24.setOrientation(new float[]{0.0,1.0,0.0,3.14});
Viewpoint24.setPosition(new float[]{0.0,0.0,-10.0});
Scene22.addChild(&Viewpoint24);

Viewpoint& Viewpoint25 =  Viewpoint();
Viewpoint25.setDescription(std::string("Top View"));
Viewpoint25.setOrientation(new float[]{1.0,0.0,0.0,-1.57});
Viewpoint25.setPosition(new float[]{0.0,10.0,0.0});
Scene22.addChild(&Viewpoint25);

Viewpoint& Viewpoint26 =  Viewpoint();
Viewpoint26.setDescription(std::string("Bottom View"));
Viewpoint26.setOrientation(new float[]{1.0,0.0,0.0,1.57});
Viewpoint26.setPosition(new float[]{0.0,-10.0,0.0});
Scene22.addChild(&Viewpoint26);

Viewpoint& Viewpoint27 =  Viewpoint();
Viewpoint27.setDescription(std::string("Right View"));
Viewpoint27.setOrientation(new float[]{0.0,1.0,0.0,1.57});
Viewpoint27.setPosition(new float[]{10.0,0.0,0.0});
Scene22.addChild(&Viewpoint27);

Viewpoint& Viewpoint28 =  Viewpoint();
Viewpoint28.setDescription(std::string("Left View"));
Viewpoint28.setOrientation(new float[]{0.0,1.0,0.0,-1.57});
Viewpoint28.setPosition(new float[]{-10.0,0.0,0.0});
Scene22.addChild(&Viewpoint28);

NavigationInfo& NavigationInfo29 =  NavigationInfo();
NavigationInfo29.setType((std::string[]){"EXAMINE", "WALK", "FLY", "ANY"}, 4);
Scene22.addChild(&NavigationInfo29);

//<Environment id=\"gamma\" gammaCorrectionDefault=\"none\"></Environment>
Shape& Shape30 =  Shape();
Appearance& Appearance31 =  Appearance();
Material& Material32 =  Material();
Appearance31.addChild(&Material32);

PixelTexture& PixelTexture33 =  PixelTexture();
PixelTexture33.setImage(std::string("2 2 4 4278190335 16711935 4294967295 4294902015"));
TextureProperties& TextureProperties34 =  TextureProperties();
TextureProperties34.setMagnificationFilter(std::string("NEAREST_PIXEL"));
PixelTexture33.setTextureProperties(TextureProperties34);

Appearance31.addChild(&PixelTexture33);

Shape30.addChild(&Appearance31);

IndexedFaceSet& IndexedFaceSet35 =  IndexedFaceSet();
IndexedFaceSet35.setColorPerVertex(false);
IndexedFaceSet35.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
IndexedFaceSet35.setCreaseAngle(0.5);
IndexedFaceSet35.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
CColor& Color36 =  CColor();
Color36.setColor(new float[]{0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0}, 18);
IndexedFaceSet35.setColor(&Color36);

Coordinate& Coordinate37 =  Coordinate();
Coordinate37.setPoint(new float[]{-2.0,1.0,1.0,-2.0,-1.0,1.0,2.0,1.0,1.0,2.0,-1.0,1.0,2.0,1.0,-1.0,2.0,-1.0,-1.0,-2.0,1.0,-1.0,-2.0,-1.0,-1.0}, 24);
IndexedFaceSet35.setCoord(&Coordinate37);

TextureCoordinate& TextureCoordinate38 =  TextureCoordinate();
TextureCoordinate38.setPoint(new float[]{-1.0,2.0,-1.0,-1.0,2.0,2.0,2.0,-1.0}, 8);
IndexedFaceSet35.setTexCoord(&TextureCoordinate38);

Shape30.setGeometry(&IndexedFaceSet35);

Scene22.addChild(&Shape30);

X3D0.setScene(&Scene22);

}
