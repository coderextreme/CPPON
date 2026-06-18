#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
int particleflowers(int argc, char ** argv) {
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
meta12.setContent(std::string("A flower particle system"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("identifier"));
meta13.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("generator"));
meta14.setContent(std::string("Vim"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
WorldInfo& WorldInfo16 =  WorldInfo();
WorldInfo16.setTitle(std::string("particleflowers.x3d"));
Scene15.addChild(&WorldInfo16);

NavigationInfo& NavigationInfo17 =  NavigationInfo();
NavigationInfo17.setType((std::string[]){"ANY", "EXAMINE", "FLY", "LOOKAT"}, 4);
Scene15.addChild(&NavigationInfo17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setDescription(std::string("Tour Views"));
Viewpoint18.setPosition(new float[]{0.0,0.0,12.0});
Scene15.addChild(&Viewpoint18);

Background& Background19 =  Background();
Background19.setBackUrl((std::string[]){"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png", "../resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background19.setBottomUrl((std::string[]){"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background19.setFrontUrl((std::string[]){"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png", "../resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background19.setLeftUrl((std::string[]){"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png", "../resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background19.setRightUrl((std::string[]){"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png", "../resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background19.setTopUrl((std::string[]){"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png", "../resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Scene15.addChild(&Background19);

Group& Group20 =  Group();
ParticleSystem& ParticleSystem21 =  ParticleSystem();
ParticleSystem21.setMaxParticles(20);
ParticleSystem21.setGeometryType(std::string("GEOMETRY"));
BoundedPhysicsModel& BoundedPhysicsModel22 =  BoundedPhysicsModel();
Sphere& Sphere23 =  Sphere();
Sphere23.setRadius(100);
BoundedPhysicsModel22.setGeometry(&Sphere23);

ParticleSystem21.addPhysics(BoundedPhysicsModel22);

ExplosionEmitter& ExplosionEmitter24 =  ExplosionEmitter();
ExplosionEmitter24.setContainerField("emitter");
ExplosionEmitter24.setSpeed(2);
ExplosionEmitter24.setVariation(0.75);
ParticleSystem21.setEmitter(ExplosionEmitter24);

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
ImageTexture28.setUrl((std::string[]){"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png", "../resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture27.setBack(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setContainerField("bottomTexture");
ImageTexture29.setUrl((std::string[]){"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture27.setBottom(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setContainerField("frontTexture");
ImageTexture30.setUrl((std::string[]){"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png", "../resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture27.setFront(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setContainerField("leftTexture");
ImageTexture31.setUrl((std::string[]){"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png", "../resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture27.setLeft(ImageTexture31);

ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setContainerField("rightTexture");
ImageTexture32.setUrl((std::string[]){"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png", "../resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture27.setRight(ImageTexture32);

ImageTexture& ImageTexture33 =  ImageTexture();
ImageTexture33.setContainerField("topTexture");
ImageTexture33.setUrl((std::string[]){"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png", "../resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture27.setTop(ImageTexture33);

Appearance25.addChild(&ComposedCubeMapTexture27);

ComposedShader& ComposedShader34 =  ComposedShader();
ComposedShader34.setDEF(std::string("x_ite"));
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

field& field41 =  field();
field41.setName(std::string("a"));
field41.setType(std::string("SFFloat"));
field41.setAccessType(std::string("inputOutput"));
field41.setValue(std::string("2"));
ComposedShader34.addChild(&field41);

field& field42 =  field();
field42.setName(std::string("b"));
field42.setType(std::string("SFFloat"));
field42.setAccessType(std::string("inputOutput"));
field42.setValue(std::string("1"));
ComposedShader34.addChild(&field42);

field& field43 =  field();
field43.setName(std::string("c"));
field43.setType(std::string("SFFloat"));
field43.setAccessType(std::string("inputOutput"));
field43.setValue(std::string("5"));
ComposedShader34.addChild(&field43);

field& field44 =  field();
field44.setName(std::string("d"));
field44.setType(std::string("SFFloat"));
field44.setAccessType(std::string("inputOutput"));
field44.setValue(std::string("5"));
ComposedShader34.addChild(&field44);

field& field45 =  field();
field45.setName(std::string("tdelta"));
field45.setType(std::string("SFFloat"));
field45.setAccessType(std::string("inputOutput"));
field45.setValue(std::string("0"));
ComposedShader34.addChild(&field45);

field& field46 =  field();
field46.setName(std::string("pdelta"));
field46.setType(std::string("SFFloat"));
field46.setAccessType(std::string("inputOutput"));
field46.setValue(std::string("0"));
ComposedShader34.addChild(&field46);

ShaderPart& ShaderPart47 =  ShaderPart();
ShaderPart47.setUrl((std::string[]){"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs", "../shaders/x_ite_flower_particles.vs"}, 2);
ShaderPart47.setType(std::string("VERTEX"));
ComposedShader34.setParts(&ShaderPart47);

ShaderPart& ShaderPart48 =  ShaderPart();
ShaderPart48.setUrl((std::string[]){"https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs", "../shaders/commonnew.fs"}, 2);
ShaderPart48.setType(std::string("FRAGMENT"));
ComposedShader34.setParts(&ShaderPart48);

Appearance25.addChild(&ComposedShader34);

ParticleSystem21.addChildren(&Appearance25);

Sphere& Sphere49 =  Sphere();
ParticleSystem21.setGeometry(&Sphere49);

Group20.addChild(&ParticleSystem21);

Script& Script50 =  Script();
Script50.setDEF(std::string("Animate"));
field& field51 =  field();
field51.setName(std::string("translation"));
field51.setAccessType(std::string("inputOutput"));
field51.setType(std::string("SFVec3f"));
field51.setValue(std::string("0 0 0"));
Script50.addChild(&field51);

field& field52 =  field();
field52.setName(std::string("velocity"));
field52.setAccessType(std::string("inputOutput"));
field52.setType(std::string("SFVec3f"));
field52.setValue(std::string("0 0 0"));
Script50.addChild(&field52);

field& field53 =  field();
field53.setName(std::string("set_fraction"));
field53.setAccessType(std::string("inputOnly"));
field53.setType(std::string("SFFloat"));
Script50.addChild(&field53);

field& field54 =  field();
field54.setName(std::string("a"));
field54.setType(std::string("SFFloat"));
field54.setAccessType(std::string("inputOutput"));
field54.setValue(std::string("0.5"));
Script50.addChild(&field54);

field& field55 =  field();
field55.setName(std::string("b"));
field55.setType(std::string("SFFloat"));
field55.setAccessType(std::string("inputOutput"));
field55.setValue(std::string("0.5"));
Script50.addChild(&field55);

field& field56 =  field();
field56.setName(std::string("c"));
field56.setType(std::string("SFFloat"));
field56.setAccessType(std::string("inputOutput"));
field56.setValue(std::string("3"));
Script50.addChild(&field56);

field& field57 =  field();
field57.setName(std::string("d"));
field57.setType(std::string("SFFloat"));
field57.setAccessType(std::string("inputOutput"));
field57.setValue(std::string("3"));
Script50.addChild(&field57);

field& field58 =  field();
field58.setName(std::string("tdelta"));
field58.setType(std::string("SFFloat"));
field58.setAccessType(std::string("inputOutput"));
field58.setValue(std::string("0.5"));
Script50.addChild(&field58);

field& field59 =  field();
field59.setName(std::string("pdelta"));
field59.setType(std::string("SFFloat"));
field59.setAccessType(std::string("inputOutput"));
field59.setValue(std::string("0.5"));
Script50.addChild(&field59);


//Script50.setSourceCode(std::string("ecmascript:")+
//_T("			function initialize() {")+
//_T("			    translation = new SFVec3f(0, 0, 0);")+
//_T("			    velocity = new SFVec3f(")+
//_T("			    	Math.random() - 0.5,")+
//_T("				Math.random() - 0.5,")+
//_T("				Math.random() - 0.5);")+
//_T("			}")+
//_T("			function set_fraction() {")+
//_T("			    translation = new SFVec3f(")+
//_T("			    	translation.x + velocity.x,")+
//_T("				translation.y + velocity.y,")+
//_T("				translation.z + velocity.z);")+
//_T("			    for (var j = 0; j <= 2; j++) {")+
//_T("				    if (Math.abs(translation.x) > 10) {")+
//_T("					initialize();")+
//_T("				    } else if (Math.abs(translation.y) > 10) {")+
//_T("					initialize();")+
//_T("				    } else if (Math.abs(translation.z) > 10) {")+
//_T("					initialize();")+
//_T("				    } else {")+
//_T("					velocity.x += Math.random() * 0.2 - 0.1;")+
//_T("					velocity.y += Math.random() * 0.2 - 0.1;")+
//_T("					velocity.z += Math.random() * 0.2 - 0.1;")+
//_T("				    }")+
//_T("			    }")+
//_T("			    animate_flowers();")+
//_T("			}")+
//_T("			function animate_flowers(fraction, eventTime) {")+
//_T("				var choice = Math.floor(Math.random() * 4);")+
//_T("				switch (choice) {")+
//_T("				case 0:")+
//_T("					a += Math.random() * 0.2 - 0.1;")+
//_T("					break;")+
//_T("				case 1:")+
//_T("					b += Math.random() * 0.2 - 0.1;")+
//_T("					break;")+
//_T("				case 2:")+
//_T("					c += Math.random() * 2 - 1;")+
//_T("					break;")+
//_T("				case 3:")+
//_T("					d += Math.random() * 2 - 1;")+
//_T("					break;")+
//_T("				}")+
//_T("				tdelta = tdelta + 0.05;")+
//_T("				pdelta = pdelta + 0.05;")+
//_T("				if (a > 1) {")+
//_T("					a =  0.5;")+
//_T("				}")+
//_T("				if (b > 1) {")+
//_T("					b =  0.5;")+
//_T("				}")+
//_T("				if (c < 1) {")+
//_T("					c =  4;")+
//_T("				}")+
//_T("				if (d < 1) {")+
//_T("					d =  4;")+
//_T("				}")+
//_T("				if (c > 10) {")+
//_T("					c = 4;")+
//_T("				}")+
//_T("				if (d > 10) {")+
//_T("					d = 4;")+
//_T("				}")+
//_T("			}"));
Group20.addChild(&Script50);

TimeSensor& TimeSensor60 =  TimeSensor();
TimeSensor60.setDEF(std::string("TourTime"));
TimeSensor60.setCycleInterval(5);
TimeSensor60.setLoop(true);
Group20.addChild(&TimeSensor60);

ROUTE& ROUTE61 =  ROUTE();
ROUTE61.setFromNode(std::string("TourTime"));
ROUTE61.setFromField(std::string("fraction_changed"));
ROUTE61.setToNode(std::string("Animate"));
ROUTE61.setToField(std::string("set_fraction"));
Group20.addChild(&ROUTE61);

ROUTE& ROUTE62 =  ROUTE();
ROUTE62.setFromNode(std::string("Animate"));
ROUTE62.setFromField(std::string("a"));
ROUTE62.setToNode(std::string("x_ite"));
ROUTE62.setToField(std::string("a"));
Group20.addChild(&ROUTE62);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(std::string("Animate"));
ROUTE63.setFromField(std::string("b"));
ROUTE63.setToNode(std::string("x_ite"));
ROUTE63.setToField(std::string("b"));
Group20.addChild(&ROUTE63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(std::string("Animate"));
ROUTE64.setFromField(std::string("c"));
ROUTE64.setToNode(std::string("x_ite"));
ROUTE64.setToField(std::string("c"));
Group20.addChild(&ROUTE64);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(std::string("Animate"));
ROUTE65.setFromField(std::string("d"));
ROUTE65.setToNode(std::string("x_ite"));
ROUTE65.setToField(std::string("d"));
Group20.addChild(&ROUTE65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(std::string("Animate"));
ROUTE66.setFromField(std::string("pdelta"));
ROUTE66.setToNode(std::string("x_ite"));
ROUTE66.setToField(std::string("pdelta"));
Group20.addChild(&ROUTE66);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(std::string("Animate"));
ROUTE67.setFromField(std::string("tdelta"));
ROUTE67.setToNode(std::string("x_ite"));
ROUTE67.setToField(std::string("tdelta"));
Group20.addChild(&ROUTE67);

Scene15.addChild(&Group20);

X3D0.setScene(&Scene15);

}
