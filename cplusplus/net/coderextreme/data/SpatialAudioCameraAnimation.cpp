#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Full"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("SpatialAudioCameraAnimation.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("info"));
meta4.setContent(std::string("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("creator"));
meta5.setContent(std::string("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("created"));
meta6.setContent(std::string("28 October 2020"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("modified"));
meta7.setContent(std::string("5 December 2021"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("reference"));
meta8.setContent(std::string("CHANGELOG.txt"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("TODO"));
meta9.setContent(std::string("credit for audio files"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("reference"));
meta10.setContent(std::string("https://www.medialab.hmu.gr/minipages/x3domAudio"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("identifier"));
meta11.setContent(std::string("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("generator"));
meta12.setContent(std::string("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("license"));
meta13.setContent(std::string("../license.html"));
head1.addMeta(&meta13);

X3D0.setHead(&head1);

Scene& Scene14 =  Scene();
WorldInfo& WorldInfo15 =  WorldInfo();
WorldInfo15.setTitle(std::string("SpatialAudioCameraAnimation.x3d"));
Scene14.addChild(&WorldInfo15);

NavigationInfo& NavigationInfo16 =  NavigationInfo();
Scene14.addChild(&NavigationInfo16);

Background& Background17 =  Background();
Background17.setBackUrl(new std::string[]{"images/generic/BK1.png", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"}, 2);
Background17.setBottomUrl(new std::string[]{"images/generic/DN1.png", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"}, 2);
Background17.setFrontUrl(new std::string[]{"images/generic/FR1.png", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"}, 2);
Background17.setLeftUrl(new std::string[]{"images/generic/LF1.png", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"}, 2);
Background17.setRightUrl(new std::string[]{"images/generic/RT1.png", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"}, 2);
Background17.setTopUrl(new std::string[]{"images/generic/UP1.png", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"}, 2);
Scene14.addChild(&Background17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setDEF(std::string("Camera001"));
Viewpoint18.setDescription(std::string("Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view"));
Viewpoint18.setOrientation(new float[]{1.0,0.0,0.0,-0.523599});
Viewpoint18.setPosition(new float[]{0.0,2000.0,3500.0});
Scene14.addChild(&Viewpoint18);

TimeSensor& TimeSensor19 =  TimeSensor();
TimeSensor19.setDEF(std::string("TIMER"));
TimeSensor19.setCycleInterval(33.333332);
TimeSensor19.setLoop(true);
Scene14.addChild(&TimeSensor19);

PositionInterpolator& PositionInterpolator20 =  PositionInterpolator();
PositionInterpolator20.setDEF(std::string("Camera001-POS-INTERP"));
PositionInterpolator20.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
PositionInterpolator20.setKeyValue(new float[]{0.0,2000.0,3500.0,0.0,2000.0,0.0,0.0,2000.0,-3500.0,0.0,2000.0,0.0,0.0,2000.0,3500.0}, 15);
Scene14.addChild(&PositionInterpolator20);

OrientationInterpolator& OrientationInterpolator21 =  OrientationInterpolator();
OrientationInterpolator21.setDEF(std::string("Camera001-ROT-INTERP"));
OrientationInterpolator21.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
OrientationInterpolator21.setKeyValue(new float[]{1.0,0.0,0.0,-0.523599,0.99999,0.003554,0.002727,-1.309007,0.0,-0.965926,-0.258819,-3.141593,0.002282,-0.793351,-0.60876,-3.135645,1.0,-0.000001,0.0,-0.523599}, 20);
Scene14.addChild(&OrientationInterpolator21);

ROUTE& ROUTE22 =  ROUTE();
ROUTE22.setFromField(std::string("fraction_changed"));
ROUTE22.setFromNode(std::string("TIMER"));
ROUTE22.setToField(std::string("set_fraction"));
ROUTE22.setToNode(std::string("Camera001-POS-INTERP"));
Scene14.addChild(&ROUTE22);

ROUTE& ROUTE23 =  ROUTE();
ROUTE23.setFromField(std::string("value_changed"));
ROUTE23.setFromNode(std::string("Camera001-POS-INTERP"));
ROUTE23.setToField(std::string("set_position"));
ROUTE23.setToNode(std::string("Camera001"));
Scene14.addChild(&ROUTE23);

ROUTE& ROUTE24 =  ROUTE();
ROUTE24.setFromField(std::string("fraction_changed"));
ROUTE24.setFromNode(std::string("TIMER"));
ROUTE24.setToField(std::string("set_fraction"));
ROUTE24.setToNode(std::string("Camera001-ROT-INTERP"));
Scene14.addChild(&ROUTE24);

ROUTE& ROUTE25 =  ROUTE();
ROUTE25.setFromField(std::string("value_changed"));
ROUTE25.setFromNode(std::string("Camera001-ROT-INTERP"));
ROUTE25.setToField(std::string("set_orientation"));
ROUTE25.setToNode(std::string("Camera001"));
Scene14.addChild(&ROUTE25);

Transform& Transform26 =  Transform();
Transform26.setDEF(std::string("Floor"));
Transform26.setTranslation(new float[]{1.241,0.0,0.358});
Shape& Shape27 =  Shape();
Appearance& Appearance28 =  Appearance();
Appearance28.setContainerField("appearance");
Appearance28.setDEF(std::string("WireColor"));
Material& Material29 =  Material();
Material29.setContainerField("material");
Material29.setDiffuseColor(new float[]{0.122,0.114,0.125});
Appearance28.addChild(&Material29);

Shape27.addChild(&Appearance28);

Box& Box30 =  Box();
Box30.setSize(new float[]{2000.0,1.0,2000.0});
Shape27.setGeometry(&Box30);

Transform26.addChild(&Shape27);

Scene14.addChild(&Transform26);

Transform& Transform31 =  Transform();
Transform31.setDEF(std::string("TransformAudio1"));
Transform31.setTranslation(new float[]{-933.123474,0.0,-926.253235});
Shape& Shape32 =  Shape();
Appearance& Appearance33 =  Appearance();
Appearance33.setContainerField("appearance");
Appearance33.setDEF(std::string("WireColor_1"));
Material& Material34 =  Material();
Material34.setContainerField("material");
Material34.setDiffuseColor(new float[]{0.690196,0.101961,0.101961});
Appearance33.addChild(&Material34);

Shape32.addChild(&Appearance33);

Sphere& Sphere35 =  Sphere();
Sphere35.setRadius(100);
Shape32.setGeometry(&Sphere35);

Transform31.addChild(&Shape32);

Billboard& Billboard36 =  Billboard();
Transform& Transform37 =  Transform();
Transform37.setDEF(std::string("violin"));
Transform37.setRotation(new float[]{1.0,0.0,0.0,-0.5});
Transform37.setScale(new float[]{100.0,100.0,100.0});
Transform37.setTranslation(new float[]{0.0,100.0,0.0});
Shape& Shape38 =  Shape();
Appearance& Appearance39 =  Appearance();
Appearance39.setContainerField("appearance");
Material& Material40 =  Material();
Material40.setContainerField("material");
Material40.setAmbientIntensity(0.0933);
Material40.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material40.setShininess(0.51);
Material40.setSpecularColor(new float[]{0.46,0.46,0.46});
Appearance39.addChild(&Material40);

Shape38.addChild(&Appearance39);

Text& Text41 =  Text();
Text41.setString(new std::string[]{"Violin"}, 1);
CFontStyle& FontStyle42 =  CFontStyle();
FontStyle42.setContainerField("fontStyle");
FontStyle42.setDEF(std::string("ModelFontStyle"));
FontStyle42.setFamily(new std::string[]{"Times", "SERIF"}, 2);
FontStyle42.setStyle(std::string("BOLD"));
Text41.setFontStyle(&FontStyle42);

Shape38.setGeometry(&Text41);

Transform37.addChild(&Shape38);

Billboard36.addChild(&Transform37);

Transform31.addChild(&Billboard36);

Scene14.addChild(&Transform31);

Transform& Transform43 =  Transform();
Transform43.setDEF(std::string("TransformAudio2"));
Transform43.setTranslation(new float[]{933.475586,0.0,924.423218});
Shape& Shape44 =  Shape();
Appearance& Appearance45 =  Appearance();
Appearance45.setContainerField("appearance");
Appearance45.setDEF(std::string("WireColor_2"));
Material& Material46 =  Material();
Material46.setContainerField("material");
Material46.setDiffuseColor(new float[]{0.105882,0.694118,0.580392});
Appearance45.addChild(&Material46);

Shape44.addChild(&Appearance45);

Sphere& Sphere47 =  Sphere();
Sphere47.setRadius(100);
Shape44.setGeometry(&Sphere47);

Transform43.addChild(&Shape44);

Billboard& Billboard48 =  Billboard();
Transform& Transform49 =  Transform();
Transform49.setDEF(std::string("saxophone"));
Transform49.setRotation(new float[]{1.0,0.0,0.0,-0.5});
Transform49.setScale(new float[]{100.0,100.0,100.0});
Transform49.setTranslation(new float[]{0.0,100.0,0.0});
Shape& Shape50 =  Shape();
Appearance& Appearance51 =  Appearance();
Appearance51.setContainerField("appearance");
Material& Material52 =  Material();
Material52.setContainerField("material");
Material52.setAmbientIntensity(0.0933);
Material52.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material52.setShininess(0.51);
Material52.setSpecularColor(new float[]{0.46,0.46,0.46});
Appearance51.addChild(&Material52);

Shape50.addChild(&Appearance51);

Text& Text53 =  Text();
Text53.setString(new std::string[]{"Saxophone"}, 1);
CFontStyle& FontStyle54 =  CFontStyle();
FontStyle54.setContainerField("fontStyle");
FontStyle54.setUSE(std::string("ModelFontStyle"));
Text53.setFontStyle(&FontStyle54);

Shape50.setGeometry(&Text53);

Transform49.addChild(&Shape50);

Billboard48.addChild(&Transform49);

Transform43.addChild(&Billboard48);

Scene14.addChild(&Transform43);

ListenerPointSource& ListenerPointSource55 =  ListenerPointSource();
ListenerPointSource55.setTrackCurrentView(true);
Scene14.addChild(&ListenerPointSource55);

StreamAudioDestination& StreamAudioDestination56 =  StreamAudioDestination();
SpatialSound& SpatialSound57 =  SpatialSound();
SpatialSound57.setDEF(std::string("Audio1"));
Gain& Gain58 =  Gain();
AudioClip& AudioClip59 =  AudioClip();
AudioClip59.setDescription(std::string("Violin"));
AudioClip59.setLoop(true);
AudioClip59.setUrl(new std::string[]{"sound/violin.mp3", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"}, 2);
Gain58.addChildren(AudioClip59);

SpatialSound57.addChildren(Gain58);

StreamAudioDestination56.addChildren(SpatialSound57);

SpatialSound& SpatialSound60 =  SpatialSound();
SpatialSound60.setDEF(std::string("Audio2"));
Gain& Gain61 =  Gain();
AudioClip& AudioClip62 =  AudioClip();
AudioClip62.setDescription(std::string("Saxophone"));
AudioClip62.setLoop(true);
AudioClip62.setUrl(new std::string[]{"sound/saxophone.mp3", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"}, 2);
Gain61.addChildren(AudioClip62);

SpatialSound60.addChildren(Gain61);

StreamAudioDestination56.addChildren(SpatialSound60);

Scene14.addChild(&StreamAudioDestination56);

X3D0.setScene(&Scene14);

}
