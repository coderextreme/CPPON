#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void HAnimPoseExternProtoDeclare(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Full"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("HAnimPoseExternProtoDeclare.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("Define ExternProtoDeclare for an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("created"));
meta4.setContent(std::string("1 November 2025"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("modified"));
meta5.setContent(std::string("14 December 2025"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("creator"));
meta6.setContent(std::string("Don Brutzman"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("creator"));
meta7.setContent(std::string("Joe Williams"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("contributor"));
meta8.setContent(std::string("Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("specificationSection"));
meta9.setContent(std::string("HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("specificationUrl"));
meta10.setContent(std::string("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("specificationSection"));
meta11.setContent(std::string("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("specificationUrl"));
meta12.setContent(std::string("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("specificationSection"));
meta13.setContent(std::string("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("specificationUrl"));
meta14.setContent(std::string("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("reference"));
meta15.setContent(std::string("Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(std::string("generator"));
meta16.setContent(std::string("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(std::string("generator"));
meta17.setContent(std::string("Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(std::string("identifier"));
meta18.setContent(std::string("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclare.x3d"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(std::string("license"));
meta19.setContent(std::string("https://www.web3d.org/x3d/content/examples/license.html"));
head1.addMeta(&meta19);

X3D0.setHead(&head1);

Scene& Scene20 =  Scene();
WorldInfo& WorldInfo21 =  WorldInfo();
WorldInfo21.setDEF(std::string("ModelInfo"));
WorldInfo21.setInfo(new std::string[]{"Design to illustrate a potential HAnimPose node"}, 1);
WorldInfo21.setTitle(std::string("HAnimPoseExternProtoDeclare"));
Scene20.addChild(&WorldInfo21);

Background& Background22 =  Background();
Background22.setSkyColor(new float[]{0.6,0.6,0.8}, 3);
Scene20.addChild(&Background22);

NavigationInfo& NavigationInfo23 =  NavigationInfo();
Scene20.addChild(&NavigationInfo23);

ExternProtoDeclare& ExternProtoDeclare24 =  ExternProtoDeclare();
ExternProtoDeclare24.setName(std::string("HAnimPose"));
ExternProtoDeclare24.setAppinfo(std::string("Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values."));
ExternProtoDeclare24.setUrl(new std::string[]{"Filename.x3d#HAnimPose", "https://some.address.org/Filename.x3d#HAnimPose"}, 2);
field& field25 =  field();
field25.setName(std::string("parentHAnimHumanoid"));
field25.setAccessType(std::string("inputOutput"));
field25.setAppinfo(std::string("HAnimHumanoid for this Pose to act upon"));
field25.setType(std::string("SFNode"));
ExternProtoDeclare24.addChild(&field25);

field& field26 =  field();
field26.setName(std::string("name"));
field26.setAccessType(std::string("inputOutput"));
field26.setAppinfo(std::string("name of this pose"));
field26.setType(std::string("SFString"));
ExternProtoDeclare24.addChild(&field26);

field& field27 =  field();
field27.setName(std::string("children"));
field27.setAccessType(std::string("inputOutput"));
field27.setAppinfo(std::string("joint values to apply to HAnimHumanoid"));
field27.setType(std::string("MFNode"));
//initializating Joint nodes (if any) go here
ExternProtoDeclare24.addChild(&field27);

field& field28 =  field();
field28.setName(std::string("description"));
field28.setAccessType(std::string("inputOutput"));
field28.setAppinfo(std::string("explanation of purpose"));
field28.setType(std::string("SFString"));
ExternProtoDeclare24.addChild(&field28);

field& field29 =  field();
field29.setName(std::string("enabled"));
field29.setAccessType(std::string("inputOutput"));
field29.setAppinfo(std::string("default value true"));
field29.setType(std::string("SFBool"));
ExternProtoDeclare24.addChild(&field29);

field& field30 =  field();
field30.setName(std::string("loa"));
field30.setAccessType(std::string("initializeOnly"));
field30.setAppinfo(std::string("default is no loa"));
field30.setType(std::string("SFInt32"));
ExternProtoDeclare24.addChild(&field30);

field& field31 =  field();
field31.setName(std::string("transitionDuration"));
field31.setAccessType(std::string("inputOutput"));
field31.setAppinfo(std::string("how many seconds to achieve the pose"));
field31.setType(std::string("SFTime"));
ExternProtoDeclare24.addChild(&field31);

field& field32 =  field();
field32.setName(std::string("metadata"));
field32.setAccessType(std::string("inputOutput"));
field32.setAppinfo(std::string("single Metadata* node"));
field32.setType(std::string("SFNode"));
ExternProtoDeclare24.addChild(&field32);

field& field33 =  field();
field33.setName(std::string("isActive"));
field33.setAccessType(std::string("outputOnly"));
field33.setAppinfo(std::string("event indicating when pose transition is active"));
field33.setType(std::string("SFBool"));
ExternProtoDeclare24.addChild(&field33);

field& field34 =  field();
field34.setName(std::string("commencePose"));
field34.setAccessType(std::string("inputOnly"));
field34.setAppinfo(std::string("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"));
field34.setType(std::string("SFBool"));
ExternProtoDeclare24.addChild(&field34);

field& field35 =  field();
field35.setName(std::string("resetAllJoints"));
field35.setAccessType(std::string("inputOnly"));
field35.setAppinfo(std::string("reset the skeleton to I pose with all joints zeroed"));
field35.setType(std::string("SFBool"));
ExternProtoDeclare24.addChild(&field35);

field& field36 =  field();
field36.setName(std::string("set_fraction"));
field36.setAccessType(std::string("inputOnly"));
field36.setAppinfo(std::string("allows transition to proceed incrementally from fraction [0..10"));
field36.setType(std::string("SFFloat"));
ExternProtoDeclare24.addChild(&field36);

field& field37 =  field();
field37.setName(std::string("set_startTime"));
field37.setAccessType(std::string("inputOnly"));
field37.setAppinfo(std::string("starts the animation clock"));
field37.setType(std::string("SFTime"));
ExternProtoDeclare24.addChild(&field37);

field& field38 =  field();
field38.setName(std::string("isLoaded"));
field38.setAccessType(std::string("inputOnly"));
field38.setAppinfo(std::string("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"));
field38.setType(std::string("SFBool"));
ExternProtoDeclare24.addChild(&field38);

field& field39 =  field();
field39.setName(std::string("traceEnabled"));
field39.setAccessType(std::string("inputOutput"));
field39.setAppinfo(std::string("debug trace to Browser output console this is a local prototype field"));
field39.setType(std::string("SFBool"));
ExternProtoDeclare24.addChild(&field39);

Scene20.addChild(&ExternProtoDeclare24);

Viewpoint& Viewpoint40 =  Viewpoint();
Viewpoint40.setDescription(std::string("HAnimPoseExternProtoDeclare description"));
Viewpoint40.setPosition(new float[]{0.0,1.0,4.0});
Scene20.addChild(&Viewpoint40);

Transform& Transform41 =  Transform();
Transform41.setDEF(std::string("DisplayHeader1"));
Transform41.setTranslation(new float[]{0.0,1.5,0.0});
Anchor& Anchor42 =  Anchor();
Anchor42.setDescription(std::string("go to HAnimPoseExternProtoDeclareIndex page"));
Anchor42.setParameter(new std::string[]{"target=_blank"}, 1);
Anchor42.setUrl(new std::string[]{"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclareIndex.html"}, 1);
Shape& Shape43 =  Shape();
Text& Text44 =  Text();
Text44.setString(new std::string[]{"Utility scene", "HAnimPoseExternProtoDeclare.x3d"}, 2);
CFontStyle& FontStyle45 =  CFontStyle();
FontStyle45.setContainerField("fontStyle");
FontStyle45.setDEF(std::string("HeaderFont"));
FontStyle45.setFamily(new std::string[]{"SANS"}, 1);
FontStyle45.setJustify(new std::string[]{"MIDDLE", "MIDDLE"}, 2);
FontStyle45.setSize(0.15);
FontStyle45.setStyle(std::string("BOLD"));
Text44.setFontStyle(&FontStyle45);

Shape43.setGeometry(&Text44);

Appearance& Appearance46 =  Appearance();
Appearance46.setContainerField("appearance");
Appearance46.setDEF(std::string("PoseTextAppearance"));
Material& Material47 =  Material();
Material47.setContainerField("material");
Material47.setDiffuseColor(new float[]{0.1,0.3,0.5});
Appearance46.addChild(&Material47);

Shape43.addChild(&Appearance46);

Anchor42.addChild(&Shape43);

Shape& Shape48 =  Shape();
Box& Box49 =  Box();
Box49.setSize(new float[]{3.5,0.5,0.001});
Shape48.setGeometry(&Box49);

Appearance& Appearance50 =  Appearance();
Appearance50.setContainerField("appearance");
Appearance50.setDEF(std::string("TransparentAppearance"));
Material& Material51 =  Material();
Material51.setContainerField("material");
Material51.setTransparency(1);
Appearance50.addChild(&Material51);

Shape48.addChild(&Appearance50);

Anchor42.addChild(&Shape48);

Transform41.addChild(&Anchor42);

Scene20.addChild(&Transform41);

Transform& Transform52 =  Transform();
Transform52.setDEF(std::string("DisplayHeader2"));
Transform52.setTranslation(new float[]{0.0,0.5,0.0});
Anchor& Anchor53 =  Anchor();
Anchor53.setDescription(std::string("go to HAnimPosePrototypeIndex page"));
Anchor53.setParameter(new std::string[]{"target=_blank"}, 1);
Anchor53.setUrl(new std::string[]{"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeIndex.html"}, 1);
Shape& Shape54 =  Shape();
Text& Text55 =  Text();
Text55.setString(new std::string[]{"This model supports", "HAnimPosePrototype.x3d"}, 2);
CFontStyle& FontStyle56 =  CFontStyle();
FontStyle56.setContainerField("fontStyle");
FontStyle56.setUSE(std::string("HeaderFont"));
Text55.setFontStyle(&FontStyle56);

Shape54.setGeometry(&Text55);

Appearance& Appearance57 =  Appearance();
Appearance57.setContainerField("appearance");
Appearance57.setUSE(std::string("PoseTextAppearance"));
Shape54.addChild(&Appearance57);

Anchor53.addChild(&Shape54);

Transform52.addChild(&Anchor53);

Shape& Shape58 =  Shape();
Box& Box59 =  Box();
Box59.setSize(new float[]{2.6,0.5,0.001});
Shape58.setGeometry(&Box59);

Appearance& Appearance60 =  Appearance();
Appearance60.setContainerField("appearance");
Appearance60.setUSE(std::string("TransparentAppearance"));
Shape58.addChild(&Appearance60);

Transform52.addChild(&Shape58);

Scene20.addChild(&Transform52);

X3D0.setScene(&Scene20);

//}
