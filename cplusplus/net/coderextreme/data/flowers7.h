#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void flowers7(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(std::string("Scripting"));
component2.setLevel(1);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(std::string("EnvironmentalEffects"));
component3.setLevel(3);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(std::string("Shaders"));
component4.setLevel(1);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(std::string("CubeMapTexturing"));
component5.setLevel(1);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(std::string("Texturing"));
component6.setLevel(1);
head1.addChild(&component6);

component& component7 =  component();
component7.setName(std::string("Rendering"));
component7.setLevel(1);
head1.addChild(&component7);

component& component8 =  component();
component8.setName(std::string("Shape"));
component8.setLevel(4);
head1.addChild(&component8);

component& component9 =  component();
component9.setName(std::string("Grouping"));
component9.setLevel(3);
head1.addChild(&component9);

component& component10 =  component();
component10.setName(std::string("Core"));
component10.setLevel(1);
head1.addChild(&component10);

meta& meta11 =  meta();
meta11.setName(std::string("title"));
meta11.setContent(std::string("flowers7.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("creator"));
meta12.setContent(std::string("John Carlson"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("generator"));
meta13.setContent(std::string("manual"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("identifier"));
meta14.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("description"));
meta15.setContent(std::string("a flower"));
head1.addMeta(&meta15);

X3D0.setHead(&head1);

Scene& Scene16 =  Scene();
NavigationInfo& NavigationInfo17 =  NavigationInfo();
Scene16.addChild(&NavigationInfo17);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background& Background18 =  Background();
Background18.setDEF(std::string("background"));
Background18.setBackUrl(new std::string[]{"../resources/images/all_probes/beach_cross/beach_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
Background18.setBottomUrl(new std::string[]{"../resources/images/all_probes/beach_cross/beach_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
Background18.setFrontUrl(new std::string[]{"../resources/images/all_probes/beach_cross/beach_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
Background18.setLeftUrl(new std::string[]{"../resources/images/all_probes/beach_cross/beach_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
Background18.setRightUrl(new std::string[]{"../resources/images/all_probes/beach_cross/beach_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
Background18.setTopUrl(new std::string[]{"../resources/images/all_probes/beach_cross/beach_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
Scene16.addChild(&Background18);

Viewpoint& Viewpoint19 =  Viewpoint();
Viewpoint19.setPosition(new float[]{0.0,0.0,40.0});
Viewpoint19.setDescription(std::string("Transparent rose"));
Scene16.addChild(&Viewpoint19);

Transform& Transform20 =  Transform();
Shape& Shape21 =  Shape();
Appearance& Appearance22 =  Appearance();
Appearance22.setContainerField("appearance");
Material& Material23 =  Material();
Material23.setContainerField("material");
Material23.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material23.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance22.addChild(&Material23);

ComposedCubeMapTexture& ComposedCubeMapTexture24 =  ComposedCubeMapTexture();
ComposedCubeMapTexture24.setContainerField("texture");
ComposedCubeMapTexture24.setDEF(std::string("texture"));
ImageTexture& ImageTexture25 =  ImageTexture();
ImageTexture25.setContainerField("backTexture");
ImageTexture25.setDEF(std::string("backShader"));
ImageTexture25.setUrl(new std::string[]{"../resources/images/all_probes/beach_cross/beach_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
ComposedCubeMapTexture24.setBack(ImageTexture25);

ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setContainerField("bottomTexture");
ImageTexture26.setDEF(std::string("bottomShader"));
ImageTexture26.setUrl(new std::string[]{"../resources/images/all_probes/beach_cross/beach_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
ComposedCubeMapTexture24.setBottom(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setContainerField("frontTexture");
ImageTexture27.setDEF(std::string("frontShader"));
ImageTexture27.setUrl(new std::string[]{"../resources/images/all_probes/beach_cross/beach_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
ComposedCubeMapTexture24.setFront(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setContainerField("leftTexture");
ImageTexture28.setDEF(std::string("leftShader"));
ImageTexture28.setUrl(new std::string[]{"../resources/images/all_probes/beach_cross/beach_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
ComposedCubeMapTexture24.setLeft(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setContainerField("rightTexture");
ImageTexture29.setDEF(std::string("rightShader"));
ImageTexture29.setUrl(new std::string[]{"../resources/images/all_probes/beach_cross/beach_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
ComposedCubeMapTexture24.setRight(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setContainerField("topTexture");
ImageTexture30.setDEF(std::string("topShader"));
ImageTexture30.setUrl(new std::string[]{"../resources/images/all_probes/beach_cross/beach_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
ComposedCubeMapTexture24.setTop(ImageTexture30);

Appearance22.addChild(&ComposedCubeMapTexture24);

ComposedShader& ComposedShader31 =  ComposedShader();
ComposedShader31.setDEF(std::string("x3dom"));
ComposedShader31.setLanguage(std::string("GLSL"));
//TODO VERIFY
//<field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field>
field& field32 =  field();
field32.setName(std::string("cube"));
field32.setType(std::string("SFNode"));
field32.setAccessType(std::string("inputOutput"));
ComposedCubeMapTexture& ComposedCubeMapTexture33 =  ComposedCubeMapTexture();
ComposedCubeMapTexture33.setUSE(std::string("texture"));
field32.addChild(&ComposedCubeMapTexture33);

ComposedShader31.addChild(&field32);

field& field34 =  field();
field34.setName(std::string("chromaticDispertion"));
field34.setAccessType(std::string("initializeOnly"));
field34.setType(std::string("SFVec3f"));
field34.setValue(std::string("0.98 1 1.033"));
ComposedShader31.addChild(&field34);

field& field35 =  field();
field35.setName(std::string("bias"));
field35.setType(std::string("SFFloat"));
field35.setAccessType(std::string("inputOutput"));
field35.setValue(std::string("0.5"));
ComposedShader31.addChild(&field35);

field& field36 =  field();
field36.setName(std::string("scale"));
field36.setType(std::string("SFFloat"));
field36.setAccessType(std::string("inputOutput"));
field36.setValue(std::string("0.5"));
ComposedShader31.addChild(&field36);

field& field37 =  field();
field37.setName(std::string("power"));
field37.setType(std::string("SFFloat"));
field37.setAccessType(std::string("inputOutput"));
field37.setValue(std::string("2"));
ComposedShader31.addChild(&field37);

field& field38 =  field();
field38.setName(std::string("a"));
field38.setType(std::string("SFFloat"));
field38.setAccessType(std::string("inputOutput"));
field38.setValue(std::string("10"));
ComposedShader31.addChild(&field38);

field& field39 =  field();
field39.setName(std::string("b"));
field39.setType(std::string("SFFloat"));
field39.setAccessType(std::string("inputOutput"));
field39.setValue(std::string("1"));
ComposedShader31.addChild(&field39);

field& field40 =  field();
field40.setName(std::string("c"));
field40.setType(std::string("SFFloat"));
field40.setAccessType(std::string("inputOutput"));
field40.setValue(std::string("20"));
ComposedShader31.addChild(&field40);

field& field41 =  field();
field41.setName(std::string("d"));
field41.setType(std::string("SFFloat"));
field41.setAccessType(std::string("inputOutput"));
field41.setValue(std::string("20"));
ComposedShader31.addChild(&field41);

field& field42 =  field();
field42.setName(std::string("tdelta"));
field42.setType(std::string("SFFloat"));
field42.setAccessType(std::string("inputOutput"));
field42.setValue(std::string("0"));
ComposedShader31.addChild(&field42);

field& field43 =  field();
field43.setName(std::string("pdelta"));
field43.setType(std::string("SFFloat"));
field43.setAccessType(std::string("inputOutput"));
field43.setValue(std::string("0"));
ComposedShader31.addChild(&field43);

ShaderPart& ShaderPart44 =  ShaderPart();
ShaderPart44.setUrl(new std::string[]{"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"}, 2);
ShaderPart44.setType(std::string("VERTEX"));
ComposedShader31.setParts(&ShaderPart44);

ShaderPart& ShaderPart45 =  ShaderPart();
ShaderPart45.setUrl(new std::string[]{"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"}, 2);
ShaderPart45.setType(std::string("FRAGMENT"));
ComposedShader31.setParts(&ShaderPart45);

Appearance22.addChild(&ComposedShader31);

ComposedShader& ComposedShader46 =  ComposedShader();
ComposedShader46.setDEF(std::string("x_ite"));
ComposedShader46.setLanguage(std::string("GLSL"));
field& field47 =  field();
field47.setName(std::string("cube"));
field47.setType(std::string("SFNode"));
field47.setAccessType(std::string("inputOutput"));
ComposedCubeMapTexture& ComposedCubeMapTexture48 =  ComposedCubeMapTexture();
ComposedCubeMapTexture48.setUSE(std::string("texture"));
field47.addChild(&ComposedCubeMapTexture48);

ComposedShader46.addChild(&field47);

field& field49 =  field();
field49.setName(std::string("chromaticDispertion"));
field49.setAccessType(std::string("initializeOnly"));
field49.setType(std::string("SFVec3f"));
field49.setValue(std::string("0.98 1 1.033"));
ComposedShader46.addChild(&field49);

field& field50 =  field();
field50.setName(std::string("bias"));
field50.setType(std::string("SFFloat"));
field50.setAccessType(std::string("inputOnly"));
field50.setValue(std::string("0.5"));
ComposedShader46.addChild(&field50);

field& field51 =  field();
field51.setName(std::string("scale"));
field51.setType(std::string("SFFloat"));
field51.setAccessType(std::string("inputOnly"));
field51.setValue(std::string("0.5"));
ComposedShader46.addChild(&field51);

field& field52 =  field();
field52.setName(std::string("power"));
field52.setType(std::string("SFFloat"));
field52.setAccessType(std::string("inputOnly"));
field52.setValue(std::string("2"));
ComposedShader46.addChild(&field52);

field& field53 =  field();
field53.setName(std::string("a"));
field53.setType(std::string("SFFloat"));
field53.setAccessType(std::string("inputOnly"));
field53.setValue(std::string("10"));
ComposedShader46.addChild(&field53);

field& field54 =  field();
field54.setName(std::string("b"));
field54.setType(std::string("SFFloat"));
field54.setAccessType(std::string("inputOnly"));
field54.setValue(std::string("1"));
ComposedShader46.addChild(&field54);

field& field55 =  field();
field55.setName(std::string("c"));
field55.setType(std::string("SFFloat"));
field55.setAccessType(std::string("inputOnly"));
field55.setValue(std::string("20"));
ComposedShader46.addChild(&field55);

field& field56 =  field();
field56.setName(std::string("d"));
field56.setType(std::string("SFFloat"));
field56.setAccessType(std::string("inputOnly"));
field56.setValue(std::string("20"));
ComposedShader46.addChild(&field56);

field& field57 =  field();
field57.setName(std::string("tdelta"));
field57.setType(std::string("SFFloat"));
field57.setAccessType(std::string("inputOnly"));
field57.setValue(std::string("0"));
ComposedShader46.addChild(&field57);

field& field58 =  field();
field58.setName(std::string("pdelta"));
field58.setType(std::string("SFFloat"));
field58.setAccessType(std::string("inputOnly"));
field58.setValue(std::string("0"));
ComposedShader46.addChild(&field58);

ShaderPart& ShaderPart59 =  ShaderPart();
ShaderPart59.setUrl(new std::string[]{"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"}, 2);
ShaderPart59.setType(std::string("VERTEX"));
ComposedShader46.setParts(&ShaderPart59);

ShaderPart& ShaderPart60 =  ShaderPart();
ShaderPart60.setUrl(new std::string[]{"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}, 2);
ShaderPart60.setType(std::string("FRAGMENT"));
ComposedShader46.setParts(&ShaderPart60);

Appearance22.addChild(&ComposedShader46);

Shape21.addChild(&Appearance22);

Sphere& Sphere61 =  Sphere();
Shape21.setGeometry(&Sphere61);

Transform20.addChild(&Shape21);

Scene16.addChild(&Transform20);

Script& Script62 =  Script();
Script62.setDEF(std::string("UrlSelector"));
Script62.setDirectOutput(true);
field& field63 =  field();
field63.setName(std::string("frontUrls"));
field63.setType(std::string("MFString"));
field63.setAccessType(std::string("initializeOnly"));
field63.setValue(std::string("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png\""));
Script62.addChild(&field63);

field& field64 =  field();
field64.setName(std::string("backUrls"));
field64.setType(std::string("MFString"));
field64.setAccessType(std::string("initializeOnly"));
field64.setValue(std::string("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png\""));
Script62.addChild(&field64);

field& field65 =  field();
field65.setName(std::string("leftUrls"));
field65.setType(std::string("MFString"));
field65.setAccessType(std::string("initializeOnly"));
field65.setValue(std::string("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png\""));
Script62.addChild(&field65);

field& field66 =  field();
field66.setName(std::string("rightUrls"));
field66.setType(std::string("MFString"));
field66.setAccessType(std::string("initializeOnly"));
field66.setValue(std::string("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png\""));
Script62.addChild(&field66);

field& field67 =  field();
field67.setName(std::string("topUrls"));
field67.setType(std::string("MFString"));
field67.setAccessType(std::string("initializeOnly"));
field67.setValue(std::string("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png\""));
Script62.addChild(&field67);

field& field68 =  field();
field68.setName(std::string("bottomUrls"));
field68.setType(std::string("MFString"));
field68.setAccessType(std::string("initializeOnly"));
field68.setValue(std::string("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""));
Script62.addChild(&field68);

field& field69 =  field();
field69.setName(std::string("front"));
field69.setType(std::string("MFString"));
field69.setAccessType(std::string("inputOutput"));
Script62.addChild(&field69);

field& field70 =  field();
field70.setName(std::string("back"));
field70.setType(std::string("MFString"));
field70.setAccessType(std::string("inputOutput"));
Script62.addChild(&field70);

field& field71 =  field();
field71.setName(std::string("left"));
field71.setType(std::string("MFString"));
field71.setAccessType(std::string("inputOutput"));
Script62.addChild(&field71);

field& field72 =  field();
field72.setName(std::string("right"));
field72.setType(std::string("MFString"));
field72.setAccessType(std::string("inputOutput"));
Script62.addChild(&field72);

field& field73 =  field();
field73.setName(std::string("top"));
field73.setType(std::string("MFString"));
field73.setAccessType(std::string("inputOutput"));
Script62.addChild(&field73);

field& field74 =  field();
field74.setName(std::string("bottom"));
field74.setType(std::string("MFString"));
field74.setAccessType(std::string("inputOutput"));
Script62.addChild(&field74);

field& field75 =  field();
field75.setName(std::string("set_fraction"));
field75.setType(std::string("SFFloat"));
field75.setAccessType(std::string("inputOnly"));
Script62.addChild(&field75);

field& field76 =  field();
field76.setName(std::string("old"));
field76.setType(std::string("SFInt32"));
field76.setAccessType(std::string("inputOutput"));
field76.setValue(std::string("-1"));
Script62.addChild(&field76);


//Script62.setSourceCode(std::string("ecmascript:")+
//_T("        function set_fraction( f, tm ) {")+
//_T("            var side = Math.floor(f*frontUrls.length);")+
//_T("            if (side > frontUrls.length-1) {")+
//_T("                side = 0;")+
//_T("            }")+
//_T("            if (side != old) {")+
//_T("                    old = side;")+
//_T("                    front[0] = frontUrls[side];")+
//_T("                    back[0] = backUrls[side];")+
//_T("                    left[0] = leftUrls[side];")+
//_T("                    right[0] = rightUrls[side];")+
//_T("                    top[0] = topUrls[side];")+
//_T("                    bottom[0] = bottomUrls[side];")+
//_T("            }")+
//_T("        }"));
Scene16.addChild(&Script62);

//<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/>
//<ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/>
//<ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/>
//<ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/>
//<ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/>
//<ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/>
//<ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/>
//<ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/>
//<ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/>
//<ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/>
//<ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/>
//<ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/>
//<ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/>
//<ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
Script& Script77 =  Script();
Script77.setDEF(std::string("Animate"));
Script77.setDirectOutput(true);
field& field78 =  field();
field78.setName(std::string("set_fraction"));
field78.setType(std::string("SFFloat"));
field78.setAccessType(std::string("inputOnly"));
Script77.addChild(&field78);

field& field79 =  field();
field79.setName(std::string("a"));
field79.setType(std::string("SFFloat"));
field79.setAccessType(std::string("inputOutput"));
field79.setValue(std::string("10"));
Script77.addChild(&field79);

field& field80 =  field();
field80.setName(std::string("b"));
field80.setType(std::string("SFFloat"));
field80.setAccessType(std::string("inputOutput"));
field80.setValue(std::string("1"));
Script77.addChild(&field80);

field& field81 =  field();
field81.setName(std::string("c"));
field81.setType(std::string("SFFloat"));
field81.setAccessType(std::string("inputOutput"));
field81.setValue(std::string("20"));
Script77.addChild(&field81);

field& field82 =  field();
field82.setName(std::string("d"));
field82.setType(std::string("SFFloat"));
field82.setAccessType(std::string("inputOutput"));
field82.setValue(std::string("20"));
Script77.addChild(&field82);

field& field83 =  field();
field83.setName(std::string("tdelta"));
field83.setType(std::string("SFFloat"));
field83.setAccessType(std::string("inputOutput"));
field83.setValue(std::string("0"));
Script77.addChild(&field83);

field& field84 =  field();
field84.setName(std::string("pdelta"));
field84.setType(std::string("SFFloat"));
field84.setAccessType(std::string("inputOutput"));
field84.setValue(std::string("0"));
Script77.addChild(&field84);


//Script77.setSourceCode(std::string("ecmascript:")+
//_T("function set_fraction() {")+
//_T("	var choice = Math.floor(Math.random() * 4);")+
//_T("	switch (choice) {")+
//_T("	case 0:")+
//_T("		a = a + Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("		break;")+
//_T("	case 1:")+
//_T("		b = b + Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("		break;")+
//_T("	case 2:")+
//_T("		c = c + Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("		break;")+
//_T("	case 3:")+
//_T("		d = d + Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("		break;")+
//_T("	}")+
//_T("	tdelta = tdelta + 0.5;")+
//_T("	pdelta = pdelta + 0.5;")+
//_T("	if (a < 1) {")+
//_T("		a = 10;")+
//_T("	}")+
//_T("	if (b < 1) {")+
//_T("		b = 10;")+
//_T("	}")+
//_T("	if (c < 1) {")+
//_T("		c = 4;")+
//_T("	}")+
//_T("	if (c > 20) {")+
//_T("		c = 4;")+
//_T("	}")+
//_T("	if (d < 1) {")+
//_T("		d = 4;")+
//_T("	}")+
//_T("	if (d > 20) {")+
//_T("		d = 4;")+
//_T("	}")+
//_T("}"));
Scene16.addChild(&Script77);

TimeSensor& TimeSensor85 =  TimeSensor();
TimeSensor85.setDEF(std::string("TourTime"));
TimeSensor85.setCycleInterval(5);
TimeSensor85.setLoop(true);
Scene16.addChild(&TimeSensor85);

ROUTE& ROUTE86 =  ROUTE();
ROUTE86.setFromNode(std::string("TourTime"));
ROUTE86.setFromField(std::string("fraction_changed"));
ROUTE86.setToNode(std::string("Animate"));
ROUTE86.setToField(std::string("set_fraction"));
Scene16.addChild(&ROUTE86);

ROUTE& ROUTE87 =  ROUTE();
ROUTE87.setFromNode(std::string("Animate"));
ROUTE87.setFromField(std::string("a"));
ROUTE87.setToNode(std::string("x_ite"));
ROUTE87.setToField(std::string("a"));
Scene16.addChild(&ROUTE87);

ROUTE& ROUTE88 =  ROUTE();
ROUTE88.setFromNode(std::string("Animate"));
ROUTE88.setFromField(std::string("b"));
ROUTE88.setToNode(std::string("x_ite"));
ROUTE88.setToField(std::string("b"));
Scene16.addChild(&ROUTE88);

ROUTE& ROUTE89 =  ROUTE();
ROUTE89.setFromNode(std::string("Animate"));
ROUTE89.setFromField(std::string("c"));
ROUTE89.setToNode(std::string("x_ite"));
ROUTE89.setToField(std::string("c"));
Scene16.addChild(&ROUTE89);

ROUTE& ROUTE90 =  ROUTE();
ROUTE90.setFromNode(std::string("Animate"));
ROUTE90.setFromField(std::string("d"));
ROUTE90.setToNode(std::string("x_ite"));
ROUTE90.setToField(std::string("d"));
Scene16.addChild(&ROUTE90);

ROUTE& ROUTE91 =  ROUTE();
ROUTE91.setFromNode(std::string("Animate"));
ROUTE91.setFromField(std::string("pdelta"));
ROUTE91.setToNode(std::string("x_ite"));
ROUTE91.setToField(std::string("pdelta"));
Scene16.addChild(&ROUTE91);

ROUTE& ROUTE92 =  ROUTE();
ROUTE92.setFromNode(std::string("Animate"));
ROUTE92.setFromField(std::string("tdelta"));
ROUTE92.setToNode(std::string("x_ite"));
ROUTE92.setToField(std::string("tdelta"));
Scene16.addChild(&ROUTE92);

ROUTE& ROUTE93 =  ROUTE();
ROUTE93.setFromNode(std::string("Animate"));
ROUTE93.setFromField(std::string("a"));
ROUTE93.setToNode(std::string("x3dom"));
ROUTE93.setToField(std::string("a"));
Scene16.addChild(&ROUTE93);

ROUTE& ROUTE94 =  ROUTE();
ROUTE94.setFromNode(std::string("Animate"));
ROUTE94.setFromField(std::string("b"));
ROUTE94.setToNode(std::string("x3dom"));
ROUTE94.setToField(std::string("b"));
Scene16.addChild(&ROUTE94);

ROUTE& ROUTE95 =  ROUTE();
ROUTE95.setFromNode(std::string("Animate"));
ROUTE95.setFromField(std::string("c"));
ROUTE95.setToNode(std::string("x3dom"));
ROUTE95.setToField(std::string("c"));
Scene16.addChild(&ROUTE95);

ROUTE& ROUTE96 =  ROUTE();
ROUTE96.setFromNode(std::string("Animate"));
ROUTE96.setFromField(std::string("d"));
ROUTE96.setToNode(std::string("x3dom"));
ROUTE96.setToField(std::string("d"));
Scene16.addChild(&ROUTE96);

ROUTE& ROUTE97 =  ROUTE();
ROUTE97.setFromNode(std::string("Animate"));
ROUTE97.setFromField(std::string("pdelta"));
ROUTE97.setToNode(std::string("x3dom"));
ROUTE97.setToField(std::string("pdelta"));
Scene16.addChild(&ROUTE97);

ROUTE& ROUTE98 =  ROUTE();
ROUTE98.setFromNode(std::string("Animate"));
ROUTE98.setFromField(std::string("tdelta"));
ROUTE98.setToNode(std::string("x3dom"));
ROUTE98.setToField(std::string("tdelta"));
Scene16.addChild(&ROUTE98);

X3D0.setScene(&Scene16);

//}
