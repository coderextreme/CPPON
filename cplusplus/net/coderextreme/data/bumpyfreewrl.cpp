#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void bumpyfreewrl(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Full"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
//<component name='Shape' level='4'></component>
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
component8.setName(std::string("Grouping"));
component8.setLevel(3);
head1.addChild(&component8);

component& component9 =  component();
component9.setName(std::string("Core"));
component9.setLevel(1);
head1.addChild(&component9);

meta& meta10 =  meta();
meta10.setName(std::string("title"));
meta10.setContent(std::string("bumpyfreewrl.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("creator"));
meta11.setContent(std::string("John Carlson"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("description"));
meta12.setContent(std::string("A flower"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("generator"));
meta13.setContent(std::string("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("identifier"));
meta14.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/bumpfreewrl.x3d"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
WorldInfo& WorldInfo16 =  WorldInfo();
WorldInfo16.setTitle(std::string("bumpyx_ite.x3d"));
Scene15.addChild(&WorldInfo16);

NavigationInfo& NavigationInfo17 =  NavigationInfo();
Scene15.addChild(&NavigationInfo17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setPosition(new float[]{0.0,0.0,40.0});
Viewpoint18.setDescription(std::string("Transparent rose"));
Scene15.addChild(&Viewpoint18);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background& Background19 =  Background();
Background19.setBackUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background19.setBottomUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background19.setFrontUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background19.setLeftUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background19.setRightUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background19.setTopUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Scene15.addChild(&Background19);

Transform& Transform20 =  Transform();
Shape& Shape21 =  Shape();
Sphere& Sphere22 =  Sphere();
Sphere22.setRadius(5);
Shape21.setGeometry(&Sphere22);

Appearance& Appearance23 =  Appearance();
Appearance23.setContainerField("appearance");
Material& Material24 =  Material();
Material24.setContainerField("material");
Material24.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material24.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance23.addChild(&Material24);

ComposedCubeMapTexture& ComposedCubeMapTexture25 =  ComposedCubeMapTexture();
ComposedCubeMapTexture25.setContainerField("texture");
ComposedCubeMapTexture25.setDEF(std::string("texture"));
ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setContainerField("backTexture");
ImageTexture26.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture25.setBack(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setContainerField("bottomTexture");
ImageTexture27.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture25.setBottom(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setContainerField("frontTexture");
ImageTexture28.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture25.setFront(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setContainerField("leftTexture");
ImageTexture29.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture25.setLeft(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setContainerField("rightTexture");
ImageTexture30.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture25.setRight(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setContainerField("topTexture");
ImageTexture31.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture25.setTop(ImageTexture31);

Appearance23.addChild(&ComposedCubeMapTexture25);

ComposedShader& ComposedShader32 =  ComposedShader();
ComposedShader32.setDEF(std::string("freewrlShader"));
ComposedShader32.setLanguage(std::string("GLSL"));
field& field33 =  field();
field33.setName(std::string("chromaticDispertion"));
field33.setAccessType(std::string("inputOnly"));
field33.setType(std::string("SFVec3f"));
field33.setValue(std::string("0.98 1 1.033"));
ComposedShader32.addChild(&field33);

field& field34 =  field();
field34.setName(std::string("fw_textureCoordGenType"));
field34.setAccessType(std::string("inputOnly"));
field34.setType(std::string("SFInt32"));
field34.setValue(std::string("0"));
ComposedShader32.addChild(&field34);

field& field35 =  field();
field35.setName(std::string("bias"));
field35.setType(std::string("SFFloat"));
field35.setAccessType(std::string("inputOnly"));
field35.setValue(std::string("0.5"));
ComposedShader32.addChild(&field35);

field& field36 =  field();
field36.setName(std::string("scale"));
field36.setType(std::string("SFFloat"));
field36.setAccessType(std::string("inputOnly"));
field36.setValue(std::string("0.5"));
ComposedShader32.addChild(&field36);

field& field37 =  field();
field37.setName(std::string("power"));
field37.setType(std::string("SFFloat"));
field37.setAccessType(std::string("inputOnly"));
field37.setValue(std::string("2"));
ComposedShader32.addChild(&field37);

field& field38 =  field();
field38.setName(std::string("a"));
field38.setType(std::string("SFFloat"));
field38.setAccessType(std::string("inputOutput"));
field38.setValue(std::string("10"));
ComposedShader32.addChild(&field38);

field& field39 =  field();
field39.setName(std::string("b"));
field39.setType(std::string("SFFloat"));
field39.setAccessType(std::string("inputOutput"));
field39.setValue(std::string("1"));
ComposedShader32.addChild(&field39);

field& field40 =  field();
field40.setName(std::string("c"));
field40.setType(std::string("SFFloat"));
field40.setAccessType(std::string("inputOutput"));
field40.setValue(std::string("5"));
ComposedShader32.addChild(&field40);

field& field41 =  field();
field41.setName(std::string("d"));
field41.setType(std::string("SFFloat"));
field41.setAccessType(std::string("inputOutput"));
field41.setValue(std::string("5"));
ComposedShader32.addChild(&field41);

field& field42 =  field();
field42.setName(std::string("tdelta"));
field42.setType(std::string("SFFloat"));
field42.setAccessType(std::string("inputOutput"));
field42.setValue(std::string("0"));
ComposedShader32.addChild(&field42);

field& field43 =  field();
field43.setName(std::string("pdelta"));
field43.setType(std::string("SFFloat"));
field43.setAccessType(std::string("inputOutput"));
field43.setValue(std::string("0"));
ComposedShader32.addChild(&field43);

ShaderPart& ShaderPart44 =  ShaderPart();
ShaderPart44.setUrl(new std::string[]{"../shaders/freewrl_flowers_chromatic.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"}, 2);
ShaderPart44.setType(std::string("VERTEX"));
ComposedShader32.setParts(&ShaderPart44);

ShaderPart& ShaderPart45 =  ShaderPart();
ShaderPart45.setUrl(new std::string[]{"../shaders/freewrl_bubbles.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"}, 2);
ShaderPart45.setType(std::string("FRAGMENT"));
ComposedShader32.setParts(&ShaderPart45);

Appearance23.addChild(&ComposedShader32);

Shape21.addChild(&Appearance23);

Transform20.addChild(&Shape21);

Scene15.addChild(&Transform20);

X3D0.setScene(&Scene15);

}
