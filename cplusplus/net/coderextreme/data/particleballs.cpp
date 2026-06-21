#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(std::string("EnvironmentalEffects"));
component2.setLevel(3);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(std::string("Shaders"));
component3.setLevel(1);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(std::string("CubeMapTexturing"));
component4.setLevel(1);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(std::string("Texturing"));
component5.setLevel(1);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(std::string("Rendering"));
component6.setLevel(1);
head1.addChild(&component6);

component& component7 =  component();
component7.setName(std::string("Grouping"));
component7.setLevel(3);
head1.addChild(&component7);

component& component8 =  component();
component8.setName(std::string("Core"));
component8.setLevel(1);
head1.addChild(&component8);

component& component9 =  component();
component9.setName(std::string("ParticleSystems"));
component9.setLevel(3);
head1.addChild(&component9);

meta& meta10 =  meta();
meta10.setName(std::string("title"));
meta10.setContent(std::string("particleflowers.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("creator"));
meta11.setContent(std::string("John Carlson"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("description"));
meta12.setContent(std::string("A flower proto with configurable shaders"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("identifier"));
meta13.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d"));
head1.addMeta(&meta13);

X3D0.setHead(&head1);

Scene& Scene14 =  Scene();
WorldInfo& WorldInfo15 =  WorldInfo();
WorldInfo15.setTitle(std::string("particleflowers.x3d"));
Scene14.addChild(&WorldInfo15);

NavigationInfo& NavigationInfo16 =  NavigationInfo();
NavigationInfo16.setType(new std::string[]{"ANY", "EXAMINE", "FLY", "LOOKAT"}, 4);
Scene14.addChild(&NavigationInfo16);

Viewpoint& Viewpoint17 =  Viewpoint();
Viewpoint17.setDescription(std::string("Tour Views"));
Viewpoint17.setPosition(new float[]{0.0,0.0,12.0});
Scene14.addChild(&Viewpoint17);

Background& Background18 =  Background();
Background18.setBackUrl(new std::string[]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 1);
Background18.setBottomUrl(new std::string[]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 1);
Background18.setFrontUrl(new std::string[]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 1);
Background18.setLeftUrl(new std::string[]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 1);
Background18.setRightUrl(new std::string[]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 1);
Background18.setTopUrl(new std::string[]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 1);
Scene14.addChild(&Background18);

Transform& Transform19 =  Transform();
ParticleSystem& ParticleSystem20 =  ParticleSystem();
ParticleSystem20.setMaxParticles(20);
ParticleSystem20.setGeometryType(std::string("GEOMETRY"));
BoundedPhysicsModel& BoundedPhysicsModel21 =  BoundedPhysicsModel();
Sphere& Sphere22 =  Sphere();
Sphere22.setRadius(100);
BoundedPhysicsModel21.setGeometry(Sphere22);

ParticleSystem20.setPhysics(BoundedPhysicsModel21);

ExplosionEmitter& ExplosionEmitter23 =  ExplosionEmitter();
ExplosionEmitter23.setContainerField("emitter");
ExplosionEmitter23.setSpeed(2);
ExplosionEmitter23.setVariation(0.75);
ParticleSystem20.setEmitter(ExplosionEmitter23);

//<Shape>
Sphere& Sphere24 =  Sphere();
ParticleSystem20.setGeometry(Sphere24);

Appearance& Appearance25 =  Appearance();
Appearance25.setContainerField("appearance");
Material& Material26 =  Material();
Material26.setContainerField("material");
Material26.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material26.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance25.addChild(&Material26);

ComposedCubeMapTexture& ComposedCubeMapTexture27 =  ComposedCubeMapTexture();
ComposedCubeMapTexture27.setContainerField("texture");
ComposedCubeMapTexture27.setDEF(std::string("texture"));
ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setContainerField("backTexture");
ImageTexture28.setUrl(new std::string[]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 1);
ComposedCubeMapTexture27.setBack(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setContainerField("bottomTexture");
ImageTexture29.setUrl(new std::string[]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 1);
ComposedCubeMapTexture27.setBottom(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setContainerField("frontTexture");
ImageTexture30.setUrl(new std::string[]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 1);
ComposedCubeMapTexture27.setFront(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setContainerField("leftTexture");
ImageTexture31.setUrl(new std::string[]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 1);
ComposedCubeMapTexture27.setLeft(ImageTexture31);

ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setContainerField("rightTexture");
ImageTexture32.setUrl(new std::string[]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 1);
ComposedCubeMapTexture27.setRight(ImageTexture32);

ImageTexture& ImageTexture33 =  ImageTexture();
ImageTexture33.setContainerField("topTexture");
ImageTexture33.setUrl(new std::string[]{"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 1);
ComposedCubeMapTexture27.setTop(ImageTexture33);

Appearance25.addChild(&ComposedCubeMapTexture27);

//<ComposedShader language='GLSL'>
//<field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field>
//<field name='cube' type='SFNode' accessType=\"inputOutput\">
//<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>
//</field>
//<field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field>
//<field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field>
//<field name='power' accessType='inputOutput' type='SFFloat' value='2'></field>
//<ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"'></ShaderPart>
//<ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' type='FRAGMENT'></ShaderPart>
//</ComposedShader>
//<ComposedShader DEF=\"shader\" language=\"GLSL\">
//<field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field>
//<field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field>
//<field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field>
//<field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field>
//<field name='power' type='SFFloat' accessType='inputOutput' value='2'></field>
//<ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs\"'/>
//<ShaderPart type='FRAGMENT' url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"'/>
//</ComposedShader>
ComposedShader& ComposedShader34 =  ComposedShader();
ComposedShader34.setLanguage(std::string("GLSL"));
field& field35 =  field();
field35.setName(std::string("chromaticDispertion"));
field35.setAccessType(std::string("initializeOnly"));
field35.setType(std::string("SFVec3f"));
field35.setValue(std::string("0.98 1 1.033"));
ComposedShader34.addChild(&field35);

field& field36 =  field();
field36.setName(std::string("cube"));
field36.setType(std::string("SFNode"));
field36.setAccessType(std::string("initializeOnly"));
ComposedCubeMapTexture& ComposedCubeMapTexture37 =  ComposedCubeMapTexture();
ComposedCubeMapTexture37.setUSE(std::string("texture"));
field36.addChild(&ComposedCubeMapTexture37);

ComposedShader34.addChild(&field36);

field& field38 =  field();
field38.setName(std::string("bias"));
field38.setAccessType(std::string("initializeOnly"));
field38.setType(std::string("SFFloat"));
field38.setValue(std::string("0.5"));
ComposedShader34.addChild(&field38);

field& field39 =  field();
field39.setName(std::string("scale"));
field39.setAccessType(std::string("initializeOnly"));
field39.setType(std::string("SFFloat"));
field39.setValue(std::string("0.5"));
ComposedShader34.addChild(&field39);

field& field40 =  field();
field40.setName(std::string("power"));
field40.setAccessType(std::string("initializeOnly"));
field40.setType(std::string("SFFloat"));
field40.setValue(std::string("2"));
ComposedShader34.addChild(&field40);

ShaderPart& ShaderPart41 =  ShaderPart();
ShaderPart41.setUrl(new std::string[]{"../shaders/x_iteparticles.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_iteparticles.vs"}, 2);
ShaderPart41.setType(std::string("VERTEX"));
ComposedShader34.setParts(&ShaderPart41);

ShaderPart& ShaderPart42 =  ShaderPart();
ShaderPart42.setDEF(std::string("commonfs"));
ShaderPart42.setUrl(new std::string[]{"https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"}, 1);
ShaderPart42.setType(std::string("FRAGMENT"));
ComposedShader34.setParts(&ShaderPart42);

Appearance25.addChild(&ComposedShader34);

ParticleSystem20.addChildren(&Appearance25);

Transform19.addChild(&ParticleSystem20);

//</Shape>
Scene14.addChild(&Transform19);

X3D0.setScene(&Scene14);

}
