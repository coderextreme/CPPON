#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void variationalflowers2(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Full"));
X3D0.setVersion(std::string("4.1"));
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
meta10.setContent(std::string("variationalflowers.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("creator"));
meta11.setContent(std::string("John Carlson"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("description"));
meta12.setContent(std::string("A flower particle system"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("identifier"));
meta13.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/variationalflowers.x3d"));
head1.addMeta(&meta13);

X3D0.setHead(&head1);

Scene& Scene14 =  Scene();
WorldInfo& WorldInfo15 =  WorldInfo();
WorldInfo15.setTitle(std::string("variationalflowers.x3d"));
Scene14.addChild(&WorldInfo15);

NavigationInfo& NavigationInfo16 =  NavigationInfo();
NavigationInfo16.setType(new std::string[]{"ANY", "EXAMINE", "FLY", "LOOKAT"}, 4);
Scene14.addChild(&NavigationInfo16);

Viewpoint& Viewpoint17 =  Viewpoint();
Viewpoint17.setDescription(std::string("Tour Views"));
Viewpoint17.setPosition(new float[]{0.0,0.0,12.0});
Scene14.addChild(&Viewpoint17);

Background& Background18 =  Background();
Background18.setBackUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 1);
Background18.setBottomUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 1);
Background18.setFrontUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 1);
Background18.setLeftUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 1);
Background18.setRightUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 1);
Background18.setTopUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 1);
Scene14.addChild(&Background18);

Transform& Transform19 =  Transform();
ParticleSystem& ParticleSystem20 =  ParticleSystem();
ParticleSystem20.setMaxParticles(20);
ParticleSystem20.setGeometryType(std::string("GEOMETRY"));
//* values - array of MFFloats to pass to ComposedShader
//* variations in values - array of MFFloats to pass to ComposedShader that varies values
VariationPhysicsModel& VariationPhysicsModel21 =  VariationPhysicsModel();
VariationPhysicsModel21.setValues(std::string("2 2 5 5 0 0"));
VariationPhysicsModel21.setVariations(std::string("0.2 0.1 0.3 0.3 0.01 0.01"));
ParticleSystem20.addVariationPhysicsModel(VariationPhysicsModel21);

ExplosionEmitter& ExplosionEmitter22 =  ExplosionEmitter();
ExplosionEmitter22.setContainerField("emitter");
ExplosionEmitter22.setSpeed(1);
ExplosionEmitter22.setVariation(0.75);
ParticleSystem20.setEmitter(ExplosionEmitter22);

Sphere& Sphere23 =  Sphere();
ParticleSystem20.setGeometry(Sphere23);

Appearance& Appearance24 =  Appearance();
Appearance24.setContainerField("appearance");
Material& Material25 =  Material();
Material25.setContainerField("material");
Material25.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material25.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance24.addChild(&Material25);

ComposedCubeMapTexture& ComposedCubeMapTexture26 =  ComposedCubeMapTexture();
ComposedCubeMapTexture26.setContainerField("texture");
ComposedCubeMapTexture26.setDEF(std::string("texture"));
ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setContainerField("backTexture");
ImageTexture27.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 1);
ComposedCubeMapTexture26.setBack(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setContainerField("bottomTexture");
ImageTexture28.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 1);
ComposedCubeMapTexture26.setBottom(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setContainerField("frontTexture");
ImageTexture29.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 1);
ComposedCubeMapTexture26.setFront(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setContainerField("leftTexture");
ImageTexture30.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 1);
ComposedCubeMapTexture26.setLeft(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setContainerField("rightTexture");
ImageTexture31.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 1);
ComposedCubeMapTexture26.setRight(ImageTexture31);

ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setContainerField("topTexture");
ImageTexture32.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 1);
ComposedCubeMapTexture26.setTop(ImageTexture32);

Appearance24.addChild(&ComposedCubeMapTexture26);

ComposedShader& ComposedShader33 =  ComposedShader();
ComposedShader33.setDEF(std::string("x_ite"));
ComposedShader33.setLanguage(std::string("GLSL"));
field& field34 =  field();
field34.setName(std::string("chromaticDispertion"));
field34.setAccessType(std::string("initializeOnly"));
field34.setType(std::string("SFVec3f"));
field34.setValue(std::string("0.98 1 1.033"));
ComposedShader33.addChild(&field34);

field& field35 =  field();
field35.setName(std::string("cube"));
field35.setType(std::string("SFNode"));
field35.setAccessType(std::string("initializeOnly"));
ComposedCubeMapTexture& ComposedCubeMapTexture36 =  ComposedCubeMapTexture();
ComposedCubeMapTexture36.setUSE(std::string("texture"));
field35.addChild(&ComposedCubeMapTexture36);

