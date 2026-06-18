#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
int SplitChannels(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Full"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("SplitChannels.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner."));
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
meta7.setContent(std::string("23 April 2023"));
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
meta10.setContent(std::string("http://www.medialab.hmu.gr/minipages/x3domAudio"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("identifier"));
meta11.setContent(std::string("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d"));
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
WorldInfo15.setTitle(std::string("SplitChannels.x3d"));
Scene14.addChild(&WorldInfo15);

NavigationInfo& NavigationInfo16 =  NavigationInfo();
NavigationInfo16.setType((std::string[]){"NONE"}, 1);
Scene14.addChild(&NavigationInfo16);

Background& Background17 =  Background();
Background17.setSkyColor(new float[]{0.2,0.2,0.21}, 3);
Scene14.addChild(&Background17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setOrientation(new float[]{1.0,0.0,0.0,-0.5});
Viewpoint18.setPosition(new float[]{0.0,500.0,600.0});
Viewpoint18.setRetainUserOffsets(true);
Scene14.addChild(&Viewpoint18);

Transform& Transform19 =  Transform();
Transform19.setDEF(std::string("PowerR"));
Transform19.setTranslation(new float[]{100.0,400.0,400.0});
Transform& Transform20 =  Transform();
Transform20.setRotation(new float[]{1.0,0.0,0.0,-0.5});
Transform20.setTranslation(new float[]{0.0,40.0,0.0});
Shape& Shape21 =  Shape();
Appearance& Appearance22 =  Appearance();
Appearance22.setContainerField("appearance");
Appearance22.setDEF(std::string("audio_emit"));
Material& Material23 =  Material();
Material23.setContainerField("material");
Material23.setDiffuseColor(new float[]{0.0,1.0,0.0});
Material23.setEmissiveColor(new float[]{0.8,0.8,0.8});
Material23.setSpecularColor(new float[]{0.01,0.01,0.01});
Appearance22.addChild(&Material23);

Shape21.addChild(&Appearance22);

Box& Box24 =  Box();
Box24.setSize(new float[]{10.0,80.0,0.01});
Shape21.setGeometry(&Box24);

Transform20.addChild(&Shape21);

Transform19.addChild(&Transform20);

Transform& Transform25 =  Transform();
Transform25.setRotation(new float[]{1.0,0.0,0.0,-0.5});
Transform25.setTranslation(new float[]{-2.7,37.0,0.0});
Shape& Shape26 =  Shape();
Appearance& Appearance27 =  Appearance();
Appearance27.setContainerField("appearance");
Appearance27.setDEF(std::string("audio_emit2"));
Material& Material28 =  Material();
Material28.setContainerField("material");
Material28.setDiffuseColor(new float[]{0.0,1.0,0.0});
Material28.setEmissiveColor(new float[]{0.8,0.8,0.8});
Material28.setSpecularColor(new float[]{0.01,0.01,0.01});
Appearance27.addChild(&Material28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setContainerField("texture");
ImageTexture29.setUrl((std::string[]){"images/line.png", "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"}, 2);
Appearance27.addChild(&ImageTexture29);

Shape26.addChild(&Appearance27);

Box& Box30 =  Box();
Box30.setSize(new float[]{25.0,83.0,0.01});
Shape26.setGeometry(&Box30);

Transform25.addChild(&Shape26);

Transform19.addChild(&Transform25);

Transform& Transform31 =  Transform();
Transform31.setDEF(std::string("volumeRight"));
Transform31.setRotation(new float[]{1.0,0.0,0.0,-0.5});
Transform31.setScale(new float[]{10.0,10.0,10.0});
Transform31.setTranslation(new float[]{0.0,-10.0,0.0});
Shape& Shape32 =  Shape();
Appearance& Appearance33 =  Appearance();
Appearance33.setContainerField("appearance");
Material& Material34 =  Material();
Material34.setContainerField("material");
Material34.setAmbientIntensity(0.0933);
Material34.setDiffuseColor(new float[]{0.345,0.345,0.882});
Material34.setShininess(0.51);
Material34.setSpecularColor(new float[]{0.46,0.46,0.46});
Appearance33.addChild(&Material34);

Shape32.addChild(&Appearance33);

Text& Text35 =  Text();
Text35.setString((std::string[]){"Right Channel Volume"}, 1);
CFontStyle& FontStyle36 =  CFontStyle();
FontStyle36.setContainerField("fontStyle");
FontStyle36.setDEF(std::string("VolumeFontStyle"));
FontStyle36.setFamily((std::string[]){"Times", "SERIF"}, 2);
FontStyle36.setStyle(std::string("BOLD"));
Text35.setFontStyle(&FontStyle36);

Shape32.setGeometry(&Text35);

Transform31.addChild(&Shape32);

Transform19.addChild(&Transform31);

Scene14.addChild(&Transform19);

Transform& Transform37 =  Transform();
Transform37.setDEF(std::string("PowerL"));
Transform37.setTranslation(new float[]{-100.0,400.0,400.0});
Transform& Transform38 =  Transform();
Transform38.setRotation(new float[]{1.0,0.0,0.0,-0.5});
Transform38.setTranslation(new float[]{0.0,40.0,0.0});
Shape& Shape39 =  Shape();
Appearance& Appearance40 =  Appearance();
Appearance40.setContainerField("appearance");
Appearance40.setDEF(std::string("audio_emit3"));
Material& Material41 =  Material();
Material41.setContainerField("material");
Material41.setDiffuseColor(new float[]{0.0,1.0,0.0});
Material41.setEmissiveColor(new float[]{0.8,0.8,0.8});
Material41.setSpecularColor(new float[]{0.01,0.01,0.01});
Appearance40.addChild(&Material41);

Shape39.addChild(&Appearance40);

Box& Box42 =  Box();
Box42.setSize(new float[]{10.0,80.0,0.01});
Shape39.setGeometry(&Box42);

Transform38.addChild(&Shape39);

Transform37.addChild(&Transform38);

Transform& Transform43 =  Transform();
Transform43.setRotation(new float[]{1.0,0.0,0.0,-0.5});
Transform43.setTranslation(new float[]{13.2,37.0,0.0});
Shape& Shape44 =  Shape();
Appearance& Appearance45 =  Appearance();
Appearance45.setContainerField("appearance");
Appearance45.setDEF(std::string("audio_emit4"));
Material& Material46 =  Material();
Material46.setContainerField("material");
Material46.setDiffuseColor(new float[]{0.0,1.0,0.0});
Material46.setEmissiveColor(new float[]{0.8,0.8,0.8});
Material46.setSpecularColor(new float[]{0.01,0.01,0.01});
Appearance45.addChild(&Material46);

ImageTexture& ImageTexture47 =  ImageTexture();
ImageTexture47.setContainerField("texture");
ImageTexture47.setUrl((std::string[]){"images/line.png", "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"}, 2);
Appearance45.addChild(&ImageTexture47);

Shape44.addChild(&Appearance45);

Box& Box48 =  Box();
Box48.setSize(new float[]{25.0,83.0,0.01});
Shape44.setGeometry(&Box48);

Transform43.addChild(&Shape44);

Transform37.addChild(&Transform43);

Transform& Transform49 =  Transform();
Transform49.setDEF(std::string("volumeLeft"));
Transform49.setRotation(new float[]{1.0,0.0,0.0,-0.5});
Transform49.setScale(new float[]{10.0,10.0,10.0});
Transform49.setTranslation(new float[]{0.0,-10.0,0.0});
Shape& Shape50 =  Shape();
Appearance& Appearance51 =  Appearance();
Appearance51.setContainerField("appearance");
Material& Material52 =  Material();
Material52.setContainerField("material");
Material52.setAmbientIntensity(0.0933);
Material52.setDiffuseColor(new float[]{0.345,0.345,0.882});
Material52.setShininess(0.51);
Material52.setSpecularColor(new float[]{0.46,0.46,0.46});
Appearance51.addChild(&Material52);

Shape50.addChild(&Appearance51);

Text& Text53 =  Text();
Text53.setString((std::string[]){"Left Channel Volume"}, 1);
CFontStyle& FontStyle54 =  CFontStyle();
FontStyle54.setContainerField("fontStyle");
FontStyle54.setUSE(std::string("VolumeFontStyle"));
Text53.setFontStyle(&FontStyle54);

Shape50.setGeometry(&Text53);

Transform49.addChild(&Shape50);

Transform37.addChild(&Transform49);

Scene14.addChild(&Transform37);

Transform& Transform55 =  Transform();
Shape& Shape56 =  Shape();
Appearance& Appearance57 =  Appearance();
Appearance57.setContainerField("appearance");
Appearance57.setDEF(std::string("floor"));
Material& Material58 =  Material();
Material58.setContainerField("material");
Material58.setDiffuseColor(new float[]{0.1,0.1,0.1});
Material58.setShininess(0.8);
Material58.setSpecularColor(new float[]{0.5,0.6,0.7});
Appearance57.addChild(&Material58);

Shape56.addChild(&Appearance57);

Box& Box59 =  Box();
Box59.setSize(new float[]{1500.0,10.0,500.0});
Shape56.setGeometry(&Box59);

Transform55.addChild(&Shape56);

Scene14.addChild(&Transform55);

ListenerPointSource& ListenerPointSource60 =  ListenerPointSource();
ListenerPointSource60.setTrackCurrentView(true);
Scene14.addChild(&ListenerPointSource60);

StreamAudioDestination& StreamAudioDestination61 =  StreamAudioDestination();
Gain& Gain62 =  Gain();
ChannelMerger& ChannelMerger63 =  ChannelMerger();
ChannelSelector& ChannelSelector64 =  ChannelSelector();
Gain& Gain65 =  Gain();
Gain65.setUSE(std::string("ChannelSplitter"));
ChannelSelector64.addChildren(Gain65);

ChannelMerger63.addChildren(ChannelSelector64);

ChannelSelector& ChannelSelector66 =  ChannelSelector();
ChannelSelector66.setChannelSelection(1);
Gain& Gain67 =  Gain();
Gain67.setUSE(std::string("ChannelSplitter"));
ChannelSelector66.addChildren(Gain67);

ChannelMerger63.addChildren(ChannelSelector66);

Gain62.addChildren(ChannelMerger63);

StreamAudioDestination61.addChildren(Gain62);

Scene14.addChild(&StreamAudioDestination61);

ChannelSplitter& ChannelSplitter68 =  ChannelSplitter();
ChannelSplitter68.setDEF(std::string("ChannelSplitter"));
ChannelSplitter68.setChannelCountMode(std::string("EXPLICIT"));
AudioClip& AudioClip69 =  AudioClip();
AudioClip69.setDescription(std::string("Violin"));
AudioClip69.setUrl((std::string[]){"sound/violin.mp3", "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"}, 2);
ChannelSplitter68.addOutputs(AudioClip69);

Scene14.addChild(&ChannelSplitter68);

Transform& Transform70 =  Transform();
Transform70.setDEF(std::string("Audio3"));
Transform70.setRotation(new float[]{1.0,0.0,0.0,-0.5});
Transform70.setTranslation(new float[]{0.0,100.0,0.0});
Shape& Shape71 =  Shape();
Appearance& Appearance72 =  Appearance();
Appearance72.setContainerField("appearance");
Appearance72.setDEF(std::string("audio_emit5"));
Material& Material73 =  Material();
Material73.setContainerField("material");
Material73.setDiffuseColor(new float[]{0.3,1.0,0.3});
Material73.setEmissiveColor(new float[]{0.8,0.8,0.8});
Material73.setSpecularColor(new float[]{0.01,0.01,0.01});
Appearance72.addChild(&Material73);

ImageTexture& ImageTexture74 =  ImageTexture();
ImageTexture74.setContainerField("texture");
ImageTexture74.setUrl((std::string[]){"images/loudspeaker.png", "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"}, 2);
Appearance72.addChild(&ImageTexture74);

Shape71.addChild(&Appearance72);

Box& Box75 =  Box();
Box75.setSize(new float[]{100.0,100.0,0.001});
Shape71.setGeometry(&Box75);

Transform70.addChild(&Shape71);

Scene14.addChild(&Transform70);

X3D0.setScene(&Scene14);

}
