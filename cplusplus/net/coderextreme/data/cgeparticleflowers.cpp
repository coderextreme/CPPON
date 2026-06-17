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
#include <string>
#include "X3DLib.h"
int cgeparticleflowers(int argc, char ** argv) {
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
NavigationInfo16.setType((std::string[]){"ANY", "EXAMINE", "FLY", "LOOKAT"}, 4);
Scene14.addChild(&NavigationInfo16);

Viewpoint& Viewpoint17 =  Viewpoint();
Viewpoint17.setDescription(std::string("Tour Views"));
Viewpoint17.setPosition(new float[]{0.0,0.0,12.0});
Scene14.addChild(&Viewpoint17);

Background& Background18 =  Background();
Background18.setBackUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background18.setBottomUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background18.setFrontUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background18.setLeftUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background18.setRightUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background18.setTopUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Scene14.addChild(&Background18);

Transform& Transform19 =  Transform();
ParticleSystem& ParticleSystem20 =  ParticleSystem();
ParticleSystem20.setMaxParticles(20);
ParticleSystem20.setGeometryType(std::string("GEOMETRY"));
BoundedPhysicsModel& BoundedPhysicsModel21 =  BoundedPhysicsModel();
Sphere& Sphere22 =  Sphere();
Sphere22.setRadius(100);
BoundedPhysicsModel21.setGeometry(&Sphere22);

ParticleSystem20.addPhysics(BoundedPhysicsModel21);

ExplosionEmitter& ExplosionEmitter23 =  ExplosionEmitter();
ExplosionEmitter23.setSpeed(2);
ExplosionEmitter23.setVariation(0.75);
ParticleSystem20.setEmitter(ExplosionEmitter23);

Sphere& Sphere24 =  Sphere();
ParticleSystem20.setGeometry(&Sphere24);

Appearance& Appearance25 =  Appearance();
Material& Material26 =  Material();
Material26.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material26.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance25.addChild(&Material26);

ComposedCubeMapTexture& ComposedCubeMapTexture27 =  ComposedCubeMapTexture();
ComposedCubeMapTexture27.setDEF(std::string("texture"));
ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture27.setBack(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture27.setBottom(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_from.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture27.setFront(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture27.setLeft(ImageTexture31);

ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture27.setRight(ImageTexture32);

ImageTexture& ImageTexture33 =  ImageTexture();
ImageTexture33.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture27.setTop(ImageTexture33);

Appearance25.addChild(&ComposedCubeMapTexture27);

ComposedShader& ComposedShader34 =  ComposedShader();
ComposedShader34.setDEF(std::string("shader"));
ComposedShader34.setLanguage(std::string("GLSL"));
field& field35 =  field();
field35.setName(std::string("cube"));
field35.setType(std::string("SFInt32"));
field35.setAccessType(std::string("inputOutput"));
field35.setValue(std::string("0"));
ComposedShader34.addChild(&field35);

field& field36 =  field();
field36.setName(std::string("chromaticDispertion"));
field36.setAccessType(std::string("initializeOnly"));
field36.setType(std::string("SFVec3f"));
field36.setValue(std::string("0.98 1 1.033"));
ComposedShader34.addChild(&field36);

field& field37 =  field();
field37.setName(std::string("bias"));
field37.setType(std::string("SFFloat"));
field37.setAccessType(std::string("inputOutput"));
field37.setValue(std::string("0.5"));
ComposedShader34.addChild(&field37);

field& field38 =  field();
field38.setName(std::string("scale"));
field38.setType(std::string("SFFloat"));
field38.setAccessType(std::string("inputOutput"));
field38.setValue(std::string("0.5"));
ComposedShader34.addChild(&field38);

field& field39 =  field();
field39.setName(std::string("power"));
field39.setType(std::string("SFFloat"));
field39.setAccessType(std::string("inputOutput"));
field39.setValue(std::string("2"));
ComposedShader34.addChild(&field39);

field& field40 =  field();
field40.setName(std::string("a"));
field40.setType(std::string("SFFloat"));
field40.setAccessType(std::string("inputOutput"));
field40.setValue(std::string("2"));
ComposedShader34.addChild(&field40);

field& field41 =  field();
field41.setName(std::string("b"));
field41.setType(std::string("SFFloat"));
field41.setAccessType(std::string("inputOutput"));
field41.setValue(std::string("1"));
ComposedShader34.addChild(&field41);

field& field42 =  field();
field42.setName(std::string("c"));
field42.setType(std::string("SFFloat"));
field42.setAccessType(std::string("inputOutput"));
field42.setValue(std::string("5"));
ComposedShader34.addChild(&field42);

field& field43 =  field();
field43.setName(std::string("d"));
field43.setType(std::string("SFFloat"));
field43.setAccessType(std::string("inputOutput"));
field43.setValue(std::string("5"));
ComposedShader34.addChild(&field43);

field& field44 =  field();
field44.setName(std::string("tdelta"));
field44.setType(std::string("SFFloat"));
field44.setAccessType(std::string("inputOutput"));
field44.setValue(std::string("0"));
ComposedShader34.addChild(&field44);

field& field45 =  field();
field45.setName(std::string("pdelta"));
field45.setType(std::string("SFFloat"));
field45.setAccessType(std::string("inputOutput"));
field45.setValue(std::string("0"));
ComposedShader34.addChild(&field45);

//<field name='cube' type='SFNode' accessType=\"initializeOnly\">
//<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>
//</field>
ShaderPart& ShaderPart46 =  ShaderPart();
ShaderPart46.setUrl((std::string[]){"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs"}, 1);
ShaderPart46.setType(std::string("VERTEX"));
ComposedShader34.setParts(&ShaderPart46);

ShaderPart& ShaderPart47 =  ShaderPart();
ShaderPart47.setType(std::string("FRAGMENT"));
ShaderPart47.setUrl((std::string[]){"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs"}, 1);
ComposedShader34.setParts(&ShaderPart47);

Appearance25.addChild(&ComposedShader34);

ParticleSystem20.addChildren(&Appearance25);

Transform19.addChild(&ParticleSystem20);

Script& Script48 =  Script();
Script48.setDEF(std::string("Animate"));
field& field49 =  field();
field49.setName(std::string("translation"));
field49.setAccessType(std::string("inputOutput"));
field49.setType(std::string("SFVec3f"));
field49.setValue(std::string("0 0 0"));
Script48.addChild(&field49);

field& field50 =  field();
field50.setName(std::string("velocity"));
field50.setAccessType(std::string("inputOutput"));
field50.setType(std::string("SFVec3f"));
field50.setValue(std::string("0 0 0"));
Script48.addChild(&field50);

field& field51 =  field();
field51.setName(std::string("set_fraction"));
field51.setAccessType(std::string("inputOnly"));
field51.setType(std::string("SFFloat"));
Script48.addChild(&field51);

field& field52 =  field();
field52.setName(std::string("a"));
field52.setType(std::string("SFFloat"));
field52.setAccessType(std::string("inputOutput"));
field52.setValue(std::string("0.5"));
Script48.addChild(&field52);

field& field53 =  field();
field53.setName(std::string("b"));
field53.setType(std::string("SFFloat"));
field53.setAccessType(std::string("inputOutput"));
field53.setValue(std::string("0.5"));
Script48.addChild(&field53);

field& field54 =  field();
field54.setName(std::string("c"));
field54.setType(std::string("SFFloat"));
field54.setAccessType(std::string("inputOutput"));
field54.setValue(std::string("3"));
Script48.addChild(&field54);

field& field55 =  field();
field55.setName(std::string("d"));
field55.setType(std::string("SFFloat"));
field55.setAccessType(std::string("inputOutput"));
field55.setValue(std::string("3"));
Script48.addChild(&field55);

field& field56 =  field();
field56.setName(std::string("tdelta"));
field56.setType(std::string("SFFloat"));
field56.setAccessType(std::string("inputOutput"));
field56.setValue(std::string("0.5"));
Script48.addChild(&field56);

field& field57 =  field();
field57.setName(std::string("pdelta"));
field57.setType(std::string("SFFloat"));
field57.setAccessType(std::string("inputOutput"));
field57.setValue(std::string("0.5"));
Script48.addChild(&field57);


//Script48.setSourceCode(std::string("ecmascript:")+
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
Transform19.addChild(&Script48);

TimeSensor& TimeSensor58 =  TimeSensor();
TimeSensor58.setDEF(std::string("TourTime"));
TimeSensor58.setCycleInterval(5);
TimeSensor58.setLoop(true);
Transform19.addChild(&TimeSensor58);

ROUTE& ROUTE59 =  ROUTE();
ROUTE59.setFromNode(std::string("TourTime"));
ROUTE59.setFromField(std::string("fraction_changed"));
ROUTE59.setToNode(std::string("Animate"));
ROUTE59.setToField(std::string("set_fraction"));
Transform19.addChild(&ROUTE59);

ROUTE& ROUTE60 =  ROUTE();
ROUTE60.setFromNode(std::string("Animate"));
ROUTE60.setFromField(std::string("a"));
ROUTE60.setToNode(std::string("shader"));
ROUTE60.setToField(std::string("a"));
Transform19.addChild(&ROUTE60);

ROUTE& ROUTE61 =  ROUTE();
ROUTE61.setFromNode(std::string("Animate"));
ROUTE61.setFromField(std::string("b"));
ROUTE61.setToNode(std::string("shader"));
ROUTE61.setToField(std::string("b"));
Transform19.addChild(&ROUTE61);

ROUTE& ROUTE62 =  ROUTE();
ROUTE62.setFromNode(std::string("Animate"));
ROUTE62.setFromField(std::string("c"));
ROUTE62.setToNode(std::string("shader"));
ROUTE62.setToField(std::string("c"));
Transform19.addChild(&ROUTE62);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(std::string("Animate"));
ROUTE63.setFromField(std::string("d"));
ROUTE63.setToNode(std::string("shader"));
ROUTE63.setToField(std::string("d"));
Transform19.addChild(&ROUTE63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(std::string("Animate"));
ROUTE64.setFromField(std::string("pdelta"));
ROUTE64.setToNode(std::string("shader"));
ROUTE64.setToField(std::string("pdelta"));
Transform19.addChild(&ROUTE64);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(std::string("Animate"));
ROUTE65.setFromField(std::string("tdelta"));
ROUTE65.setToNode(std::string("shader"));
ROUTE65.setToField(std::string("tdelta"));
Transform19.addChild(&ROUTE65);

Scene14.addChild(&Transform19);

X3D0.setScene(&Scene14);

}