ComposedShader33.addChild(&field35);

field& field37 =  field();
field37.setName(std::string("bias"));
field37.setAccessType(std::string("initializeOnly"));
field37.setType(std::string("SFFloat"));
field37.setValue(std::string("0.5"));
ComposedShader33.addChild(&field37);

field& field38 =  field();
field38.setName(std::string("scale"));
field38.setAccessType(std::string("initializeOnly"));
field38.setType(std::string("SFFloat"));
field38.setValue(std::string("0.5"));
ComposedShader33.addChild(&field38);

field& field39 =  field();
field39.setName(std::string("power"));
field39.setAccessType(std::string("initializeOnly"));
field39.setType(std::string("SFFloat"));
field39.setValue(std::string("2"));
ComposedShader33.addChild(&field39);

field& field40 =  field();
field40.setName(std::string("x3d_ParticleValues"));
field40.setType(std::string("MFFloat"));
field40.setAccessType(std::string("inputOutput"));
field40.setValue(std::string("2 1 4 4 0 0"));
ComposedShader33.addChild(&field40);

ShaderPart& ShaderPart41 =  ShaderPart();
ShaderPart41.setUrl(new std::string[]{"../shaders/x_ite_variations.vs"}, 1);
ShaderPart41.setType(std::string("VERTEX"));
ComposedShader33.setParts(&ShaderPart41);

ShaderPart& ShaderPart42 =  ShaderPart();
ShaderPart42.setUrl(new std::string[]{"../shaders/commonnew.fs"}, 1);
ShaderPart42.setType(std::string("FRAGMENT"));
ComposedShader33.setParts(&ShaderPart42);

Appearance24.addChild(&ComposedShader33);

ParticleSystem20.addChildren(&Appearance24);

Transform19.addChild(&ParticleSystem20);

Script& Script43 =  Script();
Script43.setDEF(std::string("Animate"));
field& field44 =  field();
field44.setName(std::string("set_fraction"));
field44.setAccessType(std::string("inputOnly"));
field44.setType(std::string("SFFloat"));
Script43.addChild(&field44);

field& field45 =  field();
field45.setName(std::string("values"));
field45.setType(std::string("MFFloat"));
field45.setAccessType(std::string("inputOutput"));
field45.setValue(std::string("2 2 5 5 0 0"));
Script43.addChild(&field45);

field& field46 =  field();
field46.setName(std::string("variations"));
field46.setType(std::string("MFFloat"));
field46.setAccessType(std::string("inputOutput"));
field46.setValue(std::string("0.2 0.1 0.3 0.3 0.01 0.01"));
Script43.addChild(&field46);

field& field47 =  field();
field47.setName(std::string("lastframe"));
field47.setType(std::string("SFFloat"));
field47.setAccessType(std::string("inputOutput"));
field47.setValue(std::string("0"));
Script43.addChild(&field47);

field& field48 =  field();
field48.setName(std::string("updaterate"));
field48.setType(std::string("SFFloat"));
field48.setAccessType(std::string("inputOutput"));
field48.setValue(std::string("0.1"));
Script43.addChild(&field48);


//Script43.setSourceCode(std::string("ecmascript:")+
//_T("			function set_fraction(f, tm) {")+
//_T("			    if (lastframe + updaterate < tm) {")+
//_T("			  	lastframe = tm;")+
//_T("				for (let v in values) {")+
//_T("					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];")+
//_T("				}")+
//_T("			    }")+
//_T("			}"));
Transform19.addChild(&Script43);

TimeSensor& TimeSensor49 =  TimeSensor();
TimeSensor49.setDEF(std::string("TourTime"));
TimeSensor49.setCycleInterval(45);
TimeSensor49.setLoop(true);
Transform19.addChild(&TimeSensor49);

ROUTE& ROUTE50 =  ROUTE();
ROUTE50.setFromNode(std::string("TourTime"));
ROUTE50.setFromField(std::string("fraction_changed"));
ROUTE50.setToNode(std::string("Animate"));
ROUTE50.setToField(std::string("set_fraction"));
Transform19.addChild(&ROUTE50);

ROUTE& ROUTE51 =  ROUTE();
ROUTE51.setFromNode(std::string("Animate"));
ROUTE51.setFromField(std::string("values"));
ROUTE51.setToNode(std::string("x_ite"));
ROUTE51.setToField(std::string("x3d_ParticleValues"));
Transform19.addChild(&ROUTE51);

Scene14.addChild(&Transform19);

X3D0.setScene(&Scene14);

}
