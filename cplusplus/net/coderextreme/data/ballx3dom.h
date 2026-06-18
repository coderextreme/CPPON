#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
int ballx3dom(int argc, char ** argv) {
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
component8.setName(std::string("Grouping"));
component8.setLevel(3);
head1.addChild(&component8);

component& component9 =  component();
component9.setName(std::string("Core"));
component9.setLevel(1);
head1.addChild(&component9);

meta& meta10 =  meta();
meta10.setName(std::string("title"));
meta10.setContent(std::string("ballx3dom.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("creator"));
meta11.setContent(std::string("John Carlson"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("generator"));
meta12.setContent(std::string("manual"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("identifier"));
meta13.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("description"));
meta14.setContent(std::string("a prismatic sphere"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
WorldInfo& WorldInfo16 =  WorldInfo();
WorldInfo16.setTitle(std::string("ball.x3d"));
Scene15.addChild(&WorldInfo16);

NavigationInfo& NavigationInfo17 =  NavigationInfo();
NavigationInfo17.setType((std::string[]){"ANY", "EXAMINE", "FLY", "LOOKAT"}, 4);
Scene15.addChild(&NavigationInfo17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setDescription(std::string("Tour Views"));
Scene15.addChild(&Viewpoint18);

Background& Background19 =  Background();
Background19.setBackUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background19.setBottomUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background19.setFrontUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background19.setLeftUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background19.setRightUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background19.setTopUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Scene15.addChild(&Background19);

Transform& Transform20 =  Transform();
Shape& Shape21 =  Shape();
Sphere& Sphere22 =  Sphere();
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
ImageTexture26.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture25.setBack(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setContainerField("bottomTexture");
ImageTexture27.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture25.setBottom(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setContainerField("frontTexture");
ImageTexture28.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture25.setFront(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setContainerField("leftTexture");
ImageTexture29.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture25.setLeft(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setContainerField("rightTexture");
ImageTexture30.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture25.setRight(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setContainerField("topTexture");
ImageTexture31.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture25.setTop(ImageTexture31);

Appearance23.addChild(&ComposedCubeMapTexture25);

ComposedShader& ComposedShader32 =  ComposedShader();
ComposedShader32.setLanguage(std::string("GLSL"));
field& field33 =  field();
field33.setName(std::string("chromaticDispertion"));
field33.setAccessType(std::string("inputOutput"));
field33.setType(std::string("SFVec3f"));
field33.setValue(std::string("0.98 1 1.033"));
ComposedShader32.addChild(&field33);

field& field34 =  field();
field34.setName(std::string("cube"));
field34.setType(std::string("SFNode"));
field34.setAccessType(std::string("inputOutput"));
ComposedCubeMapTexture& ComposedCubeMapTexture35 =  ComposedCubeMapTexture();
ComposedCubeMapTexture35.setUSE(std::string("texture"));
field34.addChild(&ComposedCubeMapTexture35);

ComposedShader32.addChild(&field34);

field& field36 =  field();
field36.setName(std::string("bias"));
field36.setAccessType(std::string("inputOutput"));
field36.setType(std::string("SFFloat"));
field36.setValue(std::string("0.5"));
ComposedShader32.addChild(&field36);

field& field37 =  field();
field37.setName(std::string("scale"));
field37.setAccessType(std::string("inputOutput"));
field37.setType(std::string("SFFloat"));
field37.setValue(std::string("0.5"));
ComposedShader32.addChild(&field37);

field& field38 =  field();
field38.setName(std::string("power"));
field38.setAccessType(std::string("inputOutput"));
field38.setType(std::string("SFFloat"));
field38.setValue(std::string("2"));
ComposedShader32.addChild(&field38);

ShaderPart& ShaderPart39 =  ShaderPart();
ShaderPart39.setUrl((std::string[]){"../shaders/x3dom.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart39.setType(std::string("VERTEX"));
ComposedShader32.setParts(&ShaderPart39);

ShaderPart& ShaderPart40 =  ShaderPart();
ShaderPart40.setDEF(std::string("common"));
ShaderPart40.setUrl((std::string[]){"../shaders/common.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"}, 2);
ShaderPart40.setType(std::string("FRAGMENT"));
ComposedShader32.setParts(&ShaderPart40);

Appearance23.addChild(&ComposedShader32);

Shape21.addChild(&Appearance23);

Transform20.addChild(&Shape21);

Scene15.addChild(&Transform20);

X3D0.setScene(&Scene15);

}
