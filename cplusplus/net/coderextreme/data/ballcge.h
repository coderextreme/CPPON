#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
int ballcge(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(std::string("Shaders"));
component2.setLevel(1);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(std::string("EnvironmentalEffects"));
component3.setLevel(3);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(std::string("Rendering"));
component4.setLevel(1);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(std::string("Texturing"));
component5.setLevel(1);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(std::string("Grouping"));
component6.setLevel(3);
head1.addChild(&component6);

component& component7 =  component();
component7.setName(std::string("CubeMapTexturing"));
component7.setLevel(1);
head1.addChild(&component7);

component& component8 =  component();
component8.setName(std::string("Core"));
component8.setLevel(1);
head1.addChild(&component8);

meta& meta9 =  meta();
meta9.setName(std::string("identifier"));
meta9.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("title"));
meta10.setContent(std::string("ball.x3d"));
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
meta13.setName(std::string("description"));
meta13.setContent(std::string("a prismatic sphere"));
head1.addMeta(&meta13);

X3D0.setHead(&head1);

Scene& Scene14 =  Scene();
WorldInfo& WorldInfo15 =  WorldInfo();
WorldInfo15.setTitle(std::string("ball.x3d"));
Scene14.addChild(&WorldInfo15);

NavigationInfo& NavigationInfo16 =  NavigationInfo();
NavigationInfo16.setAvatarSize(new float[]{0.25,1.60000002384186,0.75});
NavigationInfo16.setType((std::string[]){"ANY", "EXAMINE", "FLY", "LOOKAT"}, 4);
Scene14.addChild(&NavigationInfo16);

Viewpoint& Viewpoint17 =  Viewpoint();
Viewpoint17.setPosition(new float[]{0.0,0.0,12.0});
Viewpoint17.setDescription(std::string("Tour Views"));
Scene14.addChild(&Viewpoint17);

Background& Background18 =  Background();
Background18.setTopUrl((std::string[]){"file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 1);
Background18.setBackUrl((std::string[]){"file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 1);
Background18.setLeftUrl((std::string[]){"file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 1);
Background18.setFrontUrl((std::string[]){"file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 1);
Background18.setRightUrl((std::string[]){"file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 1);
Background18.setBottomUrl((std::string[]){"file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 1);
Scene14.addChild(&Background18);

Transform& Transform19 =  Transform();
Shape& Shape20 =  Shape();
Sphere& Sphere21 =  Sphere();
Shape20.setGeometry(&Sphere21);

Appearance& Appearance22 =  Appearance();
Appearance22.setContainerField("appearance");
Material& Material23 =  Material();
Material23.setContainerField("material");
Material23.setDiffuseColor(new float[]{0.699999988079071,0.699999988079071,0.699999988079071});
Material23.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance22.addChild(&Material23);

ComposedShader& ComposedShader24 =  ComposedShader();
ComposedShader24.setLanguage(std::string("GLSL"));
field& field25 =  field();
field25.setName(std::string("chromaticDispertion"));
field25.setAccessType(std::string("initializeOnly"));
field25.setType(std::string("SFVec3f"));
field25.setValue(std::string("0.980000019073486 1 1.03299999237061"));
ComposedShader24.addChild(&field25);

field& field26 =  field();
field26.setName(std::string("cube"));
field26.setAccessType(std::string("initializeOnly"));
field26.setType(std::string("SFNode"));
ComposedCubeMapTexture& ComposedCubeMapTexture27 =  ComposedCubeMapTexture();
ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setContainerField("backTexture");
ImageTexture28.setUrl((std::string[]){"file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 1);
ComposedCubeMapTexture27.setBack(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setContainerField("bottomTexture");
ImageTexture29.setUrl((std::string[]){"file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 1);
ComposedCubeMapTexture27.setBottom(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setContainerField("frontTexture");
ImageTexture30.setUrl((std::string[]){"file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 1);
ComposedCubeMapTexture27.setFront(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setContainerField("leftTexture");
ImageTexture31.setUrl((std::string[]){"file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 1);
ComposedCubeMapTexture27.setLeft(ImageTexture31);

ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setContainerField("rightTexture");
ImageTexture32.setUrl((std::string[]){"file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 1);
ComposedCubeMapTexture27.setRight(ImageTexture32);

ImageTexture& ImageTexture33 =  ImageTexture();
ImageTexture33.setContainerField("topTexture");
ImageTexture33.setUrl((std::string[]){"file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 1);
ComposedCubeMapTexture27.setTop(ImageTexture33);

field26.addChild(&ComposedCubeMapTexture27);

ComposedShader24.addChild(&field26);

field& field34 =  field();
field34.setName(std::string("bias"));
field34.setAccessType(std::string("initializeOnly"));
field34.setType(std::string("SFFloat"));
field34.setValue(std::string("0.5"));
ComposedShader24.addChild(&field34);

field& field35 =  field();
field35.setName(std::string("scale"));
field35.setAccessType(std::string("initializeOnly"));
field35.setType(std::string("SFFloat"));
field35.setValue(std::string("0.5"));
ComposedShader24.addChild(&field35);

field& field36 =  field();
field36.setName(std::string("power"));
field36.setAccessType(std::string("initializeOnly"));
field36.setType(std::string("SFFloat"));
field36.setValue(std::string("2"));
ComposedShader24.addChild(&field36);

ShaderPart& ShaderPart37 =  ShaderPart();
ShaderPart37.setUrl((std::string[]){"file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.vs"}, 1);
ShaderPart37.setType(std::string("VERTEX"));
ComposedShader24.setParts(&ShaderPart37);

ShaderPart& ShaderPart38 =  ShaderPart();
ShaderPart38.setDEF(std::string("commonfs"));
ShaderPart38.setUrl((std::string[]){"file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.fs"}, 1);
ShaderPart38.setType(std::string("FRAGMENT"));
ComposedShader24.setParts(&ShaderPart38);

Appearance22.addChild(&ComposedShader24);

Shape20.addChild(&Appearance22);

Transform19.addChild(&Shape20);

Scene14.addChild(&Transform19);

X3D0.setScene(&Scene14);

}
