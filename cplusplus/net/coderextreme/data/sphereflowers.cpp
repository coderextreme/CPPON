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
int sphereflowers(int argc, char ** argv) {
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
meta10.setContent(std::string("sphereflowers.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("creator"));
meta11.setContent(std::string("John Carlson"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("created"));
meta12.setContent(std::string("Jan 17 2022"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("modified"));
meta13.setContent(std::string("Sep 3 2023"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("description"));
meta14.setContent(std::string("5 or more prismatic flowers"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("generator"));
meta15.setContent(std::string("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(std::string("identifier"));
meta16.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/sphereflowers.x3d"));
head1.addMeta(&meta16);

X3D0.setHead(&head1);

Scene& Scene17 =  Scene();
NavigationInfo& NavigationInfo18 =  NavigationInfo();
Scene17.addChild(&NavigationInfo18);

Background& Background19 =  Background();
Background19.setBackUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background19.setBottomUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background19.setFrontUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background19.setLeftUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background19.setRightUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background19.setTopUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Scene17.addChild(&Background19);

Group& Group20 =  Group();
ExternProtoDeclare& ExternProtoDeclare21 =  ExternProtoDeclare();
ExternProtoDeclare21.setName(std::string("FlowerProto"));
ExternProtoDeclare21.setUrl((std::string[]){"../data/flowerproto.x3d#FlowerProto", "https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d#FlowerProto"}, 2);
field& field22 =  field();
field22.setName(std::string("vertex"));
field22.setAccessType(std::string("inputOutput"));
field22.setType(std::string("MFString"));
ExternProtoDeclare21.addChild(&field22);

field& field23 =  field();
field23.setName(std::string("fragment"));
field23.setAccessType(std::string("inputOutput"));
field23.setType(std::string("MFString"));
ExternProtoDeclare21.addChild(&field23);

Group20.addChild(&ExternProtoDeclare21);

ProtoDeclare& ProtoDeclare24 =  ProtoDeclare();
ProtoDeclare24.setName(std::string("flower"));
ProtoBody& ProtoBody25 =  ProtoBody();
Group& Group26 =  Group();
ProtoInstance& ProtoInstance27 =  ProtoInstance();
ProtoInstance27.setName(std::string("FlowerProto"));
fieldValue& fieldValue28 =  fieldValue();
fieldValue28.setName(std::string("vertex"));
fieldValue28.setValue(std::string("\"../shaders/x_ite_flowers_chromatic.vs\""));
ProtoInstance27.addChild(&fieldValue28);

fieldValue& fieldValue29 =  fieldValue();
fieldValue29.setName(std::string("fragment"));
fieldValue29.setValue(std::string("\"../shaders/x_ite.fs\""));
ProtoInstance27.addChild(&fieldValue29);

Group26.addChild(&ProtoInstance27);

ProtoBody25.addChild(&Group26);

ProtoDeclare24.addChild(&ProtoBody25);

Group20.addChild(&ProtoDeclare24);

ProtoInstance& ProtoInstance30 =  ProtoInstance();
ProtoInstance30.setName(std::string("flower"));
Group20.addChild(&ProtoInstance30);

ProtoInstance& ProtoInstance31 =  ProtoInstance();
ProtoInstance31.setName(std::string("flower"));
Group20.addChild(&ProtoInstance31);

ProtoInstance& ProtoInstance32 =  ProtoInstance();
ProtoInstance32.setName(std::string("flower"));
Group20.addChild(&ProtoInstance32);

ProtoInstance& ProtoInstance33 =  ProtoInstance();
ProtoInstance33.setName(std::string("flower"));
Group20.addChild(&ProtoInstance33);

ProtoInstance& ProtoInstance34 =  ProtoInstance();
ProtoInstance34.setName(std::string("flower"));
Group20.addChild(&ProtoInstance34);

ProtoInstance& ProtoInstance35 =  ProtoInstance();
ProtoInstance35.setName(std::string("flower"));
Group20.addChild(&ProtoInstance35);

TimeSensor& TimeSensor36 =  TimeSensor();
TimeSensor36.setDEF(std::string("SongTime"));
TimeSensor36.setLoop(true);
Group20.addChild(&TimeSensor36);

Sound& Sound37 =  Sound();
Sound37.setMaxBack(100);
Sound37.setMaxFront(100);
Sound37.setMinBack(20);
Sound37.setMinFront(20);
Sound37.setLocation(new float[]{0.0,1.0,0.0});
AudioClip& AudioClip38 =  AudioClip();
AudioClip38.setDEF(std::string("AudioClip"));
AudioClip38.setDescription(std::string("Chandubabamusic #1"));
AudioClip38.setUrl((std::string[]){"../resources/chandubabamusic1.wav", "https://coderextreme.net/X3DJSONLD/src/main/resources/chandubabamusic1.wav"}, 2);
Sound37.setSource(AudioClip38);

Group20.addChild(&Sound37);

ROUTE& ROUTE39 =  ROUTE();
ROUTE39.setFromField(std::string("cycleTime"));
ROUTE39.setFromNode(std::string("SongTime"));
ROUTE39.setToField(std::string("startTime"));
ROUTE39.setToNode(std::string("AudioClip"));
Group20.addChild(&ROUTE39);

Scene17.addChild(&Group20);

X3D0.setScene(&Scene17);

}
