#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
int HAnimPosePrototype(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Full"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("HAnimPosePrototype.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("info"));
meta4.setContent(std::string("This model also takes advantage of Inline/IMPORT capabilities (equivalent to USE node) and thus avoids fully copying a large, complex HAnimHumanoid model. Multiple HAnimHumanoid models have been tested satisfactorily, for HAnim version 1 (X3d 3) AND HAnim version 2 (X3D 4)."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("created"));
meta5.setContent(std::string("2 October 2025"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("modified"));
meta6.setContent(std::string("14 December 2025"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("creator"));
meta7.setContent(std::string("Don Brutzman"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("creator"));
meta8.setContent(std::string("Joe Williams"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("contributor"));
meta9.setContent(std::string("Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("reference"));
meta10.setContent(std::string("HAnimPosePrototype.console.txt"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("MovingImage"));
meta11.setContent(std::string("demonstration video https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeDemoVideo.mp4"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("Image"));
meta12.setContent(std::string("HAnimPoseExampleTouchDown.png"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("Image"));
meta13.setContent(std::string("HAnimPoseExampleTouchDownFaceLeftAPose.png"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("Image"));
meta14.setContent(std::string("images/HAnimPoseExampleBoxMan1.png"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("Image"));
meta15.setContent(std::string("images/HAnimPoseExampleBoxMan2.png"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(std::string("Image"));
meta16.setContent(std::string("images/HAnimPoseExampleJoeKick.png"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(std::string("Image"));
meta17.setContent(std::string("images/HAnimPoseExampleJoeSkeletonSkinSite.png"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(std::string("Image"));
meta18.setContent(std::string("images/HAnimPoseExampleKoreanCharacter01Jin.png"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(std::string("Image"));
meta19.setContent(std::string("images/HAnimPoseExampleKoreanCharacter02Chul.png"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(std::string("Image"));
meta20.setContent(std::string("images/HAnimPoseExampleKoreanCharacter03Hyun.png"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(std::string("Image"));
meta21.setContent(std::string("images/HAnimPoseExampleKoreanCharacter04Young.png"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(std::string("Image"));
meta22.setContent(std::string("images/HAnimPoseExampleKoreanCharacter05Ju.png"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(std::string("Image"));
meta23.setContent(std::string("images/HAnimPoseExampleKoreanCharacter06Ga.png"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(std::string("Image"));
meta24.setContent(std::string("images/HAnimPoseExampleKoreanCharacter07No.png"));
head1.addMeta(&meta24);

meta& meta25 =  meta();
meta25.setName(std::string("Image"));
meta25.setContent(std::string("images/HAnimPoseExampleKoreanCharacter08Da.png"));
head1.addMeta(&meta25);

meta& meta26 =  meta();
meta26.setName(std::string("Image"));
meta26.setContent(std::string("images/HAnimPoseExampleKoreanCharacter09Ru.png"));
head1.addMeta(&meta26);

meta& meta27 =  meta();
meta27.setName(std::string("Image"));
meta27.setContent(std::string("images/HAnimPoseExampleKoreanCharacter10Mi.png"));
head1.addMeta(&meta27);

meta& meta28 =  meta();
meta28.setName(std::string("Image"));
meta28.setContent(std::string("images/HAnimPoseExampleKoreanCharacter11Min.png"));
head1.addMeta(&meta28);

meta& meta29 =  meta();
meta29.setName(std::string("Image"));
meta29.setContent(std::string("images/HAnimPoseExampleKoreanCharacter12Sun.png"));
head1.addMeta(&meta29);

meta& meta30 =  meta();
meta30.setName(std::string("specificationSection"));
meta30.setContent(std::string("HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose"));
head1.addMeta(&meta30);

meta& meta31 =  meta();
meta31.setName(std::string("specificationUrl"));
meta31.setContent(std::string("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose"));
head1.addMeta(&meta31);

meta& meta32 =  meta();
meta32.setName(std::string("specificationSection"));
meta32.setContent(std::string("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures"));
head1.addMeta(&meta32);

meta& meta33 =  meta();
meta33.setName(std::string("specificationUrl"));
meta33.setContent(std::string("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures"));
head1.addMeta(&meta33);

meta& meta34 =  meta();
meta34.setName(std::string("specificationSection"));
meta34.setContent(std::string("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses"));
head1.addMeta(&meta34);

meta& meta35 =  meta();
meta35.setName(std::string("specificationUrl"));
meta35.setContent(std::string("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses"));
head1.addMeta(&meta35);

meta& meta36 =  meta();
meta36.setName(std::string("reference"));
meta36.setContent(std::string("Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript"));
head1.addMeta(&meta36);

meta& meta37 =  meta();
meta37.setName(std::string("reference"));
meta37.setContent(std::string("earlier version of this prototype: originals/HAnimPosePreliminary.x3d"));
head1.addMeta(&meta37);

meta& meta38 =  meta();
meta38.setName(std::string("generator"));
meta38.setContent(std::string("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"));
head1.addMeta(&meta38);

meta& meta39 =  meta();
meta39.setName(std::string("generator"));
meta39.setContent(std::string("Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize"));
head1.addMeta(&meta39);

meta& meta40 =  meta();
meta40.setName(std::string("identifier"));
meta40.setContent(std::string("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototype.x3d"));
head1.addMeta(&meta40);

meta& meta41 =  meta();
meta41.setName(std::string("license"));
meta41.setContent(std::string("https://www.web3d.org/x3d/content/examples/license.html"));
head1.addMeta(&meta41);

X3D0.setHead(&head1);

Scene& Scene42 =  Scene();
WorldInfo& WorldInfo43 =  WorldInfo();
WorldInfo43.setDEF(std::string("ModelInfo"));
WorldInfo43.setInfo((std::string[]){"Design to illustrate a potential HAnimPose node"}, 1);
WorldInfo43.setTitle(std::string("HAnimPosePrototype.x3d"));
Scene42.addChild(&WorldInfo43);

Background& Background44 =  Background();
Background44.setSkyColor(new float[]{0.8,0.8,1.0}, 3);
Scene42.addChild(&Background44);

NavigationInfo& NavigationInfo45 =  NavigationInfo();
Scene42.addChild(&NavigationInfo45);

Group& Group46 =  Group();
Group46.setDEF(std::string("HandleInlineLoading"));
//Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2
//Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun
Inline& Inline47 =  Inline();
Inline47.setDEF(std::string("HumanoidInline"));
Inline47.setDescription(std::string("remote HAnimHumanoid for IMPORT"));
Inline47.setUrl((std::string[]){"../Skin/BoxMan2.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/BoxMan2.x3d"}, 2);
Group46.addChild(&Inline47);

//Note that the following importedDEF must match the EXPORT name found in remote file
IMPORT& IMPORT48 =  IMPORT();
IMPORT48.setAS(std::string("HumanoidImported"));
IMPORT48.setImportedDEF(std::string("BoxMan2"));
IMPORT48.setInlineDEF(std::string("HumanoidInline"));
Group46.addChild(&IMPORT48);

LoadSensor& LoadSensor49 =  LoadSensor();
LoadSensor49.setDEF(std::string("HumanoidInlineLoadSensor"));
LoadSensor49.setTimeOut(2);
Inline& Inline50 =  Inline();
Inline50.setUSE(std::string("HumanoidInline"));
LoadSensor49.addChildren(Inline50);

Group46.addChild(&LoadSensor49);

Scene42.addChild(&Group46);

ProtoDeclare& ProtoDeclare51 =  ProtoDeclare();
ProtoDeclare51.setName(std::string("HAnimPose"));
ProtoDeclare51.setAppinfo(std::string("Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values."));
ProtoInterface& ProtoInterface52 =  ProtoInterface();
field& field53 =  field();
field53.setName(std::string("parentHAnimHumanoid"));
field53.setAccessType(std::string("inputOutput"));
field53.setAppinfo(std::string("HAnimHumanoid for this Pose to act upon"));
field53.setType(std::string("SFNode"));
//HAnimHumanoid initialization node goes here, this field is only used in the prototype implementation
ProtoInterface52.addChild(&field53);

field& field54 =  field();
field54.setName(std::string("name"));
field54.setAccessType(std::string("inputOutput"));
field54.setAppinfo(std::string("name of this pose"));
field54.setType(std::string("SFString"));
field54.setValue(std::string("newPoseName"));
ProtoInterface52.addChild(&field54);

field& field55 =  field();
field55.setName(std::string("children"));
field55.setAccessType(std::string("inputOutput"));
field55.setAppinfo(std::string("joint values to apply to HAnimHumanoid"));
field55.setType(std::string("MFNode"));
//initializating Joint nodes (if any) go here
ProtoInterface52.addChild(&field55);

field& field56 =  field();
field56.setName(std::string("description"));
field56.setAccessType(std::string("inputOutput"));
field56.setAppinfo(std::string("explanation of purpose"));
field56.setType(std::string("SFString"));
ProtoInterface52.addChild(&field56);

field& field57 =  field();
field57.setName(std::string("enabled"));
field57.setAccessType(std::string("inputOutput"));
field57.setAppinfo(std::string("default value true"));
field57.setType(std::string("SFBool"));
field57.setValue(std::string("true"));
ProtoInterface52.addChild(&field57);

field& field58 =  field();
field58.setName(std::string("loa"));
field58.setAccessType(std::string("initializeOnly"));
field58.setAppinfo(std::string("default is no loa"));
field58.setType(std::string("SFInt32"));
field58.setValue(std::string("-1"));
ProtoInterface52.addChild(&field58);

field& field59 =  field();
field59.setName(std::string("transitionDuration"));
field59.setAccessType(std::string("inputOutput"));
field59.setAppinfo(std::string("how many seconds to achieve the pose"));
field59.setType(std::string("SFTime"));
field59.setValue(std::string("0"));
ProtoInterface52.addChild(&field59);

field& field60 =  field();
field60.setName(std::string("metadata"));
field60.setAccessType(std::string("inputOutput"));
field60.setAppinfo(std::string("single Metadata* node"));
field60.setType(std::string("SFNode"));
ProtoInterface52.addChild(&field60);

field& field61 =  field();
field61.setName(std::string("isActive"));
field61.setAccessType(std::string("outputOnly"));
field61.setAppinfo(std::string("event indicating when pose transition is active"));
field61.setType(std::string("SFBool"));
ProtoInterface52.addChild(&field61);

field& field62 =  field();
field62.setName(std::string("commencePose"));
field62.setAccessType(std::string("inputOnly"));
field62.setAppinfo(std::string("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"));
field62.setType(std::string("SFBool"));
ProtoInterface52.addChild(&field62);

field& field63 =  field();
field63.setName(std::string("resetAllJoints"));
field63.setAccessType(std::string("inputOnly"));
field63.setAppinfo(std::string("reset the skeleton to I pose with all joints zeroed"));
field63.setType(std::string("SFBool"));
ProtoInterface52.addChild(&field63);

field& field64 =  field();
field64.setName(std::string("set_fraction"));
field64.setAccessType(std::string("inputOnly"));
field64.setAppinfo(std::string("allows transition to proceed incrementally from fraction [0..10"));
field64.setType(std::string("SFFloat"));
ProtoInterface52.addChild(&field64);

field& field65 =  field();
field65.setName(std::string("set_startTime"));
field65.setAccessType(std::string("inputOnly"));
field65.setAppinfo(std::string("starts the animation clock"));
field65.setType(std::string("SFTime"));
ProtoInterface52.addChild(&field65);

field& field66 =  field();
field66.setName(std::string("isLoaded"));
field66.setAccessType(std::string("inputOnly"));
field66.setAppinfo(std::string("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"));
field66.setType(std::string("SFBool"));
ProtoInterface52.addChild(&field66);

field& field67 =  field();
field67.setName(std::string("traceEnabled"));
field67.setAccessType(std::string("inputOutput"));
field67.setAppinfo(std::string("debug trace to Browser output console this is a local prototype field"));
field67.setType(std::string("SFBool"));
field67.setValue(std::string("true"));
ProtoInterface52.addChild(&field67);

ProtoDeclare51.addChild(&ProtoInterface52);

ProtoBody& ProtoBody68 =  ProtoBody();
TimeSensor& TimeSensor69 =  TimeSensor();
TimeSensor69.setDEF(std::string("ClockTimeSensor"));
TimeSensor69.setDescription(std::string("control timing of pose animation when triggered"));
IS& IS70 =  IS();
Connect& connect71 =  Connect();
connect71.setNodeField(std::string("enabled"));
connect71.setProtoField(std::string("enabled"));
IS70.addChild(&connect71);

Connect& connect72 =  Connect();
connect72.setNodeField(std::string("cycleInterval"));
connect72.setProtoField(std::string("transitionDuration"));
IS70.addChild(&connect72);

Connect& connect73 =  Connect();
connect73.setNodeField(std::string("isActive"));
connect73.setProtoField(std::string("isActive"));
IS70.addChild(&connect73);

Connect& connect74 =  Connect();
connect74.setNodeField(std::string("startTime"));
connect74.setProtoField(std::string("set_startTime"));
IS70.addChild(&connect74);

Connect& connect75 =  Connect();
connect75.setNodeField(std::string("metadata"));
connect75.setProtoField(std::string("metadata"));
IS70.addChild(&connect75);

TimeSensor69.addChild(&IS70);

ProtoBody68.addChild(&TimeSensor69);

TimeSensor& TimeSensor76 =  TimeSensor();
TimeSensor76.setDEF(std::string("ResetTimeSensor"));
TimeSensor76.setDescription(std::string("control timing of skeleton reset to \"A\" pose when triggered"));
IS& IS77 =  IS();
Connect& connect78 =  Connect();
connect78.setNodeField(std::string("enabled"));
connect78.setProtoField(std::string("enabled"));
IS77.addChild(&connect78);

Connect& connect79 =  Connect();
connect79.setNodeField(std::string("cycleInterval"));
connect79.setProtoField(std::string("transitionDuration"));
IS77.addChild(&connect79);

Connect& connect80 =  Connect();
connect80.setNodeField(std::string("startTime"));
connect80.setProtoField(std::string("set_startTime"));
IS77.addChild(&connect80);

//no need to report isActive since that would be duplicative
TimeSensor76.addChild(&IS77);

ProtoBody68.addChild(&TimeSensor76);

Group& Group81 =  Group();
Group81.setDEF(std::string("PoseInterpolatorGroup"));
//interpolators generated by prototype script appear here at runtime
ProtoBody68.addChild(&Group81);

Group& Group82 =  Group();
Group82.setDEF(std::string("ResetInterpolatorGroup"));
//interpolators generated by prototype script appear here at runtime
ProtoBody68.addChild(&Group82);

Script& Script83 =  Script();
Script83.setDEF(std::string("HAnimPoseScript"));
Script83.setDirectOutput(true);
Script83.setUrl((std::string[]){"HAnimPosePrototypeScript.js", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeScript.js"}, 2);
field& field84 =  field();
field84.setName(std::string("parentHAnimHumanoid"));
field84.setAccessType(std::string("inputOutput"));
field84.setAppinfo(std::string("Humanoid for this Pose to act upon"));
field84.setType(std::string("SFNode"));
//initialization node (if any) goes here
Script83.addChild(&field84);

field& field85 =  field();
field85.setName(std::string("name"));
field85.setAccessType(std::string("inputOutput"));
field85.setAppinfo(std::string("name of this pose"));
field85.setType(std::string("SFString"));
Script83.addChild(&field85);

field& field86 =  field();
field86.setName(std::string("loa"));
field86.setAccessType(std::string("initializeOnly"));
field86.setAppinfo(std::string("default is no loa"));
field86.setType(std::string("SFInt32"));
Script83.addChild(&field86);

field& field87 =  field();
field87.setName(std::string("description"));
field87.setAccessType(std::string("inputOutput"));
field87.setAppinfo(std::string("explanation of purpose"));
field87.setType(std::string("SFString"));
Script83.addChild(&field87);

field& field88 =  field();
field88.setName(std::string("enabled"));
field88.setAccessType(std::string("inputOutput"));
field88.setAppinfo(std::string("default value true"));
field88.setType(std::string("SFBool"));
Script83.addChild(&field88);

field& field89 =  field();
field89.setName(std::string("resetAllJoints"));
field89.setAccessType(std::string("inputOnly"));
field89.setAppinfo(std::string("reset the skeleton to I pose with all joints zeroed"));
field89.setType(std::string("SFBool"));
Script83.addChild(&field89);

field& field90 =  field();
field90.setName(std::string("children"));
field90.setAccessType(std::string("inputOutput"));
field90.setAppinfo(std::string("joint values to apply to HAnimHumanoid"));
field90.setType(std::string("MFNode"));
//initializating Joint nodes (if any) go here
Script83.addChild(&field90);

field& field91 =  field();
field91.setName(std::string("transitionDuration"));
field91.setAccessType(std::string("inputOutput"));
field91.setAppinfo(std::string("how many seconds to achieve the pose"));
field91.setType(std::string("SFTime"));
Script83.addChild(&field91);

field& field92 =  field();
field92.setName(std::string("commencePose"));
field92.setAccessType(std::string("inputOnly"));
field92.setAppinfo(std::string("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"));
field92.setType(std::string("SFBool"));
Script83.addChild(&field92);

field& field93 =  field();
field93.setName(std::string("set_fraction"));
field93.setAccessType(std::string("inputOnly"));
field93.setAppinfo(std::string("allows transition to proceed incrementally from fraction [0..10"));
field93.setType(std::string("SFFloat"));
Script83.addChild(&field93);

field& field94 =  field();
field94.setName(std::string("set_startTime"));
field94.setAccessType(std::string("inputOnly"));
field94.setAppinfo(std::string("starts the animation clock"));
field94.setType(std::string("SFTime"));
Script83.addChild(&field94);

field& field95 =  field();
field95.setName(std::string("isLoaded"));
field95.setAccessType(std::string("inputOnly"));
field95.setAppinfo(std::string("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"));
field95.setType(std::string("SFBool"));
Script83.addChild(&field95);

field& field96 =  field();
field96.setName(std::string("traceEnabled"));
field96.setAccessType(std::string("inputOutput"));
field96.setAppinfo(std::string("debug trace to Browser output console"));
field96.setType(std::string("SFBool"));
Script83.addChild(&field96);

field& field97 =  field();
field97.setName(std::string("numberPoseJoints"));
field97.setAccessType(std::string("initializeOnly"));
field97.setAppinfo(std::string("number of joints found in children field"));
field97.setType(std::string("SFInt32"));
field97.setValue(std::string("0"));
Script83.addChild(&field97);

field& field98 =  field();
field98.setName(std::string("numberSkeletonJoints"));
field98.setAccessType(std::string("initializeOnly"));
field98.setAppinfo(std::string("number of joints found in Humanoid"));
field98.setType(std::string("SFInt32"));
field98.setValue(std::string("0"));
Script83.addChild(&field98);

field& field99 =  field();
field99.setName(std::string("jointOrientationInterpolators"));
field99.setAccessType(std::string("initializeOnly"));
field99.setAppinfo(std::string("OrientationInterpolator node array matching number of children"));
field99.setType(std::string("MFNode"));
//initializating Joint nodes (if any) go here
Script83.addChild(&field99);

IS& IS100 =  IS();
Connect& connect101 =  Connect();
connect101.setNodeField(std::string("parentHAnimHumanoid"));
connect101.setProtoField(std::string("parentHAnimHumanoid"));
IS100.addChild(&connect101);

Connect& connect102 =  Connect();
connect102.setNodeField(std::string("name"));
connect102.setProtoField(std::string("name"));
IS100.addChild(&connect102);

Connect& connect103 =  Connect();
connect103.setNodeField(std::string("loa"));
connect103.setProtoField(std::string("loa"));
IS100.addChild(&connect103);

Connect& connect104 =  Connect();
connect104.setNodeField(std::string("description"));
connect104.setProtoField(std::string("description"));
IS100.addChild(&connect104);

Connect& connect105 =  Connect();
connect105.setNodeField(std::string("enabled"));
connect105.setProtoField(std::string("enabled"));
IS100.addChild(&connect105);

Connect& connect106 =  Connect();
connect106.setNodeField(std::string("resetAllJoints"));
connect106.setProtoField(std::string("resetAllJoints"));
IS100.addChild(&connect106);

Connect& connect107 =  Connect();
connect107.setNodeField(std::string("children"));
connect107.setProtoField(std::string("children"));
IS100.addChild(&connect107);

Connect& connect108 =  Connect();
connect108.setNodeField(std::string("transitionDuration"));
connect108.setProtoField(std::string("transitionDuration"));
IS100.addChild(&connect108);

Connect& connect109 =  Connect();
connect109.setNodeField(std::string("commencePose"));
connect109.setProtoField(std::string("commencePose"));
IS100.addChild(&connect109);

Connect& connect110 =  Connect();
connect110.setNodeField(std::string("set_fraction"));
connect110.setProtoField(std::string("set_fraction"));
IS100.addChild(&connect110);

Connect& connect111 =  Connect();
connect111.setNodeField(std::string("set_startTime"));
connect111.setProtoField(std::string("set_startTime"));
IS100.addChild(&connect111);

Connect& connect112 =  Connect();
connect112.setNodeField(std::string("isLoaded"));
connect112.setProtoField(std::string("isLoaded"));
IS100.addChild(&connect112);

Connect& connect113 =  Connect();
connect113.setNodeField(std::string("traceEnabled"));
connect113.setProtoField(std::string("traceEnabled"));
IS100.addChild(&connect113);

Script83.addChild(&IS100);

ProtoBody68.addChild(&Script83);

ProtoDeclare51.addChild(&ProtoBody68);

Scene42.addChild(&ProtoDeclare51);

Viewpoint& Viewpoint114 =  Viewpoint();
Viewpoint114.setDescription(std::string("HAnimPose for HumanoidInline IMPORT model"));
Viewpoint114.setPosition(new float[]{0.0,1.0,4.0});
Scene42.addChild(&Viewpoint114);

//no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc...
ProtoInstance& ProtoInstance115 =  ProtoInstance();
ProtoInstance115.setName(std::string("HAnimPose"));
ProtoInstance115.setDEF(std::string("T_Pose"));
fieldValue& fieldValue116 =  fieldValue();
fieldValue116.setName(std::string("name"));
fieldValue116.setValue(std::string("T"));
ProtoInstance115.addChild(&fieldValue116);

fieldValue& fieldValue117 =  fieldValue();
fieldValue117.setName(std::string("enabled"));
fieldValue117.setValue(std::string("true"));
ProtoInstance115.addChild(&fieldValue117);

fieldValue& fieldValue118 =  fieldValue();
fieldValue118.setName(std::string("parentHAnimHumanoid"));
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
//debug test case for incorrect node type: <HAnimJoint DEF=\"ErrorDiagnosticsTest\" USE='HumanoidImported'/>
HAnimHumanoid& HAnimHumanoid119 =  HAnimHumanoid();
HAnimHumanoid119.setUSE(std::string("HumanoidImported"));
fieldValue118.addChild(&HAnimHumanoid119);

ProtoInstance115.addChild(&fieldValue118);

fieldValue& fieldValue120 =  fieldValue();
fieldValue120.setName(std::string("loa"));
fieldValue120.setValue(std::string("1"));
ProtoInstance115.addChild(&fieldValue120);

fieldValue& fieldValue121 =  fieldValue();
fieldValue121.setName(std::string("description"));
fieldValue121.setValue(std::string("arms stretched outward and level similar to letter T"));
ProtoInstance115.addChild(&fieldValue121);

fieldValue& fieldValue122 =  fieldValue();
fieldValue122.setName(std::string("children"));
HAnimJoint& HAnimJoint123 =  HAnimJoint();
HAnimJoint123.X3DNode::setName(std::string("l_shoulder"));
HAnimJoint123.setDEF(std::string("PoseJoint_l_shoulder_1"));
HAnimJoint123.setDescription(std::string("left shoulder"));
HAnimJoint123.setRotation(new float[]{0.0,0.0,1.0,1.57});
fieldValue122.addChild(&HAnimJoint123);

HAnimJoint& HAnimJoint124 =  HAnimJoint();
HAnimJoint124.X3DNode::setName(std::string("r_shoulder"));
HAnimJoint124.setDEF(std::string("PoseJoint_r_shoulder_1"));
HAnimJoint124.setDescription(std::string("right shoulder"));
HAnimJoint124.setRotation(new float[]{0.0,0.0,-1.0,1.57});
fieldValue122.addChild(&HAnimJoint124);

//test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/
ProtoInstance115.addChild(&fieldValue122);

fieldValue& fieldValue125 =  fieldValue();
fieldValue125.setName(std::string("transitionDuration"));
fieldValue125.setValue(std::string("1.3"));
ProtoInstance115.addChild(&fieldValue125);

Scene42.addChild(&ProtoInstance115);

ProtoInstance& ProtoInstance126 =  ProtoInstance();
ProtoInstance126.setName(std::string("HAnimPose"));
ProtoInstance126.setDEF(std::string("A_Pose"));
fieldValue& fieldValue127 =  fieldValue();
fieldValue127.setName(std::string("name"));
fieldValue127.setValue(std::string("A"));
ProtoInstance126.addChild(&fieldValue127);

fieldValue& fieldValue128 =  fieldValue();
fieldValue128.setName(std::string("enabled"));
fieldValue128.setValue(std::string("true"));
ProtoInstance126.addChild(&fieldValue128);

fieldValue& fieldValue129 =  fieldValue();
fieldValue129.setName(std::string("parentHAnimHumanoid"));
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
HAnimHumanoid& HAnimHumanoid130 =  HAnimHumanoid();
HAnimHumanoid130.setUSE(std::string("HumanoidImported"));
fieldValue129.addChild(&HAnimHumanoid130);

ProtoInstance126.addChild(&fieldValue129);

fieldValue& fieldValue131 =  fieldValue();
fieldValue131.setName(std::string("loa"));
fieldValue131.setValue(std::string("1"));
ProtoInstance126.addChild(&fieldValue131);

fieldValue& fieldValue132 =  fieldValue();
fieldValue132.setName(std::string("description"));
fieldValue132.setValue(std::string("arms stretched outward and downward similar to letter A"));
ProtoInstance126.addChild(&fieldValue132);

fieldValue& fieldValue133 =  fieldValue();
fieldValue133.setName(std::string("children"));
HAnimJoint& HAnimJoint134 =  HAnimJoint();
HAnimJoint134.X3DNode::setName(std::string("l_shoulder"));
HAnimJoint134.setDEF(std::string("PoseJoint_l_shoulder"));
HAnimJoint134.setDescription(std::string("left shoulder"));
HAnimJoint134.setRotation(new float[]{0.0,0.0,1.0,0.5});
fieldValue133.addChild(&HAnimJoint134);

HAnimJoint& HAnimJoint135 =  HAnimJoint();
HAnimJoint135.X3DNode::setName(std::string("r_shoulder"));
HAnimJoint135.setDEF(std::string("PoseJoint_r_shoulder"));
HAnimJoint135.setDescription(std::string("right shoulder"));
HAnimJoint135.setRotation(new float[]{0.0,0.0,-1.0,0.5});
fieldValue133.addChild(&HAnimJoint135);

ProtoInstance126.addChild(&fieldValue133);

fieldValue& fieldValue136 =  fieldValue();
fieldValue136.setName(std::string("transitionDuration"));
fieldValue136.setValue(std::string("1.2"));
ProtoInstance126.addChild(&fieldValue136);

fieldValue& fieldValue137 =  fieldValue();
fieldValue137.setName(std::string("traceEnabled"));
fieldValue137.setValue(std::string("true"));
ProtoInstance126.addChild(&fieldValue137);

Scene42.addChild(&ProtoInstance126);

ProtoInstance& ProtoInstance138 =  ProtoInstance();
ProtoInstance138.setName(std::string("HAnimPose"));
ProtoInstance138.setDEF(std::string("TouchDown_Pose"));
//thanks Joe
fieldValue& fieldValue139 =  fieldValue();
fieldValue139.setName(std::string("name"));
fieldValue139.setValue(std::string("TouchDown"));
ProtoInstance138.addChild(&fieldValue139);

fieldValue& fieldValue140 =  fieldValue();
fieldValue140.setName(std::string("enabled"));
fieldValue140.setValue(std::string("true"));
ProtoInstance138.addChild(&fieldValue140);

fieldValue& fieldValue141 =  fieldValue();
fieldValue141.setName(std::string("parentHAnimHumanoid"));
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
HAnimHumanoid& HAnimHumanoid142 =  HAnimHumanoid();
HAnimHumanoid142.setUSE(std::string("HumanoidImported"));
fieldValue141.addChild(&HAnimHumanoid142);

ProtoInstance138.addChild(&fieldValue141);

fieldValue& fieldValue143 =  fieldValue();
fieldValue143.setName(std::string("loa"));
fieldValue143.setValue(std::string("1"));
ProtoInstance138.addChild(&fieldValue143);

fieldValue& fieldValue144 =  fieldValue();
fieldValue144.setName(std::string("description"));
fieldValue144.setValue(std::string("arms and legs stretched outward providing a TouchDown gesture"));
ProtoInstance138.addChild(&fieldValue144);

fieldValue& fieldValue145 =  fieldValue();
fieldValue145.setName(std::string("children"));
HAnimJoint& HAnimJoint146 =  HAnimJoint();
HAnimJoint146.X3DNode::setName(std::string("humanoid_root"));
HAnimJoint146.setRotation(new float[]{0.0,1.0,0.0,-0.698132});
fieldValue145.addChild(&HAnimJoint146);

HAnimJoint& HAnimJoint147 =  HAnimJoint();
HAnimJoint147.X3DNode::setName(std::string("l_hip"));
HAnimJoint147.setRotation(new float[]{-1.0,1.0,1.0,1.0});
fieldValue145.addChild(&HAnimJoint147);

HAnimJoint& HAnimJoint148 =  HAnimJoint();
HAnimJoint148.X3DNode::setName(std::string("l_knee"));
HAnimJoint148.setRotation(new float[]{1.0,0.0,0.0,1.0});
fieldValue145.addChild(&HAnimJoint148);

HAnimJoint& HAnimJoint149 =  HAnimJoint();
HAnimJoint149.X3DNode::setName(std::string("l_talocrural"));
HAnimJoint149.setRotation(new float[]{-0.2,0.0,0.1,0.225});
fieldValue145.addChild(&HAnimJoint149);

HAnimJoint& HAnimJoint150 =  HAnimJoint();
HAnimJoint150.X3DNode::setName(std::string("r_hip"));
HAnimJoint150.setRotation(new float[]{-1.0,-1.0,-1.0,1.0});
fieldValue145.addChild(&HAnimJoint150);

HAnimJoint& HAnimJoint151 =  HAnimJoint();
HAnimJoint151.X3DNode::setName(std::string("r_knee"));
HAnimJoint151.setRotation(new float[]{1.0,0.0,0.0,1.0});
fieldValue145.addChild(&HAnimJoint151);

HAnimJoint& HAnimJoint152 =  HAnimJoint();
HAnimJoint152.X3DNode::setName(std::string("r_talocrural"));
HAnimJoint152.setRotation(new float[]{-0.2,0.0,0.1,0.25});
fieldValue145.addChild(&HAnimJoint152);

HAnimJoint& HAnimJoint153 =  HAnimJoint();
HAnimJoint153.X3DNode::setName(std::string("vl5"));
HAnimJoint153.setRotation(new float[]{0.0,0.0,0.01,0.2});
fieldValue145.addChild(&HAnimJoint153);

HAnimJoint& HAnimJoint154 =  HAnimJoint();
HAnimJoint154.X3DNode::setName(std::string("vt10"));
HAnimJoint154.setRotation(new float[]{0.0,0.0,0.01,0.1});
fieldValue145.addChild(&HAnimJoint154);

HAnimJoint& HAnimJoint155 =  HAnimJoint();
HAnimJoint155.X3DNode::setName(std::string("vc4"));
HAnimJoint155.setRotation(new float[]{0.0,0.0,-0.01,0.15});
fieldValue145.addChild(&HAnimJoint155);

HAnimJoint& HAnimJoint156 =  HAnimJoint();
HAnimJoint156.X3DNode::setName(std::string("l_shoulder"));
HAnimJoint156.setRotation(new float[]{-1.0,0.5,1.0,2.0});
fieldValue145.addChild(&HAnimJoint156);

HAnimJoint& HAnimJoint157 =  HAnimJoint();
HAnimJoint157.X3DNode::setName(std::string("l_elbow"));
HAnimJoint157.setRotation(new float[]{-1.0,0.0,0.0,1.0});
fieldValue145.addChild(&HAnimJoint157);

HAnimJoint& HAnimJoint158 =  HAnimJoint();
HAnimJoint158.X3DNode::setName(std::string("l_radiocarpal"));
fieldValue145.addChild(&HAnimJoint158);

HAnimJoint& HAnimJoint159 =  HAnimJoint();
HAnimJoint159.X3DNode::setName(std::string("r_shoulder"));
HAnimJoint159.setRotation(new float[]{-1.0,-0.5,-1.0,2.6});
fieldValue145.addChild(&HAnimJoint159);

HAnimJoint& HAnimJoint160 =  HAnimJoint();
HAnimJoint160.X3DNode::setName(std::string("r_elbow"));
HAnimJoint160.setRotation(new float[]{-1.0,0.0,0.0,1.0});
fieldValue145.addChild(&HAnimJoint160);

HAnimJoint& HAnimJoint161 =  HAnimJoint();
HAnimJoint161.X3DNode::setName(std::string("r_radiocarpal"));
fieldValue145.addChild(&HAnimJoint161);

ProtoInstance138.addChild(&fieldValue145);

fieldValue& fieldValue162 =  fieldValue();
fieldValue162.setName(std::string("transitionDuration"));
fieldValue162.setValue(std::string("1.2"));
ProtoInstance138.addChild(&fieldValue162);

fieldValue& fieldValue163 =  fieldValue();
fieldValue163.setName(std::string("traceEnabled"));
fieldValue163.setValue(std::string("true"));
ProtoInstance138.addChild(&fieldValue163);

Scene42.addChild(&ProtoInstance138);

ProtoInstance& ProtoInstance164 =  ProtoInstance();
ProtoInstance164.setName(std::string("HAnimPose"));
ProtoInstance164.setDEF(std::string("I_Pose"));
fieldValue& fieldValue165 =  fieldValue();
fieldValue165.setName(std::string("name"));
fieldValue165.setValue(std::string("I"));
ProtoInstance164.addChild(&fieldValue165);

fieldValue& fieldValue166 =  fieldValue();
fieldValue166.setName(std::string("enabled"));
fieldValue166.setValue(std::string("true"));
ProtoInstance164.addChild(&fieldValue166);

fieldValue& fieldValue167 =  fieldValue();
fieldValue167.setName(std::string("parentHAnimHumanoid"));
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
HAnimHumanoid& HAnimHumanoid168 =  HAnimHumanoid();
HAnimHumanoid168.setUSE(std::string("HumanoidImported"));
fieldValue167.addChild(&HAnimHumanoid168);

ProtoInstance164.addChild(&fieldValue167);

fieldValue& fieldValue169 =  fieldValue();
fieldValue169.setName(std::string("loa"));
fieldValue169.setValue(std::string("1"));
ProtoInstance164.addChild(&fieldValue169);

fieldValue& fieldValue170 =  fieldValue();
fieldValue170.setName(std::string("description"));
fieldValue170.setValue(std::string("arms and legs straight down default binding pose for baseline Humanoid"));
ProtoInstance164.addChild(&fieldValue170);

fieldValue& fieldValue171 =  fieldValue();
fieldValue171.setName(std::string("children"));
//not defining any children equals the default \"I\" pose
ProtoInstance164.addChild(&fieldValue171);

fieldValue& fieldValue172 =  fieldValue();
fieldValue172.setName(std::string("transitionDuration"));
fieldValue172.setValue(std::string("1.5"));
ProtoInstance164.addChild(&fieldValue172);

fieldValue& fieldValue173 =  fieldValue();
fieldValue173.setName(std::string("traceEnabled"));
fieldValue173.setValue(std::string("true"));
ProtoInstance164.addChild(&fieldValue173);

Scene42.addChild(&ProtoInstance164);

ProtoInstance& ProtoInstance174 =  ProtoInstance();
ProtoInstance174.setName(std::string("HAnimPose"));
ProtoInstance174.setDEF(std::string("H_Pose"));
fieldValue& fieldValue175 =  fieldValue();
fieldValue175.setName(std::string("name"));
fieldValue175.setValue(std::string("H"));
ProtoInstance174.addChild(&fieldValue175);

fieldValue& fieldValue176 =  fieldValue();
fieldValue176.setName(std::string("enabled"));
fieldValue176.setValue(std::string("false"));
ProtoInstance174.addChild(&fieldValue176);

fieldValue& fieldValue177 =  fieldValue();
fieldValue177.setName(std::string("description"));
fieldValue177.setValue(std::string("TODO experimental pose not yet implemented"));
ProtoInstance174.addChild(&fieldValue177);

fieldValue& fieldValue178 =  fieldValue();
fieldValue178.setName(std::string("transitionDuration"));
fieldValue178.setValue(std::string("1.4"));
ProtoInstance174.addChild(&fieldValue178);

fieldValue& fieldValue179 =  fieldValue();
fieldValue179.setName(std::string("traceEnabled"));
fieldValue179.setValue(std::string("true"));
ProtoInstance174.addChild(&fieldValue179);

//<fieldValue name='loa' value='1'/>
Scene42.addChild(&ProtoInstance174);

ProtoInstance& ProtoInstance180 =  ProtoInstance();
ProtoInstance180.setName(std::string("HAnimPose"));
ProtoInstance180.setDEF(std::string("FaceLeft_Pose"));
fieldValue& fieldValue181 =  fieldValue();
fieldValue181.setName(std::string("name"));
fieldValue181.setValue(std::string("FaceLeft"));
ProtoInstance180.addChild(&fieldValue181);

fieldValue& fieldValue182 =  fieldValue();
fieldValue182.setName(std::string("enabled"));
fieldValue182.setValue(std::string("true"));
ProtoInstance180.addChild(&fieldValue182);

fieldValue& fieldValue183 =  fieldValue();
fieldValue183.setName(std::string("parentHAnimHumanoid"));
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
HAnimHumanoid& HAnimHumanoid184 =  HAnimHumanoid();
HAnimHumanoid184.setUSE(std::string("HumanoidImported"));
fieldValue183.addChild(&HAnimHumanoid184);

ProtoInstance180.addChild(&fieldValue183);

fieldValue& fieldValue185 =  fieldValue();
fieldValue185.setName(std::string("loa"));
fieldValue185.setValue(std::string("0"));
ProtoInstance180.addChild(&fieldValue185);

fieldValue& fieldValue186 =  fieldValue();
fieldValue186.setName(std::string("description"));
fieldValue186.setValue(std::string("Only modify humanoid_root Joint node to face left"));
ProtoInstance180.addChild(&fieldValue186);

fieldValue& fieldValue187 =  fieldValue();
fieldValue187.setName(std::string("children"));
HAnimJoint& HAnimJoint188 =  HAnimJoint();
HAnimJoint188.X3DNode::setName(std::string("humanoid_root"));
HAnimJoint188.setDEF(std::string("FaceLeft_humanoid_root"));
HAnimJoint188.setDescription(std::string("Only rotate the model"));
HAnimJoint188.setRotation(new float[]{0.0,1.0,0.0,1.570796});
fieldValue187.addChild(&HAnimJoint188);

ProtoInstance180.addChild(&fieldValue187);

fieldValue& fieldValue189 =  fieldValue();
fieldValue189.setName(std::string("transitionDuration"));
fieldValue189.setValue(std::string("1.1"));
ProtoInstance180.addChild(&fieldValue189);

fieldValue& fieldValue190 =  fieldValue();
fieldValue190.setName(std::string("traceEnabled"));
fieldValue190.setValue(std::string("true"));
ProtoInstance180.addChild(&fieldValue190);

Scene42.addChild(&ProtoInstance180);

ProtoInstance& ProtoInstance191 =  ProtoInstance();
ProtoInstance191.setName(std::string("HAnimPose"));
ProtoInstance191.setDEF(std::string("FaceRight_Pose"));
fieldValue& fieldValue192 =  fieldValue();
fieldValue192.setName(std::string("name"));
fieldValue192.setValue(std::string("FaceRight"));
ProtoInstance191.addChild(&fieldValue192);

fieldValue& fieldValue193 =  fieldValue();
fieldValue193.setName(std::string("enabled"));
fieldValue193.setValue(std::string("true"));
ProtoInstance191.addChild(&fieldValue193);

fieldValue& fieldValue194 =  fieldValue();
fieldValue194.setName(std::string("parentHAnimHumanoid"));
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
HAnimHumanoid& HAnimHumanoid195 =  HAnimHumanoid();
HAnimHumanoid195.setUSE(std::string("HumanoidImported"));
fieldValue194.addChild(&HAnimHumanoid195);

ProtoInstance191.addChild(&fieldValue194);

fieldValue& fieldValue196 =  fieldValue();
fieldValue196.setName(std::string("loa"));
fieldValue196.setValue(std::string("0"));
ProtoInstance191.addChild(&fieldValue196);

fieldValue& fieldValue197 =  fieldValue();
fieldValue197.setName(std::string("description"));
fieldValue197.setValue(std::string("Only modify humanoid_root Joint node to face right"));
ProtoInstance191.addChild(&fieldValue197);

fieldValue& fieldValue198 =  fieldValue();
fieldValue198.setName(std::string("children"));
HAnimJoint& HAnimJoint199 =  HAnimJoint();
HAnimJoint199.X3DNode::setName(std::string("humanoid_root"));
HAnimJoint199.setDEF(std::string("FaceRight_humanoid_root"));
HAnimJoint199.setDescription(std::string("Only rotate the model"));
HAnimJoint199.setRotation(new float[]{0.0,1.0,0.0,-1.570796});
fieldValue198.addChild(&HAnimJoint199);

ProtoInstance191.addChild(&fieldValue198);

fieldValue& fieldValue200 =  fieldValue();
fieldValue200.setName(std::string("transitionDuration"));
fieldValue200.setValue(std::string("1.1"));
ProtoInstance191.addChild(&fieldValue200);

fieldValue& fieldValue201 =  fieldValue();
fieldValue201.setName(std::string("traceEnabled"));
fieldValue201.setValue(std::string("true"));
ProtoInstance191.addChild(&fieldValue201);

Scene42.addChild(&ProtoInstance191);

Group& Group202 =  Group();
Group202.setDEF(std::string("InterfaceButtonsGroup"));
Transform& Transform203 =  Transform();
Transform203.setDEF(std::string("DisplayHeader"));
Transform203.setTranslation(new float[]{0.0,2.0,0.0});
Shape& Shape204 =  Shape();
Text& Text205 =  Text();
Text205.setString((std::string[]){"HAnimPosePrototype example implementation"}, 1);
CFontStyle& FontStyle206 =  CFontStyle();
FontStyle206.setContainerField("fontStyle");
FontStyle206.setDEF(std::string("HeaderFont"));
FontStyle206.setFamily((std::string[]){"SANS"}, 1);
FontStyle206.setJustify((std::string[]){"MIDDLE", "MIDDLE"}, 2);
FontStyle206.setSize(0.15);
FontStyle206.setStyle(std::string("BOLD"));
Text205.setFontStyle(&FontStyle206);

Shape204.setGeometry(&Text205);

Appearance& Appearance207 =  Appearance();
Appearance207.setContainerField("appearance");
Appearance207.setDEF(std::string("PoseTextAppearance"));
Material& Material208 =  Material();
Material208.setContainerField("material");
Material208.setDiffuseColor(new float[]{0.1,0.5,0.3});
Appearance207.addChild(&Material208);

Shape204.addChild(&Appearance207);

Transform203.addChild(&Shape204);

Group202.addChild(&Transform203);

Transform& Transform209 =  Transform();
Transform209.setDEF(std::string("T_PoseInterface"));
Transform209.setTranslation(new float[]{-1.5,1.5,0.0});
Shape& Shape210 =  Shape();
Text& Text211 =  Text();
Text211.setString((std::string[]){"\"T\" Pose"}, 1);
CFontStyle& FontStyle212 =  CFontStyle();
FontStyle212.setContainerField("fontStyle");
FontStyle212.setDEF(std::string("SharedFont"));
FontStyle212.setFamily((std::string[]){"SANS"}, 1);
FontStyle212.setJustify((std::string[]){"MIDDLE", "MIDDLE"}, 2);
FontStyle212.setSize(0.1);
FontStyle212.setStyle(std::string("BOLD"));
Text211.setFontStyle(&FontStyle212);

Shape210.setGeometry(&Text211);

Appearance& Appearance213 =  Appearance();
Appearance213.setContainerField("appearance");
Appearance213.setUSE(std::string("PoseTextAppearance"));
Shape210.addChild(&Appearance213);

Transform209.addChild(&Shape210);

Shape& Shape214 =  Shape();
Appearance& Appearance215 =  Appearance();
Appearance215.setContainerField("appearance");
Appearance215.setDEF(std::string("TransparentAppearance"));
Material& Material216 =  Material();
Material216.setContainerField("material");
Material216.setTransparency(0.8);
Appearance215.addChild(&Material216);

Shape214.addChild(&Appearance215);

Box& Box217 =  Box();
Box217.setSize(new float[]{0.45,0.2,0.001});
Shape214.setGeometry(&Box217);

Transform209.addChild(&Shape214);

TouchSensor& TouchSensor218 =  TouchSensor();
TouchSensor218.setDEF(std::string("T_PoseTouchSensor"));
TouchSensor218.setDescription(std::string("select to move shoulders to \"T\" pose, leave other joints unchanged"));
Transform209.addChild(&TouchSensor218);

ROUTE& ROUTE219 =  ROUTE();
ROUTE219.setFromField(std::string("isActive"));
ROUTE219.setFromNode(std::string("T_PoseTouchSensor"));
ROUTE219.setToField(std::string("commencePose"));
ROUTE219.setToNode(std::string("T_Pose"));
Transform209.addChild(&ROUTE219);

Group202.addChild(&Transform209);

Transform& Transform220 =  Transform();
Transform220.setDEF(std::string("A_PoseInterface"));
Transform220.setTranslation(new float[]{-1.5,1.0,0.0});
Shape& Shape221 =  Shape();
Text& Text222 =  Text();
Text222.setString((std::string[]){"\"A\" Pose"}, 1);
CFontStyle& FontStyle223 =  CFontStyle();
FontStyle223.setContainerField("fontStyle");
FontStyle223.setUSE(std::string("SharedFont"));
Text222.setFontStyle(&FontStyle223);

Shape221.setGeometry(&Text222);

Appearance& Appearance224 =  Appearance();
Appearance224.setContainerField("appearance");
Appearance224.setUSE(std::string("PoseTextAppearance"));
Shape221.addChild(&Appearance224);

Transform220.addChild(&Shape221);

Shape& Shape225 =  Shape();
//Selectable Text transparent Box for easy user selection
Appearance& Appearance226 =  Appearance();
Appearance226.setContainerField("appearance");
Appearance226.setUSE(std::string("TransparentAppearance"));
Shape225.addChild(&Appearance226);

Box& Box227 =  Box();
Box227.setSize(new float[]{0.45,0.2,0.001});
Shape225.setGeometry(&Box227);

Transform220.addChild(&Shape225);

TouchSensor& TouchSensor228 =  TouchSensor();
TouchSensor228.setDEF(std::string("A_PoseTouchSensor"));
TouchSensor228.setDescription(std::string("select to move shoulders to \"A\" pose, leave other joints unchanged"));
Transform220.addChild(&TouchSensor228);

ROUTE& ROUTE229 =  ROUTE();
ROUTE229.setFromField(std::string("isActive"));
ROUTE229.setFromNode(std::string("A_PoseTouchSensor"));
ROUTE229.setToField(std::string("commencePose"));
ROUTE229.setToNode(std::string("A_Pose"));
Transform220.addChild(&ROUTE229);

Group202.addChild(&Transform220);

Transform& Transform230 =  Transform();
Transform230.setDEF(std::string("TouchDown_PoseInterface"));
Transform230.setTranslation(new float[]{-1.5,0.5,0.0});
Shape& Shape231 =  Shape();
Text& Text232 =  Text();
Text232.setString((std::string[]){"TouchDown Pose"}, 1);
CFontStyle& FontStyle233 =  CFontStyle();
FontStyle233.setContainerField("fontStyle");
FontStyle233.setUSE(std::string("SharedFont"));
Text232.setFontStyle(&FontStyle233);

Shape231.setGeometry(&Text232);

Appearance& Appearance234 =  Appearance();
Appearance234.setContainerField("appearance");
Appearance234.setUSE(std::string("PoseTextAppearance"));
Shape231.addChild(&Appearance234);

Transform230.addChild(&Shape231);

Shape& Shape235 =  Shape();
//Selectable Text transparent Box for easy user selection
Appearance& Appearance236 =  Appearance();
Appearance236.setContainerField("appearance");
Appearance236.setUSE(std::string("TransparentAppearance"));
Shape235.addChild(&Appearance236);

Box& Box237 =  Box();
Box237.setSize(new float[]{0.85,0.2,0.001});
Shape235.setGeometry(&Box237);

Transform230.addChild(&Shape235);

TouchSensor& TouchSensor238 =  TouchSensor();
TouchSensor238.setDEF(std::string("TouchDown_PoseTouchSensor"));
TouchSensor238.setDescription(std::string("select to transition all joints to TouchDown pose"));
Transform230.addChild(&TouchSensor238);

ROUTE& ROUTE239 =  ROUTE();
ROUTE239.setFromField(std::string("isActive"));
ROUTE239.setFromNode(std::string("TouchDown_PoseTouchSensor"));
ROUTE239.setToField(std::string("commencePose"));
ROUTE239.setToNode(std::string("TouchDown_Pose"));
Transform230.addChild(&ROUTE239);

Group202.addChild(&Transform230);

Transform& Transform240 =  Transform();
Transform240.setDEF(std::string("I_PoseInterface"));
Transform240.setTranslation(new float[]{-1.5,0.0,0.0});
Shape& Shape241 =  Shape();
Text& Text242 =  Text();
Text242.setString((std::string[]){"\"I\" Pose"}, 1);
CFontStyle& FontStyle243 =  CFontStyle();
FontStyle243.setContainerField("fontStyle");
FontStyle243.setUSE(std::string("SharedFont"));
Text242.setFontStyle(&FontStyle243);

Shape241.setGeometry(&Text242);

Appearance& Appearance244 =  Appearance();
Appearance244.setContainerField("appearance");
Appearance244.setUSE(std::string("PoseTextAppearance"));
Shape241.addChild(&Appearance244);

Transform240.addChild(&Shape241);

Shape& Shape245 =  Shape();
//Selectable Text transparent Box for easy user selection
Appearance& Appearance246 =  Appearance();
Appearance246.setContainerField("appearance");
Appearance246.setUSE(std::string("TransparentAppearance"));
Shape245.addChild(&Appearance246);

Box& Box247 =  Box();
Box247.setSize(new float[]{0.45,0.2,0.001});
Shape245.setGeometry(&Box247);

Transform240.addChild(&Shape245);

TouchSensor& TouchSensor248 =  TouchSensor();
TouchSensor248.setDEF(std::string("I_PoseTouchSensor"));
TouchSensor248.setDescription(std::string("select to transition all joints to \"I\" pose"));
Transform240.addChild(&TouchSensor248);

ROUTE& ROUTE249 =  ROUTE();
ROUTE249.setFromField(std::string("isActive"));
ROUTE249.setFromNode(std::string("I_PoseTouchSensor"));
ROUTE249.setToField(std::string("commencePose"));
ROUTE249.setToNode(std::string("I_Pose"));
Transform240.addChild(&ROUTE249);

Group202.addChild(&Transform240);

Transform& Transform250 =  Transform();
Transform250.setDEF(std::string("FaceLeftPoseInterface"));
Transform250.setTranslation(new float[]{1.5,1.5,0.0});
Shape& Shape251 =  Shape();
Text& Text252 =  Text();
Text252.setString((std::string[]){"Face Left Pose"}, 1);
CFontStyle& FontStyle253 =  CFontStyle();
FontStyle253.setContainerField("fontStyle");
FontStyle253.setUSE(std::string("SharedFont"));
Text252.setFontStyle(&FontStyle253);

Shape251.setGeometry(&Text252);

Appearance& Appearance254 =  Appearance();
Appearance254.setContainerField("appearance");
Appearance254.setUSE(std::string("PoseTextAppearance"));
Shape251.addChild(&Appearance254);

Transform250.addChild(&Shape251);

Shape& Shape255 =  Shape();
Appearance& Appearance256 =  Appearance();
Appearance256.setContainerField("appearance");
Appearance256.setUSE(std::string("TransparentAppearance"));
Shape255.addChild(&Appearance256);

Box& Box257 =  Box();
Box257.setSize(new float[]{0.9,0.2,0.001});
Shape255.setGeometry(&Box257);

Transform250.addChild(&Shape255);

TouchSensor& TouchSensor258 =  TouchSensor();
TouchSensor258.setDEF(std::string("FaceLeftTouchSensor"));
TouchSensor258.setDescription(std::string("select to rotate body and Face Left, leave other joints unchanged"));
Transform250.addChild(&TouchSensor258);

ROUTE& ROUTE259 =  ROUTE();
ROUTE259.setFromField(std::string("isActive"));
ROUTE259.setFromNode(std::string("FaceLeftTouchSensor"));
ROUTE259.setToField(std::string("commencePose"));
ROUTE259.setToNode(std::string("FaceLeft_Pose"));
Transform250.addChild(&ROUTE259);

Group202.addChild(&Transform250);

Transform& Transform260 =  Transform();
Transform260.setDEF(std::string("FaceRightPoseInterface"));
Transform260.setTranslation(new float[]{1.5,1.0,0.0});
Shape& Shape261 =  Shape();
Text& Text262 =  Text();
Text262.setString((std::string[]){"Face Right Pose"}, 1);
CFontStyle& FontStyle263 =  CFontStyle();
FontStyle263.setContainerField("fontStyle");
FontStyle263.setUSE(std::string("SharedFont"));
Text262.setFontStyle(&FontStyle263);

Shape261.setGeometry(&Text262);

Appearance& Appearance264 =  Appearance();
Appearance264.setContainerField("appearance");
Appearance264.setUSE(std::string("PoseTextAppearance"));
Shape261.addChild(&Appearance264);

Transform260.addChild(&Shape261);

Shape& Shape265 =  Shape();
//Selectable Text transparent Box for easy user selection
Appearance& Appearance266 =  Appearance();
Appearance266.setContainerField("appearance");
Appearance266.setUSE(std::string("TransparentAppearance"));
Shape265.addChild(&Appearance266);

Box& Box267 =  Box();
Box267.setSize(new float[]{0.9,0.2,0.001});
Shape265.setGeometry(&Box267);

Transform260.addChild(&Shape265);

TouchSensor& TouchSensor268 =  TouchSensor();
TouchSensor268.setDEF(std::string("FaceRightTouchSensor"));
TouchSensor268.setDescription(std::string("select to rotate body and Face Right, leave other joints unchanged"));
Transform260.addChild(&TouchSensor268);

ROUTE& ROUTE269 =  ROUTE();
ROUTE269.setFromField(std::string("isActive"));
ROUTE269.setFromNode(std::string("FaceRightTouchSensor"));
ROUTE269.setToField(std::string("commencePose"));
ROUTE269.setToNode(std::string("FaceRight_Pose"));
Transform260.addChild(&ROUTE269);

Group202.addChild(&Transform260);

Transform& Transform270 =  Transform();
Transform270.setDEF(std::string("AnimatePosesInterface"));
Transform270.setTranslation(new float[]{1.5,0.5,0.0});
Shape& Shape271 =  Shape();
Text& Text272 =  Text();
Text272.setString((std::string[]){"Direct animation", "to, from \"I\" Pose"}, 2);
CFontStyle& FontStyle273 =  CFontStyle();
FontStyle273.setContainerField("fontStyle");
FontStyle273.setUSE(std::string("SharedFont"));
Text272.setFontStyle(&FontStyle273);

Shape271.setGeometry(&Text272);

Appearance& Appearance274 =  Appearance();
Appearance274.setContainerField("appearance");
Appearance274.setDEF(std::string("AnimationTextAppearance"));
Material& Material275 =  Material();
Material275.setContainerField("material");
Material275.setDiffuseColor(new float[]{0.1,0.2,0.3});
Appearance274.addChild(&Material275);

Shape271.addChild(&Appearance274);

Transform270.addChild(&Shape271);

Shape& Shape276 =  Shape();
//Selectable Text transparent Box for easy user selection
Appearance& Appearance277 =  Appearance();
Appearance277.setContainerField("appearance");
Appearance277.setUSE(std::string("TransparentAppearance"));
Shape276.addChild(&Appearance277);

Box& Box278 =  Box();
Box278.setSize(new float[]{0.9,0.25,0.001});
Shape276.setGeometry(&Box278);

Transform270.addChild(&Shape276);

TouchSensor& TouchSensor279 =  TouchSensor();
TouchSensor279.setDEF(std::string("AnimatePosesTouchSensor"));
TouchSensor279.setDescription(std::string("select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events"));
Transform270.addChild(&TouchSensor279);

//cycleInterval=4 also hard-coded in script execution message
TimeSensor& TimeSensor280 =  TimeSensor();
TimeSensor280.setDEF(std::string("AnimatePosesClock"));
TimeSensor280.setCycleInterval(4);
TimeSensor280.setDescription(std::string("directly animate several poses"));
Transform270.addChild(&TimeSensor280);

ScalarInterpolator& ScalarInterpolator281 =  ScalarInterpolator();
ScalarInterpolator281.setDEF(std::string("AnimatePosesLoopInterpolator"));
ScalarInterpolator281.setKey(new float[]{0.0,0.05,0.45,0.55,0.95,1.0});
ScalarInterpolator281.setKeyValue(new float[]{0.0,0.0,1.0,1.0,0.0,0.0});
Transform270.addChild(&ScalarInterpolator281);

ROUTE& ROUTE282 =  ROUTE();
ROUTE282.setFromField(std::string("touchTime"));
ROUTE282.setFromNode(std::string("AnimatePosesTouchSensor"));
ROUTE282.setToField(std::string("startTime"));
ROUTE282.setToNode(std::string("AnimatePosesClock"));
Transform270.addChild(&ROUTE282);

ROUTE& ROUTE283 =  ROUTE();
ROUTE283.setFromField(std::string("fraction_changed"));
ROUTE283.setFromNode(std::string("AnimatePosesClock"));
ROUTE283.setToField(std::string("set_fraction"));
ROUTE283.setToNode(std::string("AnimatePosesLoopInterpolator"));
Transform270.addChild(&ROUTE283);

ROUTE& ROUTE284 =  ROUTE();
ROUTE284.setFromField(std::string("value_changed"));
ROUTE284.setFromNode(std::string("AnimatePosesLoopInterpolator"));
ROUTE284.setToField(std::string("set_fraction"));
ROUTE284.setToNode(std::string("I_Pose"));
Transform270.addChild(&ROUTE284);

Group202.addChild(&Transform270);

Transform& Transform285 =  Transform();
Transform285.setDEF(std::string("ResetDefaultPoseInterface"));
Transform285.setTranslation(new float[]{1.5,0.0,0.0});
Shape& Shape286 =  Shape();
Text& Text287 =  Text();
Text287.setString((std::string[]){"Reset All Joints", "to Default \"I\" Pose"}, 2);
CFontStyle& FontStyle288 =  CFontStyle();
FontStyle288.setContainerField("fontStyle");
FontStyle288.setUSE(std::string("SharedFont"));
Text287.setFontStyle(&FontStyle288);

Shape286.setGeometry(&Text287);

Appearance& Appearance289 =  Appearance();
Appearance289.setContainerField("appearance");
Appearance289.setUSE(std::string("AnimationTextAppearance"));
Shape286.addChild(&Appearance289);

Transform285.addChild(&Shape286);

Shape& Shape290 =  Shape();
//Selectable Text transparent Box for easy user selection
Appearance& Appearance291 =  Appearance();
Appearance291.setContainerField("appearance");
Appearance291.setUSE(std::string("TransparentAppearance"));
Shape290.addChild(&Appearance291);

Box& Box292 =  Box();
Box292.setSize(new float[]{0.9,0.25,0.001});
Shape290.setGeometry(&Box292);

Transform285.addChild(&Shape290);

TouchSensor& TouchSensor293 =  TouchSensor();
TouchSensor293.setDEF(std::string("ResetPoseTouchSensor"));
TouchSensor293.setDescription(std::string("select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event"));
Transform285.addChild(&TouchSensor293);

ROUTE& ROUTE294 =  ROUTE();
ROUTE294.setFromField(std::string("isActive"));
ROUTE294.setFromNode(std::string("ResetPoseTouchSensor"));
ROUTE294.setToField(std::string("resetAllJoints"));
ROUTE294.setToNode(std::string("FaceLeft_Pose"));
Transform285.addChild(&ROUTE294);

Group202.addChild(&Transform285);

Scene42.addChild(&Group202);

Group& Group295 =  Group();
Group295.setDEF(std::string("HandleInlineLoadsensorRouting"));
ROUTE& ROUTE296 =  ROUTE();
ROUTE296.setFromField(std::string("isLoaded"));
ROUTE296.setFromNode(std::string("HumanoidInlineLoadSensor"));
ROUTE296.setToField(std::string("isLoaded"));
ROUTE296.setToNode(std::string("A_Pose"));
Group295.addChild(&ROUTE296);

ROUTE& ROUTE297 =  ROUTE();
ROUTE297.setFromField(std::string("isLoaded"));
ROUTE297.setFromNode(std::string("HumanoidInlineLoadSensor"));
ROUTE297.setToField(std::string("isLoaded"));
ROUTE297.setToNode(std::string("H_Pose"));
Group295.addChild(&ROUTE297);

ROUTE& ROUTE298 =  ROUTE();
ROUTE298.setFromField(std::string("isLoaded"));
ROUTE298.setFromNode(std::string("HumanoidInlineLoadSensor"));
ROUTE298.setToField(std::string("isLoaded"));
ROUTE298.setToNode(std::string("I_Pose"));
Group295.addChild(&ROUTE298);

ROUTE& ROUTE299 =  ROUTE();
ROUTE299.setFromField(std::string("isLoaded"));
ROUTE299.setFromNode(std::string("HumanoidInlineLoadSensor"));
ROUTE299.setToField(std::string("isLoaded"));
ROUTE299.setToNode(std::string("T_Pose"));
Group295.addChild(&ROUTE299);

ROUTE& ROUTE300 =  ROUTE();
ROUTE300.setFromField(std::string("isLoaded"));
ROUTE300.setFromNode(std::string("HumanoidInlineLoadSensor"));
ROUTE300.setToField(std::string("isLoaded"));
ROUTE300.setToNode(std::string("FaceLeft_Pose"));
Group295.addChild(&ROUTE300);

ROUTE& ROUTE301 =  ROUTE();
ROUTE301.setFromField(std::string("isLoaded"));
ROUTE301.setFromNode(std::string("HumanoidInlineLoadSensor"));
ROUTE301.setToField(std::string("isLoaded"));
ROUTE301.setToNode(std::string("FaceRight_Pose"));
Group295.addChild(&ROUTE301);

ROUTE& ROUTE302 =  ROUTE();
ROUTE302.setFromField(std::string("isLoaded"));
ROUTE302.setFromNode(std::string("HumanoidInlineLoadSensor"));
ROUTE302.setToField(std::string("isLoaded"));
ROUTE302.setToNode(std::string("TouchDown_Pose"));
Group295.addChild(&ROUTE302);

Scene42.addChild(&Group295);

X3D0.setScene(&Scene42);

}
