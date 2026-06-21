#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void geo(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
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
meta10.setContent(std::string("geo.x3d"));
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
meta13.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("description"));
meta14.setContent(std::string("a sphere"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
NavigationInfo& NavigationInfo16 =  NavigationInfo();
NavigationInfo16.setType(new std::string[]{"ANY", "EXAMINE", "FLY", "LOOKAT"}, 4);
Scene15.addChild(&NavigationInfo16);

Viewpoint& Viewpoint17 =  Viewpoint();
Viewpoint17.setDEF(std::string("Tour"));
Viewpoint17.setDescription(std::string("Tour Views"));
Scene15.addChild(&Viewpoint17);

//Viewpoint position='0 0 4' description='sphere in road'/
Background& Background18 =  Background();
Background18.setBackUrl(new std::string[]{"../resources/images/bBK.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"}, 2);
Background18.setBottomUrl(new std::string[]{"../resources/images/bBT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"}, 2);
Background18.setFrontUrl(new std::string[]{"../resources/images/bFR.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"}, 2);
Background18.setLeftUrl(new std::string[]{"../resources/images/bLF.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"}, 2);
Background18.setRightUrl(new std::string[]{"../resources/images/bRT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"}, 2);
Background18.setTopUrl(new std::string[]{"../resources/images/bTP.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"}, 2);
Scene15.addChild(&Background18);

Transform& Transform19 =  Transform();
Shape& Shape20 =  Shape();
Sphere& Sphere21 =  Sphere();
Shape20.setGeometry(&Sphere21);

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
ImageTexture25.setUrl(new std::string[]{"../resources/images/bBK.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"}, 2);
ComposedCubeMapTexture24.setBack(ImageTexture25);

ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setContainerField("bottomTexture");
ImageTexture26.setUrl(new std::string[]{"../resources/images/bBT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"}, 2);
ComposedCubeMapTexture24.setBottom(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setContainerField("frontTexture");
ImageTexture27.setUrl(new std::string[]{"../resources/images/bFR.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"}, 2);
ComposedCubeMapTexture24.setFront(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setContainerField("leftTexture");
ImageTexture28.setUrl(new std::string[]{"../resources/images/bLF.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"}, 2);
ComposedCubeMapTexture24.setLeft(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setContainerField("rightTexture");
ImageTexture29.setUrl(new std::string[]{"../resources/images/bRT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"}, 2);
ComposedCubeMapTexture24.setRight(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setContainerField("topTexture");
ImageTexture30.setUrl(new std::string[]{"../resources/images/bTP.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"}, 2);
ComposedCubeMapTexture24.setTop(ImageTexture30);

Appearance22.addChild(&ComposedCubeMapTexture24);

ComposedShader& ComposedShader31 =  ComposedShader();
ComposedShader31.setLanguage(std::string("GLSL"));
field& field32 =  field();
field32.setName(std::string("chromaticDispertion"));
field32.setAccessType(std::string("inputOutput"));
field32.setType(std::string("SFVec3f"));
field32.setValue(std::string("0.98 1 1.033"));
ComposedShader31.addChild(&field32);

field& field33 =  field();
field33.setName(std::string("cube"));
field33.setType(std::string("SFNode"));
field33.setAccessType(std::string("inputOutput"));
ComposedCubeMapTexture& ComposedCubeMapTexture34 =  ComposedCubeMapTexture();
ComposedCubeMapTexture34.setUSE(std::string("texture"));
field33.addChild(&ComposedCubeMapTexture34);

ComposedShader31.addChild(&field33);

field& field35 =  field();
field35.setName(std::string("bias"));
field35.setAccessType(std::string("inputOutput"));
field35.setType(std::string("SFFloat"));
field35.setValue(std::string("0.5"));
ComposedShader31.addChild(&field35);

field& field36 =  field();
field36.setName(std::string("scale"));
field36.setAccessType(std::string("inputOutput"));
field36.setType(std::string("SFFloat"));
field36.setValue(std::string("0.5"));
ComposedShader31.addChild(&field36);

field& field37 =  field();
field37.setName(std::string("power"));
field37.setAccessType(std::string("inputOutput"));
field37.setType(std::string("SFFloat"));
field37.setValue(std::string("2"));
ComposedShader31.addChild(&field37);

ShaderPart& ShaderPart38 =  ShaderPart();
ShaderPart38.setUrl(new std::string[]{"../shaders/x3dom.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart38.setType(std::string("VERTEX"));
ComposedShader31.setParts(&ShaderPart38);

ShaderPart& ShaderPart39 =  ShaderPart();
ShaderPart39.setDEF(std::string("common"));
ShaderPart39.setUrl(new std::string[]{"../shaders/common.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"}, 2);
ShaderPart39.setType(std::string("FRAGMENT"));
ComposedShader31.setParts(&ShaderPart39);

Appearance22.addChild(&ComposedShader31);

ComposedShader& ComposedShader40 =  ComposedShader();
ComposedShader40.setLanguage(std::string("GLSL"));
field& field41 =  field();
field41.setName(std::string("chromaticDispertion"));
field41.setAccessType(std::string("initializeOnly"));
field41.setType(std::string("SFVec3f"));
field41.setValue(std::string("0.98 1 1.033"));
ComposedShader40.addChild(&field41);

field& field42 =  field();
field42.setName(std::string("cube"));
field42.setType(std::string("SFNode"));
field42.setAccessType(std::string("initializeOnly"));
ComposedCubeMapTexture& ComposedCubeMapTexture43 =  ComposedCubeMapTexture();
ComposedCubeMapTexture43.setUSE(std::string("texture"));
field42.addChild(&ComposedCubeMapTexture43);

ComposedShader40.addChild(&field42);

field& field44 =  field();
field44.setName(std::string("bias"));
field44.setAccessType(std::string("initializeOnly"));
field44.setType(std::string("SFFloat"));
field44.setValue(std::string("0.5"));
ComposedShader40.addChild(&field44);

field& field45 =  field();
field45.setName(std::string("scale"));
field45.setAccessType(std::string("initializeOnly"));
field45.setType(std::string("SFFloat"));
field45.setValue(std::string("0.5"));
ComposedShader40.addChild(&field45);

field& field46 =  field();
field46.setName(std::string("power"));
field46.setAccessType(std::string("initializeOnly"));
field46.setType(std::string("SFFloat"));
field46.setValue(std::string("2"));
ComposedShader40.addChild(&field46);

ShaderPart& ShaderPart47 =  ShaderPart();
ShaderPart47.setUrl(new std::string[]{"../shaders/x_ite.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart47.setType(std::string("VERTEX"));
ComposedShader40.setParts(&ShaderPart47);

ShaderPart& ShaderPart48 =  ShaderPart();
ShaderPart48.setUrl(new std::string[]{"../shaders/x_ite.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}, 2);
ShaderPart48.setType(std::string("FRAGMENT"));
ComposedShader40.setParts(&ShaderPart48);

Appearance22.addChild(&ComposedShader40);

Shape20.addChild(&Appearance22);

Transform19.addChild(&Shape20);

Scene15.addChild(&Transform19);

X3D0.setScene(&Scene15);

//}
