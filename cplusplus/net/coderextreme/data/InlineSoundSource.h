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
X3D0.setProfile(std::string("Full"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("InlineSoundSource.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the \"url\" of X3D file."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("info"));
meta4.setContent(std::string("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("creator"));
meta5.setContent(std::string("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("created"));
meta6.setContent(std::string("28 October 2020"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("modified"));
meta7.setContent(std::string("4 August 2021"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("reference"));
meta8.setContent(std::string("CHANGELOG.txt"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("TODO"));
meta9.setContent(std::string("credit for audio files"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("reference"));
meta10.setContent(std::string("https://medialab.hmu.gr/minipages/x3domAudio"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("identifier"));
meta11.setContent(std::string("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("generator"));
meta12.setContent(std::string("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("license"));
meta13.setContent(std::string("../license.html"));
head1.addMeta(&meta13);

X3D0.setHead(&head1);

Scene& Scene14 =  Scene();
WorldInfo& WorldInfo15 =  WorldInfo();
WorldInfo15.setTitle(std::string("InlineSoundSource.x3d"));
Scene14.addChild(&WorldInfo15);

NavigationInfo& NavigationInfo16 =  NavigationInfo();
NavigationInfo16.setDEF(std::string("NAV"));
Scene14.addChild(&NavigationInfo16);

Background& Background17 =  Background();
Background17.setBackUrl((std::string[]){"images/generic/BK1.png", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"}, 2);
Background17.setBottomUrl((std::string[]){"images/generic/DN1.png", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"}, 2);
Background17.setFrontUrl((std::string[]){"images/generic/FR1.png", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"}, 2);
Background17.setLeftUrl((std::string[]){"images/generic/LF1.png", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"}, 2);
Background17.setRightUrl((std::string[]){"images/generic/RT1.png", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"}, 2);
Background17.setTopUrl((std::string[]){"images/generic/UP1.png", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"}, 2);
Scene14.addChild(&Background17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setDEF(std::string("Camera001"));
Viewpoint18.setDescription(std::string("Camera001"));
Viewpoint18.setFarDistance(0);
Viewpoint18.setNearDistance(1);
Viewpoint18.setOrientation(new float[]{1.0,0.0,0.0,-0.523599});
Viewpoint18.setPosition(new float[]{0.0,2000.0,3500.0});
Scene14.addChild(&Viewpoint18);

Transform& Transform19 =  Transform();
Transform19.setDEF(std::string("Floor"));
Transform19.setTranslation(new float[]{1.241,0.0,0.358});
Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
Appearance21.setDEF(std::string("WireColor"));
Material& Material22 =  Material();
Material22.setDiffuseColor(new float[]{0.122,0.114,0.125});
Appearance21.addChild(&Material22);

Shape20.addChild(&Appearance21);

IndexedFaceSet& IndexedFaceSet23 =  IndexedFaceSet();
IndexedFaceSet23.setDEF(std::string("Box001-GEOMETRY"));
IndexedFaceSet23.setCoordIndex(new int32_t[]{0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,15,16,17,-1,18,19,20,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,34,35,-1}, 48);
IndexedFaceSet23.setSolid(false);
Coordinate& Coordinate24 =  Coordinate();
Coordinate24.setPoint(new float[]{-1000.0,0.0,1000.0,-1000.0,0.0,-1000.0,1000.0,0.0,-1000.0,1000.0,0.0,-1000.0,1000.0,0.0,1000.0,-1000.0,0.0,1000.0,-1000.0,8.031588,1000.0,1000.0,8.031588,1000.0,1000.0,8.031588,-1000.0,1000.0,8.031588,-1000.0,-1000.0,8.031588,-1000.0,-1000.0,8.031588,1000.0,-1000.0,0.0,1000.0,1000.0,0.0,1000.0,1000.0,8.031588,1000.0,1000.0,8.031588,1000.0,-1000.0,8.031588,1000.0,-1000.0,0.0,1000.0,1000.0,0.0,1000.0,1000.0,0.0,-1000.0,1000.0,8.031588,-1000.0,1000.0,8.031588,-1000.0,1000.0,8.031588,1000.0,1000.0,0.0,1000.0,1000.0,0.0,-1000.0,-1000.0,0.0,-1000.0,-1000.0,8.031588,-1000.0,-1000.0,8.031588,-1000.0,1000.0,8.031588,-1000.0,1000.0,0.0,-1000.0,-1000.0,0.0,-1000.0,-1000.0,0.0,1000.0,-1000.0,8.031588,1000.0,-1000.0,8.031588,1000.0,-1000.0,8.031588,-1000.0,-1000.0,0.0,-1000.0}, 108);
IndexedFaceSet23.setCoord(&Coordinate24);

Normal& Normal25 =  Normal();
Normal25.setVector(new float[]{0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0}, 108);
IndexedFaceSet23.setNormal(&Normal25);

Shape20.setGeometry(&IndexedFaceSet23);

Transform19.addChild(&Shape20);

Scene14.addChild(&Transform19);

Transform& Transform26 =  Transform();
Transform26.setDEF(std::string("InlineScene"));
Inline& Inline27 =  Inline();
Inline27.setDEF(std::string("inline"));
Inline27.setUrl((std::string[]){"x3d/example1.x3d", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d", "x3d/example1.wrl", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl"}, 4);
Transform26.addChild(&Inline27);

Scene14.addChild(&Transform26);

X3D0.setScene(&Scene14);

//}
