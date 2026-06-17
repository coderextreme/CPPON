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
X3D0.setVersion(std::string("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("MultiTextureDesignPattern.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("Design pattern for MultiTexture, MultiTextureCoordinate, MultiTextureTransform node correspondences"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("Don Brutzman"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("created"));
meta5.setContent(std::string("5 March 2011"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("modified"));
meta6.setContent(std::string("29 October 2023"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("TODO"));
meta7.setContent(std::string("X3D schematron rules for quality assurance"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("Image"));
meta8.setContent(std::string("MultiTextureDesignPatternSceneGraph.png"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("subject"));
meta9.setContent(std::string("MultiTexture, MultiTextureCoordinate, MultiTextureTransform"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("reference"));
meta10.setContent(std::string("https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/components/texturing.html#MultiTexture"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("identifier"));
meta11.setContent(std::string("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/TextureMapping/MultiTextureDesignPattern.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("reference"));
meta12.setContent(std::string("https://www.web3d.org/x3d/content/examples/X3dResources.html"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("generator"));
meta13.setContent(std::string("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("license"));
meta14.setContent(std::string("../license.html"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
//================================
WorldInfo& WorldInfo16 =  WorldInfo();
WorldInfo16.setTitle(std::string("MultiTextureDesignPattern.x3d"));
Scene15.addChild(&WorldInfo16);

Background& Background17 =  Background();
Background17.setSkyColor(new float[]{0.72549,1.0,0.721569}, 3);
Scene15.addChild(&Background17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setDescription(std::string("MultiTexture design pattern"));
Scene15.addChild(&Viewpoint18);

Shape& Shape19 =  Shape();
Text& Text20 =  Text();
Text20.setString((std::string[]){"Source shows design pattern for", "MultiTexture, MultiTextureCoordinate,", " and MultiTextureTransform nodes"}, 3);
CFontStyle& FontStyle21 =  CFontStyle();
FontStyle21.setJustify((std::string[]){"MIDDLE", "MIDDLE"}, 2);
FontStyle21.setSize(0.6);
Text20.setFontStyle(&FontStyle21);

Shape19.setGeometry(&Text20);

Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setDiffuseColor(new float[]{0.2,0.4,0.8});
Appearance22.addChild(&Material23);

Shape19.addChild(&Appearance22);

Scene15.addChild(&Shape19);

//================================
Shape& Shape24 =  Shape();
//add a single geometry node here
IndexedFaceSet& IndexedFaceSet25 =  IndexedFaceSet();
MultiTextureCoordinate& MultiTextureCoordinate26 =  MultiTextureCoordinate();
//add multiple TextureCoordinate nodes here, match corresponding MultiTexture child texture nodes
TextureCoordinate& TextureCoordinate27 =  TextureCoordinate();
TextureCoordinate27.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
MultiTextureCoordinate26.addTexCoord(TextureCoordinate27);

TextureCoordinate& TextureCoordinate28 =  TextureCoordinate();
TextureCoordinate28.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
MultiTextureCoordinate26.addTexCoord(TextureCoordinate28);

TextureCoordinate& TextureCoordinate29 =  TextureCoordinate();
TextureCoordinate29.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
MultiTextureCoordinate26.addTexCoord(TextureCoordinate29);

IndexedFaceSet25.setTexCoord(MultiTextureCoordinate26);

Shape24.setGeometry(&IndexedFaceSet25);

Appearance& Appearance30 =  Appearance();
Material& Material31 =  Material();
Appearance30.addChild(&Material31);

MultiTexture& MultiTexture32 =  MultiTexture();
MultiTexture32.setAlpha(0.8);
MultiTexture32.setColor(new float[]{0.9,1.0,0.2});
MultiTexture32.setFunction((std::string[]){"COMPLEMENT", "ALPHAREPLICATE"}, 2);
MultiTexture32.setMode((std::string[]){"MODULATE", "REPLACE", "BLENDDIFFUSEALPHA"}, 3);
MultiTexture32.setSource((std::string[]){"DIFFUSE", "SPECULAR", "FACTOR"}, 3);
//add multiple texture nodes here
ImageTexture& ImageTexture33 =  ImageTexture();
MultiTexture32.addTexture(ImageTexture33);

MovieTexture& MovieTexture34 =  MovieTexture();
MultiTexture32.addTexture(MovieTexture34);

PixelTexture& PixelTexture35 =  PixelTexture();
MultiTexture32.addTexture(PixelTexture35);

Appearance30.addChild(MultiTexture32);

MultiTextureTransform& MultiTextureTransform36 =  MultiTextureTransform();
//add multiple TextureTransform nodes here, match corresponding MultiTexture child texture nodes
TextureTransform& TextureTransform37 =  TextureTransform();
MultiTextureTransform36.addTextureTransform(TextureTransform37);

TextureTransform& TextureTransform38 =  TextureTransform();
MultiTextureTransform36.addTextureTransform(TextureTransform38);

TextureTransform& TextureTransform39 =  TextureTransform();
MultiTextureTransform36.addTextureTransform(TextureTransform39);

Appearance30.setTextureTransform(MultiTextureTransform36);

Shape24.addChild(&Appearance30);

Scene15.addChild(&Shape24);

X3D0.setScene(&Scene15);

//}
