#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void indexedfacesetPixeltexture_entire(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Interchange"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("indexedfaceset_pixeltexture_entire.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("reference"));
meta3.setContent(std::string("http://www.nist.gov/vrml.html"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("reference"));
meta4.setContent(std::string("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("creator"));
meta5.setContent(std::string("http://www.itl.nist.gov/div897/ctg/vrml/members.html"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("disclaimer"));
meta6.setContent(std::string("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("info"));
meta7.setContent(std::string("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("translator"));
meta8.setContent(std::string("Michael Kass NIST, Don Brutzman NPS"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("translated"));
meta9.setContent(std::string("21 January 2001"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("modified"));
meta10.setContent(std::string("13 January 2014"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("description"));
meta11.setContent(std::string("Test browser ability to completely map one PixelTexture onto the surface of an IndexedFaceSet geometry. Four colored squares should map onto each face of the IndexedFaceSet. The PixelTexture consists of red quarter (lower left), green quarter (lower right), white quarter (upper left) and yellow quarter (upper right). PixelTexture should map once onto the surface of the IndexedFaceSet, with the S (horizontal) axis of the texture corresponding to the X axis of the geometry."));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("identifier"));
meta12.setContent(std::string("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("generator"));
meta13.setContent(std::string("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("generator"));
meta14.setContent(std::string("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("license"));
meta15.setContent(std::string("../../license.html"));
head1.addMeta(&meta15);

X3D0.setHead(&head1);

Scene& Scene16 =  Scene();
Viewpoint& Viewpoint17 =  Viewpoint();
Viewpoint17.setDescription(std::string("Front View"));
Scene16.addChild(&Viewpoint17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setDescription(std::string("Rear View"));
Viewpoint18.setOrientation(new float[]{0.0,1.0,0.0,3.14});
Viewpoint18.setPosition(new float[]{0.0,0.0,-10.0});
Scene16.addChild(&Viewpoint18);

Viewpoint& Viewpoint19 =  Viewpoint();
Viewpoint19.setDescription(std::string("Top View"));
Viewpoint19.setOrientation(new float[]{1.0,0.0,0.0,-1.57});
Viewpoint19.setPosition(new float[]{0.0,10.0,0.0});
Scene16.addChild(&Viewpoint19);

Viewpoint& Viewpoint20 =  Viewpoint();
Viewpoint20.setDescription(std::string("Bottom View"));
Viewpoint20.setOrientation(new float[]{1.0,0.0,0.0,1.57});
Viewpoint20.setPosition(new float[]{0.0,-10.0,0.0});
Scene16.addChild(&Viewpoint20);

Viewpoint& Viewpoint21 =  Viewpoint();
Viewpoint21.setDescription(std::string("Right View"));
Viewpoint21.setOrientation(new float[]{0.0,1.0,0.0,1.57});
Viewpoint21.setPosition(new float[]{10.0,0.0,0.0});
Scene16.addChild(&Viewpoint21);

Viewpoint& Viewpoint22 =  Viewpoint();
Viewpoint22.setDescription(std::string("Left View"));
Viewpoint22.setOrientation(new float[]{0.0,1.0,0.0,-1.57});
Viewpoint22.setPosition(new float[]{-10.0,0.0,0.0});
Scene16.addChild(&Viewpoint22);

NavigationInfo& NavigationInfo23 =  NavigationInfo();
NavigationInfo23.setType(new std::string[]{"EXAMINE", "WALK", "FLY", "ANY"}, 4);
Scene16.addChild(&NavigationInfo23);

//<Environment id=\"gamma\" gammaCorrectionDefault=\"none\"></Environment>
Shape& Shape24 =  Shape();
Appearance& Appearance25 =  Appearance();
Appearance25.setContainerField("appearance");
Material& Material26 =  Material();
Material26.setContainerField("material");
Appearance25.addChild(&Material26);

PixelTexture& PixelTexture27 =  PixelTexture();
PixelTexture27.setContainerField("texture");
PixelTexture27.setImage(std::string("2 2 4 4278190335 16711935 4294967295 4294902015"));
PixelTexture27.setRepeatS(false);
PixelTexture27.setRepeatT(false);
TextureProperties& TextureProperties28 =  TextureProperties();
TextureProperties28.setContainerField("textureProperties");
TextureProperties28.setMagnificationFilter(std::string("NEAREST_PIXEL"));
PixelTexture27.setTextureProperties(TextureProperties28);

Appearance25.addChild(&PixelTexture27);

Shape24.addChild(&Appearance25);

IndexedFaceSet& IndexedFaceSet29 =  IndexedFaceSet();
IndexedFaceSet29.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
Coordinate& Coordinate30 =  Coordinate();
Coordinate30.setPoint(new float[]{-2.0,1.5,1.0,-2.0,-1.5,1.0,2.0,1.5,1.0,2.0,-1.5,1.0,2.0,1.5,-1.0,2.0,-1.5,-1.0,-2.0,1.5,-1.0,-2.0,-1.5,-1.0}, 24);
IndexedFaceSet29.setCoord(&Coordinate30);

Shape24.setGeometry(&IndexedFaceSet29);

Scene16.addChild(&Shape24);

X3D0.setScene(&Scene16);

//}
