#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
int HAnimBehaviorPrototypes(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(std::string("HAnim"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(std::string("title"));
meta3.setContent(std::string("HAnimBehaviorPrototypes.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("description"));
meta4.setContent(std::string("Prototypes for HAnimBehavior node, which collects OrientationInterpolators for aggregate animation of an HAnim humanoid model, and HAnimBodyBehaviorChooser, which selects one body and enables/disables multiple aggregated behaviors."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("creator"));
meta5.setContent(std::string("Don Brutzman, Jeff Weekley, MV4205 Advanced X3D Authoring class, and Keith Victor"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("created"));
meta6.setContent(std::string("2 May 2006"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("modified"));
meta7.setContent(std::string("4 July 2020"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("reference"));
meta8.setContent(std::string("Web3D2007BlendedBehaviorsChangeableBodies.pdf"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("reference"));
meta9.setContent(std::string("https://www.web3d.org/files/specifications/19774/V1.0"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("reference"));
meta10.setContent(std::string("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-X3DAbstractSpecification_Revision1_to_Part1/Part01/components/hanim.html"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("reference"));
meta11.setContent(std::string("InterchangableActorsViaDynamicRoutingPrototypes.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("reference"));
meta12.setContent(std::string("ApaydinThesis.pdf"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("subject"));
meta13.setContent(std::string("X3D HAnim humanoid animation behaviors"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("warning"));
meta14.setContent(std::string("under development. should joint translations be exposed? upgrade to HAnim v2.2"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("identifier"));
meta15.setContent(std::string("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypes.x3d"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(std::string("generator"));
meta16.setContent(std::string("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(std::string("license"));
meta17.setContent(std::string("../license.html"));
head1.addMeta(&meta17);

X3D0.setHead(&head1);

Scene& Scene18 =  Scene();
WorldInfo& WorldInfo19 =  WorldInfo();
WorldInfo19.setTitle(std::string("HAnimBehaviorPrototypes.x3d"));
Scene18.addChild(&WorldInfo19);

ProtoDeclare& ProtoDeclare20 =  ProtoDeclare();
ProtoDeclare20.setName(std::string("HAnimBehavior"));
ProtoDeclare20.setAppinfo(std::string("The HAnimBehavior node models a single humanoid behavior either for an entire body or simply parts of a body. It collects a TimeSensor clock with a single PositionInterpolator and multiple OrientationInterpolator nodes to provide a single humanoid behavior."));
ProtoDeclare20.setDocumentation(std::string("https://www.web3d.org/files/specifications/19774/V1.0/"));
ProtoInterface& ProtoInterface21 =  ProtoInterface();
//supported Level of Articulation (LOA)
//shared common input for single TimeSensor animating all interpolators, since different Behaviors may have different cycleInterval durations
//TODO: add other X3D 3.0 TimeSensor fields (pause etc.)
//Not supported: animated translation of individual joints
//pass in key/keyValue array pairs for single PositionInterpolator
//pass in key/keyValue array pairs and expose named output for each OrientationInterpolator, joint by joint
field& field22 =  field();
field22.setName(std::string("supportedLOA"));
field22.setAccessType(std::string("inputOutput"));
field22.setAppinfo(std::string("Supported Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3."));
field22.setType(std::string("SFInt32"));
field22.setValue(std::string("-1"));
ProtoInterface21.addChild(&field22);

field& field23 =  field();
field23.setName(std::string("enabled"));
field23.setAccessType(std::string("inputOutput"));
field23.setAppinfo(std::string("is this behavior enabled?"));
field23.setType(std::string("SFBool"));
field23.setValue(std::string("true"));
ProtoInterface21.addChild(&field23);

field& field24 =  field();
field24.setName(std::string("cycleInterval"));
field24.setAccessType(std::string("inputOutput"));
field24.setAppinfo(std::string("how long do these interpolators take to execute?"));
field24.setType(std::string("SFTime"));
field24.setValue(std::string("1"));
ProtoInterface21.addChild(&field24);

field& field25 =  field();
field25.setName(std::string("loop"));
field25.setAccessType(std::string("inputOutput"));
field25.setAppinfo(std::string("whether or not this behavior loops (e.g. walking) or is single shot (e.g. shake hands)."));
field25.setType(std::string("SFBool"));
field25.setValue(std::string("false"));
ProtoInterface21.addChild(&field25);

field& field26 =  field();
field26.setName(std::string("startTime"));
field26.setAccessType(std::string("inputOutput"));
field26.setAppinfo(std::string("when time now >= startTime isActive becomes true and TimeSensor becomes active"));
field26.setType(std::string("SFTime"));
field26.setValue(std::string("0"));
ProtoInterface21.addChild(&field26);

field& field27 =  field();
field27.setName(std::string("stopTime"));
field27.setAccessType(std::string("inputOutput"));
field27.setAppinfo(std::string("when stopTime becomes <= time now isActive becomes false and TimeSensor becomes inactive"));
field27.setType(std::string("SFTime"));
field27.setValue(std::string("0"));
ProtoInterface21.addChild(&field27);

field& field28 =  field();
field28.setName(std::string("pauseTime"));
field28.setAccessType(std::string("inputOutput"));
field28.setAppinfo(std::string("when time now >= pauseTime isPaused becomes true and TimeSensor becomes paused"));
field28.setType(std::string("SFTime"));
field28.setValue(std::string("0"));
ProtoInterface21.addChild(&field28);

field& field29 =  field();
field29.setName(std::string("resumeTime"));
field29.setAccessType(std::string("inputOutput"));
field29.setAppinfo(std::string("when resumeTime becomes <= time now isPaused becomes false and TimeSensor becomes inactive"));
field29.setType(std::string("SFTime"));
field29.setValue(std::string("0"));
ProtoInterface21.addChild(&field29);

field& field30 =  field();
field30.setName(std::string("cycleTime"));
field30.setAccessType(std::string("outputOnly"));
field30.setAppinfo(std::string("cycleTime sends a time outputOnly at startTime and also at the beginning of each new cycle"));
field30.setType(std::string("SFTime"));
ProtoInterface21.addChild(&field30);

field& field31 =  field();
field31.setName(std::string("isActive"));
field31.setAccessType(std::string("outputOnly"));
field31.setAppinfo(std::string("isActive true/false events are sent when TimeSensor starts/stops running"));
field31.setType(std::string("SFBool"));
ProtoInterface21.addChild(&field31);

field& field32 =  field();
field32.setName(std::string("isPaused"));
field32.setAccessType(std::string("outputOnly"));
field32.setAppinfo(std::string("isPaused true/false events are sent when TimeSensor is paused/resumed"));
field32.setType(std::string("SFBool"));
ProtoInterface21.addChild(&field32);

field& field33 =  field();
field33.setName(std::string("elapsedTime"));
field33.setAccessType(std::string("outputOnly"));
field33.setAppinfo(std::string("current elapsed time since TimeSensor activated/running cumulative in seconds and not counting any paused time"));
field33.setType(std::string("SFBool"));
ProtoInterface21.addChild(&field33);

field& field34 =  field();
field34.setName(std::string("time"));
field34.setAccessType(std::string("outputOnly"));
field34.setAppinfo(std::string("continuously sends the absolute time (since January 1 1970)"));
field34.setType(std::string("SFBool"));
ProtoInterface21.addChild(&field34);

field& field35 =  field();
field35.setName(std::string("fraction_changed"));
field35.setAccessType(std::string("outputOnly"));
field35.setAppinfo(std::string("fraction_changed continuously sends value in range [0 1] showing time progress in the current cycle."));
field35.setType(std::string("SFFloat"));
ProtoInterface21.addChild(&field35);

field& field36 =  field();
field36.setName(std::string("HumanoidRoot_translation_key"));
field36.setAccessType(std::string("inputOutput"));
field36.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field36);

field& field37 =  field();
field37.setName(std::string("HumanoidRoot_translation_keyValue"));
field37.setAccessType(std::string("inputOutput"));
field37.setType(std::string("MFVec3f"));
//no default value
ProtoInterface21.addChild(&field37);

field& field38 =  field();
field38.setName(std::string("HumanoidRoot_translation_changed"));
field38.setAccessType(std::string("outputOnly"));
field38.setType(std::string("SFVec3f"));
ProtoInterface21.addChild(&field38);

field& field39 =  field();
field39.setName(std::string("HumanoidRoot_rotation_key"));
field39.setAccessType(std::string("inputOutput"));
field39.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field39);

field& field40 =  field();
field40.setName(std::string("HumanoidRoot_rotation_keyValue"));
field40.setAccessType(std::string("inputOutput"));
field40.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field40);

field& field41 =  field();
field41.setName(std::string("HumanoidRoot_rotation_changed"));
field41.setAccessType(std::string("outputOnly"));
field41.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field41);

field& field42 =  field();
field42.setName(std::string("c1_key"));
field42.setAccessType(std::string("inputOutput"));
field42.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field42);

field& field43 =  field();
field43.setName(std::string("c1_keyValue"));
field43.setAccessType(std::string("inputOutput"));
field43.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field43);

field& field44 =  field();
field44.setName(std::string("c1_changed"));
field44.setAccessType(std::string("outputOnly"));
field44.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field44);

field& field45 =  field();
field45.setName(std::string("c2_key"));
field45.setAccessType(std::string("inputOutput"));
field45.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field45);

field& field46 =  field();
field46.setName(std::string("c2_keyValue"));
field46.setAccessType(std::string("inputOutput"));
field46.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field46);

field& field47 =  field();
field47.setName(std::string("c2_changed"));
field47.setAccessType(std::string("outputOnly"));
field47.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field47);

field& field48 =  field();
field48.setName(std::string("c3_key"));
field48.setAccessType(std::string("inputOutput"));
field48.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field48);

field& field49 =  field();
field49.setName(std::string("c3_keyValue"));
field49.setAccessType(std::string("inputOutput"));
field49.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field49);

field& field50 =  field();
field50.setName(std::string("c3_changed"));
field50.setAccessType(std::string("outputOnly"));
field50.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field50);

field& field51 =  field();
field51.setName(std::string("c4_key"));
field51.setAccessType(std::string("inputOutput"));
field51.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field51);

field& field52 =  field();
field52.setName(std::string("c4_keyValue"));
field52.setAccessType(std::string("inputOutput"));
field52.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field52);

field& field53 =  field();
field53.setName(std::string("c4_changed"));
field53.setAccessType(std::string("outputOnly"));
field53.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field53);

field& field54 =  field();
field54.setName(std::string("c5_key"));
field54.setAccessType(std::string("inputOutput"));
field54.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field54);

field& field55 =  field();
field55.setName(std::string("c5_keyValue"));
field55.setAccessType(std::string("inputOutput"));
field55.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field55);

field& field56 =  field();
field56.setName(std::string("c5_changed"));
field56.setAccessType(std::string("outputOnly"));
field56.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field56);

field& field57 =  field();
field57.setName(std::string("c6_key"));
field57.setAccessType(std::string("inputOutput"));
field57.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field57);

field& field58 =  field();
field58.setName(std::string("c6_keyValue"));
field58.setAccessType(std::string("inputOutput"));
field58.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field58);

field& field59 =  field();
field59.setName(std::string("c6_changed"));
field59.setAccessType(std::string("outputOnly"));
field59.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field59);

field& field60 =  field();
field60.setName(std::string("c7_key"));
field60.setAccessType(std::string("inputOutput"));
field60.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field60);

field& field61 =  field();
field61.setName(std::string("c7_keyValue"));
field61.setAccessType(std::string("inputOutput"));
field61.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field61);

field& field62 =  field();
field62.setName(std::string("c7_changed"));
field62.setAccessType(std::string("outputOnly"));
field62.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field62);

field& field63 =  field();
field63.setName(std::string("jaw_key"));
field63.setAccessType(std::string("inputOutput"));
field63.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field63);

field& field64 =  field();
field64.setName(std::string("jaw_keyValue"));
field64.setAccessType(std::string("inputOutput"));
field64.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field64);

field& field65 =  field();
field65.setName(std::string("jaw_changed"));
field65.setAccessType(std::string("outputOnly"));
field65.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field65);

field& field66 =  field();
field66.setName(std::string("l1_key"));
field66.setAccessType(std::string("inputOutput"));
field66.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field66);

field& field67 =  field();
field67.setName(std::string("l1_keyValue"));
field67.setAccessType(std::string("inputOutput"));
field67.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field67);

field& field68 =  field();
field68.setName(std::string("l1_changed"));
field68.setAccessType(std::string("outputOnly"));
field68.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field68);

field& field69 =  field();
field69.setName(std::string("l2_key"));
field69.setAccessType(std::string("inputOutput"));
field69.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field69);

field& field70 =  field();
field70.setName(std::string("l2_keyValue"));
field70.setAccessType(std::string("inputOutput"));
field70.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field70);

field& field71 =  field();
field71.setName(std::string("l2_changed"));
field71.setAccessType(std::string("outputOnly"));
field71.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field71);

field& field72 =  field();
field72.setName(std::string("l3_key"));
field72.setAccessType(std::string("inputOutput"));
field72.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field72);

field& field73 =  field();
field73.setName(std::string("l3_keyValue"));
field73.setAccessType(std::string("inputOutput"));
field73.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field73);

field& field74 =  field();
field74.setName(std::string("l3_changed"));
field74.setAccessType(std::string("outputOnly"));
field74.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field74);

field& field75 =  field();
field75.setName(std::string("l4_key"));
field75.setAccessType(std::string("inputOutput"));
field75.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field75);

field& field76 =  field();
field76.setName(std::string("l4_keyValue"));
field76.setAccessType(std::string("inputOutput"));
field76.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field76);

field& field77 =  field();
field77.setName(std::string("l4_changed"));
field77.setAccessType(std::string("outputOnly"));
field77.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field77);

field& field78 =  field();
field78.setName(std::string("l5_key"));
field78.setAccessType(std::string("inputOutput"));
field78.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field78);

field& field79 =  field();
field79.setName(std::string("l5_keyValue"));
field79.setAccessType(std::string("inputOutput"));
field79.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field79);

field& field80 =  field();
field80.setName(std::string("l5_changed"));
field80.setAccessType(std::string("outputOnly"));
field80.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field80);

field& field81 =  field();
field81.setName(std::string("l_acromioclavicular_key"));
field81.setAccessType(std::string("inputOutput"));
field81.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field81);

field& field82 =  field();
field82.setName(std::string("l_acromioclavicular_keyValue"));
field82.setAccessType(std::string("inputOutput"));
field82.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field82);

field& field83 =  field();
field83.setName(std::string("l_acromioclavicular_changed"));
field83.setAccessType(std::string("outputOnly"));
field83.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field83);

field& field84 =  field();
field84.setName(std::string("l_ankle_key"));
field84.setAccessType(std::string("inputOutput"));
field84.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field84);

field& field85 =  field();
field85.setName(std::string("l_ankle_keyValue"));
field85.setAccessType(std::string("inputOutput"));
field85.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field85);

field& field86 =  field();
field86.setName(std::string("l_ankle_changed"));
field86.setAccessType(std::string("outputOnly"));
field86.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field86);

field& field87 =  field();
field87.setName(std::string("l_calf_key"));
field87.setAccessType(std::string("inputOutput"));
field87.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field87);

field& field88 =  field();
field88.setName(std::string("l_calf_keyValue"));
field88.setAccessType(std::string("inputOutput"));
field88.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field88);

field& field89 =  field();
field89.setName(std::string("l_calf_changed"));
field89.setAccessType(std::string("outputOnly"));
field89.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field89);

field& field90 =  field();
field90.setName(std::string("l_clavicle_key"));
field90.setAccessType(std::string("inputOutput"));
field90.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field90);

field& field91 =  field();
field91.setName(std::string("l_clavicle_keyValue"));
field91.setAccessType(std::string("inputOutput"));
field91.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field91);

field& field92 =  field();
field92.setName(std::string("l_clavicle_changed"));
field92.setAccessType(std::string("outputOnly"));
field92.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field92);

field& field93 =  field();
field93.setName(std::string("l_elbow_key"));
field93.setAccessType(std::string("inputOutput"));
field93.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field93);

field& field94 =  field();
field94.setName(std::string("l_elbow_keyValue"));
field94.setAccessType(std::string("inputOutput"));
field94.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field94);

field& field95 =  field();
field95.setName(std::string("l_elbow_changed"));
field95.setAccessType(std::string("outputOnly"));
field95.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field95);

field& field96 =  field();
field96.setName(std::string("l_eyeball_key"));
field96.setAccessType(std::string("inputOutput"));
field96.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field96);

field& field97 =  field();
field97.setName(std::string("l_eyeball_keyValue"));
field97.setAccessType(std::string("inputOutput"));
field97.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field97);

field& field98 =  field();
field98.setName(std::string("l_eyeball_changed"));
field98.setAccessType(std::string("outputOnly"));
field98.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field98);

field& field99 =  field();
field99.setName(std::string("l_eyeball_joint_key"));
field99.setAccessType(std::string("inputOutput"));
field99.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field99);

field& field100 =  field();
field100.setName(std::string("l_eyeball_joint_keyValue"));
field100.setAccessType(std::string("inputOutput"));
field100.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field100);

field& field101 =  field();
field101.setName(std::string("l_eyeball_joint_changed"));
field101.setAccessType(std::string("outputOnly"));
field101.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field101);

field& field102 =  field();
field102.setName(std::string("l_eyebrow_key"));
field102.setAccessType(std::string("inputOutput"));
field102.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field102);

field& field103 =  field();
field103.setName(std::string("l_eyebrow_keyValue"));
field103.setAccessType(std::string("inputOutput"));
field103.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field103);

field& field104 =  field();
field104.setName(std::string("l_eyebrow_changed"));
field104.setAccessType(std::string("outputOnly"));
field104.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field104);

field& field105 =  field();
field105.setName(std::string("l_eyebrow_joint_key"));
field105.setAccessType(std::string("inputOutput"));
field105.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field105);

field& field106 =  field();
field106.setName(std::string("l_eyebrow_joint_keyValue"));
field106.setAccessType(std::string("inputOutput"));
field106.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field106);

field& field107 =  field();
field107.setName(std::string("l_eyebrow_joint_changed"));
field107.setAccessType(std::string("outputOnly"));
field107.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field107);

field& field108 =  field();
field108.setName(std::string("l_eyelid_key"));
field108.setAccessType(std::string("inputOutput"));
field108.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field108);

field& field109 =  field();
field109.setName(std::string("l_eyelid_keyValue"));
field109.setAccessType(std::string("inputOutput"));
field109.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field109);

field& field110 =  field();
field110.setName(std::string("l_eyelid_changed"));
field110.setAccessType(std::string("outputOnly"));
field110.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field110);

field& field111 =  field();
field111.setName(std::string("l_eyelid_joint_key"));
field111.setAccessType(std::string("inputOutput"));
field111.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field111);

field& field112 =  field();
field112.setName(std::string("l_eyelid_joint_keyValue"));
field112.setAccessType(std::string("inputOutput"));
field112.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field112);

field& field113 =  field();
field113.setName(std::string("l_eyelid_joint_changed"));
field113.setAccessType(std::string("outputOnly"));
field113.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field113);

field& field114 =  field();
field114.setName(std::string("l_forearm_key"));
field114.setAccessType(std::string("inputOutput"));
field114.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field114);

field& field115 =  field();
field115.setName(std::string("l_forearm_keyValue"));
field115.setAccessType(std::string("inputOutput"));
field115.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field115);

field& field116 =  field();
field116.setName(std::string("l_forearm_changed"));
field116.setAccessType(std::string("outputOnly"));
field116.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field116);

field& field117 =  field();
field117.setName(std::string("l_forefoot_key"));
field117.setAccessType(std::string("inputOutput"));
field117.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field117);

field& field118 =  field();
field118.setName(std::string("l_forefoot_keyValue"));
field118.setAccessType(std::string("inputOutput"));
field118.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field118);

field& field119 =  field();
field119.setName(std::string("l_forefoot_changed"));
field119.setAccessType(std::string("outputOnly"));
field119.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field119);

field& field120 =  field();
field120.setName(std::string("l_hand_key"));
field120.setAccessType(std::string("inputOutput"));
field120.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field120);

field& field121 =  field();
field121.setName(std::string("l_hand_keyValue"));
field121.setAccessType(std::string("inputOutput"));
field121.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field121);

field& field122 =  field();
field122.setName(std::string("l_hand_changed"));
field122.setAccessType(std::string("outputOnly"));
field122.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field122);

field& field123 =  field();
field123.setName(std::string("l_hindfoot_key"));
field123.setAccessType(std::string("inputOutput"));
field123.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field123);

field& field124 =  field();
field124.setName(std::string("l_hindfoot_keyValue"));
field124.setAccessType(std::string("inputOutput"));
field124.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field124);

field& field125 =  field();
field125.setName(std::string("l_hindfoot_changed"));
field125.setAccessType(std::string("outputOnly"));
field125.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field125);

field& field126 =  field();
field126.setName(std::string("l_hip_key"));
field126.setAccessType(std::string("inputOutput"));
field126.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field126);

field& field127 =  field();
field127.setName(std::string("l_hip_keyValue"));
field127.setAccessType(std::string("inputOutput"));
field127.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field127);

field& field128 =  field();
field128.setName(std::string("l_hip_changed"));
field128.setAccessType(std::string("outputOnly"));
field128.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field128);

field& field129 =  field();
field129.setName(std::string("l_index0_key"));
field129.setAccessType(std::string("inputOutput"));
field129.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field129);

field& field130 =  field();
field130.setName(std::string("l_index0_keyValue"));
field130.setAccessType(std::string("inputOutput"));
field130.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field130);

field& field131 =  field();
field131.setName(std::string("l_index0_changed"));
field131.setAccessType(std::string("outputOnly"));
field131.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field131);

field& field132 =  field();
field132.setName(std::string("l_index1_key"));
field132.setAccessType(std::string("inputOutput"));
field132.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field132);

field& field133 =  field();
field133.setName(std::string("l_index1_keyValue"));
field133.setAccessType(std::string("inputOutput"));
field133.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field133);

field& field134 =  field();
field134.setName(std::string("l_index1_changed"));
field134.setAccessType(std::string("outputOnly"));
field134.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field134);

field& field135 =  field();
field135.setName(std::string("l_index2_key"));
field135.setAccessType(std::string("inputOutput"));
field135.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field135);

field& field136 =  field();
field136.setName(std::string("l_index2_keyValue"));
field136.setAccessType(std::string("inputOutput"));
field136.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field136);

field& field137 =  field();
field137.setName(std::string("l_index2_changed"));
field137.setAccessType(std::string("outputOnly"));
field137.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field137);

field& field138 =  field();
field138.setName(std::string("l_index3_key"));
field138.setAccessType(std::string("inputOutput"));
field138.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field138);

field& field139 =  field();
field139.setName(std::string("l_index3_keyValue"));
field139.setAccessType(std::string("inputOutput"));
field139.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field139);

field& field140 =  field();
field140.setName(std::string("l_index3_changed"));
field140.setAccessType(std::string("outputOnly"));
field140.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field140);

field& field141 =  field();
field141.setName(std::string("l_index_distal_key"));
field141.setAccessType(std::string("inputOutput"));
field141.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field141);

field& field142 =  field();
field142.setName(std::string("l_index_distal_keyValue"));
field142.setAccessType(std::string("inputOutput"));
field142.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field142);

field& field143 =  field();
field143.setName(std::string("l_index_distal_changed"));
field143.setAccessType(std::string("outputOnly"));
field143.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field143);

field& field144 =  field();
field144.setName(std::string("l_index_metacarpal_key"));
field144.setAccessType(std::string("inputOutput"));
field144.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field144);

field& field145 =  field();
field145.setName(std::string("l_index_metacarpal_keyValue"));
field145.setAccessType(std::string("inputOutput"));
field145.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field145);

field& field146 =  field();
field146.setName(std::string("l_index_metacarpal_changed"));
field146.setAccessType(std::string("outputOnly"));
field146.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field146);

field& field147 =  field();
field147.setName(std::string("l_index_middle_key"));
field147.setAccessType(std::string("inputOutput"));
field147.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field147);

field& field148 =  field();
field148.setName(std::string("l_index_middle_keyValue"));
field148.setAccessType(std::string("inputOutput"));
field148.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field148);

field& field149 =  field();
field149.setName(std::string("l_index_middle_changed"));
field149.setAccessType(std::string("outputOnly"));
field149.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field149);

field& field150 =  field();
field150.setName(std::string("l_index_proximal_key"));
field150.setAccessType(std::string("inputOutput"));
field150.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field150);

field& field151 =  field();
field151.setName(std::string("l_index_proximal_keyValue"));
field151.setAccessType(std::string("inputOutput"));
field151.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field151);

field& field152 =  field();
field152.setName(std::string("l_index_proximal_changed"));
field152.setAccessType(std::string("outputOnly"));
field152.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field152);

field& field153 =  field();
field153.setName(std::string("l_knee_key"));
field153.setAccessType(std::string("inputOutput"));
field153.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field153);

field& field154 =  field();
field154.setName(std::string("l_knee_keyValue"));
field154.setAccessType(std::string("inputOutput"));
field154.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field154);

field& field155 =  field();
field155.setName(std::string("l_knee_changed"));
field155.setAccessType(std::string("outputOnly"));
field155.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field155);

field& field156 =  field();
field156.setName(std::string("l_metatarsal_key"));
field156.setAccessType(std::string("inputOutput"));
field156.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field156);

field& field157 =  field();
field157.setName(std::string("l_metatarsal_keyValue"));
field157.setAccessType(std::string("inputOutput"));
field157.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field157);

field& field158 =  field();
field158.setName(std::string("l_metatarsal_changed"));
field158.setAccessType(std::string("outputOnly"));
field158.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field158);

field& field159 =  field();
field159.setName(std::string("l_middistal_key"));
field159.setAccessType(std::string("inputOutput"));
field159.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field159);

field& field160 =  field();
field160.setName(std::string("l_middistal_keyValue"));
field160.setAccessType(std::string("inputOutput"));
field160.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field160);

field& field161 =  field();
field161.setName(std::string("l_middistal_changed"));
field161.setAccessType(std::string("outputOnly"));
field161.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field161);

field& field162 =  field();
field162.setName(std::string("l_middle0_key"));
field162.setAccessType(std::string("inputOutput"));
field162.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field162);

field& field163 =  field();
field163.setName(std::string("l_middle0_keyValue"));
field163.setAccessType(std::string("inputOutput"));
field163.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field163);

field& field164 =  field();
field164.setName(std::string("l_middle0_changed"));
field164.setAccessType(std::string("outputOnly"));
field164.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field164);

field& field165 =  field();
field165.setName(std::string("l_middle1_key"));
field165.setAccessType(std::string("inputOutput"));
field165.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field165);

field& field166 =  field();
field166.setName(std::string("l_middle1_keyValue"));
field166.setAccessType(std::string("inputOutput"));
field166.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field166);

field& field167 =  field();
field167.setName(std::string("l_middle1_changed"));
field167.setAccessType(std::string("outputOnly"));
field167.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field167);

field& field168 =  field();
field168.setName(std::string("l_middle2_key"));
field168.setAccessType(std::string("inputOutput"));
field168.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field168);

field& field169 =  field();
field169.setName(std::string("l_middle2_keyValue"));
field169.setAccessType(std::string("inputOutput"));
field169.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field169);

field& field170 =  field();
field170.setName(std::string("l_middle2_changed"));
field170.setAccessType(std::string("outputOnly"));
field170.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field170);

field& field171 =  field();
field171.setName(std::string("l_middle3_key"));
field171.setAccessType(std::string("inputOutput"));
field171.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field171);

field& field172 =  field();
field172.setName(std::string("l_middle3_keyValue"));
field172.setAccessType(std::string("inputOutput"));
field172.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field172);

field& field173 =  field();
field173.setName(std::string("l_middle3_changed"));
field173.setAccessType(std::string("outputOnly"));
field173.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field173);

field& field174 =  field();
field174.setName(std::string("l_middle_distal_key"));
field174.setAccessType(std::string("inputOutput"));
field174.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field174);

field& field175 =  field();
field175.setName(std::string("l_middle_distal_keyValue"));
field175.setAccessType(std::string("inputOutput"));
field175.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field175);

field& field176 =  field();
field176.setName(std::string("l_middle_distal_changed"));
field176.setAccessType(std::string("outputOnly"));
field176.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field176);

field& field177 =  field();
field177.setName(std::string("l_middle_metacarpal_key"));
field177.setAccessType(std::string("inputOutput"));
field177.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field177);

field& field178 =  field();
field178.setName(std::string("l_middle_metacarpal_keyValue"));
field178.setAccessType(std::string("inputOutput"));
field178.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field178);

field& field179 =  field();
field179.setName(std::string("l_middle_metacarpal_changed"));
field179.setAccessType(std::string("outputOnly"));
field179.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field179);

field& field180 =  field();
field180.setName(std::string("l_middle_middle_key"));
field180.setAccessType(std::string("inputOutput"));
field180.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field180);

field& field181 =  field();
field181.setName(std::string("l_middle_middle_keyValue"));
field181.setAccessType(std::string("inputOutput"));
field181.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field181);

field& field182 =  field();
field182.setName(std::string("l_middle_middle_changed"));
field182.setAccessType(std::string("outputOnly"));
field182.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field182);

field& field183 =  field();
field183.setName(std::string("l_middle_proximal_key"));
field183.setAccessType(std::string("inputOutput"));
field183.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field183);

field& field184 =  field();
field184.setName(std::string("l_middle_proximal_keyValue"));
field184.setAccessType(std::string("inputOutput"));
field184.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field184);

field& field185 =  field();
field185.setName(std::string("l_middle_proximal_changed"));
field185.setAccessType(std::string("outputOnly"));
field185.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field185);

field& field186 =  field();
field186.setName(std::string("l_midproximal_key"));
field186.setAccessType(std::string("inputOutput"));
field186.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field186);

field& field187 =  field();
field187.setName(std::string("l_midproximal_keyValue"));
field187.setAccessType(std::string("inputOutput"));
field187.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field187);

field& field188 =  field();
field188.setName(std::string("l_midproximal_changed"));
field188.setAccessType(std::string("outputOnly"));
field188.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field188);

field& field189 =  field();
field189.setName(std::string("l_midtarsal_key"));
field189.setAccessType(std::string("inputOutput"));
field189.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field189);

field& field190 =  field();
field190.setName(std::string("l_midtarsal_keyValue"));
field190.setAccessType(std::string("inputOutput"));
field190.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field190);

field& field191 =  field();
field191.setName(std::string("l_midtarsal_changed"));
field191.setAccessType(std::string("outputOnly"));
field191.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field191);

field& field192 =  field();
field192.setName(std::string("l_pinky0_key"));
field192.setAccessType(std::string("inputOutput"));
field192.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field192);

field& field193 =  field();
field193.setName(std::string("l_pinky0_keyValue"));
field193.setAccessType(std::string("inputOutput"));
field193.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field193);

field& field194 =  field();
field194.setName(std::string("l_pinky0_changed"));
field194.setAccessType(std::string("outputOnly"));
field194.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field194);

field& field195 =  field();
field195.setName(std::string("l_pinky1_key"));
field195.setAccessType(std::string("inputOutput"));
field195.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field195);

field& field196 =  field();
field196.setName(std::string("l_pinky1_keyValue"));
field196.setAccessType(std::string("inputOutput"));
field196.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field196);

field& field197 =  field();
field197.setName(std::string("l_pinky1_changed"));
field197.setAccessType(std::string("outputOnly"));
field197.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field197);

field& field198 =  field();
field198.setName(std::string("l_pinky2_key"));
field198.setAccessType(std::string("inputOutput"));
field198.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field198);

field& field199 =  field();
field199.setName(std::string("l_pinky2_keyValue"));
field199.setAccessType(std::string("inputOutput"));
field199.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field199);

field& field200 =  field();
field200.setName(std::string("l_pinky2_changed"));
field200.setAccessType(std::string("outputOnly"));
field200.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field200);

field& field201 =  field();
field201.setName(std::string("l_pinky3_key"));
field201.setAccessType(std::string("inputOutput"));
field201.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field201);

field& field202 =  field();
field202.setName(std::string("l_pinky3_keyValue"));
field202.setAccessType(std::string("inputOutput"));
field202.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field202);

field& field203 =  field();
field203.setName(std::string("l_pinky3_changed"));
field203.setAccessType(std::string("outputOnly"));
field203.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field203);

field& field204 =  field();
field204.setName(std::string("l_pinky_distal_key"));
field204.setAccessType(std::string("inputOutput"));
field204.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field204);

field& field205 =  field();
field205.setName(std::string("l_pinky_distal_keyValue"));
field205.setAccessType(std::string("inputOutput"));
field205.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field205);

field& field206 =  field();
field206.setName(std::string("l_pinky_distal_changed"));
field206.setAccessType(std::string("outputOnly"));
field206.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field206);

field& field207 =  field();
field207.setName(std::string("l_pinky_metacarpal_key"));
field207.setAccessType(std::string("inputOutput"));
field207.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field207);

field& field208 =  field();
field208.setName(std::string("l_pinky_metacarpal_keyValue"));
field208.setAccessType(std::string("inputOutput"));
field208.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field208);

field& field209 =  field();
field209.setName(std::string("l_pinky_metacarpal_changed"));
field209.setAccessType(std::string("outputOnly"));
field209.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field209);

field& field210 =  field();
field210.setName(std::string("l_pinky_middle_key"));
field210.setAccessType(std::string("inputOutput"));
field210.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field210);

field& field211 =  field();
field211.setName(std::string("l_pinky_middle_keyValue"));
field211.setAccessType(std::string("inputOutput"));
field211.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field211);

field& field212 =  field();
field212.setName(std::string("l_pinky_middle_changed"));
field212.setAccessType(std::string("outputOnly"));
field212.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field212);

field& field213 =  field();
field213.setName(std::string("l_pinky_proximal_key"));
field213.setAccessType(std::string("inputOutput"));
field213.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field213);

field& field214 =  field();
field214.setName(std::string("l_pinky_proximal_keyValue"));
field214.setAccessType(std::string("inputOutput"));
field214.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field214);

field& field215 =  field();
field215.setName(std::string("l_pinky_proximal_changed"));
field215.setAccessType(std::string("outputOnly"));
field215.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field215);

field& field216 =  field();
field216.setName(std::string("l_ring0_key"));
field216.setAccessType(std::string("inputOutput"));
field216.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field216);

field& field217 =  field();
field217.setName(std::string("l_ring0_keyValue"));
field217.setAccessType(std::string("inputOutput"));
field217.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field217);

field& field218 =  field();
field218.setName(std::string("l_ring0_changed"));
field218.setAccessType(std::string("outputOnly"));
field218.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field218);

field& field219 =  field();
field219.setName(std::string("l_ring1_key"));
field219.setAccessType(std::string("inputOutput"));
field219.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field219);

field& field220 =  field();
field220.setName(std::string("l_ring1_keyValue"));
field220.setAccessType(std::string("inputOutput"));
field220.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field220);

field& field221 =  field();
field221.setName(std::string("l_ring1_changed"));
field221.setAccessType(std::string("outputOnly"));
field221.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field221);

field& field222 =  field();
field222.setName(std::string("l_ring2_key"));
field222.setAccessType(std::string("inputOutput"));
field222.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field222);

field& field223 =  field();
field223.setName(std::string("l_ring2_keyValue"));
field223.setAccessType(std::string("inputOutput"));
field223.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field223);

field& field224 =  field();
field224.setName(std::string("l_ring2_changed"));
field224.setAccessType(std::string("outputOnly"));
field224.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field224);

field& field225 =  field();
field225.setName(std::string("l_ring3_key"));
field225.setAccessType(std::string("inputOutput"));
field225.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field225);

field& field226 =  field();
field226.setName(std::string("l_ring3_keyValue"));
field226.setAccessType(std::string("inputOutput"));
field226.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field226);

field& field227 =  field();
field227.setName(std::string("l_ring3_changed"));
field227.setAccessType(std::string("outputOnly"));
field227.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field227);

field& field228 =  field();
field228.setName(std::string("l_ring_distal_key"));
field228.setAccessType(std::string("inputOutput"));
field228.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field228);

field& field229 =  field();
field229.setName(std::string("l_ring_distal_keyValue"));
field229.setAccessType(std::string("inputOutput"));
field229.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field229);

field& field230 =  field();
field230.setName(std::string("l_ring_distal_changed"));
field230.setAccessType(std::string("outputOnly"));
field230.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field230);

field& field231 =  field();
field231.setName(std::string("l_ring_metacarpal_key"));
field231.setAccessType(std::string("inputOutput"));
field231.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field231);

field& field232 =  field();
field232.setName(std::string("l_ring_metacarpal_keyValue"));
field232.setAccessType(std::string("inputOutput"));
field232.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field232);

field& field233 =  field();
field233.setName(std::string("l_ring_metacarpal_changed"));
field233.setAccessType(std::string("outputOnly"));
field233.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field233);

field& field234 =  field();
field234.setName(std::string("l_ring_middle_key"));
field234.setAccessType(std::string("inputOutput"));
field234.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field234);

field& field235 =  field();
field235.setName(std::string("l_ring_middle_keyValue"));
field235.setAccessType(std::string("inputOutput"));
field235.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field235);

field& field236 =  field();
field236.setName(std::string("l_ring_middle_changed"));
field236.setAccessType(std::string("outputOnly"));
field236.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field236);

field& field237 =  field();
field237.setName(std::string("l_ring_proximal_key"));
field237.setAccessType(std::string("inputOutput"));
field237.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field237);

field& field238 =  field();
field238.setName(std::string("l_ring_proximal_keyValue"));
field238.setAccessType(std::string("inputOutput"));
field238.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field238);

field& field239 =  field();
field239.setName(std::string("l_ring_proximal_changed"));
field239.setAccessType(std::string("outputOnly"));
field239.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field239);

field& field240 =  field();
field240.setName(std::string("l_scapula_key"));
field240.setAccessType(std::string("inputOutput"));
field240.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field240);

field& field241 =  field();
field241.setName(std::string("l_scapula_keyValue"));
field241.setAccessType(std::string("inputOutput"));
field241.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field241);

field& field242 =  field();
field242.setName(std::string("l_scapula_changed"));
field242.setAccessType(std::string("outputOnly"));
field242.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field242);

field& field243 =  field();
field243.setName(std::string("l_shoulder_key"));
field243.setAccessType(std::string("inputOutput"));
field243.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field243);

field& field244 =  field();
field244.setName(std::string("l_shoulder_keyValue"));
field244.setAccessType(std::string("inputOutput"));
field244.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field244);

field& field245 =  field();
field245.setName(std::string("l_shoulder_changed"));
field245.setAccessType(std::string("outputOnly"));
field245.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field245);

field& field246 =  field();
field246.setName(std::string("l_sternoclavicular_key"));
field246.setAccessType(std::string("inputOutput"));
field246.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field246);

field& field247 =  field();
field247.setName(std::string("l_sternoclavicular_keyValue"));
field247.setAccessType(std::string("inputOutput"));
field247.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field247);

field& field248 =  field();
field248.setName(std::string("l_sternoclavicular_changed"));
field248.setAccessType(std::string("outputOnly"));
field248.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field248);

field& field249 =  field();
field249.setName(std::string("l_subtalar_key"));
field249.setAccessType(std::string("inputOutput"));
field249.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field249);

field& field250 =  field();
field250.setName(std::string("l_subtalar_keyValue"));
field250.setAccessType(std::string("inputOutput"));
field250.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field250);

field& field251 =  field();
field251.setName(std::string("l_subtalar_changed"));
field251.setAccessType(std::string("outputOnly"));
field251.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field251);

field& field252 =  field();
field252.setName(std::string("l_thigh_key"));
field252.setAccessType(std::string("inputOutput"));
field252.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field252);

field& field253 =  field();
field253.setName(std::string("l_thigh_keyValue"));
field253.setAccessType(std::string("inputOutput"));
field253.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field253);

field& field254 =  field();
field254.setName(std::string("l_thigh_changed"));
field254.setAccessType(std::string("outputOnly"));
field254.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field254);

field& field255 =  field();
field255.setName(std::string("l_thumb1_key"));
field255.setAccessType(std::string("inputOutput"));
field255.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field255);

field& field256 =  field();
field256.setName(std::string("l_thumb1_keyValue"));
field256.setAccessType(std::string("inputOutput"));
field256.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field256);

field& field257 =  field();
field257.setName(std::string("l_thumb1_changed"));
field257.setAccessType(std::string("outputOnly"));
field257.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field257);

field& field258 =  field();
field258.setName(std::string("l_thumb2_key"));
field258.setAccessType(std::string("inputOutput"));
field258.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field258);

field& field259 =  field();
field259.setName(std::string("l_thumb2_keyValue"));
field259.setAccessType(std::string("inputOutput"));
field259.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field259);

field& field260 =  field();
field260.setName(std::string("l_thumb2_changed"));
field260.setAccessType(std::string("outputOnly"));
field260.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field260);

field& field261 =  field();
field261.setName(std::string("l_thumb3_key"));
field261.setAccessType(std::string("inputOutput"));
field261.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field261);

field& field262 =  field();
field262.setName(std::string("l_thumb3_keyValue"));
field262.setAccessType(std::string("inputOutput"));
field262.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field262);

field& field263 =  field();
field263.setName(std::string("l_thumb3_changed"));
field263.setAccessType(std::string("outputOnly"));
field263.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field263);

field& field264 =  field();
field264.setName(std::string("l_thumb_distal_key"));
field264.setAccessType(std::string("inputOutput"));
field264.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field264);

field& field265 =  field();
field265.setName(std::string("l_thumb_distal_keyValue"));
field265.setAccessType(std::string("inputOutput"));
field265.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field265);

field& field266 =  field();
field266.setName(std::string("l_thumb_distal_changed"));
field266.setAccessType(std::string("outputOnly"));
field266.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field266);

field& field267 =  field();
field267.setName(std::string("l_thumb_metacarpal_key"));
field267.setAccessType(std::string("inputOutput"));
field267.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field267);

field& field268 =  field();
field268.setName(std::string("l_thumb_metacarpal_keyValue"));
field268.setAccessType(std::string("inputOutput"));
field268.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field268);

field& field269 =  field();
field269.setName(std::string("l_thumb_metacarpal_changed"));
field269.setAccessType(std::string("outputOnly"));
field269.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field269);

field& field270 =  field();
field270.setName(std::string("l_thumb_proximal_key"));
field270.setAccessType(std::string("inputOutput"));
field270.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field270);

field& field271 =  field();
field271.setName(std::string("l_thumb_proximal_keyValue"));
field271.setAccessType(std::string("inputOutput"));
field271.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field271);

field& field272 =  field();
field272.setName(std::string("l_thumb_proximal_changed"));
field272.setAccessType(std::string("outputOnly"));
field272.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field272);

field& field273 =  field();
field273.setName(std::string("l_upperarm_key"));
field273.setAccessType(std::string("inputOutput"));
field273.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field273);

field& field274 =  field();
field274.setName(std::string("l_upperarm_keyValue"));
field274.setAccessType(std::string("inputOutput"));
field274.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field274);

field& field275 =  field();
field275.setName(std::string("l_upperarm_changed"));
field275.setAccessType(std::string("outputOnly"));
field275.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field275);

field& field276 =  field();
field276.setName(std::string("l_wrist_key"));
field276.setAccessType(std::string("inputOutput"));
field276.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field276);

field& field277 =  field();
field277.setName(std::string("l_wrist_keyValue"));
field277.setAccessType(std::string("inputOutput"));
field277.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field277);

field& field278 =  field();
field278.setName(std::string("l_wrist_changed"));
field278.setAccessType(std::string("outputOnly"));
field278.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field278);

field& field279 =  field();
field279.setName(std::string("pelvis_key"));
field279.setAccessType(std::string("inputOutput"));
field279.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field279);

field& field280 =  field();
field280.setName(std::string("pelvis_keyValue"));
field280.setAccessType(std::string("inputOutput"));
field280.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field280);

field& field281 =  field();
field281.setName(std::string("pelvis_changed"));
field281.setAccessType(std::string("outputOnly"));
field281.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field281);

field& field282 =  field();
field282.setName(std::string("r_acromioclavicular_key"));
field282.setAccessType(std::string("inputOutput"));
field282.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field282);

field& field283 =  field();
field283.setName(std::string("r_acromioclavicular_keyValue"));
field283.setAccessType(std::string("inputOutput"));
field283.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field283);

field& field284 =  field();
field284.setName(std::string("r_acromioclavicular_changed"));
field284.setAccessType(std::string("outputOnly"));
field284.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field284);

field& field285 =  field();
field285.setName(std::string("r_ankle_key"));
field285.setAccessType(std::string("inputOutput"));
field285.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field285);

field& field286 =  field();
field286.setName(std::string("r_ankle_keyValue"));
field286.setAccessType(std::string("inputOutput"));
field286.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field286);

field& field287 =  field();
field287.setName(std::string("r_ankle_changed"));
field287.setAccessType(std::string("outputOnly"));
field287.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field287);

field& field288 =  field();
field288.setName(std::string("r_calf_key"));
field288.setAccessType(std::string("inputOutput"));
field288.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field288);

field& field289 =  field();
field289.setName(std::string("r_calf_keyValue"));
field289.setAccessType(std::string("inputOutput"));
field289.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field289);

field& field290 =  field();
field290.setName(std::string("r_calf_changed"));
field290.setAccessType(std::string("outputOnly"));
field290.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field290);

field& field291 =  field();
field291.setName(std::string("r_clavicle_key"));
field291.setAccessType(std::string("inputOutput"));
field291.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field291);

field& field292 =  field();
field292.setName(std::string("r_clavicle_keyValue"));
field292.setAccessType(std::string("inputOutput"));
field292.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field292);

field& field293 =  field();
field293.setName(std::string("r_clavicle_changed"));
field293.setAccessType(std::string("outputOnly"));
field293.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field293);

field& field294 =  field();
field294.setName(std::string("r_elbow_key"));
field294.setAccessType(std::string("inputOutput"));
field294.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field294);

field& field295 =  field();
field295.setName(std::string("r_elbow_keyValue"));
field295.setAccessType(std::string("inputOutput"));
field295.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field295);

field& field296 =  field();
field296.setName(std::string("r_elbow_changed"));
field296.setAccessType(std::string("outputOnly"));
field296.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field296);

field& field297 =  field();
field297.setName(std::string("r_eyeball_key"));
field297.setAccessType(std::string("inputOutput"));
field297.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field297);

field& field298 =  field();
field298.setName(std::string("r_eyeball_keyValue"));
field298.setAccessType(std::string("inputOutput"));
field298.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field298);

field& field299 =  field();
field299.setName(std::string("r_eyeball_changed"));
field299.setAccessType(std::string("outputOnly"));
field299.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field299);

field& field300 =  field();
field300.setName(std::string("r_eyeball_joint_key"));
field300.setAccessType(std::string("inputOutput"));
field300.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field300);

field& field301 =  field();
field301.setName(std::string("r_eyeball_joint_keyValue"));
field301.setAccessType(std::string("inputOutput"));
field301.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field301);

field& field302 =  field();
field302.setName(std::string("r_eyeball_joint_changed"));
field302.setAccessType(std::string("outputOnly"));
field302.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field302);

field& field303 =  field();
field303.setName(std::string("r_eyebrow_key"));
field303.setAccessType(std::string("inputOutput"));
field303.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field303);

field& field304 =  field();
field304.setName(std::string("r_eyebrow_keyValue"));
field304.setAccessType(std::string("inputOutput"));
field304.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field304);

field& field305 =  field();
field305.setName(std::string("r_eyebrow_changed"));
field305.setAccessType(std::string("outputOnly"));
field305.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field305);

field& field306 =  field();
field306.setName(std::string("r_eyebrow_joint_key"));
field306.setAccessType(std::string("inputOutput"));
field306.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field306);

field& field307 =  field();
field307.setName(std::string("r_eyebrow_joint_keyValue"));
field307.setAccessType(std::string("inputOutput"));
field307.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field307);

field& field308 =  field();
field308.setName(std::string("r_eyebrow_joint_changed"));
field308.setAccessType(std::string("outputOnly"));
field308.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field308);

field& field309 =  field();
field309.setName(std::string("r_eyelid_key"));
field309.setAccessType(std::string("inputOutput"));
field309.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field309);

field& field310 =  field();
field310.setName(std::string("r_eyelid_keyValue"));
field310.setAccessType(std::string("inputOutput"));
field310.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field310);

field& field311 =  field();
field311.setName(std::string("r_eyelid_changed"));
field311.setAccessType(std::string("outputOnly"));
field311.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field311);

field& field312 =  field();
field312.setName(std::string("r_eyelid_joint_key"));
field312.setAccessType(std::string("inputOutput"));
field312.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field312);

field& field313 =  field();
field313.setName(std::string("r_eyelid_joint_keyValue"));
field313.setAccessType(std::string("inputOutput"));
field313.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field313);

field& field314 =  field();
field314.setName(std::string("r_eyelid_joint_changed"));
field314.setAccessType(std::string("outputOnly"));
field314.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field314);

field& field315 =  field();
field315.setName(std::string("r_forearm_key"));
field315.setAccessType(std::string("inputOutput"));
field315.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field315);

field& field316 =  field();
field316.setName(std::string("r_forearm_keyValue"));
field316.setAccessType(std::string("inputOutput"));
field316.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field316);

field& field317 =  field();
field317.setName(std::string("r_forearm_changed"));
field317.setAccessType(std::string("outputOnly"));
field317.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field317);

field& field318 =  field();
field318.setName(std::string("r_forefoot_key"));
field318.setAccessType(std::string("inputOutput"));
field318.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field318);

field& field319 =  field();
field319.setName(std::string("r_forefoot_keyValue"));
field319.setAccessType(std::string("inputOutput"));
field319.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field319);

field& field320 =  field();
field320.setName(std::string("r_forefoot_changed"));
field320.setAccessType(std::string("outputOnly"));
field320.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field320);

field& field321 =  field();
field321.setName(std::string("r_hand_key"));
field321.setAccessType(std::string("inputOutput"));
field321.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field321);

field& field322 =  field();
field322.setName(std::string("r_hand_keyValue"));
field322.setAccessType(std::string("inputOutput"));
field322.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field322);

field& field323 =  field();
field323.setName(std::string("r_hand_changed"));
field323.setAccessType(std::string("outputOnly"));
field323.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field323);

field& field324 =  field();
field324.setName(std::string("r_hindfoot_key"));
field324.setAccessType(std::string("inputOutput"));
field324.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field324);

field& field325 =  field();
field325.setName(std::string("r_hindfoot_keyValue"));
field325.setAccessType(std::string("inputOutput"));
field325.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field325);

field& field326 =  field();
field326.setName(std::string("r_hindfoot_changed"));
field326.setAccessType(std::string("outputOnly"));
field326.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field326);

field& field327 =  field();
field327.setName(std::string("r_hip_key"));
field327.setAccessType(std::string("inputOutput"));
field327.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field327);

field& field328 =  field();
field328.setName(std::string("r_hip_keyValue"));
field328.setAccessType(std::string("inputOutput"));
field328.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field328);

field& field329 =  field();
field329.setName(std::string("r_hip_changed"));
field329.setAccessType(std::string("outputOnly"));
field329.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field329);

field& field330 =  field();
field330.setName(std::string("r_index0_key"));
field330.setAccessType(std::string("inputOutput"));
field330.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field330);

field& field331 =  field();
field331.setName(std::string("r_index0_keyValue"));
field331.setAccessType(std::string("inputOutput"));
field331.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field331);

field& field332 =  field();
field332.setName(std::string("r_index0_changed"));
field332.setAccessType(std::string("outputOnly"));
field332.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field332);

field& field333 =  field();
field333.setName(std::string("r_index1_key"));
field333.setAccessType(std::string("inputOutput"));
field333.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field333);

field& field334 =  field();
field334.setName(std::string("r_index1_keyValue"));
field334.setAccessType(std::string("inputOutput"));
field334.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field334);

field& field335 =  field();
field335.setName(std::string("r_index1_changed"));
field335.setAccessType(std::string("outputOnly"));
field335.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field335);

field& field336 =  field();
field336.setName(std::string("r_index2_key"));
field336.setAccessType(std::string("inputOutput"));
field336.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field336);

field& field337 =  field();
field337.setName(std::string("r_index2_keyValue"));
field337.setAccessType(std::string("inputOutput"));
field337.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field337);

field& field338 =  field();
field338.setName(std::string("r_index2_changed"));
field338.setAccessType(std::string("outputOnly"));
field338.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field338);

field& field339 =  field();
field339.setName(std::string("r_index3_key"));
field339.setAccessType(std::string("inputOutput"));
field339.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field339);

field& field340 =  field();
field340.setName(std::string("r_index3_keyValue"));
field340.setAccessType(std::string("inputOutput"));
field340.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field340);

field& field341 =  field();
field341.setName(std::string("r_index3_changed"));
field341.setAccessType(std::string("outputOnly"));
field341.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field341);

field& field342 =  field();
field342.setName(std::string("r_index_distal_key"));
field342.setAccessType(std::string("inputOutput"));
field342.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field342);

field& field343 =  field();
field343.setName(std::string("r_index_distal_keyValue"));
field343.setAccessType(std::string("inputOutput"));
field343.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field343);

field& field344 =  field();
field344.setName(std::string("r_index_distal_changed"));
field344.setAccessType(std::string("outputOnly"));
field344.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field344);

field& field345 =  field();
field345.setName(std::string("r_index_metacarpal_key"));
field345.setAccessType(std::string("inputOutput"));
field345.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field345);

field& field346 =  field();
field346.setName(std::string("r_index_metacarpal_keyValue"));
field346.setAccessType(std::string("inputOutput"));
field346.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field346);

field& field347 =  field();
field347.setName(std::string("r_index_metacarpal_changed"));
field347.setAccessType(std::string("outputOnly"));
field347.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field347);

field& field348 =  field();
field348.setName(std::string("r_index_middle_key"));
field348.setAccessType(std::string("inputOutput"));
field348.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field348);

field& field349 =  field();
field349.setName(std::string("r_index_middle_keyValue"));
field349.setAccessType(std::string("inputOutput"));
field349.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field349);

field& field350 =  field();
field350.setName(std::string("r_index_middle_changed"));
field350.setAccessType(std::string("outputOnly"));
field350.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field350);

field& field351 =  field();
field351.setName(std::string("r_index_proximal_key"));
field351.setAccessType(std::string("inputOutput"));
field351.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field351);

field& field352 =  field();
field352.setName(std::string("r_index_proximal_keyValue"));
field352.setAccessType(std::string("inputOutput"));
field352.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field352);

field& field353 =  field();
field353.setName(std::string("r_index_proximal_changed"));
field353.setAccessType(std::string("outputOnly"));
field353.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field353);

field& field354 =  field();
field354.setName(std::string("r_knee_key"));
field354.setAccessType(std::string("inputOutput"));
field354.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field354);

field& field355 =  field();
field355.setName(std::string("r_knee_keyValue"));
field355.setAccessType(std::string("inputOutput"));
field355.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field355);

field& field356 =  field();
field356.setName(std::string("r_knee_changed"));
field356.setAccessType(std::string("outputOnly"));
field356.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field356);

field& field357 =  field();
field357.setName(std::string("r_metatarsal_key"));
field357.setAccessType(std::string("inputOutput"));
field357.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field357);

field& field358 =  field();
field358.setName(std::string("r_metatarsal_keyValue"));
field358.setAccessType(std::string("inputOutput"));
field358.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field358);

field& field359 =  field();
field359.setName(std::string("r_metatarsal_changed"));
field359.setAccessType(std::string("outputOnly"));
field359.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field359);

field& field360 =  field();
field360.setName(std::string("r_middistal_key"));
field360.setAccessType(std::string("inputOutput"));
field360.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field360);

field& field361 =  field();
field361.setName(std::string("r_middistal_keyValue"));
field361.setAccessType(std::string("inputOutput"));
field361.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field361);

field& field362 =  field();
field362.setName(std::string("r_middistal_changed"));
field362.setAccessType(std::string("outputOnly"));
field362.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field362);

field& field363 =  field();
field363.setName(std::string("r_middle0_key"));
field363.setAccessType(std::string("inputOutput"));
field363.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field363);

field& field364 =  field();
field364.setName(std::string("r_middle0_keyValue"));
field364.setAccessType(std::string("inputOutput"));
field364.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field364);

field& field365 =  field();
field365.setName(std::string("r_middle0_changed"));
field365.setAccessType(std::string("outputOnly"));
field365.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field365);

field& field366 =  field();
field366.setName(std::string("r_middle1_key"));
field366.setAccessType(std::string("inputOutput"));
field366.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field366);

field& field367 =  field();
field367.setName(std::string("r_middle1_keyValue"));
field367.setAccessType(std::string("inputOutput"));
field367.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field367);

field& field368 =  field();
field368.setName(std::string("r_middle1_changed"));
field368.setAccessType(std::string("outputOnly"));
field368.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field368);

field& field369 =  field();
field369.setName(std::string("r_middle2_key"));
field369.setAccessType(std::string("inputOutput"));
field369.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field369);

field& field370 =  field();
field370.setName(std::string("r_middle2_keyValue"));
field370.setAccessType(std::string("inputOutput"));
field370.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field370);

field& field371 =  field();
field371.setName(std::string("r_middle2_changed"));
field371.setAccessType(std::string("outputOnly"));
field371.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field371);

field& field372 =  field();
field372.setName(std::string("r_middle3_key"));
field372.setAccessType(std::string("inputOutput"));
field372.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field372);

field& field373 =  field();
field373.setName(std::string("r_middle3_keyValue"));
field373.setAccessType(std::string("inputOutput"));
field373.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field373);

field& field374 =  field();
field374.setName(std::string("r_middle3_changed"));
field374.setAccessType(std::string("outputOnly"));
field374.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field374);

field& field375 =  field();
field375.setName(std::string("r_middle_distal_key"));
field375.setAccessType(std::string("inputOutput"));
field375.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field375);

field& field376 =  field();
field376.setName(std::string("r_middle_distal_keyValue"));
field376.setAccessType(std::string("inputOutput"));
field376.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field376);

field& field377 =  field();
field377.setName(std::string("r_middle_distal_changed"));
field377.setAccessType(std::string("outputOnly"));
field377.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field377);

field& field378 =  field();
field378.setName(std::string("r_middle_metacarpal_key"));
field378.setAccessType(std::string("inputOutput"));
field378.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field378);

field& field379 =  field();
field379.setName(std::string("r_middle_metacarpal_keyValue"));
field379.setAccessType(std::string("inputOutput"));
field379.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field379);

field& field380 =  field();
field380.setName(std::string("r_middle_metacarpal_changed"));
field380.setAccessType(std::string("outputOnly"));
field380.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field380);

field& field381 =  field();
field381.setName(std::string("r_middle_middle_key"));
field381.setAccessType(std::string("inputOutput"));
field381.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field381);

field& field382 =  field();
field382.setName(std::string("r_middle_middle_keyValue"));
field382.setAccessType(std::string("inputOutput"));
field382.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field382);

field& field383 =  field();
field383.setName(std::string("r_middle_middle_changed"));
field383.setAccessType(std::string("outputOnly"));
field383.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field383);

field& field384 =  field();
field384.setName(std::string("r_middle_proximal_key"));
field384.setAccessType(std::string("inputOutput"));
field384.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field384);

field& field385 =  field();
field385.setName(std::string("r_middle_proximal_keyValue"));
field385.setAccessType(std::string("inputOutput"));
field385.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field385);

field& field386 =  field();
field386.setName(std::string("r_middle_proximal_changed"));
field386.setAccessType(std::string("outputOnly"));
field386.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field386);

field& field387 =  field();
field387.setName(std::string("r_midproximal_key"));
field387.setAccessType(std::string("inputOutput"));
field387.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field387);

field& field388 =  field();
field388.setName(std::string("r_midproximal_keyValue"));
field388.setAccessType(std::string("inputOutput"));
field388.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field388);

field& field389 =  field();
field389.setName(std::string("r_midproximal_changed"));
field389.setAccessType(std::string("outputOnly"));
field389.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field389);

field& field390 =  field();
field390.setName(std::string("r_midtarsal_key"));
field390.setAccessType(std::string("inputOutput"));
field390.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field390);

field& field391 =  field();
field391.setName(std::string("r_midtarsal_keyValue"));
field391.setAccessType(std::string("inputOutput"));
field391.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field391);

field& field392 =  field();
field392.setName(std::string("r_midtarsal_changed"));
field392.setAccessType(std::string("outputOnly"));
field392.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field392);

field& field393 =  field();
field393.setName(std::string("r_pinky0_key"));
field393.setAccessType(std::string("inputOutput"));
field393.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field393);

field& field394 =  field();
field394.setName(std::string("r_pinky0_keyValue"));
field394.setAccessType(std::string("inputOutput"));
field394.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field394);

field& field395 =  field();
field395.setName(std::string("r_pinky0_changed"));
field395.setAccessType(std::string("outputOnly"));
field395.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field395);

field& field396 =  field();
field396.setName(std::string("r_pinky1_key"));
field396.setAccessType(std::string("inputOutput"));
field396.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field396);

field& field397 =  field();
field397.setName(std::string("r_pinky1_keyValue"));
field397.setAccessType(std::string("inputOutput"));
field397.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field397);

field& field398 =  field();
field398.setName(std::string("r_pinky1_changed"));
field398.setAccessType(std::string("outputOnly"));
field398.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field398);

field& field399 =  field();
field399.setName(std::string("r_pinky2_key"));
field399.setAccessType(std::string("inputOutput"));
field399.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field399);

field& field400 =  field();
field400.setName(std::string("r_pinky2_keyValue"));
field400.setAccessType(std::string("inputOutput"));
field400.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field400);

field& field401 =  field();
field401.setName(std::string("r_pinky2_changed"));
field401.setAccessType(std::string("outputOnly"));
field401.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field401);

field& field402 =  field();
field402.setName(std::string("r_pinky3_key"));
field402.setAccessType(std::string("inputOutput"));
field402.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field402);

field& field403 =  field();
field403.setName(std::string("r_pinky3_keyValue"));
field403.setAccessType(std::string("inputOutput"));
field403.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field403);

field& field404 =  field();
field404.setName(std::string("r_pinky3_changed"));
field404.setAccessType(std::string("outputOnly"));
field404.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field404);

field& field405 =  field();
field405.setName(std::string("r_pinky_distal_key"));
field405.setAccessType(std::string("inputOutput"));
field405.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field405);

field& field406 =  field();
field406.setName(std::string("r_pinky_distal_keyValue"));
field406.setAccessType(std::string("inputOutput"));
field406.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field406);

field& field407 =  field();
field407.setName(std::string("r_pinky_distal_changed"));
field407.setAccessType(std::string("outputOnly"));
field407.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field407);

field& field408 =  field();
field408.setName(std::string("r_pinky_metacarpal_key"));
field408.setAccessType(std::string("inputOutput"));
field408.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field408);

field& field409 =  field();
field409.setName(std::string("r_pinky_metacarpal_keyValue"));
field409.setAccessType(std::string("inputOutput"));
field409.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field409);

field& field410 =  field();
field410.setName(std::string("r_pinky_metacarpal_changed"));
field410.setAccessType(std::string("outputOnly"));
field410.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field410);

field& field411 =  field();
field411.setName(std::string("r_pinky_middle_key"));
field411.setAccessType(std::string("inputOutput"));
field411.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field411);

field& field412 =  field();
field412.setName(std::string("r_pinky_middle_keyValue"));
field412.setAccessType(std::string("inputOutput"));
field412.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field412);

field& field413 =  field();
field413.setName(std::string("r_pinky_middle_changed"));
field413.setAccessType(std::string("outputOnly"));
field413.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field413);

field& field414 =  field();
field414.setName(std::string("r_pinky_proximal_key"));
field414.setAccessType(std::string("inputOutput"));
field414.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field414);

field& field415 =  field();
field415.setName(std::string("r_pinky_proximal_keyValue"));
field415.setAccessType(std::string("inputOutput"));
field415.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field415);

field& field416 =  field();
field416.setName(std::string("r_pinky_proximal_changed"));
field416.setAccessType(std::string("outputOnly"));
field416.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field416);

field& field417 =  field();
field417.setName(std::string("r_ring0_key"));
field417.setAccessType(std::string("inputOutput"));
field417.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field417);

field& field418 =  field();
field418.setName(std::string("r_ring0_keyValue"));
field418.setAccessType(std::string("inputOutput"));
field418.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field418);

field& field419 =  field();
field419.setName(std::string("r_ring0_changed"));
field419.setAccessType(std::string("outputOnly"));
field419.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field419);

field& field420 =  field();
field420.setName(std::string("r_ring1_key"));
field420.setAccessType(std::string("inputOutput"));
field420.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field420);

field& field421 =  field();
field421.setName(std::string("r_ring1_keyValue"));
field421.setAccessType(std::string("inputOutput"));
field421.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field421);

field& field422 =  field();
field422.setName(std::string("r_ring1_changed"));
field422.setAccessType(std::string("outputOnly"));
field422.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field422);

field& field423 =  field();
field423.setName(std::string("r_ring2_key"));
field423.setAccessType(std::string("inputOutput"));
field423.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field423);

field& field424 =  field();
field424.setName(std::string("r_ring2_keyValue"));
field424.setAccessType(std::string("inputOutput"));
field424.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field424);

field& field425 =  field();
field425.setName(std::string("r_ring2_changed"));
field425.setAccessType(std::string("outputOnly"));
field425.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field425);

field& field426 =  field();
field426.setName(std::string("r_ring3_key"));
field426.setAccessType(std::string("inputOutput"));
field426.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field426);

field& field427 =  field();
field427.setName(std::string("r_ring3_keyValue"));
field427.setAccessType(std::string("inputOutput"));
field427.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field427);

field& field428 =  field();
field428.setName(std::string("r_ring3_changed"));
field428.setAccessType(std::string("outputOnly"));
field428.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field428);

field& field429 =  field();
field429.setName(std::string("r_ring_distal_key"));
field429.setAccessType(std::string("inputOutput"));
field429.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field429);

field& field430 =  field();
field430.setName(std::string("r_ring_distal_keyValue"));
field430.setAccessType(std::string("inputOutput"));
field430.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field430);

field& field431 =  field();
field431.setName(std::string("r_ring_distal_changed"));
field431.setAccessType(std::string("outputOnly"));
field431.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field431);

field& field432 =  field();
field432.setName(std::string("r_ring_metacarpal_key"));
field432.setAccessType(std::string("inputOutput"));
field432.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field432);

field& field433 =  field();
field433.setName(std::string("r_ring_metacarpal_keyValue"));
field433.setAccessType(std::string("inputOutput"));
field433.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field433);

field& field434 =  field();
field434.setName(std::string("r_ring_metacarpal_changed"));
field434.setAccessType(std::string("outputOnly"));
field434.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field434);

field& field435 =  field();
field435.setName(std::string("r_ring_middle_key"));
field435.setAccessType(std::string("inputOutput"));
field435.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field435);

field& field436 =  field();
field436.setName(std::string("r_ring_middle_keyValue"));
field436.setAccessType(std::string("inputOutput"));
field436.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field436);

field& field437 =  field();
field437.setName(std::string("r_ring_middle_changed"));
field437.setAccessType(std::string("outputOnly"));
field437.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field437);

field& field438 =  field();
field438.setName(std::string("r_ring_proximal_key"));
field438.setAccessType(std::string("inputOutput"));
field438.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field438);

field& field439 =  field();
field439.setName(std::string("r_ring_proximal_keyValue"));
field439.setAccessType(std::string("inputOutput"));
field439.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field439);

field& field440 =  field();
field440.setName(std::string("r_ring_proximal_changed"));
field440.setAccessType(std::string("outputOnly"));
field440.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field440);

field& field441 =  field();
field441.setName(std::string("r_scapula_key"));
field441.setAccessType(std::string("inputOutput"));
field441.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field441);

field& field442 =  field();
field442.setName(std::string("r_scapula_keyValue"));
field442.setAccessType(std::string("inputOutput"));
field442.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field442);

field& field443 =  field();
field443.setName(std::string("r_scapula_changed"));
field443.setAccessType(std::string("outputOnly"));
field443.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field443);

field& field444 =  field();
field444.setName(std::string("r_shoulder_key"));
field444.setAccessType(std::string("inputOutput"));
field444.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field444);

field& field445 =  field();
field445.setName(std::string("r_shoulder_keyValue"));
field445.setAccessType(std::string("inputOutput"));
field445.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field445);

field& field446 =  field();
field446.setName(std::string("r_shoulder_changed"));
field446.setAccessType(std::string("outputOnly"));
field446.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field446);

field& field447 =  field();
field447.setName(std::string("r_sternoclavicular_key"));
field447.setAccessType(std::string("inputOutput"));
field447.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field447);

field& field448 =  field();
field448.setName(std::string("r_sternoclavicular_keyValue"));
field448.setAccessType(std::string("inputOutput"));
field448.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field448);

field& field449 =  field();
field449.setName(std::string("r_sternoclavicular_changed"));
field449.setAccessType(std::string("outputOnly"));
field449.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field449);

field& field450 =  field();
field450.setName(std::string("r_subtalar_key"));
field450.setAccessType(std::string("inputOutput"));
field450.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field450);

field& field451 =  field();
field451.setName(std::string("r_subtalar_keyValue"));
field451.setAccessType(std::string("inputOutput"));
field451.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field451);

field& field452 =  field();
field452.setName(std::string("r_subtalar_changed"));
field452.setAccessType(std::string("outputOnly"));
field452.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field452);

field& field453 =  field();
field453.setName(std::string("r_thigh_key"));
field453.setAccessType(std::string("inputOutput"));
field453.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field453);

field& field454 =  field();
field454.setName(std::string("r_thigh_keyValue"));
field454.setAccessType(std::string("inputOutput"));
field454.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field454);

field& field455 =  field();
field455.setName(std::string("r_thigh_changed"));
field455.setAccessType(std::string("outputOnly"));
field455.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field455);

field& field456 =  field();
field456.setName(std::string("r_thumb1_key"));
field456.setAccessType(std::string("inputOutput"));
field456.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field456);

field& field457 =  field();
field457.setName(std::string("r_thumb1_keyValue"));
field457.setAccessType(std::string("inputOutput"));
field457.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field457);

field& field458 =  field();
field458.setName(std::string("r_thumb1_changed"));
field458.setAccessType(std::string("outputOnly"));
field458.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field458);

field& field459 =  field();
field459.setName(std::string("r_thumb2_key"));
field459.setAccessType(std::string("inputOutput"));
field459.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field459);

field& field460 =  field();
field460.setName(std::string("r_thumb2_keyValue"));
field460.setAccessType(std::string("inputOutput"));
field460.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field460);

field& field461 =  field();
field461.setName(std::string("r_thumb2_changed"));
field461.setAccessType(std::string("outputOnly"));
field461.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field461);

field& field462 =  field();
field462.setName(std::string("r_thumb3_key"));
field462.setAccessType(std::string("inputOutput"));
field462.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field462);

field& field463 =  field();
field463.setName(std::string("r_thumb3_keyValue"));
field463.setAccessType(std::string("inputOutput"));
field463.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field463);

field& field464 =  field();
field464.setName(std::string("r_thumb3_changed"));
field464.setAccessType(std::string("outputOnly"));
field464.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field464);

field& field465 =  field();
field465.setName(std::string("r_thumb_distal_key"));
field465.setAccessType(std::string("inputOutput"));
field465.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field465);

field& field466 =  field();
field466.setName(std::string("r_thumb_distal_keyValue"));
field466.setAccessType(std::string("inputOutput"));
field466.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field466);

field& field467 =  field();
field467.setName(std::string("r_thumb_distal_changed"));
field467.setAccessType(std::string("outputOnly"));
field467.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field467);

field& field468 =  field();
field468.setName(std::string("r_thumb_metacarpal_key"));
field468.setAccessType(std::string("inputOutput"));
field468.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field468);

field& field469 =  field();
field469.setName(std::string("r_thumb_metacarpal_keyValue"));
field469.setAccessType(std::string("inputOutput"));
field469.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field469);

field& field470 =  field();
field470.setName(std::string("r_thumb_metacarpal_changed"));
field470.setAccessType(std::string("outputOnly"));
field470.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field470);

field& field471 =  field();
field471.setName(std::string("r_thumb_proximal_key"));
field471.setAccessType(std::string("inputOutput"));
field471.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field471);

field& field472 =  field();
field472.setName(std::string("r_thumb_proximal_keyValue"));
field472.setAccessType(std::string("inputOutput"));
field472.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field472);

field& field473 =  field();
field473.setName(std::string("r_thumb_proximal_changed"));
field473.setAccessType(std::string("outputOnly"));
field473.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field473);

field& field474 =  field();
field474.setName(std::string("r_upperarm_key"));
field474.setAccessType(std::string("inputOutput"));
field474.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field474);

field& field475 =  field();
field475.setName(std::string("r_upperarm_keyValue"));
field475.setAccessType(std::string("inputOutput"));
field475.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field475);

field& field476 =  field();
field476.setName(std::string("r_upperarm_changed"));
field476.setAccessType(std::string("outputOnly"));
field476.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field476);

field& field477 =  field();
field477.setName(std::string("r_wrist_key"));
field477.setAccessType(std::string("inputOutput"));
field477.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field477);

field& field478 =  field();
field478.setName(std::string("r_wrist_keyValue"));
field478.setAccessType(std::string("inputOutput"));
field478.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field478);

field& field479 =  field();
field479.setName(std::string("r_wrist_changed"));
field479.setAccessType(std::string("outputOnly"));
field479.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field479);

field& field480 =  field();
field480.setName(std::string("sacroiliac_key"));
field480.setAccessType(std::string("inputOutput"));
field480.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field480);

field& field481 =  field();
field481.setName(std::string("sacroiliac_keyValue"));
field481.setAccessType(std::string("inputOutput"));
field481.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field481);

field& field482 =  field();
field482.setName(std::string("sacroiliac_changed"));
field482.setAccessType(std::string("outputOnly"));
field482.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field482);

field& field483 =  field();
field483.setName(std::string("sacrum_key"));
field483.setAccessType(std::string("inputOutput"));
field483.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field483);

field& field484 =  field();
field484.setName(std::string("sacrum_keyValue"));
field484.setAccessType(std::string("inputOutput"));
field484.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field484);

field& field485 =  field();
field485.setName(std::string("sacrum_changed"));
field485.setAccessType(std::string("outputOnly"));
field485.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field485);

field& field486 =  field();
field486.setName(std::string("skull_key"));
field486.setAccessType(std::string("inputOutput"));
field486.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field486);

field& field487 =  field();
field487.setName(std::string("skull_keyValue"));
field487.setAccessType(std::string("inputOutput"));
field487.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field487);

field& field488 =  field();
field488.setName(std::string("skull_changed"));
field488.setAccessType(std::string("outputOnly"));
field488.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field488);

field& field489 =  field();
field489.setName(std::string("skullbase_key"));
field489.setAccessType(std::string("inputOutput"));
field489.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field489);

field& field490 =  field();
field490.setName(std::string("skullbase_keyValue"));
field490.setAccessType(std::string("inputOutput"));
field490.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field490);

field& field491 =  field();
field491.setName(std::string("skullbase_changed"));
field491.setAccessType(std::string("outputOnly"));
field491.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field491);

field& field492 =  field();
field492.setName(std::string("t10_key"));
field492.setAccessType(std::string("inputOutput"));
field492.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field492);

field& field493 =  field();
field493.setName(std::string("t10_keyValue"));
field493.setAccessType(std::string("inputOutput"));
field493.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field493);

field& field494 =  field();
field494.setName(std::string("t10_changed"));
field494.setAccessType(std::string("outputOnly"));
field494.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field494);

field& field495 =  field();
field495.setName(std::string("t11_key"));
field495.setAccessType(std::string("inputOutput"));
field495.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field495);

field& field496 =  field();
field496.setName(std::string("t11_keyValue"));
field496.setAccessType(std::string("inputOutput"));
field496.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field496);

field& field497 =  field();
field497.setName(std::string("t11_changed"));
field497.setAccessType(std::string("outputOnly"));
field497.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field497);

field& field498 =  field();
field498.setName(std::string("t12_key"));
field498.setAccessType(std::string("inputOutput"));
field498.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field498);

field& field499 =  field();
field499.setName(std::string("t12_keyValue"));
field499.setAccessType(std::string("inputOutput"));
field499.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field499);

field& field500 =  field();
field500.setName(std::string("t12_changed"));
field500.setAccessType(std::string("outputOnly"));
field500.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field500);

field& field501 =  field();
field501.setName(std::string("t1_key"));
field501.setAccessType(std::string("inputOutput"));
field501.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field501);

field& field502 =  field();
field502.setName(std::string("t1_keyValue"));
field502.setAccessType(std::string("inputOutput"));
field502.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field502);

field& field503 =  field();
field503.setName(std::string("t1_changed"));
field503.setAccessType(std::string("outputOnly"));
field503.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field503);

field& field504 =  field();
field504.setName(std::string("t2_key"));
field504.setAccessType(std::string("inputOutput"));
field504.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field504);

field& field505 =  field();
field505.setName(std::string("t2_keyValue"));
field505.setAccessType(std::string("inputOutput"));
field505.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field505);

field& field506 =  field();
field506.setName(std::string("t2_changed"));
field506.setAccessType(std::string("outputOnly"));
field506.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field506);

field& field507 =  field();
field507.setName(std::string("t3_key"));
field507.setAccessType(std::string("inputOutput"));
field507.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field507);

field& field508 =  field();
field508.setName(std::string("t3_keyValue"));
field508.setAccessType(std::string("inputOutput"));
field508.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field508);

field& field509 =  field();
field509.setName(std::string("t3_changed"));
field509.setAccessType(std::string("outputOnly"));
field509.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field509);

field& field510 =  field();
field510.setName(std::string("t4_key"));
field510.setAccessType(std::string("inputOutput"));
field510.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field510);

field& field511 =  field();
field511.setName(std::string("t4_keyValue"));
field511.setAccessType(std::string("inputOutput"));
field511.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field511);

field& field512 =  field();
field512.setName(std::string("t4_changed"));
field512.setAccessType(std::string("outputOnly"));
field512.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field512);

field& field513 =  field();
field513.setName(std::string("t5_key"));
field513.setAccessType(std::string("inputOutput"));
field513.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field513);

field& field514 =  field();
field514.setName(std::string("t5_keyValue"));
field514.setAccessType(std::string("inputOutput"));
field514.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field514);

field& field515 =  field();
field515.setName(std::string("t5_changed"));
field515.setAccessType(std::string("outputOnly"));
field515.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field515);

field& field516 =  field();
field516.setName(std::string("t6_key"));
field516.setAccessType(std::string("inputOutput"));
field516.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field516);

field& field517 =  field();
field517.setName(std::string("t6_keyValue"));
field517.setAccessType(std::string("inputOutput"));
field517.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field517);

field& field518 =  field();
field518.setName(std::string("t6_changed"));
field518.setAccessType(std::string("outputOnly"));
field518.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field518);

field& field519 =  field();
field519.setName(std::string("t7_key"));
field519.setAccessType(std::string("inputOutput"));
field519.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field519);

field& field520 =  field();
field520.setName(std::string("t7_keyValue"));
field520.setAccessType(std::string("inputOutput"));
field520.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field520);

field& field521 =  field();
field521.setName(std::string("t7_changed"));
field521.setAccessType(std::string("outputOnly"));
field521.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field521);

field& field522 =  field();
field522.setName(std::string("t8_key"));
field522.setAccessType(std::string("inputOutput"));
field522.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field522);

field& field523 =  field();
field523.setName(std::string("t8_keyValue"));
field523.setAccessType(std::string("inputOutput"));
field523.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field523);

field& field524 =  field();
field524.setName(std::string("t8_changed"));
field524.setAccessType(std::string("outputOnly"));
field524.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field524);

field& field525 =  field();
field525.setName(std::string("t9_key"));
field525.setAccessType(std::string("inputOutput"));
field525.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field525);

field& field526 =  field();
field526.setName(std::string("t9_keyValue"));
field526.setAccessType(std::string("inputOutput"));
field526.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field526);

field& field527 =  field();
field527.setName(std::string("t9_changed"));
field527.setAccessType(std::string("outputOnly"));
field527.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field527);

field& field528 =  field();
field528.setName(std::string("temporomandibular_key"));
field528.setAccessType(std::string("inputOutput"));
field528.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field528);

field& field529 =  field();
field529.setName(std::string("temporomandibular_keyValue"));
field529.setAccessType(std::string("inputOutput"));
field529.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field529);

field& field530 =  field();
field530.setName(std::string("temporomandibular_changed"));
field530.setAccessType(std::string("outputOnly"));
field530.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field530);

field& field531 =  field();
field531.setName(std::string("vc1_key"));
field531.setAccessType(std::string("inputOutput"));
field531.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field531);

field& field532 =  field();
field532.setName(std::string("vc1_keyValue"));
field532.setAccessType(std::string("inputOutput"));
field532.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field532);

field& field533 =  field();
field533.setName(std::string("vc1_changed"));
field533.setAccessType(std::string("outputOnly"));
field533.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field533);

field& field534 =  field();
field534.setName(std::string("vc2_key"));
field534.setAccessType(std::string("inputOutput"));
field534.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field534);

field& field535 =  field();
field535.setName(std::string("vc2_keyValue"));
field535.setAccessType(std::string("inputOutput"));
field535.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field535);

field& field536 =  field();
field536.setName(std::string("vc2_changed"));
field536.setAccessType(std::string("outputOnly"));
field536.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field536);

field& field537 =  field();
field537.setName(std::string("vc3_key"));
field537.setAccessType(std::string("inputOutput"));
field537.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field537);

field& field538 =  field();
field538.setName(std::string("vc3_keyValue"));
field538.setAccessType(std::string("inputOutput"));
field538.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field538);

field& field539 =  field();
field539.setName(std::string("vc3_changed"));
field539.setAccessType(std::string("outputOnly"));
field539.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field539);

field& field540 =  field();
field540.setName(std::string("vc4_key"));
field540.setAccessType(std::string("inputOutput"));
field540.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field540);

field& field541 =  field();
field541.setName(std::string("vc4_keyValue"));
field541.setAccessType(std::string("inputOutput"));
field541.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field541);

field& field542 =  field();
field542.setName(std::string("vc4_changed"));
field542.setAccessType(std::string("outputOnly"));
field542.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field542);

field& field543 =  field();
field543.setName(std::string("vc5_key"));
field543.setAccessType(std::string("inputOutput"));
field543.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field543);

field& field544 =  field();
field544.setName(std::string("vc5_keyValue"));
field544.setAccessType(std::string("inputOutput"));
field544.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field544);

field& field545 =  field();
field545.setName(std::string("vc5_changed"));
field545.setAccessType(std::string("outputOnly"));
field545.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field545);

field& field546 =  field();
field546.setName(std::string("vc6_key"));
field546.setAccessType(std::string("inputOutput"));
field546.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field546);

field& field547 =  field();
field547.setName(std::string("vc6_keyValue"));
field547.setAccessType(std::string("inputOutput"));
field547.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field547);

field& field548 =  field();
field548.setName(std::string("vc6_changed"));
field548.setAccessType(std::string("outputOnly"));
field548.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field548);

field& field549 =  field();
field549.setName(std::string("vc7_key"));
field549.setAccessType(std::string("inputOutput"));
field549.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field549);

field& field550 =  field();
field550.setName(std::string("vc7_keyValue"));
field550.setAccessType(std::string("inputOutput"));
field550.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field550);

field& field551 =  field();
field551.setName(std::string("vc7_changed"));
field551.setAccessType(std::string("outputOnly"));
field551.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field551);

field& field552 =  field();
field552.setName(std::string("vl1_key"));
field552.setAccessType(std::string("inputOutput"));
field552.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field552);

field& field553 =  field();
field553.setName(std::string("vl1_keyValue"));
field553.setAccessType(std::string("inputOutput"));
field553.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field553);

field& field554 =  field();
field554.setName(std::string("vl1_changed"));
field554.setAccessType(std::string("outputOnly"));
field554.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field554);

field& field555 =  field();
field555.setName(std::string("vl2_key"));
field555.setAccessType(std::string("inputOutput"));
field555.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field555);

field& field556 =  field();
field556.setName(std::string("vl2_keyValue"));
field556.setAccessType(std::string("inputOutput"));
field556.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field556);

field& field557 =  field();
field557.setName(std::string("vl2_changed"));
field557.setAccessType(std::string("outputOnly"));
field557.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field557);

field& field558 =  field();
field558.setName(std::string("vl3_key"));
field558.setAccessType(std::string("inputOutput"));
field558.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field558);

field& field559 =  field();
field559.setName(std::string("vl3_keyValue"));
field559.setAccessType(std::string("inputOutput"));
field559.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field559);

field& field560 =  field();
field560.setName(std::string("vl3_changed"));
field560.setAccessType(std::string("outputOnly"));
field560.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field560);

field& field561 =  field();
field561.setName(std::string("vl4_key"));
field561.setAccessType(std::string("inputOutput"));
field561.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field561);

field& field562 =  field();
field562.setName(std::string("vl4_keyValue"));
field562.setAccessType(std::string("inputOutput"));
field562.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field562);

field& field563 =  field();
field563.setName(std::string("vl4_changed"));
field563.setAccessType(std::string("outputOnly"));
field563.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field563);

field& field564 =  field();
field564.setName(std::string("vl5_key"));
field564.setAccessType(std::string("inputOutput"));
field564.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field564);

field& field565 =  field();
field565.setName(std::string("vl5_keyValue"));
field565.setAccessType(std::string("inputOutput"));
field565.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field565);

field& field566 =  field();
field566.setName(std::string("vl5_changed"));
field566.setAccessType(std::string("outputOnly"));
field566.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field566);

field& field567 =  field();
field567.setName(std::string("vt10_key"));
field567.setAccessType(std::string("inputOutput"));
field567.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field567);

field& field568 =  field();
field568.setName(std::string("vt10_keyValue"));
field568.setAccessType(std::string("inputOutput"));
field568.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field568);

field& field569 =  field();
field569.setName(std::string("vt10_changed"));
field569.setAccessType(std::string("outputOnly"));
field569.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field569);

field& field570 =  field();
field570.setName(std::string("vt11_key"));
field570.setAccessType(std::string("inputOutput"));
field570.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field570);

field& field571 =  field();
field571.setName(std::string("vt11_keyValue"));
field571.setAccessType(std::string("inputOutput"));
field571.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field571);

field& field572 =  field();
field572.setName(std::string("vt11_changed"));
field572.setAccessType(std::string("outputOnly"));
field572.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field572);

field& field573 =  field();
field573.setName(std::string("vt12_key"));
field573.setAccessType(std::string("inputOutput"));
field573.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field573);

field& field574 =  field();
field574.setName(std::string("vt12_keyValue"));
field574.setAccessType(std::string("inputOutput"));
field574.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field574);

field& field575 =  field();
field575.setName(std::string("vt12_changed"));
field575.setAccessType(std::string("outputOnly"));
field575.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field575);

field& field576 =  field();
field576.setName(std::string("vt1_key"));
field576.setAccessType(std::string("inputOutput"));
field576.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field576);

field& field577 =  field();
field577.setName(std::string("vt1_keyValue"));
field577.setAccessType(std::string("inputOutput"));
field577.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field577);

field& field578 =  field();
field578.setName(std::string("vt1_changed"));
field578.setAccessType(std::string("outputOnly"));
field578.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field578);

field& field579 =  field();
field579.setName(std::string("vt2_key"));
field579.setAccessType(std::string("inputOutput"));
field579.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field579);

field& field580 =  field();
field580.setName(std::string("vt2_keyValue"));
field580.setAccessType(std::string("inputOutput"));
field580.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field580);

field& field581 =  field();
field581.setName(std::string("vt2_changed"));
field581.setAccessType(std::string("outputOnly"));
field581.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field581);

field& field582 =  field();
field582.setName(std::string("vt3_key"));
field582.setAccessType(std::string("inputOutput"));
field582.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field582);

field& field583 =  field();
field583.setName(std::string("vt3_keyValue"));
field583.setAccessType(std::string("inputOutput"));
field583.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field583);

field& field584 =  field();
field584.setName(std::string("vt3_changed"));
field584.setAccessType(std::string("outputOnly"));
field584.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field584);

field& field585 =  field();
field585.setName(std::string("vt4_key"));
field585.setAccessType(std::string("inputOutput"));
field585.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field585);

field& field586 =  field();
field586.setName(std::string("vt4_keyValue"));
field586.setAccessType(std::string("inputOutput"));
field586.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field586);

field& field587 =  field();
field587.setName(std::string("vt4_changed"));
field587.setAccessType(std::string("outputOnly"));
field587.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field587);

field& field588 =  field();
field588.setName(std::string("vt5_key"));
field588.setAccessType(std::string("inputOutput"));
field588.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field588);

field& field589 =  field();
field589.setName(std::string("vt5_keyValue"));
field589.setAccessType(std::string("inputOutput"));
field589.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field589);

field& field590 =  field();
field590.setName(std::string("vt5_changed"));
field590.setAccessType(std::string("outputOnly"));
field590.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field590);

field& field591 =  field();
field591.setName(std::string("vt6_key"));
field591.setAccessType(std::string("inputOutput"));
field591.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field591);

field& field592 =  field();
field592.setName(std::string("vt6_keyValue"));
field592.setAccessType(std::string("inputOutput"));
field592.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field592);

field& field593 =  field();
field593.setName(std::string("vt6_changed"));
field593.setAccessType(std::string("outputOnly"));
field593.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field593);

field& field594 =  field();
field594.setName(std::string("vt7_key"));
field594.setAccessType(std::string("inputOutput"));
field594.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field594);

field& field595 =  field();
field595.setName(std::string("vt7_keyValue"));
field595.setAccessType(std::string("inputOutput"));
field595.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field595);

field& field596 =  field();
field596.setName(std::string("vt7_changed"));
field596.setAccessType(std::string("outputOnly"));
field596.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field596);

field& field597 =  field();
field597.setName(std::string("vt8_key"));
field597.setAccessType(std::string("inputOutput"));
field597.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field597);

field& field598 =  field();
field598.setName(std::string("vt8_keyValue"));
field598.setAccessType(std::string("inputOutput"));
field598.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field598);

field& field599 =  field();
field599.setName(std::string("vt8_changed"));
field599.setAccessType(std::string("outputOnly"));
field599.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field599);

field& field600 =  field();
field600.setName(std::string("vt9_key"));
field600.setAccessType(std::string("inputOutput"));
field600.setType(std::string("MFFloat"));
//no default value
ProtoInterface21.addChild(&field600);

field& field601 =  field();
field601.setName(std::string("vt9_keyValue"));
field601.setAccessType(std::string("inputOutput"));
field601.setType(std::string("MFRotation"));
//no default value
ProtoInterface21.addChild(&field601);

field& field602 =  field();
field602.setName(std::string("vt9_changed"));
field602.setAccessType(std::string("outputOnly"));
field602.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field602);

ProtoDeclare20.addChild(&ProtoInterface21);

ProtoBody& ProtoBody603 =  ProtoBody();
//design alternative: move TimeSensor out of the prototype, instead expose set_fraction globally to all interpolators
TimeSensor& TimeSensor604 =  TimeSensor();
TimeSensor604.setDEF(std::string("BehaviorClock"));
IS& IS605 =  IS();
Connect& connect606 =  Connect();
connect606.setNodeField(std::string("enabled"));
connect606.setProtoField(std::string("enabled"));
IS605.addChild(&connect606);

Connect& connect607 =  Connect();
connect607.setNodeField(std::string("cycleInterval"));
connect607.setProtoField(std::string("cycleInterval"));
IS605.addChild(&connect607);

Connect& connect608 =  Connect();
connect608.setNodeField(std::string("loop"));
connect608.setProtoField(std::string("loop"));
IS605.addChild(&connect608);

Connect& connect609 =  Connect();
connect609.setNodeField(std::string("startTime"));
connect609.setProtoField(std::string("startTime"));
IS605.addChild(&connect609);

Connect& connect610 =  Connect();
connect610.setNodeField(std::string("stopTime"));
connect610.setProtoField(std::string("stopTime"));
IS605.addChild(&connect610);

Connect& connect611 =  Connect();
connect611.setNodeField(std::string("pauseTime"));
connect611.setProtoField(std::string("pauseTime"));
IS605.addChild(&connect611);

Connect& connect612 =  Connect();
connect612.setNodeField(std::string("resumeTime"));
connect612.setProtoField(std::string("resumeTime"));
IS605.addChild(&connect612);

Connect& connect613 =  Connect();
connect613.setNodeField(std::string("cycleTime"));
connect613.setProtoField(std::string("cycleTime"));
IS605.addChild(&connect613);

Connect& connect614 =  Connect();
connect614.setNodeField(std::string("isActive"));
connect614.setProtoField(std::string("isActive"));
IS605.addChild(&connect614);

Connect& connect615 =  Connect();
connect615.setNodeField(std::string("isPaused"));
connect615.setProtoField(std::string("isPaused"));
IS605.addChild(&connect615);

Connect& connect616 =  Connect();
connect616.setNodeField(std::string("elapsedTime"));
connect616.setProtoField(std::string("elapsedTime"));
IS605.addChild(&connect616);

Connect& connect617 =  Connect();
connect617.setNodeField(std::string("time"));
connect617.setProtoField(std::string("time"));
IS605.addChild(&connect617);

Connect& connect618 =  Connect();
connect618.setNodeField(std::string("fraction_changed"));
connect618.setProtoField(std::string("fraction_changed"));
IS605.addChild(&connect618);

TimeSensor604.addChild(&IS605);

ProtoBody603.addChild(&TimeSensor604);

//note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless
Switch& Switch619 =  Switch();
Switch619.setDEF(std::string("SupportedLoaHolder1"));
Switch619.setWhichChoice(-1);
IS& IS620 =  IS();
Connect& connect621 =  Connect();
connect621.setNodeField(std::string("whichChoice"));
connect621.setProtoField(std::string("supportedLOA"));
IS620.addChild(&connect621);

Switch619.addChild(&IS620);

ProtoBody603.addChild(&Switch619);

PositionInterpolator& PositionInterpolator622 =  PositionInterpolator();
PositionInterpolator622.setDEF(std::string("HumanoidRootPI"));
IS& IS623 =  IS();
Connect& connect624 =  Connect();
connect624.setNodeField(std::string("key"));
connect624.setProtoField(std::string("HumanoidRoot_translation_key"));
IS623.addChild(&connect624);

Connect& connect625 =  Connect();
connect625.setNodeField(std::string("keyValue"));
connect625.setProtoField(std::string("HumanoidRoot_translation_keyValue"));
IS623.addChild(&connect625);

Connect& connect626 =  Connect();
connect626.setNodeField(std::string("value_changed"));
connect626.setProtoField(std::string("HumanoidRoot_translation_changed"));
IS623.addChild(&connect626);

PositionInterpolator622.addChild(&IS623);

ProtoBody603.addChild(&PositionInterpolator622);

ROUTE& ROUTE627 =  ROUTE();
ROUTE627.setFromField(std::string("fraction_changed"));
ROUTE627.setFromNode(std::string("BehaviorClock"));
ROUTE627.setToField(std::string("set_fraction"));
ROUTE627.setToNode(std::string("HumanoidRootPI"));
ProtoBody603.addChild(&ROUTE627);

OrientationInterpolator& OrientationInterpolator628 =  OrientationInterpolator();
OrientationInterpolator628.setDEF(std::string("HumanoidRootOI"));
IS& IS629 =  IS();
Connect& connect630 =  Connect();
connect630.setNodeField(std::string("key"));
connect630.setProtoField(std::string("HumanoidRoot_rotation_key"));
IS629.addChild(&connect630);

Connect& connect631 =  Connect();
connect631.setNodeField(std::string("keyValue"));
connect631.setProtoField(std::string("HumanoidRoot_rotation_keyValue"));
IS629.addChild(&connect631);

Connect& connect632 =  Connect();
connect632.setNodeField(std::string("value_changed"));
connect632.setProtoField(std::string("HumanoidRoot_rotation_changed"));
IS629.addChild(&connect632);

OrientationInterpolator628.addChild(&IS629);

ProtoBody603.addChild(&OrientationInterpolator628);

ROUTE& ROUTE633 =  ROUTE();
ROUTE633.setFromField(std::string("fraction_changed"));
ROUTE633.setFromNode(std::string("BehaviorClock"));
ROUTE633.setToField(std::string("set_fraction"));
ROUTE633.setToNode(std::string("HumanoidRootOI"));
ProtoBody603.addChild(&ROUTE633);

OrientationInterpolator& OrientationInterpolator634 =  OrientationInterpolator();
OrientationInterpolator634.setDEF(std::string("c1_OI"));
IS& IS635 =  IS();
Connect& connect636 =  Connect();
connect636.setNodeField(std::string("key"));
connect636.setProtoField(std::string("c1_key"));
IS635.addChild(&connect636);

Connect& connect637 =  Connect();
connect637.setNodeField(std::string("keyValue"));
connect637.setProtoField(std::string("c1_keyValue"));
IS635.addChild(&connect637);

Connect& connect638 =  Connect();
connect638.setNodeField(std::string("value_changed"));
connect638.setProtoField(std::string("c1_changed"));
IS635.addChild(&connect638);

OrientationInterpolator634.addChild(&IS635);

ProtoBody603.addChild(&OrientationInterpolator634);

ROUTE& ROUTE639 =  ROUTE();
ROUTE639.setFromField(std::string("fraction_changed"));
ROUTE639.setFromNode(std::string("BehaviorClock"));
ROUTE639.setToField(std::string("set_fraction"));
ROUTE639.setToNode(std::string("c1_OI"));
ProtoBody603.addChild(&ROUTE639);

OrientationInterpolator& OrientationInterpolator640 =  OrientationInterpolator();
OrientationInterpolator640.setDEF(std::string("c2_OI"));
IS& IS641 =  IS();
Connect& connect642 =  Connect();
connect642.setNodeField(std::string("key"));
connect642.setProtoField(std::string("c2_key"));
IS641.addChild(&connect642);

Connect& connect643 =  Connect();
connect643.setNodeField(std::string("keyValue"));
connect643.setProtoField(std::string("c2_keyValue"));
IS641.addChild(&connect643);

Connect& connect644 =  Connect();
connect644.setNodeField(std::string("value_changed"));
connect644.setProtoField(std::string("c2_changed"));
IS641.addChild(&connect644);

OrientationInterpolator640.addChild(&IS641);

ProtoBody603.addChild(&OrientationInterpolator640);

ROUTE& ROUTE645 =  ROUTE();
ROUTE645.setFromField(std::string("fraction_changed"));
ROUTE645.setFromNode(std::string("BehaviorClock"));
ROUTE645.setToField(std::string("set_fraction"));
ROUTE645.setToNode(std::string("c2_OI"));
ProtoBody603.addChild(&ROUTE645);

OrientationInterpolator& OrientationInterpolator646 =  OrientationInterpolator();
OrientationInterpolator646.setDEF(std::string("c3_OI"));
IS& IS647 =  IS();
Connect& connect648 =  Connect();
connect648.setNodeField(std::string("key"));
connect648.setProtoField(std::string("c3_key"));
IS647.addChild(&connect648);

Connect& connect649 =  Connect();
connect649.setNodeField(std::string("keyValue"));
connect649.setProtoField(std::string("c3_keyValue"));
IS647.addChild(&connect649);

Connect& connect650 =  Connect();
connect650.setNodeField(std::string("value_changed"));
connect650.setProtoField(std::string("c3_changed"));
IS647.addChild(&connect650);

OrientationInterpolator646.addChild(&IS647);

ProtoBody603.addChild(&OrientationInterpolator646);

ROUTE& ROUTE651 =  ROUTE();
ROUTE651.setFromField(std::string("fraction_changed"));
ROUTE651.setFromNode(std::string("BehaviorClock"));
ROUTE651.setToField(std::string("set_fraction"));
ROUTE651.setToNode(std::string("c3_OI"));
ProtoBody603.addChild(&ROUTE651);

OrientationInterpolator& OrientationInterpolator652 =  OrientationInterpolator();
OrientationInterpolator652.setDEF(std::string("c4_OI"));
IS& IS653 =  IS();
Connect& connect654 =  Connect();
connect654.setNodeField(std::string("key"));
connect654.setProtoField(std::string("c4_key"));
IS653.addChild(&connect654);

Connect& connect655 =  Connect();
connect655.setNodeField(std::string("keyValue"));
connect655.setProtoField(std::string("c4_keyValue"));
IS653.addChild(&connect655);

Connect& connect656 =  Connect();
connect656.setNodeField(std::string("value_changed"));
connect656.setProtoField(std::string("c4_changed"));
IS653.addChild(&connect656);

OrientationInterpolator652.addChild(&IS653);

ProtoBody603.addChild(&OrientationInterpolator652);

ROUTE& ROUTE657 =  ROUTE();
ROUTE657.setFromField(std::string("fraction_changed"));
ROUTE657.setFromNode(std::string("BehaviorClock"));
ROUTE657.setToField(std::string("set_fraction"));
ROUTE657.setToNode(std::string("c4_OI"));
ProtoBody603.addChild(&ROUTE657);

OrientationInterpolator& OrientationInterpolator658 =  OrientationInterpolator();
OrientationInterpolator658.setDEF(std::string("c5_OI"));
IS& IS659 =  IS();
Connect& connect660 =  Connect();
connect660.setNodeField(std::string("key"));
connect660.setProtoField(std::string("c5_key"));
IS659.addChild(&connect660);

Connect& connect661 =  Connect();
connect661.setNodeField(std::string("keyValue"));
connect661.setProtoField(std::string("c5_keyValue"));
IS659.addChild(&connect661);

Connect& connect662 =  Connect();
connect662.setNodeField(std::string("value_changed"));
connect662.setProtoField(std::string("c5_changed"));
IS659.addChild(&connect662);

OrientationInterpolator658.addChild(&IS659);

ProtoBody603.addChild(&OrientationInterpolator658);

ROUTE& ROUTE663 =  ROUTE();
ROUTE663.setFromField(std::string("fraction_changed"));
ROUTE663.setFromNode(std::string("BehaviorClock"));
ROUTE663.setToField(std::string("set_fraction"));
ROUTE663.setToNode(std::string("c5_OI"));
ProtoBody603.addChild(&ROUTE663);

OrientationInterpolator& OrientationInterpolator664 =  OrientationInterpolator();
OrientationInterpolator664.setDEF(std::string("c6_OI"));
IS& IS665 =  IS();
Connect& connect666 =  Connect();
connect666.setNodeField(std::string("key"));
connect666.setProtoField(std::string("c6_key"));
IS665.addChild(&connect666);

Connect& connect667 =  Connect();
connect667.setNodeField(std::string("keyValue"));
connect667.setProtoField(std::string("c6_keyValue"));
IS665.addChild(&connect667);

Connect& connect668 =  Connect();
connect668.setNodeField(std::string("value_changed"));
connect668.setProtoField(std::string("c6_changed"));
IS665.addChild(&connect668);

OrientationInterpolator664.addChild(&IS665);

ProtoBody603.addChild(&OrientationInterpolator664);

ROUTE& ROUTE669 =  ROUTE();
ROUTE669.setFromField(std::string("fraction_changed"));
ROUTE669.setFromNode(std::string("BehaviorClock"));
ROUTE669.setToField(std::string("set_fraction"));
ROUTE669.setToNode(std::string("c6_OI"));
ProtoBody603.addChild(&ROUTE669);

OrientationInterpolator& OrientationInterpolator670 =  OrientationInterpolator();
OrientationInterpolator670.setDEF(std::string("c7_OI"));
IS& IS671 =  IS();
Connect& connect672 =  Connect();
connect672.setNodeField(std::string("key"));
connect672.setProtoField(std::string("c7_key"));
IS671.addChild(&connect672);

Connect& connect673 =  Connect();
connect673.setNodeField(std::string("keyValue"));
connect673.setProtoField(std::string("c7_keyValue"));
IS671.addChild(&connect673);

Connect& connect674 =  Connect();
connect674.setNodeField(std::string("value_changed"));
connect674.setProtoField(std::string("c7_changed"));
IS671.addChild(&connect674);

OrientationInterpolator670.addChild(&IS671);

ProtoBody603.addChild(&OrientationInterpolator670);

ROUTE& ROUTE675 =  ROUTE();
ROUTE675.setFromField(std::string("fraction_changed"));
ROUTE675.setFromNode(std::string("BehaviorClock"));
ROUTE675.setToField(std::string("set_fraction"));
ROUTE675.setToNode(std::string("c7_OI"));
ProtoBody603.addChild(&ROUTE675);

OrientationInterpolator& OrientationInterpolator676 =  OrientationInterpolator();
OrientationInterpolator676.setDEF(std::string("jaw_OI"));
IS& IS677 =  IS();
Connect& connect678 =  Connect();
connect678.setNodeField(std::string("key"));
connect678.setProtoField(std::string("jaw_key"));
IS677.addChild(&connect678);

Connect& connect679 =  Connect();
connect679.setNodeField(std::string("keyValue"));
connect679.setProtoField(std::string("jaw_keyValue"));
IS677.addChild(&connect679);

Connect& connect680 =  Connect();
connect680.setNodeField(std::string("value_changed"));
connect680.setProtoField(std::string("jaw_changed"));
IS677.addChild(&connect680);

OrientationInterpolator676.addChild(&IS677);

ProtoBody603.addChild(&OrientationInterpolator676);

ROUTE& ROUTE681 =  ROUTE();
ROUTE681.setFromField(std::string("fraction_changed"));
ROUTE681.setFromNode(std::string("BehaviorClock"));
ROUTE681.setToField(std::string("set_fraction"));
ROUTE681.setToNode(std::string("jaw_OI"));
ProtoBody603.addChild(&ROUTE681);

OrientationInterpolator& OrientationInterpolator682 =  OrientationInterpolator();
OrientationInterpolator682.setDEF(std::string("l1_OI"));
IS& IS683 =  IS();
Connect& connect684 =  Connect();
connect684.setNodeField(std::string("key"));
connect684.setProtoField(std::string("l1_key"));
IS683.addChild(&connect684);

Connect& connect685 =  Connect();
connect685.setNodeField(std::string("keyValue"));
connect685.setProtoField(std::string("l1_keyValue"));
IS683.addChild(&connect685);

Connect& connect686 =  Connect();
connect686.setNodeField(std::string("value_changed"));
connect686.setProtoField(std::string("l1_changed"));
IS683.addChild(&connect686);

OrientationInterpolator682.addChild(&IS683);

ProtoBody603.addChild(&OrientationInterpolator682);

ROUTE& ROUTE687 =  ROUTE();
ROUTE687.setFromField(std::string("fraction_changed"));
ROUTE687.setFromNode(std::string("BehaviorClock"));
ROUTE687.setToField(std::string("set_fraction"));
ROUTE687.setToNode(std::string("l1_OI"));
ProtoBody603.addChild(&ROUTE687);

OrientationInterpolator& OrientationInterpolator688 =  OrientationInterpolator();
OrientationInterpolator688.setDEF(std::string("l2_OI"));
IS& IS689 =  IS();
Connect& connect690 =  Connect();
connect690.setNodeField(std::string("key"));
connect690.setProtoField(std::string("l2_key"));
IS689.addChild(&connect690);

Connect& connect691 =  Connect();
connect691.setNodeField(std::string("keyValue"));
connect691.setProtoField(std::string("l2_keyValue"));
IS689.addChild(&connect691);

Connect& connect692 =  Connect();
connect692.setNodeField(std::string("value_changed"));
connect692.setProtoField(std::string("l2_changed"));
IS689.addChild(&connect692);

OrientationInterpolator688.addChild(&IS689);

ProtoBody603.addChild(&OrientationInterpolator688);

ROUTE& ROUTE693 =  ROUTE();
ROUTE693.setFromField(std::string("fraction_changed"));
ROUTE693.setFromNode(std::string("BehaviorClock"));
ROUTE693.setToField(std::string("set_fraction"));
ROUTE693.setToNode(std::string("l2_OI"));
ProtoBody603.addChild(&ROUTE693);

OrientationInterpolator& OrientationInterpolator694 =  OrientationInterpolator();
OrientationInterpolator694.setDEF(std::string("l3_OI"));
IS& IS695 =  IS();
Connect& connect696 =  Connect();
connect696.setNodeField(std::string("key"));
connect696.setProtoField(std::string("l3_key"));
IS695.addChild(&connect696);

Connect& connect697 =  Connect();
connect697.setNodeField(std::string("keyValue"));
connect697.setProtoField(std::string("l3_keyValue"));
IS695.addChild(&connect697);

Connect& connect698 =  Connect();
connect698.setNodeField(std::string("value_changed"));
connect698.setProtoField(std::string("l3_changed"));
IS695.addChild(&connect698);

OrientationInterpolator694.addChild(&IS695);

ProtoBody603.addChild(&OrientationInterpolator694);

ROUTE& ROUTE699 =  ROUTE();
ROUTE699.setFromField(std::string("fraction_changed"));
ROUTE699.setFromNode(std::string("BehaviorClock"));
ROUTE699.setToField(std::string("set_fraction"));
ROUTE699.setToNode(std::string("l3_OI"));
ProtoBody603.addChild(&ROUTE699);

OrientationInterpolator& OrientationInterpolator700 =  OrientationInterpolator();
OrientationInterpolator700.setDEF(std::string("l4_OI"));
IS& IS701 =  IS();
Connect& connect702 =  Connect();
connect702.setNodeField(std::string("key"));
connect702.setProtoField(std::string("l4_key"));
IS701.addChild(&connect702);

Connect& connect703 =  Connect();
connect703.setNodeField(std::string("keyValue"));
connect703.setProtoField(std::string("l4_keyValue"));
IS701.addChild(&connect703);

Connect& connect704 =  Connect();
connect704.setNodeField(std::string("value_changed"));
connect704.setProtoField(std::string("l4_changed"));
IS701.addChild(&connect704);

OrientationInterpolator700.addChild(&IS701);

ProtoBody603.addChild(&OrientationInterpolator700);

ROUTE& ROUTE705 =  ROUTE();
ROUTE705.setFromField(std::string("fraction_changed"));
ROUTE705.setFromNode(std::string("BehaviorClock"));
ROUTE705.setToField(std::string("set_fraction"));
ROUTE705.setToNode(std::string("l4_OI"));
ProtoBody603.addChild(&ROUTE705);

OrientationInterpolator& OrientationInterpolator706 =  OrientationInterpolator();
OrientationInterpolator706.setDEF(std::string("l5_OI"));
IS& IS707 =  IS();
Connect& connect708 =  Connect();
connect708.setNodeField(std::string("key"));
connect708.setProtoField(std::string("l5_key"));
IS707.addChild(&connect708);

Connect& connect709 =  Connect();
connect709.setNodeField(std::string("keyValue"));
connect709.setProtoField(std::string("l5_keyValue"));
IS707.addChild(&connect709);

Connect& connect710 =  Connect();
connect710.setNodeField(std::string("value_changed"));
connect710.setProtoField(std::string("l5_changed"));
IS707.addChild(&connect710);

OrientationInterpolator706.addChild(&IS707);

ProtoBody603.addChild(&OrientationInterpolator706);

ROUTE& ROUTE711 =  ROUTE();
ROUTE711.setFromField(std::string("fraction_changed"));
ROUTE711.setFromNode(std::string("BehaviorClock"));
ROUTE711.setToField(std::string("set_fraction"));
ROUTE711.setToNode(std::string("l5_OI"));
ProtoBody603.addChild(&ROUTE711);

OrientationInterpolator& OrientationInterpolator712 =  OrientationInterpolator();
OrientationInterpolator712.setDEF(std::string("l_acromioclavicular_OI"));
IS& IS713 =  IS();
Connect& connect714 =  Connect();
connect714.setNodeField(std::string("key"));
connect714.setProtoField(std::string("l_acromioclavicular_key"));
IS713.addChild(&connect714);

Connect& connect715 =  Connect();
connect715.setNodeField(std::string("keyValue"));
connect715.setProtoField(std::string("l_acromioclavicular_keyValue"));
IS713.addChild(&connect715);

Connect& connect716 =  Connect();
connect716.setNodeField(std::string("value_changed"));
connect716.setProtoField(std::string("l_acromioclavicular_changed"));
IS713.addChild(&connect716);

OrientationInterpolator712.addChild(&IS713);

ProtoBody603.addChild(&OrientationInterpolator712);

ROUTE& ROUTE717 =  ROUTE();
ROUTE717.setFromField(std::string("fraction_changed"));
ROUTE717.setFromNode(std::string("BehaviorClock"));
ROUTE717.setToField(std::string("set_fraction"));
ROUTE717.setToNode(std::string("l_acromioclavicular_OI"));
ProtoBody603.addChild(&ROUTE717);

OrientationInterpolator& OrientationInterpolator718 =  OrientationInterpolator();
OrientationInterpolator718.setDEF(std::string("l_ankle_OI"));
IS& IS719 =  IS();
Connect& connect720 =  Connect();
connect720.setNodeField(std::string("key"));
connect720.setProtoField(std::string("l_ankle_key"));
IS719.addChild(&connect720);

Connect& connect721 =  Connect();
connect721.setNodeField(std::string("keyValue"));
connect721.setProtoField(std::string("l_ankle_keyValue"));
IS719.addChild(&connect721);

Connect& connect722 =  Connect();
connect722.setNodeField(std::string("value_changed"));
connect722.setProtoField(std::string("l_ankle_changed"));
IS719.addChild(&connect722);

OrientationInterpolator718.addChild(&IS719);

ProtoBody603.addChild(&OrientationInterpolator718);

ROUTE& ROUTE723 =  ROUTE();
ROUTE723.setFromField(std::string("fraction_changed"));
ROUTE723.setFromNode(std::string("BehaviorClock"));
ROUTE723.setToField(std::string("set_fraction"));
ROUTE723.setToNode(std::string("l_ankle_OI"));
ProtoBody603.addChild(&ROUTE723);

OrientationInterpolator& OrientationInterpolator724 =  OrientationInterpolator();
OrientationInterpolator724.setDEF(std::string("l_calf_OI"));
IS& IS725 =  IS();
Connect& connect726 =  Connect();
connect726.setNodeField(std::string("key"));
connect726.setProtoField(std::string("l_calf_key"));
IS725.addChild(&connect726);

Connect& connect727 =  Connect();
connect727.setNodeField(std::string("keyValue"));
connect727.setProtoField(std::string("l_calf_keyValue"));
IS725.addChild(&connect727);

Connect& connect728 =  Connect();
connect728.setNodeField(std::string("value_changed"));
connect728.setProtoField(std::string("l_calf_changed"));
IS725.addChild(&connect728);

OrientationInterpolator724.addChild(&IS725);

ProtoBody603.addChild(&OrientationInterpolator724);

ROUTE& ROUTE729 =  ROUTE();
ROUTE729.setFromField(std::string("fraction_changed"));
ROUTE729.setFromNode(std::string("BehaviorClock"));
ROUTE729.setToField(std::string("set_fraction"));
ROUTE729.setToNode(std::string("l_calf_OI"));
ProtoBody603.addChild(&ROUTE729);

OrientationInterpolator& OrientationInterpolator730 =  OrientationInterpolator();
OrientationInterpolator730.setDEF(std::string("l_clavicle_OI"));
IS& IS731 =  IS();
Connect& connect732 =  Connect();
connect732.setNodeField(std::string("key"));
connect732.setProtoField(std::string("l_clavicle_key"));
IS731.addChild(&connect732);

Connect& connect733 =  Connect();
connect733.setNodeField(std::string("keyValue"));
connect733.setProtoField(std::string("l_clavicle_keyValue"));
IS731.addChild(&connect733);

Connect& connect734 =  Connect();
connect734.setNodeField(std::string("value_changed"));
connect734.setProtoField(std::string("l_clavicle_changed"));
IS731.addChild(&connect734);

OrientationInterpolator730.addChild(&IS731);

ProtoBody603.addChild(&OrientationInterpolator730);

ROUTE& ROUTE735 =  ROUTE();
ROUTE735.setFromField(std::string("fraction_changed"));
ROUTE735.setFromNode(std::string("BehaviorClock"));
ROUTE735.setToField(std::string("set_fraction"));
ROUTE735.setToNode(std::string("l_clavicle_OI"));
ProtoBody603.addChild(&ROUTE735);

OrientationInterpolator& OrientationInterpolator736 =  OrientationInterpolator();
OrientationInterpolator736.setDEF(std::string("l_elbow_OI"));
IS& IS737 =  IS();
Connect& connect738 =  Connect();
connect738.setNodeField(std::string("key"));
connect738.setProtoField(std::string("l_elbow_key"));
IS737.addChild(&connect738);

Connect& connect739 =  Connect();
connect739.setNodeField(std::string("keyValue"));
connect739.setProtoField(std::string("l_elbow_keyValue"));
IS737.addChild(&connect739);

Connect& connect740 =  Connect();
connect740.setNodeField(std::string("value_changed"));
connect740.setProtoField(std::string("l_elbow_changed"));
IS737.addChild(&connect740);

OrientationInterpolator736.addChild(&IS737);

ProtoBody603.addChild(&OrientationInterpolator736);

ROUTE& ROUTE741 =  ROUTE();
ROUTE741.setFromField(std::string("fraction_changed"));
ROUTE741.setFromNode(std::string("BehaviorClock"));
ROUTE741.setToField(std::string("set_fraction"));
ROUTE741.setToNode(std::string("l_elbow_OI"));
ProtoBody603.addChild(&ROUTE741);

OrientationInterpolator& OrientationInterpolator742 =  OrientationInterpolator();
OrientationInterpolator742.setDEF(std::string("l_eyeball_OI"));
IS& IS743 =  IS();
Connect& connect744 =  Connect();
connect744.setNodeField(std::string("key"));
connect744.setProtoField(std::string("l_eyeball_key"));
IS743.addChild(&connect744);

Connect& connect745 =  Connect();
connect745.setNodeField(std::string("keyValue"));
connect745.setProtoField(std::string("l_eyeball_keyValue"));
IS743.addChild(&connect745);

Connect& connect746 =  Connect();
connect746.setNodeField(std::string("value_changed"));
connect746.setProtoField(std::string("l_eyeball_changed"));
IS743.addChild(&connect746);

OrientationInterpolator742.addChild(&IS743);

ProtoBody603.addChild(&OrientationInterpolator742);

ROUTE& ROUTE747 =  ROUTE();
ROUTE747.setFromField(std::string("fraction_changed"));
ROUTE747.setFromNode(std::string("BehaviorClock"));
ROUTE747.setToField(std::string("set_fraction"));
ROUTE747.setToNode(std::string("l_eyeball_OI"));
ProtoBody603.addChild(&ROUTE747);

OrientationInterpolator& OrientationInterpolator748 =  OrientationInterpolator();
OrientationInterpolator748.setDEF(std::string("l_eyeball_joint_OI"));
IS& IS749 =  IS();
Connect& connect750 =  Connect();
connect750.setNodeField(std::string("key"));
connect750.setProtoField(std::string("l_eyeball_joint_key"));
IS749.addChild(&connect750);

Connect& connect751 =  Connect();
connect751.setNodeField(std::string("keyValue"));
connect751.setProtoField(std::string("l_eyeball_joint_keyValue"));
IS749.addChild(&connect751);

Connect& connect752 =  Connect();
connect752.setNodeField(std::string("value_changed"));
connect752.setProtoField(std::string("l_eyeball_joint_changed"));
IS749.addChild(&connect752);

OrientationInterpolator748.addChild(&IS749);

ProtoBody603.addChild(&OrientationInterpolator748);

ROUTE& ROUTE753 =  ROUTE();
ROUTE753.setFromField(std::string("fraction_changed"));
ROUTE753.setFromNode(std::string("BehaviorClock"));
ROUTE753.setToField(std::string("set_fraction"));
ROUTE753.setToNode(std::string("l_eyeball_joint_OI"));
ProtoBody603.addChild(&ROUTE753);

OrientationInterpolator& OrientationInterpolator754 =  OrientationInterpolator();
OrientationInterpolator754.setDEF(std::string("l_eyebrow_OI"));
IS& IS755 =  IS();
Connect& connect756 =  Connect();
connect756.setNodeField(std::string("key"));
connect756.setProtoField(std::string("l_eyebrow_key"));
IS755.addChild(&connect756);

Connect& connect757 =  Connect();
connect757.setNodeField(std::string("keyValue"));
connect757.setProtoField(std::string("l_eyebrow_keyValue"));
IS755.addChild(&connect757);

Connect& connect758 =  Connect();
connect758.setNodeField(std::string("value_changed"));
connect758.setProtoField(std::string("l_eyebrow_changed"));
IS755.addChild(&connect758);

OrientationInterpolator754.addChild(&IS755);

ProtoBody603.addChild(&OrientationInterpolator754);

ROUTE& ROUTE759 =  ROUTE();
ROUTE759.setFromField(std::string("fraction_changed"));
ROUTE759.setFromNode(std::string("BehaviorClock"));
ROUTE759.setToField(std::string("set_fraction"));
ROUTE759.setToNode(std::string("l_eyebrow_OI"));
ProtoBody603.addChild(&ROUTE759);

OrientationInterpolator& OrientationInterpolator760 =  OrientationInterpolator();
OrientationInterpolator760.setDEF(std::string("l_eyebrow_joint_OI"));
IS& IS761 =  IS();
Connect& connect762 =  Connect();
connect762.setNodeField(std::string("key"));
connect762.setProtoField(std::string("l_eyebrow_joint_key"));
IS761.addChild(&connect762);

Connect& connect763 =  Connect();
connect763.setNodeField(std::string("keyValue"));
connect763.setProtoField(std::string("l_eyebrow_joint_keyValue"));
IS761.addChild(&connect763);

Connect& connect764 =  Connect();
connect764.setNodeField(std::string("value_changed"));
connect764.setProtoField(std::string("l_eyebrow_joint_changed"));
IS761.addChild(&connect764);

OrientationInterpolator760.addChild(&IS761);

ProtoBody603.addChild(&OrientationInterpolator760);

ROUTE& ROUTE765 =  ROUTE();
ROUTE765.setFromField(std::string("fraction_changed"));
ROUTE765.setFromNode(std::string("BehaviorClock"));
ROUTE765.setToField(std::string("set_fraction"));
ROUTE765.setToNode(std::string("l_eyebrow_joint_OI"));
ProtoBody603.addChild(&ROUTE765);

OrientationInterpolator& OrientationInterpolator766 =  OrientationInterpolator();
OrientationInterpolator766.setDEF(std::string("l_eyelid_OI"));
IS& IS767 =  IS();
Connect& connect768 =  Connect();
connect768.setNodeField(std::string("key"));
connect768.setProtoField(std::string("l_eyelid_key"));
IS767.addChild(&connect768);

Connect& connect769 =  Connect();
connect769.setNodeField(std::string("keyValue"));
connect769.setProtoField(std::string("l_eyelid_keyValue"));
IS767.addChild(&connect769);

Connect& connect770 =  Connect();
connect770.setNodeField(std::string("value_changed"));
connect770.setProtoField(std::string("l_eyelid_changed"));
IS767.addChild(&connect770);

OrientationInterpolator766.addChild(&IS767);

ProtoBody603.addChild(&OrientationInterpolator766);

ROUTE& ROUTE771 =  ROUTE();
ROUTE771.setFromField(std::string("fraction_changed"));
ROUTE771.setFromNode(std::string("BehaviorClock"));
ROUTE771.setToField(std::string("set_fraction"));
ROUTE771.setToNode(std::string("l_eyelid_OI"));
ProtoBody603.addChild(&ROUTE771);

OrientationInterpolator& OrientationInterpolator772 =  OrientationInterpolator();
OrientationInterpolator772.setDEF(std::string("l_eyelid_joint_OI"));
IS& IS773 =  IS();
Connect& connect774 =  Connect();
connect774.setNodeField(std::string("key"));
connect774.setProtoField(std::string("l_eyelid_joint_key"));
IS773.addChild(&connect774);

Connect& connect775 =  Connect();
connect775.setNodeField(std::string("keyValue"));
connect775.setProtoField(std::string("l_eyelid_joint_keyValue"));
IS773.addChild(&connect775);

Connect& connect776 =  Connect();
connect776.setNodeField(std::string("value_changed"));
connect776.setProtoField(std::string("l_eyelid_joint_changed"));
IS773.addChild(&connect776);

OrientationInterpolator772.addChild(&IS773);

ProtoBody603.addChild(&OrientationInterpolator772);

ROUTE& ROUTE777 =  ROUTE();
ROUTE777.setFromField(std::string("fraction_changed"));
ROUTE777.setFromNode(std::string("BehaviorClock"));
ROUTE777.setToField(std::string("set_fraction"));
ROUTE777.setToNode(std::string("l_eyelid_joint_OI"));
ProtoBody603.addChild(&ROUTE777);

OrientationInterpolator& OrientationInterpolator778 =  OrientationInterpolator();
OrientationInterpolator778.setDEF(std::string("l_forearm_OI"));
IS& IS779 =  IS();
Connect& connect780 =  Connect();
connect780.setNodeField(std::string("key"));
connect780.setProtoField(std::string("l_forearm_key"));
IS779.addChild(&connect780);

Connect& connect781 =  Connect();
connect781.setNodeField(std::string("keyValue"));
connect781.setProtoField(std::string("l_forearm_keyValue"));
IS779.addChild(&connect781);

Connect& connect782 =  Connect();
connect782.setNodeField(std::string("value_changed"));
connect782.setProtoField(std::string("l_forearm_changed"));
IS779.addChild(&connect782);

OrientationInterpolator778.addChild(&IS779);

ProtoBody603.addChild(&OrientationInterpolator778);

ROUTE& ROUTE783 =  ROUTE();
ROUTE783.setFromField(std::string("fraction_changed"));
ROUTE783.setFromNode(std::string("BehaviorClock"));
ROUTE783.setToField(std::string("set_fraction"));
ROUTE783.setToNode(std::string("l_forearm_OI"));
ProtoBody603.addChild(&ROUTE783);

OrientationInterpolator& OrientationInterpolator784 =  OrientationInterpolator();
OrientationInterpolator784.setDEF(std::string("l_forefoot_OI"));
IS& IS785 =  IS();
Connect& connect786 =  Connect();
connect786.setNodeField(std::string("key"));
connect786.setProtoField(std::string("l_forefoot_key"));
IS785.addChild(&connect786);

Connect& connect787 =  Connect();
connect787.setNodeField(std::string("keyValue"));
connect787.setProtoField(std::string("l_forefoot_keyValue"));
IS785.addChild(&connect787);

Connect& connect788 =  Connect();
connect788.setNodeField(std::string("value_changed"));
connect788.setProtoField(std::string("l_forefoot_changed"));
IS785.addChild(&connect788);

OrientationInterpolator784.addChild(&IS785);

ProtoBody603.addChild(&OrientationInterpolator784);

ROUTE& ROUTE789 =  ROUTE();
ROUTE789.setFromField(std::string("fraction_changed"));
ROUTE789.setFromNode(std::string("BehaviorClock"));
ROUTE789.setToField(std::string("set_fraction"));
ROUTE789.setToNode(std::string("l_forefoot_OI"));
ProtoBody603.addChild(&ROUTE789);

OrientationInterpolator& OrientationInterpolator790 =  OrientationInterpolator();
OrientationInterpolator790.setDEF(std::string("l_hand_OI"));
IS& IS791 =  IS();
Connect& connect792 =  Connect();
connect792.setNodeField(std::string("key"));
connect792.setProtoField(std::string("l_hand_key"));
IS791.addChild(&connect792);

Connect& connect793 =  Connect();
connect793.setNodeField(std::string("keyValue"));
connect793.setProtoField(std::string("l_hand_keyValue"));
IS791.addChild(&connect793);

Connect& connect794 =  Connect();
connect794.setNodeField(std::string("value_changed"));
connect794.setProtoField(std::string("l_hand_changed"));
IS791.addChild(&connect794);

OrientationInterpolator790.addChild(&IS791);

ProtoBody603.addChild(&OrientationInterpolator790);

ROUTE& ROUTE795 =  ROUTE();
ROUTE795.setFromField(std::string("fraction_changed"));
ROUTE795.setFromNode(std::string("BehaviorClock"));
ROUTE795.setToField(std::string("set_fraction"));
ROUTE795.setToNode(std::string("l_hand_OI"));
ProtoBody603.addChild(&ROUTE795);

OrientationInterpolator& OrientationInterpolator796 =  OrientationInterpolator();
OrientationInterpolator796.setDEF(std::string("l_hindfoot_OI"));
IS& IS797 =  IS();
Connect& connect798 =  Connect();
connect798.setNodeField(std::string("key"));
connect798.setProtoField(std::string("l_hindfoot_key"));
IS797.addChild(&connect798);

Connect& connect799 =  Connect();
connect799.setNodeField(std::string("keyValue"));
connect799.setProtoField(std::string("l_hindfoot_keyValue"));
IS797.addChild(&connect799);

Connect& connect800 =  Connect();
connect800.setNodeField(std::string("value_changed"));
connect800.setProtoField(std::string("l_hindfoot_changed"));
IS797.addChild(&connect800);

OrientationInterpolator796.addChild(&IS797);

ProtoBody603.addChild(&OrientationInterpolator796);

ROUTE& ROUTE801 =  ROUTE();
ROUTE801.setFromField(std::string("fraction_changed"));
ROUTE801.setFromNode(std::string("BehaviorClock"));
ROUTE801.setToField(std::string("set_fraction"));
ROUTE801.setToNode(std::string("l_hindfoot_OI"));
ProtoBody603.addChild(&ROUTE801);

OrientationInterpolator& OrientationInterpolator802 =  OrientationInterpolator();
OrientationInterpolator802.setDEF(std::string("l_hip_OI"));
IS& IS803 =  IS();
Connect& connect804 =  Connect();
connect804.setNodeField(std::string("key"));
connect804.setProtoField(std::string("l_hip_key"));
IS803.addChild(&connect804);

Connect& connect805 =  Connect();
connect805.setNodeField(std::string("keyValue"));
connect805.setProtoField(std::string("l_hip_keyValue"));
IS803.addChild(&connect805);

Connect& connect806 =  Connect();
connect806.setNodeField(std::string("value_changed"));
connect806.setProtoField(std::string("l_hip_changed"));
IS803.addChild(&connect806);

OrientationInterpolator802.addChild(&IS803);

ProtoBody603.addChild(&OrientationInterpolator802);

ROUTE& ROUTE807 =  ROUTE();
ROUTE807.setFromField(std::string("fraction_changed"));
ROUTE807.setFromNode(std::string("BehaviorClock"));
ROUTE807.setToField(std::string("set_fraction"));
ROUTE807.setToNode(std::string("l_hip_OI"));
ProtoBody603.addChild(&ROUTE807);

OrientationInterpolator& OrientationInterpolator808 =  OrientationInterpolator();
OrientationInterpolator808.setDEF(std::string("l_index0_OI"));
IS& IS809 =  IS();
Connect& connect810 =  Connect();
connect810.setNodeField(std::string("key"));
connect810.setProtoField(std::string("l_index0_key"));
IS809.addChild(&connect810);

Connect& connect811 =  Connect();
connect811.setNodeField(std::string("keyValue"));
connect811.setProtoField(std::string("l_index0_keyValue"));
IS809.addChild(&connect811);

Connect& connect812 =  Connect();
connect812.setNodeField(std::string("value_changed"));
connect812.setProtoField(std::string("l_index0_changed"));
IS809.addChild(&connect812);

OrientationInterpolator808.addChild(&IS809);

ProtoBody603.addChild(&OrientationInterpolator808);

ROUTE& ROUTE813 =  ROUTE();
ROUTE813.setFromField(std::string("fraction_changed"));
ROUTE813.setFromNode(std::string("BehaviorClock"));
ROUTE813.setToField(std::string("set_fraction"));
ROUTE813.setToNode(std::string("l_index0_OI"));
ProtoBody603.addChild(&ROUTE813);

OrientationInterpolator& OrientationInterpolator814 =  OrientationInterpolator();
OrientationInterpolator814.setDEF(std::string("l_index1_OI"));
IS& IS815 =  IS();
Connect& connect816 =  Connect();
connect816.setNodeField(std::string("key"));
connect816.setProtoField(std::string("l_index1_key"));
IS815.addChild(&connect816);

Connect& connect817 =  Connect();
connect817.setNodeField(std::string("keyValue"));
connect817.setProtoField(std::string("l_index1_keyValue"));
IS815.addChild(&connect817);

Connect& connect818 =  Connect();
connect818.setNodeField(std::string("value_changed"));
connect818.setProtoField(std::string("l_index1_changed"));
IS815.addChild(&connect818);

OrientationInterpolator814.addChild(&IS815);

ProtoBody603.addChild(&OrientationInterpolator814);

ROUTE& ROUTE819 =  ROUTE();
ROUTE819.setFromField(std::string("fraction_changed"));
ROUTE819.setFromNode(std::string("BehaviorClock"));
ROUTE819.setToField(std::string("set_fraction"));
ROUTE819.setToNode(std::string("l_index1_OI"));
ProtoBody603.addChild(&ROUTE819);

OrientationInterpolator& OrientationInterpolator820 =  OrientationInterpolator();
OrientationInterpolator820.setDEF(std::string("l_index2_OI"));
IS& IS821 =  IS();
Connect& connect822 =  Connect();
connect822.setNodeField(std::string("key"));
connect822.setProtoField(std::string("l_index2_key"));
IS821.addChild(&connect822);

Connect& connect823 =  Connect();
connect823.setNodeField(std::string("keyValue"));
connect823.setProtoField(std::string("l_index2_keyValue"));
IS821.addChild(&connect823);

Connect& connect824 =  Connect();
connect824.setNodeField(std::string("value_changed"));
connect824.setProtoField(std::string("l_index2_changed"));
IS821.addChild(&connect824);

OrientationInterpolator820.addChild(&IS821);

ProtoBody603.addChild(&OrientationInterpolator820);

ROUTE& ROUTE825 =  ROUTE();
ROUTE825.setFromField(std::string("fraction_changed"));
ROUTE825.setFromNode(std::string("BehaviorClock"));
ROUTE825.setToField(std::string("set_fraction"));
ROUTE825.setToNode(std::string("l_index2_OI"));
ProtoBody603.addChild(&ROUTE825);

OrientationInterpolator& OrientationInterpolator826 =  OrientationInterpolator();
OrientationInterpolator826.setDEF(std::string("l_index3_OI"));
IS& IS827 =  IS();
Connect& connect828 =  Connect();
connect828.setNodeField(std::string("key"));
connect828.setProtoField(std::string("l_index3_key"));
IS827.addChild(&connect828);

Connect& connect829 =  Connect();
connect829.setNodeField(std::string("keyValue"));
connect829.setProtoField(std::string("l_index3_keyValue"));
IS827.addChild(&connect829);

Connect& connect830 =  Connect();
connect830.setNodeField(std::string("value_changed"));
connect830.setProtoField(std::string("l_index3_changed"));
IS827.addChild(&connect830);

OrientationInterpolator826.addChild(&IS827);

ProtoBody603.addChild(&OrientationInterpolator826);

ROUTE& ROUTE831 =  ROUTE();
ROUTE831.setFromField(std::string("fraction_changed"));
ROUTE831.setFromNode(std::string("BehaviorClock"));
ROUTE831.setToField(std::string("set_fraction"));
ROUTE831.setToNode(std::string("l_index3_OI"));
ProtoBody603.addChild(&ROUTE831);

OrientationInterpolator& OrientationInterpolator832 =  OrientationInterpolator();
OrientationInterpolator832.setDEF(std::string("l_index_distal_OI"));
IS& IS833 =  IS();
Connect& connect834 =  Connect();
connect834.setNodeField(std::string("key"));
connect834.setProtoField(std::string("l_index_distal_key"));
IS833.addChild(&connect834);

Connect& connect835 =  Connect();
connect835.setNodeField(std::string("keyValue"));
connect835.setProtoField(std::string("l_index_distal_keyValue"));
IS833.addChild(&connect835);

Connect& connect836 =  Connect();
connect836.setNodeField(std::string("value_changed"));
connect836.setProtoField(std::string("l_index_distal_changed"));
IS833.addChild(&connect836);

OrientationInterpolator832.addChild(&IS833);

ProtoBody603.addChild(&OrientationInterpolator832);

ROUTE& ROUTE837 =  ROUTE();
ROUTE837.setFromField(std::string("fraction_changed"));
ROUTE837.setFromNode(std::string("BehaviorClock"));
ROUTE837.setToField(std::string("set_fraction"));
ROUTE837.setToNode(std::string("l_index_distal_OI"));
ProtoBody603.addChild(&ROUTE837);

OrientationInterpolator& OrientationInterpolator838 =  OrientationInterpolator();
OrientationInterpolator838.setDEF(std::string("l_index_metacarpal_OI"));
IS& IS839 =  IS();
Connect& connect840 =  Connect();
connect840.setNodeField(std::string("key"));
connect840.setProtoField(std::string("l_index_metacarpal_key"));
IS839.addChild(&connect840);

Connect& connect841 =  Connect();
connect841.setNodeField(std::string("keyValue"));
connect841.setProtoField(std::string("l_index_metacarpal_keyValue"));
IS839.addChild(&connect841);

Connect& connect842 =  Connect();
connect842.setNodeField(std::string("value_changed"));
connect842.setProtoField(std::string("l_index_metacarpal_changed"));
IS839.addChild(&connect842);

OrientationInterpolator838.addChild(&IS839);

ProtoBody603.addChild(&OrientationInterpolator838);

ROUTE& ROUTE843 =  ROUTE();
ROUTE843.setFromField(std::string("fraction_changed"));
ROUTE843.setFromNode(std::string("BehaviorClock"));
ROUTE843.setToField(std::string("set_fraction"));
ROUTE843.setToNode(std::string("l_index_metacarpal_OI"));
ProtoBody603.addChild(&ROUTE843);

OrientationInterpolator& OrientationInterpolator844 =  OrientationInterpolator();
OrientationInterpolator844.setDEF(std::string("l_index_middle_OI"));
IS& IS845 =  IS();
Connect& connect846 =  Connect();
connect846.setNodeField(std::string("key"));
connect846.setProtoField(std::string("l_index_middle_key"));
IS845.addChild(&connect846);

Connect& connect847 =  Connect();
connect847.setNodeField(std::string("keyValue"));
connect847.setProtoField(std::string("l_index_middle_keyValue"));
IS845.addChild(&connect847);

Connect& connect848 =  Connect();
connect848.setNodeField(std::string("value_changed"));
connect848.setProtoField(std::string("l_index_middle_changed"));
IS845.addChild(&connect848);

OrientationInterpolator844.addChild(&IS845);

ProtoBody603.addChild(&OrientationInterpolator844);

ROUTE& ROUTE849 =  ROUTE();
ROUTE849.setFromField(std::string("fraction_changed"));
ROUTE849.setFromNode(std::string("BehaviorClock"));
ROUTE849.setToField(std::string("set_fraction"));
ROUTE849.setToNode(std::string("l_index_middle_OI"));
ProtoBody603.addChild(&ROUTE849);

OrientationInterpolator& OrientationInterpolator850 =  OrientationInterpolator();
OrientationInterpolator850.setDEF(std::string("l_index_proximal_OI"));
IS& IS851 =  IS();
Connect& connect852 =  Connect();
connect852.setNodeField(std::string("key"));
connect852.setProtoField(std::string("l_index_proximal_key"));
IS851.addChild(&connect852);

Connect& connect853 =  Connect();
connect853.setNodeField(std::string("keyValue"));
connect853.setProtoField(std::string("l_index_proximal_keyValue"));
IS851.addChild(&connect853);

Connect& connect854 =  Connect();
connect854.setNodeField(std::string("value_changed"));
connect854.setProtoField(std::string("l_index_proximal_changed"));
IS851.addChild(&connect854);

OrientationInterpolator850.addChild(&IS851);

ProtoBody603.addChild(&OrientationInterpolator850);

ROUTE& ROUTE855 =  ROUTE();
ROUTE855.setFromField(std::string("fraction_changed"));
ROUTE855.setFromNode(std::string("BehaviorClock"));
ROUTE855.setToField(std::string("set_fraction"));
ROUTE855.setToNode(std::string("l_index_proximal_OI"));
ProtoBody603.addChild(&ROUTE855);

OrientationInterpolator& OrientationInterpolator856 =  OrientationInterpolator();
OrientationInterpolator856.setDEF(std::string("l_knee_OI"));
IS& IS857 =  IS();
Connect& connect858 =  Connect();
connect858.setNodeField(std::string("key"));
connect858.setProtoField(std::string("l_knee_key"));
IS857.addChild(&connect858);

Connect& connect859 =  Connect();
connect859.setNodeField(std::string("keyValue"));
connect859.setProtoField(std::string("l_knee_keyValue"));
IS857.addChild(&connect859);

Connect& connect860 =  Connect();
connect860.setNodeField(std::string("value_changed"));
connect860.setProtoField(std::string("l_knee_changed"));
IS857.addChild(&connect860);

OrientationInterpolator856.addChild(&IS857);

ProtoBody603.addChild(&OrientationInterpolator856);

ROUTE& ROUTE861 =  ROUTE();
ROUTE861.setFromField(std::string("fraction_changed"));
ROUTE861.setFromNode(std::string("BehaviorClock"));
ROUTE861.setToField(std::string("set_fraction"));
ROUTE861.setToNode(std::string("l_knee_OI"));
ProtoBody603.addChild(&ROUTE861);

OrientationInterpolator& OrientationInterpolator862 =  OrientationInterpolator();
OrientationInterpolator862.setDEF(std::string("l_metatarsal_OI"));
IS& IS863 =  IS();
Connect& connect864 =  Connect();
connect864.setNodeField(std::string("key"));
connect864.setProtoField(std::string("l_metatarsal_key"));
IS863.addChild(&connect864);

Connect& connect865 =  Connect();
connect865.setNodeField(std::string("keyValue"));
connect865.setProtoField(std::string("l_metatarsal_keyValue"));
IS863.addChild(&connect865);

Connect& connect866 =  Connect();
connect866.setNodeField(std::string("value_changed"));
connect866.setProtoField(std::string("l_metatarsal_changed"));
IS863.addChild(&connect866);

OrientationInterpolator862.addChild(&IS863);

ProtoBody603.addChild(&OrientationInterpolator862);

ROUTE& ROUTE867 =  ROUTE();
ROUTE867.setFromField(std::string("fraction_changed"));
ROUTE867.setFromNode(std::string("BehaviorClock"));
ROUTE867.setToField(std::string("set_fraction"));
ROUTE867.setToNode(std::string("l_metatarsal_OI"));
ProtoBody603.addChild(&ROUTE867);

OrientationInterpolator& OrientationInterpolator868 =  OrientationInterpolator();
OrientationInterpolator868.setDEF(std::string("l_middistal_OI"));
IS& IS869 =  IS();
Connect& connect870 =  Connect();
connect870.setNodeField(std::string("key"));
connect870.setProtoField(std::string("l_middistal_key"));
IS869.addChild(&connect870);

Connect& connect871 =  Connect();
connect871.setNodeField(std::string("keyValue"));
connect871.setProtoField(std::string("l_middistal_keyValue"));
IS869.addChild(&connect871);

Connect& connect872 =  Connect();
connect872.setNodeField(std::string("value_changed"));
connect872.setProtoField(std::string("l_middistal_changed"));
IS869.addChild(&connect872);

OrientationInterpolator868.addChild(&IS869);

ProtoBody603.addChild(&OrientationInterpolator868);

ROUTE& ROUTE873 =  ROUTE();
ROUTE873.setFromField(std::string("fraction_changed"));
ROUTE873.setFromNode(std::string("BehaviorClock"));
ROUTE873.setToField(std::string("set_fraction"));
ROUTE873.setToNode(std::string("l_middistal_OI"));
ProtoBody603.addChild(&ROUTE873);

OrientationInterpolator& OrientationInterpolator874 =  OrientationInterpolator();
OrientationInterpolator874.setDEF(std::string("l_middle0_OI"));
IS& IS875 =  IS();
Connect& connect876 =  Connect();
connect876.setNodeField(std::string("key"));
connect876.setProtoField(std::string("l_middle0_key"));
IS875.addChild(&connect876);

Connect& connect877 =  Connect();
connect877.setNodeField(std::string("keyValue"));
connect877.setProtoField(std::string("l_middle0_keyValue"));
IS875.addChild(&connect877);

Connect& connect878 =  Connect();
connect878.setNodeField(std::string("value_changed"));
connect878.setProtoField(std::string("l_middle0_changed"));
IS875.addChild(&connect878);

OrientationInterpolator874.addChild(&IS875);

ProtoBody603.addChild(&OrientationInterpolator874);

ROUTE& ROUTE879 =  ROUTE();
ROUTE879.setFromField(std::string("fraction_changed"));
ROUTE879.setFromNode(std::string("BehaviorClock"));
ROUTE879.setToField(std::string("set_fraction"));
ROUTE879.setToNode(std::string("l_middle0_OI"));
ProtoBody603.addChild(&ROUTE879);

OrientationInterpolator& OrientationInterpolator880 =  OrientationInterpolator();
OrientationInterpolator880.setDEF(std::string("l_middle1_OI"));
IS& IS881 =  IS();
Connect& connect882 =  Connect();
connect882.setNodeField(std::string("key"));
connect882.setProtoField(std::string("l_middle1_key"));
IS881.addChild(&connect882);

Connect& connect883 =  Connect();
connect883.setNodeField(std::string("keyValue"));
connect883.setProtoField(std::string("l_middle1_keyValue"));
IS881.addChild(&connect883);

Connect& connect884 =  Connect();
connect884.setNodeField(std::string("value_changed"));
connect884.setProtoField(std::string("l_middle1_changed"));
IS881.addChild(&connect884);

OrientationInterpolator880.addChild(&IS881);

ProtoBody603.addChild(&OrientationInterpolator880);

ROUTE& ROUTE885 =  ROUTE();
ROUTE885.setFromField(std::string("fraction_changed"));
ROUTE885.setFromNode(std::string("BehaviorClock"));
ROUTE885.setToField(std::string("set_fraction"));
ROUTE885.setToNode(std::string("l_middle1_OI"));
ProtoBody603.addChild(&ROUTE885);

OrientationInterpolator& OrientationInterpolator886 =  OrientationInterpolator();
OrientationInterpolator886.setDEF(std::string("l_middle2_OI"));
IS& IS887 =  IS();
Connect& connect888 =  Connect();
connect888.setNodeField(std::string("key"));
connect888.setProtoField(std::string("l_middle2_key"));
IS887.addChild(&connect888);

Connect& connect889 =  Connect();
connect889.setNodeField(std::string("keyValue"));
connect889.setProtoField(std::string("l_middle2_keyValue"));
IS887.addChild(&connect889);

Connect& connect890 =  Connect();
connect890.setNodeField(std::string("value_changed"));
connect890.setProtoField(std::string("l_middle2_changed"));
IS887.addChild(&connect890);

OrientationInterpolator886.addChild(&IS887);

ProtoBody603.addChild(&OrientationInterpolator886);

ROUTE& ROUTE891 =  ROUTE();
ROUTE891.setFromField(std::string("fraction_changed"));
ROUTE891.setFromNode(std::string("BehaviorClock"));
ROUTE891.setToField(std::string("set_fraction"));
ROUTE891.setToNode(std::string("l_middle2_OI"));
ProtoBody603.addChild(&ROUTE891);

OrientationInterpolator& OrientationInterpolator892 =  OrientationInterpolator();
OrientationInterpolator892.setDEF(std::string("l_middle3_OI"));
IS& IS893 =  IS();
Connect& connect894 =  Connect();
connect894.setNodeField(std::string("key"));
connect894.setProtoField(std::string("l_middle3_key"));
IS893.addChild(&connect894);

Connect& connect895 =  Connect();
connect895.setNodeField(std::string("keyValue"));
connect895.setProtoField(std::string("l_middle3_keyValue"));
IS893.addChild(&connect895);

Connect& connect896 =  Connect();
connect896.setNodeField(std::string("value_changed"));
connect896.setProtoField(std::string("l_middle3_changed"));
IS893.addChild(&connect896);

OrientationInterpolator892.addChild(&IS893);

ProtoBody603.addChild(&OrientationInterpolator892);

ROUTE& ROUTE897 =  ROUTE();
ROUTE897.setFromField(std::string("fraction_changed"));
ROUTE897.setFromNode(std::string("BehaviorClock"));
ROUTE897.setToField(std::string("set_fraction"));
ROUTE897.setToNode(std::string("l_middle3_OI"));
ProtoBody603.addChild(&ROUTE897);

OrientationInterpolator& OrientationInterpolator898 =  OrientationInterpolator();
OrientationInterpolator898.setDEF(std::string("l_middle_distal_OI"));
IS& IS899 =  IS();
Connect& connect900 =  Connect();
connect900.setNodeField(std::string("key"));
connect900.setProtoField(std::string("l_middle_distal_key"));
IS899.addChild(&connect900);

Connect& connect901 =  Connect();
connect901.setNodeField(std::string("keyValue"));
connect901.setProtoField(std::string("l_middle_distal_keyValue"));
IS899.addChild(&connect901);

Connect& connect902 =  Connect();
connect902.setNodeField(std::string("value_changed"));
connect902.setProtoField(std::string("l_middle_distal_changed"));
IS899.addChild(&connect902);

OrientationInterpolator898.addChild(&IS899);

ProtoBody603.addChild(&OrientationInterpolator898);

ROUTE& ROUTE903 =  ROUTE();
ROUTE903.setFromField(std::string("fraction_changed"));
ROUTE903.setFromNode(std::string("BehaviorClock"));
ROUTE903.setToField(std::string("set_fraction"));
ROUTE903.setToNode(std::string("l_middle_distal_OI"));
ProtoBody603.addChild(&ROUTE903);

OrientationInterpolator& OrientationInterpolator904 =  OrientationInterpolator();
OrientationInterpolator904.setDEF(std::string("l_middle_metacarpal_OI"));
IS& IS905 =  IS();
Connect& connect906 =  Connect();
connect906.setNodeField(std::string("key"));
connect906.setProtoField(std::string("l_middle_metacarpal_key"));
IS905.addChild(&connect906);

Connect& connect907 =  Connect();
connect907.setNodeField(std::string("keyValue"));
connect907.setProtoField(std::string("l_middle_metacarpal_keyValue"));
IS905.addChild(&connect907);

Connect& connect908 =  Connect();
connect908.setNodeField(std::string("value_changed"));
connect908.setProtoField(std::string("l_middle_metacarpal_changed"));
IS905.addChild(&connect908);

OrientationInterpolator904.addChild(&IS905);

ProtoBody603.addChild(&OrientationInterpolator904);

ROUTE& ROUTE909 =  ROUTE();
ROUTE909.setFromField(std::string("fraction_changed"));
ROUTE909.setFromNode(std::string("BehaviorClock"));
ROUTE909.setToField(std::string("set_fraction"));
ROUTE909.setToNode(std::string("l_middle_metacarpal_OI"));
ProtoBody603.addChild(&ROUTE909);

OrientationInterpolator& OrientationInterpolator910 =  OrientationInterpolator();
OrientationInterpolator910.setDEF(std::string("l_middle_middle_OI"));
IS& IS911 =  IS();
Connect& connect912 =  Connect();
connect912.setNodeField(std::string("key"));
connect912.setProtoField(std::string("l_middle_middle_key"));
IS911.addChild(&connect912);

Connect& connect913 =  Connect();
connect913.setNodeField(std::string("keyValue"));
connect913.setProtoField(std::string("l_middle_middle_keyValue"));
IS911.addChild(&connect913);

Connect& connect914 =  Connect();
connect914.setNodeField(std::string("value_changed"));
connect914.setProtoField(std::string("l_middle_middle_changed"));
IS911.addChild(&connect914);

OrientationInterpolator910.addChild(&IS911);

ProtoBody603.addChild(&OrientationInterpolator910);

ROUTE& ROUTE915 =  ROUTE();
ROUTE915.setFromField(std::string("fraction_changed"));
ROUTE915.setFromNode(std::string("BehaviorClock"));
ROUTE915.setToField(std::string("set_fraction"));
ROUTE915.setToNode(std::string("l_middle_middle_OI"));
ProtoBody603.addChild(&ROUTE915);

OrientationInterpolator& OrientationInterpolator916 =  OrientationInterpolator();
OrientationInterpolator916.setDEF(std::string("l_middle_proximal_OI"));
IS& IS917 =  IS();
Connect& connect918 =  Connect();
connect918.setNodeField(std::string("key"));
connect918.setProtoField(std::string("l_middle_proximal_key"));
IS917.addChild(&connect918);

Connect& connect919 =  Connect();
connect919.setNodeField(std::string("keyValue"));
connect919.setProtoField(std::string("l_middle_proximal_keyValue"));
IS917.addChild(&connect919);

Connect& connect920 =  Connect();
connect920.setNodeField(std::string("value_changed"));
connect920.setProtoField(std::string("l_middle_proximal_changed"));
IS917.addChild(&connect920);

OrientationInterpolator916.addChild(&IS917);

ProtoBody603.addChild(&OrientationInterpolator916);

ROUTE& ROUTE921 =  ROUTE();
ROUTE921.setFromField(std::string("fraction_changed"));
ROUTE921.setFromNode(std::string("BehaviorClock"));
ROUTE921.setToField(std::string("set_fraction"));
ROUTE921.setToNode(std::string("l_middle_proximal_OI"));
ProtoBody603.addChild(&ROUTE921);

OrientationInterpolator& OrientationInterpolator922 =  OrientationInterpolator();
OrientationInterpolator922.setDEF(std::string("l_midproximal_OI"));
IS& IS923 =  IS();
Connect& connect924 =  Connect();
connect924.setNodeField(std::string("key"));
connect924.setProtoField(std::string("l_midproximal_key"));
IS923.addChild(&connect924);

Connect& connect925 =  Connect();
connect925.setNodeField(std::string("keyValue"));
connect925.setProtoField(std::string("l_midproximal_keyValue"));
IS923.addChild(&connect925);

Connect& connect926 =  Connect();
connect926.setNodeField(std::string("value_changed"));
connect926.setProtoField(std::string("l_midproximal_changed"));
IS923.addChild(&connect926);

OrientationInterpolator922.addChild(&IS923);

ProtoBody603.addChild(&OrientationInterpolator922);

ROUTE& ROUTE927 =  ROUTE();
ROUTE927.setFromField(std::string("fraction_changed"));
ROUTE927.setFromNode(std::string("BehaviorClock"));
ROUTE927.setToField(std::string("set_fraction"));
ROUTE927.setToNode(std::string("l_midproximal_OI"));
ProtoBody603.addChild(&ROUTE927);

OrientationInterpolator& OrientationInterpolator928 =  OrientationInterpolator();
OrientationInterpolator928.setDEF(std::string("l_midtarsal_OI"));
IS& IS929 =  IS();
Connect& connect930 =  Connect();
connect930.setNodeField(std::string("key"));
connect930.setProtoField(std::string("l_midtarsal_key"));
IS929.addChild(&connect930);

Connect& connect931 =  Connect();
connect931.setNodeField(std::string("keyValue"));
connect931.setProtoField(std::string("l_midtarsal_keyValue"));
IS929.addChild(&connect931);

Connect& connect932 =  Connect();
connect932.setNodeField(std::string("value_changed"));
connect932.setProtoField(std::string("l_midtarsal_changed"));
IS929.addChild(&connect932);

OrientationInterpolator928.addChild(&IS929);

ProtoBody603.addChild(&OrientationInterpolator928);

ROUTE& ROUTE933 =  ROUTE();
ROUTE933.setFromField(std::string("fraction_changed"));
ROUTE933.setFromNode(std::string("BehaviorClock"));
ROUTE933.setToField(std::string("set_fraction"));
ROUTE933.setToNode(std::string("l_midtarsal_OI"));
ProtoBody603.addChild(&ROUTE933);

OrientationInterpolator& OrientationInterpolator934 =  OrientationInterpolator();
OrientationInterpolator934.setDEF(std::string("l_pinky0_OI"));
IS& IS935 =  IS();
Connect& connect936 =  Connect();
connect936.setNodeField(std::string("key"));
connect936.setProtoField(std::string("l_pinky0_key"));
IS935.addChild(&connect936);

Connect& connect937 =  Connect();
connect937.setNodeField(std::string("keyValue"));
connect937.setProtoField(std::string("l_pinky0_keyValue"));
IS935.addChild(&connect937);

Connect& connect938 =  Connect();
connect938.setNodeField(std::string("value_changed"));
connect938.setProtoField(std::string("l_pinky0_changed"));
IS935.addChild(&connect938);

OrientationInterpolator934.addChild(&IS935);

ProtoBody603.addChild(&OrientationInterpolator934);

ROUTE& ROUTE939 =  ROUTE();
ROUTE939.setFromField(std::string("fraction_changed"));
ROUTE939.setFromNode(std::string("BehaviorClock"));
ROUTE939.setToField(std::string("set_fraction"));
ROUTE939.setToNode(std::string("l_pinky0_OI"));
ProtoBody603.addChild(&ROUTE939);

OrientationInterpolator& OrientationInterpolator940 =  OrientationInterpolator();
OrientationInterpolator940.setDEF(std::string("l_pinky1_OI"));
IS& IS941 =  IS();
Connect& connect942 =  Connect();
connect942.setNodeField(std::string("key"));
connect942.setProtoField(std::string("l_pinky1_key"));
IS941.addChild(&connect942);

Connect& connect943 =  Connect();
connect943.setNodeField(std::string("keyValue"));
connect943.setProtoField(std::string("l_pinky1_keyValue"));
IS941.addChild(&connect943);

Connect& connect944 =  Connect();
connect944.setNodeField(std::string("value_changed"));
connect944.setProtoField(std::string("l_pinky1_changed"));
IS941.addChild(&connect944);

OrientationInterpolator940.addChild(&IS941);

ProtoBody603.addChild(&OrientationInterpolator940);

ROUTE& ROUTE945 =  ROUTE();
ROUTE945.setFromField(std::string("fraction_changed"));
ROUTE945.setFromNode(std::string("BehaviorClock"));
ROUTE945.setToField(std::string("set_fraction"));
ROUTE945.setToNode(std::string("l_pinky1_OI"));
ProtoBody603.addChild(&ROUTE945);

OrientationInterpolator& OrientationInterpolator946 =  OrientationInterpolator();
OrientationInterpolator946.setDEF(std::string("l_pinky2_OI"));
IS& IS947 =  IS();
Connect& connect948 =  Connect();
connect948.setNodeField(std::string("key"));
connect948.setProtoField(std::string("l_pinky2_key"));
IS947.addChild(&connect948);

Connect& connect949 =  Connect();
connect949.setNodeField(std::string("keyValue"));
connect949.setProtoField(std::string("l_pinky2_keyValue"));
IS947.addChild(&connect949);

Connect& connect950 =  Connect();
connect950.setNodeField(std::string("value_changed"));
connect950.setProtoField(std::string("l_pinky2_changed"));
IS947.addChild(&connect950);

OrientationInterpolator946.addChild(&IS947);

ProtoBody603.addChild(&OrientationInterpolator946);

ROUTE& ROUTE951 =  ROUTE();
ROUTE951.setFromField(std::string("fraction_changed"));
ROUTE951.setFromNode(std::string("BehaviorClock"));
ROUTE951.setToField(std::string("set_fraction"));
ROUTE951.setToNode(std::string("l_pinky2_OI"));
ProtoBody603.addChild(&ROUTE951);

OrientationInterpolator& OrientationInterpolator952 =  OrientationInterpolator();
OrientationInterpolator952.setDEF(std::string("l_pinky3_OI"));
IS& IS953 =  IS();
Connect& connect954 =  Connect();
connect954.setNodeField(std::string("key"));
connect954.setProtoField(std::string("l_pinky3_key"));
IS953.addChild(&connect954);

Connect& connect955 =  Connect();
connect955.setNodeField(std::string("keyValue"));
connect955.setProtoField(std::string("l_pinky3_keyValue"));
IS953.addChild(&connect955);

Connect& connect956 =  Connect();
connect956.setNodeField(std::string("value_changed"));
connect956.setProtoField(std::string("l_pinky3_changed"));
IS953.addChild(&connect956);

OrientationInterpolator952.addChild(&IS953);

ProtoBody603.addChild(&OrientationInterpolator952);

ROUTE& ROUTE957 =  ROUTE();
ROUTE957.setFromField(std::string("fraction_changed"));
ROUTE957.setFromNode(std::string("BehaviorClock"));
ROUTE957.setToField(std::string("set_fraction"));
ROUTE957.setToNode(std::string("l_pinky3_OI"));
ProtoBody603.addChild(&ROUTE957);

OrientationInterpolator& OrientationInterpolator958 =  OrientationInterpolator();
OrientationInterpolator958.setDEF(std::string("l_pinky_distal_OI"));
IS& IS959 =  IS();
Connect& connect960 =  Connect();
connect960.setNodeField(std::string("key"));
connect960.setProtoField(std::string("l_pinky_distal_key"));
IS959.addChild(&connect960);

Connect& connect961 =  Connect();
connect961.setNodeField(std::string("keyValue"));
connect961.setProtoField(std::string("l_pinky_distal_keyValue"));
IS959.addChild(&connect961);

Connect& connect962 =  Connect();
connect962.setNodeField(std::string("value_changed"));
connect962.setProtoField(std::string("l_pinky_distal_changed"));
IS959.addChild(&connect962);

OrientationInterpolator958.addChild(&IS959);

ProtoBody603.addChild(&OrientationInterpolator958);

ROUTE& ROUTE963 =  ROUTE();
ROUTE963.setFromField(std::string("fraction_changed"));
ROUTE963.setFromNode(std::string("BehaviorClock"));
ROUTE963.setToField(std::string("set_fraction"));
ROUTE963.setToNode(std::string("l_pinky_distal_OI"));
ProtoBody603.addChild(&ROUTE963);

OrientationInterpolator& OrientationInterpolator964 =  OrientationInterpolator();
OrientationInterpolator964.setDEF(std::string("l_pinky_metacarpal_OI"));
IS& IS965 =  IS();
Connect& connect966 =  Connect();
connect966.setNodeField(std::string("key"));
connect966.setProtoField(std::string("l_pinky_metacarpal_key"));
IS965.addChild(&connect966);

Connect& connect967 =  Connect();
connect967.setNodeField(std::string("keyValue"));
connect967.setProtoField(std::string("l_pinky_metacarpal_keyValue"));
IS965.addChild(&connect967);

Connect& connect968 =  Connect();
connect968.setNodeField(std::string("value_changed"));
connect968.setProtoField(std::string("l_pinky_metacarpal_changed"));
IS965.addChild(&connect968);

OrientationInterpolator964.addChild(&IS965);

ProtoBody603.addChild(&OrientationInterpolator964);

ROUTE& ROUTE969 =  ROUTE();
ROUTE969.setFromField(std::string("fraction_changed"));
ROUTE969.setFromNode(std::string("BehaviorClock"));
ROUTE969.setToField(std::string("set_fraction"));
ROUTE969.setToNode(std::string("l_pinky_metacarpal_OI"));
ProtoBody603.addChild(&ROUTE969);

OrientationInterpolator& OrientationInterpolator970 =  OrientationInterpolator();
OrientationInterpolator970.setDEF(std::string("l_pinky_middle_OI"));
IS& IS971 =  IS();
Connect& connect972 =  Connect();
connect972.setNodeField(std::string("key"));
connect972.setProtoField(std::string("l_pinky_middle_key"));
IS971.addChild(&connect972);

Connect& connect973 =  Connect();
connect973.setNodeField(std::string("keyValue"));
connect973.setProtoField(std::string("l_pinky_middle_keyValue"));
IS971.addChild(&connect973);

Connect& connect974 =  Connect();
connect974.setNodeField(std::string("value_changed"));
connect974.setProtoField(std::string("l_pinky_middle_changed"));
IS971.addChild(&connect974);

OrientationInterpolator970.addChild(&IS971);

ProtoBody603.addChild(&OrientationInterpolator970);

ROUTE& ROUTE975 =  ROUTE();
ROUTE975.setFromField(std::string("fraction_changed"));
ROUTE975.setFromNode(std::string("BehaviorClock"));
ROUTE975.setToField(std::string("set_fraction"));
ROUTE975.setToNode(std::string("l_pinky_middle_OI"));
ProtoBody603.addChild(&ROUTE975);

OrientationInterpolator& OrientationInterpolator976 =  OrientationInterpolator();
OrientationInterpolator976.setDEF(std::string("l_pinky_proximal_OI"));
IS& IS977 =  IS();
Connect& connect978 =  Connect();
connect978.setNodeField(std::string("key"));
connect978.setProtoField(std::string("l_pinky_proximal_key"));
IS977.addChild(&connect978);

Connect& connect979 =  Connect();
connect979.setNodeField(std::string("keyValue"));
connect979.setProtoField(std::string("l_pinky_proximal_keyValue"));
IS977.addChild(&connect979);

Connect& connect980 =  Connect();
connect980.setNodeField(std::string("value_changed"));
connect980.setProtoField(std::string("l_pinky_proximal_changed"));
IS977.addChild(&connect980);

OrientationInterpolator976.addChild(&IS977);

ProtoBody603.addChild(&OrientationInterpolator976);

ROUTE& ROUTE981 =  ROUTE();
ROUTE981.setFromField(std::string("fraction_changed"));
ROUTE981.setFromNode(std::string("BehaviorClock"));
ROUTE981.setToField(std::string("set_fraction"));
ROUTE981.setToNode(std::string("l_pinky_proximal_OI"));
ProtoBody603.addChild(&ROUTE981);

OrientationInterpolator& OrientationInterpolator982 =  OrientationInterpolator();
OrientationInterpolator982.setDEF(std::string("l_ring0_OI"));
IS& IS983 =  IS();
Connect& connect984 =  Connect();
connect984.setNodeField(std::string("key"));
connect984.setProtoField(std::string("l_ring0_key"));
IS983.addChild(&connect984);

Connect& connect985 =  Connect();
connect985.setNodeField(std::string("keyValue"));
connect985.setProtoField(std::string("l_ring0_keyValue"));
IS983.addChild(&connect985);

Connect& connect986 =  Connect();
connect986.setNodeField(std::string("value_changed"));
connect986.setProtoField(std::string("l_ring0_changed"));
IS983.addChild(&connect986);

OrientationInterpolator982.addChild(&IS983);

ProtoBody603.addChild(&OrientationInterpolator982);

ROUTE& ROUTE987 =  ROUTE();
ROUTE987.setFromField(std::string("fraction_changed"));
ROUTE987.setFromNode(std::string("BehaviorClock"));
ROUTE987.setToField(std::string("set_fraction"));
ROUTE987.setToNode(std::string("l_ring0_OI"));
ProtoBody603.addChild(&ROUTE987);

OrientationInterpolator& OrientationInterpolator988 =  OrientationInterpolator();
OrientationInterpolator988.setDEF(std::string("l_ring1_OI"));
IS& IS989 =  IS();
Connect& connect990 =  Connect();
connect990.setNodeField(std::string("key"));
connect990.setProtoField(std::string("l_ring1_key"));
IS989.addChild(&connect990);

Connect& connect991 =  Connect();
connect991.setNodeField(std::string("keyValue"));
connect991.setProtoField(std::string("l_ring1_keyValue"));
IS989.addChild(&connect991);

Connect& connect992 =  Connect();
connect992.setNodeField(std::string("value_changed"));
connect992.setProtoField(std::string("l_ring1_changed"));
IS989.addChild(&connect992);

OrientationInterpolator988.addChild(&IS989);

ProtoBody603.addChild(&OrientationInterpolator988);

ROUTE& ROUTE993 =  ROUTE();
ROUTE993.setFromField(std::string("fraction_changed"));
ROUTE993.setFromNode(std::string("BehaviorClock"));
ROUTE993.setToField(std::string("set_fraction"));
ROUTE993.setToNode(std::string("l_ring1_OI"));
ProtoBody603.addChild(&ROUTE993);

OrientationInterpolator& OrientationInterpolator994 =  OrientationInterpolator();
OrientationInterpolator994.setDEF(std::string("l_ring2_OI"));
IS& IS995 =  IS();
Connect& connect996 =  Connect();
connect996.setNodeField(std::string("key"));
connect996.setProtoField(std::string("l_ring2_key"));
IS995.addChild(&connect996);

Connect& connect997 =  Connect();
connect997.setNodeField(std::string("keyValue"));
connect997.setProtoField(std::string("l_ring2_keyValue"));
IS995.addChild(&connect997);

Connect& connect998 =  Connect();
connect998.setNodeField(std::string("value_changed"));
connect998.setProtoField(std::string("l_ring2_changed"));
IS995.addChild(&connect998);

OrientationInterpolator994.addChild(&IS995);

ProtoBody603.addChild(&OrientationInterpolator994);

ROUTE& ROUTE999 =  ROUTE();
ROUTE999.setFromField(std::string("fraction_changed"));
ROUTE999.setFromNode(std::string("BehaviorClock"));
ROUTE999.setToField(std::string("set_fraction"));
ROUTE999.setToNode(std::string("l_ring2_OI"));
ProtoBody603.addChild(&ROUTE999);

OrientationInterpolator& OrientationInterpolator1000 =  OrientationInterpolator();
OrientationInterpolator1000.setDEF(std::string("l_ring3_OI"));
IS& IS1001 =  IS();
Connect& connect1002 =  Connect();
connect1002.setNodeField(std::string("key"));
connect1002.setProtoField(std::string("l_ring3_key"));
IS1001.addChild(&connect1002);

Connect& connect1003 =  Connect();
connect1003.setNodeField(std::string("keyValue"));
connect1003.setProtoField(std::string("l_ring3_keyValue"));
IS1001.addChild(&connect1003);

Connect& connect1004 =  Connect();
connect1004.setNodeField(std::string("value_changed"));
connect1004.setProtoField(std::string("l_ring3_changed"));
IS1001.addChild(&connect1004);

OrientationInterpolator1000.addChild(&IS1001);

ProtoBody603.addChild(&OrientationInterpolator1000);

ROUTE& ROUTE1005 =  ROUTE();
ROUTE1005.setFromField(std::string("fraction_changed"));
ROUTE1005.setFromNode(std::string("BehaviorClock"));
ROUTE1005.setToField(std::string("set_fraction"));
ROUTE1005.setToNode(std::string("l_ring3_OI"));
ProtoBody603.addChild(&ROUTE1005);

OrientationInterpolator& OrientationInterpolator1006 =  OrientationInterpolator();
OrientationInterpolator1006.setDEF(std::string("l_ring_distal_OI"));
IS& IS1007 =  IS();
Connect& connect1008 =  Connect();
connect1008.setNodeField(std::string("key"));
connect1008.setProtoField(std::string("l_ring_distal_key"));
IS1007.addChild(&connect1008);

Connect& connect1009 =  Connect();
connect1009.setNodeField(std::string("keyValue"));
connect1009.setProtoField(std::string("l_ring_distal_keyValue"));
IS1007.addChild(&connect1009);

Connect& connect1010 =  Connect();
connect1010.setNodeField(std::string("value_changed"));
connect1010.setProtoField(std::string("l_ring_distal_changed"));
IS1007.addChild(&connect1010);

OrientationInterpolator1006.addChild(&IS1007);

ProtoBody603.addChild(&OrientationInterpolator1006);

ROUTE& ROUTE1011 =  ROUTE();
ROUTE1011.setFromField(std::string("fraction_changed"));
ROUTE1011.setFromNode(std::string("BehaviorClock"));
ROUTE1011.setToField(std::string("set_fraction"));
ROUTE1011.setToNode(std::string("l_ring_distal_OI"));
ProtoBody603.addChild(&ROUTE1011);

OrientationInterpolator& OrientationInterpolator1012 =  OrientationInterpolator();
OrientationInterpolator1012.setDEF(std::string("l_ring_metacarpal_OI"));
IS& IS1013 =  IS();
Connect& connect1014 =  Connect();
connect1014.setNodeField(std::string("key"));
connect1014.setProtoField(std::string("l_ring_metacarpal_key"));
IS1013.addChild(&connect1014);

Connect& connect1015 =  Connect();
connect1015.setNodeField(std::string("keyValue"));
connect1015.setProtoField(std::string("l_ring_metacarpal_keyValue"));
IS1013.addChild(&connect1015);

Connect& connect1016 =  Connect();
connect1016.setNodeField(std::string("value_changed"));
connect1016.setProtoField(std::string("l_ring_metacarpal_changed"));
IS1013.addChild(&connect1016);

OrientationInterpolator1012.addChild(&IS1013);

ProtoBody603.addChild(&OrientationInterpolator1012);

ROUTE& ROUTE1017 =  ROUTE();
ROUTE1017.setFromField(std::string("fraction_changed"));
ROUTE1017.setFromNode(std::string("BehaviorClock"));
ROUTE1017.setToField(std::string("set_fraction"));
ROUTE1017.setToNode(std::string("l_ring_metacarpal_OI"));
ProtoBody603.addChild(&ROUTE1017);

OrientationInterpolator& OrientationInterpolator1018 =  OrientationInterpolator();
OrientationInterpolator1018.setDEF(std::string("l_ring_middle_OI"));
IS& IS1019 =  IS();
Connect& connect1020 =  Connect();
connect1020.setNodeField(std::string("key"));
connect1020.setProtoField(std::string("l_ring_middle_key"));
IS1019.addChild(&connect1020);

Connect& connect1021 =  Connect();
connect1021.setNodeField(std::string("keyValue"));
connect1021.setProtoField(std::string("l_ring_middle_keyValue"));
IS1019.addChild(&connect1021);

Connect& connect1022 =  Connect();
connect1022.setNodeField(std::string("value_changed"));
connect1022.setProtoField(std::string("l_ring_middle_changed"));
IS1019.addChild(&connect1022);

OrientationInterpolator1018.addChild(&IS1019);

ProtoBody603.addChild(&OrientationInterpolator1018);

ROUTE& ROUTE1023 =  ROUTE();
ROUTE1023.setFromField(std::string("fraction_changed"));
ROUTE1023.setFromNode(std::string("BehaviorClock"));
ROUTE1023.setToField(std::string("set_fraction"));
ROUTE1023.setToNode(std::string("l_ring_middle_OI"));
ProtoBody603.addChild(&ROUTE1023);

OrientationInterpolator& OrientationInterpolator1024 =  OrientationInterpolator();
OrientationInterpolator1024.setDEF(std::string("l_ring_proximal_OI"));
IS& IS1025 =  IS();
Connect& connect1026 =  Connect();
connect1026.setNodeField(std::string("key"));
connect1026.setProtoField(std::string("l_ring_proximal_key"));
IS1025.addChild(&connect1026);

Connect& connect1027 =  Connect();
connect1027.setNodeField(std::string("keyValue"));
connect1027.setProtoField(std::string("l_ring_proximal_keyValue"));
IS1025.addChild(&connect1027);

Connect& connect1028 =  Connect();
connect1028.setNodeField(std::string("value_changed"));
connect1028.setProtoField(std::string("l_ring_proximal_changed"));
IS1025.addChild(&connect1028);

OrientationInterpolator1024.addChild(&IS1025);

ProtoBody603.addChild(&OrientationInterpolator1024);

ROUTE& ROUTE1029 =  ROUTE();
ROUTE1029.setFromField(std::string("fraction_changed"));
ROUTE1029.setFromNode(std::string("BehaviorClock"));
ROUTE1029.setToField(std::string("set_fraction"));
ROUTE1029.setToNode(std::string("l_ring_proximal_OI"));
ProtoBody603.addChild(&ROUTE1029);

OrientationInterpolator& OrientationInterpolator1030 =  OrientationInterpolator();
OrientationInterpolator1030.setDEF(std::string("l_scapula_OI"));
IS& IS1031 =  IS();
Connect& connect1032 =  Connect();
connect1032.setNodeField(std::string("key"));
connect1032.setProtoField(std::string("l_scapula_key"));
IS1031.addChild(&connect1032);

Connect& connect1033 =  Connect();
connect1033.setNodeField(std::string("keyValue"));
connect1033.setProtoField(std::string("l_scapula_keyValue"));
IS1031.addChild(&connect1033);

Connect& connect1034 =  Connect();
connect1034.setNodeField(std::string("value_changed"));
connect1034.setProtoField(std::string("l_scapula_changed"));
IS1031.addChild(&connect1034);

OrientationInterpolator1030.addChild(&IS1031);

ProtoBody603.addChild(&OrientationInterpolator1030);

ROUTE& ROUTE1035 =  ROUTE();
ROUTE1035.setFromField(std::string("fraction_changed"));
ROUTE1035.setFromNode(std::string("BehaviorClock"));
ROUTE1035.setToField(std::string("set_fraction"));
ROUTE1035.setToNode(std::string("l_scapula_OI"));
ProtoBody603.addChild(&ROUTE1035);

OrientationInterpolator& OrientationInterpolator1036 =  OrientationInterpolator();
OrientationInterpolator1036.setDEF(std::string("l_shoulder_OI"));
IS& IS1037 =  IS();
Connect& connect1038 =  Connect();
connect1038.setNodeField(std::string("key"));
connect1038.setProtoField(std::string("l_shoulder_key"));
IS1037.addChild(&connect1038);

Connect& connect1039 =  Connect();
connect1039.setNodeField(std::string("keyValue"));
connect1039.setProtoField(std::string("l_shoulder_keyValue"));
IS1037.addChild(&connect1039);

Connect& connect1040 =  Connect();
connect1040.setNodeField(std::string("value_changed"));
connect1040.setProtoField(std::string("l_shoulder_changed"));
IS1037.addChild(&connect1040);

OrientationInterpolator1036.addChild(&IS1037);

ProtoBody603.addChild(&OrientationInterpolator1036);

ROUTE& ROUTE1041 =  ROUTE();
ROUTE1041.setFromField(std::string("fraction_changed"));
ROUTE1041.setFromNode(std::string("BehaviorClock"));
ROUTE1041.setToField(std::string("set_fraction"));
ROUTE1041.setToNode(std::string("l_shoulder_OI"));
ProtoBody603.addChild(&ROUTE1041);

OrientationInterpolator& OrientationInterpolator1042 =  OrientationInterpolator();
OrientationInterpolator1042.setDEF(std::string("l_sternoclavicular_OI"));
IS& IS1043 =  IS();
Connect& connect1044 =  Connect();
connect1044.setNodeField(std::string("key"));
connect1044.setProtoField(std::string("l_sternoclavicular_key"));
IS1043.addChild(&connect1044);

Connect& connect1045 =  Connect();
connect1045.setNodeField(std::string("keyValue"));
connect1045.setProtoField(std::string("l_sternoclavicular_keyValue"));
IS1043.addChild(&connect1045);

Connect& connect1046 =  Connect();
connect1046.setNodeField(std::string("value_changed"));
connect1046.setProtoField(std::string("l_sternoclavicular_changed"));
IS1043.addChild(&connect1046);

OrientationInterpolator1042.addChild(&IS1043);

ProtoBody603.addChild(&OrientationInterpolator1042);

ROUTE& ROUTE1047 =  ROUTE();
ROUTE1047.setFromField(std::string("fraction_changed"));
ROUTE1047.setFromNode(std::string("BehaviorClock"));
ROUTE1047.setToField(std::string("set_fraction"));
ROUTE1047.setToNode(std::string("l_sternoclavicular_OI"));
ProtoBody603.addChild(&ROUTE1047);

OrientationInterpolator& OrientationInterpolator1048 =  OrientationInterpolator();
OrientationInterpolator1048.setDEF(std::string("l_subtalar_OI"));
IS& IS1049 =  IS();
Connect& connect1050 =  Connect();
connect1050.setNodeField(std::string("key"));
connect1050.setProtoField(std::string("l_subtalar_key"));
IS1049.addChild(&connect1050);

Connect& connect1051 =  Connect();
connect1051.setNodeField(std::string("keyValue"));
connect1051.setProtoField(std::string("l_subtalar_keyValue"));
IS1049.addChild(&connect1051);

Connect& connect1052 =  Connect();
connect1052.setNodeField(std::string("value_changed"));
connect1052.setProtoField(std::string("l_subtalar_changed"));
IS1049.addChild(&connect1052);

OrientationInterpolator1048.addChild(&IS1049);

ProtoBody603.addChild(&OrientationInterpolator1048);

ROUTE& ROUTE1053 =  ROUTE();
ROUTE1053.setFromField(std::string("fraction_changed"));
ROUTE1053.setFromNode(std::string("BehaviorClock"));
ROUTE1053.setToField(std::string("set_fraction"));
ROUTE1053.setToNode(std::string("l_subtalar_OI"));
ProtoBody603.addChild(&ROUTE1053);

OrientationInterpolator& OrientationInterpolator1054 =  OrientationInterpolator();
OrientationInterpolator1054.setDEF(std::string("l_thigh_OI"));
IS& IS1055 =  IS();
Connect& connect1056 =  Connect();
connect1056.setNodeField(std::string("key"));
connect1056.setProtoField(std::string("l_thigh_key"));
IS1055.addChild(&connect1056);

Connect& connect1057 =  Connect();
connect1057.setNodeField(std::string("keyValue"));
connect1057.setProtoField(std::string("l_thigh_keyValue"));
IS1055.addChild(&connect1057);

Connect& connect1058 =  Connect();
connect1058.setNodeField(std::string("value_changed"));
connect1058.setProtoField(std::string("l_thigh_changed"));
IS1055.addChild(&connect1058);

OrientationInterpolator1054.addChild(&IS1055);

ProtoBody603.addChild(&OrientationInterpolator1054);

ROUTE& ROUTE1059 =  ROUTE();
ROUTE1059.setFromField(std::string("fraction_changed"));
ROUTE1059.setFromNode(std::string("BehaviorClock"));
ROUTE1059.setToField(std::string("set_fraction"));
ROUTE1059.setToNode(std::string("l_thigh_OI"));
ProtoBody603.addChild(&ROUTE1059);

OrientationInterpolator& OrientationInterpolator1060 =  OrientationInterpolator();
OrientationInterpolator1060.setDEF(std::string("l_thumb1_OI"));
IS& IS1061 =  IS();
Connect& connect1062 =  Connect();
connect1062.setNodeField(std::string("key"));
connect1062.setProtoField(std::string("l_thumb1_key"));
IS1061.addChild(&connect1062);

Connect& connect1063 =  Connect();
connect1063.setNodeField(std::string("keyValue"));
connect1063.setProtoField(std::string("l_thumb1_keyValue"));
IS1061.addChild(&connect1063);

Connect& connect1064 =  Connect();
connect1064.setNodeField(std::string("value_changed"));
connect1064.setProtoField(std::string("l_thumb1_changed"));
IS1061.addChild(&connect1064);

OrientationInterpolator1060.addChild(&IS1061);

ProtoBody603.addChild(&OrientationInterpolator1060);

ROUTE& ROUTE1065 =  ROUTE();
ROUTE1065.setFromField(std::string("fraction_changed"));
ROUTE1065.setFromNode(std::string("BehaviorClock"));
ROUTE1065.setToField(std::string("set_fraction"));
ROUTE1065.setToNode(std::string("l_thumb1_OI"));
ProtoBody603.addChild(&ROUTE1065);

OrientationInterpolator& OrientationInterpolator1066 =  OrientationInterpolator();
OrientationInterpolator1066.setDEF(std::string("l_thumb2_OI"));
IS& IS1067 =  IS();
Connect& connect1068 =  Connect();
connect1068.setNodeField(std::string("key"));
connect1068.setProtoField(std::string("l_thumb2_key"));
IS1067.addChild(&connect1068);

Connect& connect1069 =  Connect();
connect1069.setNodeField(std::string("keyValue"));
connect1069.setProtoField(std::string("l_thumb2_keyValue"));
IS1067.addChild(&connect1069);

Connect& connect1070 =  Connect();
connect1070.setNodeField(std::string("value_changed"));
connect1070.setProtoField(std::string("l_thumb2_changed"));
IS1067.addChild(&connect1070);

OrientationInterpolator1066.addChild(&IS1067);

ProtoBody603.addChild(&OrientationInterpolator1066);

ROUTE& ROUTE1071 =  ROUTE();
ROUTE1071.setFromField(std::string("fraction_changed"));
ROUTE1071.setFromNode(std::string("BehaviorClock"));
ROUTE1071.setToField(std::string("set_fraction"));
ROUTE1071.setToNode(std::string("l_thumb2_OI"));
ProtoBody603.addChild(&ROUTE1071);

OrientationInterpolator& OrientationInterpolator1072 =  OrientationInterpolator();
OrientationInterpolator1072.setDEF(std::string("l_thumb3_OI"));
IS& IS1073 =  IS();
Connect& connect1074 =  Connect();
connect1074.setNodeField(std::string("key"));
connect1074.setProtoField(std::string("l_thumb3_key"));
IS1073.addChild(&connect1074);

Connect& connect1075 =  Connect();
connect1075.setNodeField(std::string("keyValue"));
connect1075.setProtoField(std::string("l_thumb3_keyValue"));
IS1073.addChild(&connect1075);

Connect& connect1076 =  Connect();
connect1076.setNodeField(std::string("value_changed"));
connect1076.setProtoField(std::string("l_thumb3_changed"));
IS1073.addChild(&connect1076);

OrientationInterpolator1072.addChild(&IS1073);

ProtoBody603.addChild(&OrientationInterpolator1072);

ROUTE& ROUTE1077 =  ROUTE();
ROUTE1077.setFromField(std::string("fraction_changed"));
ROUTE1077.setFromNode(std::string("BehaviorClock"));
ROUTE1077.setToField(std::string("set_fraction"));
ROUTE1077.setToNode(std::string("l_thumb3_OI"));
ProtoBody603.addChild(&ROUTE1077);

OrientationInterpolator& OrientationInterpolator1078 =  OrientationInterpolator();
OrientationInterpolator1078.setDEF(std::string("l_thumb_distal_OI"));
IS& IS1079 =  IS();
Connect& connect1080 =  Connect();
connect1080.setNodeField(std::string("key"));
connect1080.setProtoField(std::string("l_thumb_distal_key"));
IS1079.addChild(&connect1080);

Connect& connect1081 =  Connect();
connect1081.setNodeField(std::string("keyValue"));
connect1081.setProtoField(std::string("l_thumb_distal_keyValue"));
IS1079.addChild(&connect1081);

Connect& connect1082 =  Connect();
connect1082.setNodeField(std::string("value_changed"));
connect1082.setProtoField(std::string("l_thumb_distal_changed"));
IS1079.addChild(&connect1082);

OrientationInterpolator1078.addChild(&IS1079);

ProtoBody603.addChild(&OrientationInterpolator1078);

ROUTE& ROUTE1083 =  ROUTE();
ROUTE1083.setFromField(std::string("fraction_changed"));
ROUTE1083.setFromNode(std::string("BehaviorClock"));
ROUTE1083.setToField(std::string("set_fraction"));
ROUTE1083.setToNode(std::string("l_thumb_distal_OI"));
ProtoBody603.addChild(&ROUTE1083);

OrientationInterpolator& OrientationInterpolator1084 =  OrientationInterpolator();
OrientationInterpolator1084.setDEF(std::string("l_thumb_metacarpal_OI"));
IS& IS1085 =  IS();
Connect& connect1086 =  Connect();
connect1086.setNodeField(std::string("key"));
connect1086.setProtoField(std::string("l_thumb_metacarpal_key"));
IS1085.addChild(&connect1086);

Connect& connect1087 =  Connect();
connect1087.setNodeField(std::string("keyValue"));
connect1087.setProtoField(std::string("l_thumb_metacarpal_keyValue"));
IS1085.addChild(&connect1087);

Connect& connect1088 =  Connect();
connect1088.setNodeField(std::string("value_changed"));
connect1088.setProtoField(std::string("l_thumb_metacarpal_changed"));
IS1085.addChild(&connect1088);

OrientationInterpolator1084.addChild(&IS1085);

ProtoBody603.addChild(&OrientationInterpolator1084);

ROUTE& ROUTE1089 =  ROUTE();
ROUTE1089.setFromField(std::string("fraction_changed"));
ROUTE1089.setFromNode(std::string("BehaviorClock"));
ROUTE1089.setToField(std::string("set_fraction"));
ROUTE1089.setToNode(std::string("l_thumb_metacarpal_OI"));
ProtoBody603.addChild(&ROUTE1089);

OrientationInterpolator& OrientationInterpolator1090 =  OrientationInterpolator();
OrientationInterpolator1090.setDEF(std::string("l_thumb_proximal_OI"));
IS& IS1091 =  IS();
Connect& connect1092 =  Connect();
connect1092.setNodeField(std::string("key"));
connect1092.setProtoField(std::string("l_thumb_proximal_key"));
IS1091.addChild(&connect1092);

Connect& connect1093 =  Connect();
connect1093.setNodeField(std::string("keyValue"));
connect1093.setProtoField(std::string("l_thumb_proximal_keyValue"));
IS1091.addChild(&connect1093);

Connect& connect1094 =  Connect();
connect1094.setNodeField(std::string("value_changed"));
connect1094.setProtoField(std::string("l_thumb_proximal_changed"));
IS1091.addChild(&connect1094);

OrientationInterpolator1090.addChild(&IS1091);

ProtoBody603.addChild(&OrientationInterpolator1090);

ROUTE& ROUTE1095 =  ROUTE();
ROUTE1095.setFromField(std::string("fraction_changed"));
ROUTE1095.setFromNode(std::string("BehaviorClock"));
ROUTE1095.setToField(std::string("set_fraction"));
ROUTE1095.setToNode(std::string("l_thumb_proximal_OI"));
ProtoBody603.addChild(&ROUTE1095);

OrientationInterpolator& OrientationInterpolator1096 =  OrientationInterpolator();
OrientationInterpolator1096.setDEF(std::string("l_upperarm_OI"));
IS& IS1097 =  IS();
Connect& connect1098 =  Connect();
connect1098.setNodeField(std::string("key"));
connect1098.setProtoField(std::string("l_upperarm_key"));
IS1097.addChild(&connect1098);

Connect& connect1099 =  Connect();
connect1099.setNodeField(std::string("keyValue"));
connect1099.setProtoField(std::string("l_upperarm_keyValue"));
IS1097.addChild(&connect1099);

Connect& connect1100 =  Connect();
connect1100.setNodeField(std::string("value_changed"));
connect1100.setProtoField(std::string("l_upperarm_changed"));
IS1097.addChild(&connect1100);

OrientationInterpolator1096.addChild(&IS1097);

ProtoBody603.addChild(&OrientationInterpolator1096);

ROUTE& ROUTE1101 =  ROUTE();
ROUTE1101.setFromField(std::string("fraction_changed"));
ROUTE1101.setFromNode(std::string("BehaviorClock"));
ROUTE1101.setToField(std::string("set_fraction"));
ROUTE1101.setToNode(std::string("l_upperarm_OI"));
ProtoBody603.addChild(&ROUTE1101);

OrientationInterpolator& OrientationInterpolator1102 =  OrientationInterpolator();
OrientationInterpolator1102.setDEF(std::string("l_wrist_OI"));
IS& IS1103 =  IS();
Connect& connect1104 =  Connect();
connect1104.setNodeField(std::string("key"));
connect1104.setProtoField(std::string("l_wrist_key"));
IS1103.addChild(&connect1104);

Connect& connect1105 =  Connect();
connect1105.setNodeField(std::string("keyValue"));
connect1105.setProtoField(std::string("l_wrist_keyValue"));
IS1103.addChild(&connect1105);

Connect& connect1106 =  Connect();
connect1106.setNodeField(std::string("value_changed"));
connect1106.setProtoField(std::string("l_wrist_changed"));
IS1103.addChild(&connect1106);

OrientationInterpolator1102.addChild(&IS1103);

ProtoBody603.addChild(&OrientationInterpolator1102);

ROUTE& ROUTE1107 =  ROUTE();
ROUTE1107.setFromField(std::string("fraction_changed"));
ROUTE1107.setFromNode(std::string("BehaviorClock"));
ROUTE1107.setToField(std::string("set_fraction"));
ROUTE1107.setToNode(std::string("l_wrist_OI"));
ProtoBody603.addChild(&ROUTE1107);

OrientationInterpolator& OrientationInterpolator1108 =  OrientationInterpolator();
OrientationInterpolator1108.setDEF(std::string("pelvis_OI"));
IS& IS1109 =  IS();
Connect& connect1110 =  Connect();
connect1110.setNodeField(std::string("key"));
connect1110.setProtoField(std::string("pelvis_key"));
IS1109.addChild(&connect1110);

Connect& connect1111 =  Connect();
connect1111.setNodeField(std::string("keyValue"));
connect1111.setProtoField(std::string("pelvis_keyValue"));
IS1109.addChild(&connect1111);

Connect& connect1112 =  Connect();
connect1112.setNodeField(std::string("value_changed"));
connect1112.setProtoField(std::string("pelvis_changed"));
IS1109.addChild(&connect1112);

OrientationInterpolator1108.addChild(&IS1109);

ProtoBody603.addChild(&OrientationInterpolator1108);

ROUTE& ROUTE1113 =  ROUTE();
ROUTE1113.setFromField(std::string("fraction_changed"));
ROUTE1113.setFromNode(std::string("BehaviorClock"));
ROUTE1113.setToField(std::string("set_fraction"));
ROUTE1113.setToNode(std::string("pelvis_OI"));
ProtoBody603.addChild(&ROUTE1113);

OrientationInterpolator& OrientationInterpolator1114 =  OrientationInterpolator();
OrientationInterpolator1114.setDEF(std::string("r_acromioclavicular_OI"));
IS& IS1115 =  IS();
Connect& connect1116 =  Connect();
connect1116.setNodeField(std::string("key"));
connect1116.setProtoField(std::string("r_acromioclavicular_key"));
IS1115.addChild(&connect1116);

Connect& connect1117 =  Connect();
connect1117.setNodeField(std::string("keyValue"));
connect1117.setProtoField(std::string("r_acromioclavicular_keyValue"));
IS1115.addChild(&connect1117);

Connect& connect1118 =  Connect();
connect1118.setNodeField(std::string("value_changed"));
connect1118.setProtoField(std::string("r_acromioclavicular_changed"));
IS1115.addChild(&connect1118);

OrientationInterpolator1114.addChild(&IS1115);

ProtoBody603.addChild(&OrientationInterpolator1114);

ROUTE& ROUTE1119 =  ROUTE();
ROUTE1119.setFromField(std::string("fraction_changed"));
ROUTE1119.setFromNode(std::string("BehaviorClock"));
ROUTE1119.setToField(std::string("set_fraction"));
ROUTE1119.setToNode(std::string("r_acromioclavicular_OI"));
ProtoBody603.addChild(&ROUTE1119);

OrientationInterpolator& OrientationInterpolator1120 =  OrientationInterpolator();
OrientationInterpolator1120.setDEF(std::string("r_ankle_OI"));
IS& IS1121 =  IS();
Connect& connect1122 =  Connect();
connect1122.setNodeField(std::string("key"));
connect1122.setProtoField(std::string("r_ankle_key"));
IS1121.addChild(&connect1122);

Connect& connect1123 =  Connect();
connect1123.setNodeField(std::string("keyValue"));
connect1123.setProtoField(std::string("r_ankle_keyValue"));
IS1121.addChild(&connect1123);

Connect& connect1124 =  Connect();
connect1124.setNodeField(std::string("value_changed"));
connect1124.setProtoField(std::string("r_ankle_changed"));
IS1121.addChild(&connect1124);

OrientationInterpolator1120.addChild(&IS1121);

ProtoBody603.addChild(&OrientationInterpolator1120);

ROUTE& ROUTE1125 =  ROUTE();
ROUTE1125.setFromField(std::string("fraction_changed"));
ROUTE1125.setFromNode(std::string("BehaviorClock"));
ROUTE1125.setToField(std::string("set_fraction"));
ROUTE1125.setToNode(std::string("r_ankle_OI"));
ProtoBody603.addChild(&ROUTE1125);

OrientationInterpolator& OrientationInterpolator1126 =  OrientationInterpolator();
OrientationInterpolator1126.setDEF(std::string("r_calf_OI"));
IS& IS1127 =  IS();
Connect& connect1128 =  Connect();
connect1128.setNodeField(std::string("key"));
connect1128.setProtoField(std::string("r_calf_key"));
IS1127.addChild(&connect1128);

Connect& connect1129 =  Connect();
connect1129.setNodeField(std::string("keyValue"));
connect1129.setProtoField(std::string("r_calf_keyValue"));
IS1127.addChild(&connect1129);

Connect& connect1130 =  Connect();
connect1130.setNodeField(std::string("value_changed"));
connect1130.setProtoField(std::string("r_calf_changed"));
IS1127.addChild(&connect1130);

OrientationInterpolator1126.addChild(&IS1127);

ProtoBody603.addChild(&OrientationInterpolator1126);

ROUTE& ROUTE1131 =  ROUTE();
ROUTE1131.setFromField(std::string("fraction_changed"));
ROUTE1131.setFromNode(std::string("BehaviorClock"));
ROUTE1131.setToField(std::string("set_fraction"));
ROUTE1131.setToNode(std::string("r_calf_OI"));
ProtoBody603.addChild(&ROUTE1131);

OrientationInterpolator& OrientationInterpolator1132 =  OrientationInterpolator();
OrientationInterpolator1132.setDEF(std::string("r_clavicle_OI"));
IS& IS1133 =  IS();
Connect& connect1134 =  Connect();
connect1134.setNodeField(std::string("key"));
connect1134.setProtoField(std::string("r_clavicle_key"));
IS1133.addChild(&connect1134);

Connect& connect1135 =  Connect();
connect1135.setNodeField(std::string("keyValue"));
connect1135.setProtoField(std::string("r_clavicle_keyValue"));
IS1133.addChild(&connect1135);

Connect& connect1136 =  Connect();
connect1136.setNodeField(std::string("value_changed"));
connect1136.setProtoField(std::string("r_clavicle_changed"));
IS1133.addChild(&connect1136);

OrientationInterpolator1132.addChild(&IS1133);

ProtoBody603.addChild(&OrientationInterpolator1132);

ROUTE& ROUTE1137 =  ROUTE();
ROUTE1137.setFromField(std::string("fraction_changed"));
ROUTE1137.setFromNode(std::string("BehaviorClock"));
ROUTE1137.setToField(std::string("set_fraction"));
ROUTE1137.setToNode(std::string("r_clavicle_OI"));
ProtoBody603.addChild(&ROUTE1137);

OrientationInterpolator& OrientationInterpolator1138 =  OrientationInterpolator();
OrientationInterpolator1138.setDEF(std::string("r_elbow_OI"));
IS& IS1139 =  IS();
Connect& connect1140 =  Connect();
connect1140.setNodeField(std::string("key"));
connect1140.setProtoField(std::string("r_elbow_key"));
IS1139.addChild(&connect1140);

Connect& connect1141 =  Connect();
connect1141.setNodeField(std::string("keyValue"));
connect1141.setProtoField(std::string("r_elbow_keyValue"));
IS1139.addChild(&connect1141);

Connect& connect1142 =  Connect();
connect1142.setNodeField(std::string("value_changed"));
connect1142.setProtoField(std::string("r_elbow_changed"));
IS1139.addChild(&connect1142);

OrientationInterpolator1138.addChild(&IS1139);

ProtoBody603.addChild(&OrientationInterpolator1138);

ROUTE& ROUTE1143 =  ROUTE();
ROUTE1143.setFromField(std::string("fraction_changed"));
ROUTE1143.setFromNode(std::string("BehaviorClock"));
ROUTE1143.setToField(std::string("set_fraction"));
ROUTE1143.setToNode(std::string("r_elbow_OI"));
ProtoBody603.addChild(&ROUTE1143);

OrientationInterpolator& OrientationInterpolator1144 =  OrientationInterpolator();
OrientationInterpolator1144.setDEF(std::string("r_eyeball_OI"));
IS& IS1145 =  IS();
Connect& connect1146 =  Connect();
connect1146.setNodeField(std::string("key"));
connect1146.setProtoField(std::string("r_eyeball_key"));
IS1145.addChild(&connect1146);

Connect& connect1147 =  Connect();
connect1147.setNodeField(std::string("keyValue"));
connect1147.setProtoField(std::string("r_eyeball_keyValue"));
IS1145.addChild(&connect1147);

Connect& connect1148 =  Connect();
connect1148.setNodeField(std::string("value_changed"));
connect1148.setProtoField(std::string("r_eyeball_changed"));
IS1145.addChild(&connect1148);

OrientationInterpolator1144.addChild(&IS1145);

ProtoBody603.addChild(&OrientationInterpolator1144);

ROUTE& ROUTE1149 =  ROUTE();
ROUTE1149.setFromField(std::string("fraction_changed"));
ROUTE1149.setFromNode(std::string("BehaviorClock"));
ROUTE1149.setToField(std::string("set_fraction"));
ROUTE1149.setToNode(std::string("r_eyeball_OI"));
ProtoBody603.addChild(&ROUTE1149);

OrientationInterpolator& OrientationInterpolator1150 =  OrientationInterpolator();
OrientationInterpolator1150.setDEF(std::string("r_eyeball_joint_OI"));
IS& IS1151 =  IS();
Connect& connect1152 =  Connect();
connect1152.setNodeField(std::string("key"));
connect1152.setProtoField(std::string("r_eyeball_joint_key"));
IS1151.addChild(&connect1152);

Connect& connect1153 =  Connect();
connect1153.setNodeField(std::string("keyValue"));
connect1153.setProtoField(std::string("r_eyeball_joint_keyValue"));
IS1151.addChild(&connect1153);

Connect& connect1154 =  Connect();
connect1154.setNodeField(std::string("value_changed"));
connect1154.setProtoField(std::string("r_eyeball_joint_changed"));
IS1151.addChild(&connect1154);

OrientationInterpolator1150.addChild(&IS1151);

ProtoBody603.addChild(&OrientationInterpolator1150);

ROUTE& ROUTE1155 =  ROUTE();
ROUTE1155.setFromField(std::string("fraction_changed"));
ROUTE1155.setFromNode(std::string("BehaviorClock"));
ROUTE1155.setToField(std::string("set_fraction"));
ROUTE1155.setToNode(std::string("r_eyeball_joint_OI"));
ProtoBody603.addChild(&ROUTE1155);

OrientationInterpolator& OrientationInterpolator1156 =  OrientationInterpolator();
OrientationInterpolator1156.setDEF(std::string("r_eyebrow_OI"));
IS& IS1157 =  IS();
Connect& connect1158 =  Connect();
connect1158.setNodeField(std::string("key"));
connect1158.setProtoField(std::string("r_eyebrow_key"));
IS1157.addChild(&connect1158);

Connect& connect1159 =  Connect();
connect1159.setNodeField(std::string("keyValue"));
connect1159.setProtoField(std::string("r_eyebrow_keyValue"));
IS1157.addChild(&connect1159);

Connect& connect1160 =  Connect();
connect1160.setNodeField(std::string("value_changed"));
connect1160.setProtoField(std::string("r_eyebrow_changed"));
IS1157.addChild(&connect1160);

OrientationInterpolator1156.addChild(&IS1157);

ProtoBody603.addChild(&OrientationInterpolator1156);

ROUTE& ROUTE1161 =  ROUTE();
ROUTE1161.setFromField(std::string("fraction_changed"));
ROUTE1161.setFromNode(std::string("BehaviorClock"));
ROUTE1161.setToField(std::string("set_fraction"));
ROUTE1161.setToNode(std::string("r_eyebrow_OI"));
ProtoBody603.addChild(&ROUTE1161);

OrientationInterpolator& OrientationInterpolator1162 =  OrientationInterpolator();
OrientationInterpolator1162.setDEF(std::string("r_eyebrow_joint_OI"));
IS& IS1163 =  IS();
Connect& connect1164 =  Connect();
connect1164.setNodeField(std::string("key"));
connect1164.setProtoField(std::string("r_eyebrow_joint_key"));
IS1163.addChild(&connect1164);

Connect& connect1165 =  Connect();
connect1165.setNodeField(std::string("keyValue"));
connect1165.setProtoField(std::string("r_eyebrow_joint_keyValue"));
IS1163.addChild(&connect1165);

Connect& connect1166 =  Connect();
connect1166.setNodeField(std::string("value_changed"));
connect1166.setProtoField(std::string("r_eyebrow_joint_changed"));
IS1163.addChild(&connect1166);

OrientationInterpolator1162.addChild(&IS1163);

ProtoBody603.addChild(&OrientationInterpolator1162);

ROUTE& ROUTE1167 =  ROUTE();
ROUTE1167.setFromField(std::string("fraction_changed"));
ROUTE1167.setFromNode(std::string("BehaviorClock"));
ROUTE1167.setToField(std::string("set_fraction"));
ROUTE1167.setToNode(std::string("r_eyebrow_joint_OI"));
ProtoBody603.addChild(&ROUTE1167);

OrientationInterpolator& OrientationInterpolator1168 =  OrientationInterpolator();
OrientationInterpolator1168.setDEF(std::string("r_eyelid_OI"));
IS& IS1169 =  IS();
Connect& connect1170 =  Connect();
connect1170.setNodeField(std::string("key"));
connect1170.setProtoField(std::string("r_eyelid_key"));
IS1169.addChild(&connect1170);

Connect& connect1171 =  Connect();
connect1171.setNodeField(std::string("keyValue"));
connect1171.setProtoField(std::string("r_eyelid_keyValue"));
IS1169.addChild(&connect1171);

Connect& connect1172 =  Connect();
connect1172.setNodeField(std::string("value_changed"));
connect1172.setProtoField(std::string("r_eyelid_changed"));
IS1169.addChild(&connect1172);

OrientationInterpolator1168.addChild(&IS1169);

ProtoBody603.addChild(&OrientationInterpolator1168);

ROUTE& ROUTE1173 =  ROUTE();
ROUTE1173.setFromField(std::string("fraction_changed"));
ROUTE1173.setFromNode(std::string("BehaviorClock"));
ROUTE1173.setToField(std::string("set_fraction"));
ROUTE1173.setToNode(std::string("r_eyelid_OI"));
ProtoBody603.addChild(&ROUTE1173);

OrientationInterpolator& OrientationInterpolator1174 =  OrientationInterpolator();
OrientationInterpolator1174.setDEF(std::string("r_eyelid_joint_OI"));
IS& IS1175 =  IS();
Connect& connect1176 =  Connect();
connect1176.setNodeField(std::string("key"));
connect1176.setProtoField(std::string("r_eyelid_joint_key"));
IS1175.addChild(&connect1176);

Connect& connect1177 =  Connect();
connect1177.setNodeField(std::string("keyValue"));
connect1177.setProtoField(std::string("r_eyelid_joint_keyValue"));
IS1175.addChild(&connect1177);

Connect& connect1178 =  Connect();
connect1178.setNodeField(std::string("value_changed"));
connect1178.setProtoField(std::string("r_eyelid_joint_changed"));
IS1175.addChild(&connect1178);

OrientationInterpolator1174.addChild(&IS1175);

ProtoBody603.addChild(&OrientationInterpolator1174);

ROUTE& ROUTE1179 =  ROUTE();
ROUTE1179.setFromField(std::string("fraction_changed"));
ROUTE1179.setFromNode(std::string("BehaviorClock"));
ROUTE1179.setToField(std::string("set_fraction"));
ROUTE1179.setToNode(std::string("r_eyelid_joint_OI"));
ProtoBody603.addChild(&ROUTE1179);

OrientationInterpolator& OrientationInterpolator1180 =  OrientationInterpolator();
OrientationInterpolator1180.setDEF(std::string("r_forearm_OI"));
IS& IS1181 =  IS();
Connect& connect1182 =  Connect();
connect1182.setNodeField(std::string("key"));
connect1182.setProtoField(std::string("r_forearm_key"));
IS1181.addChild(&connect1182);

Connect& connect1183 =  Connect();
connect1183.setNodeField(std::string("keyValue"));
connect1183.setProtoField(std::string("r_forearm_keyValue"));
IS1181.addChild(&connect1183);

Connect& connect1184 =  Connect();
connect1184.setNodeField(std::string("value_changed"));
connect1184.setProtoField(std::string("r_forearm_changed"));
IS1181.addChild(&connect1184);

OrientationInterpolator1180.addChild(&IS1181);

ProtoBody603.addChild(&OrientationInterpolator1180);

ROUTE& ROUTE1185 =  ROUTE();
ROUTE1185.setFromField(std::string("fraction_changed"));
ROUTE1185.setFromNode(std::string("BehaviorClock"));
ROUTE1185.setToField(std::string("set_fraction"));
ROUTE1185.setToNode(std::string("r_forearm_OI"));
ProtoBody603.addChild(&ROUTE1185);

OrientationInterpolator& OrientationInterpolator1186 =  OrientationInterpolator();
OrientationInterpolator1186.setDEF(std::string("r_forefoot_OI"));
IS& IS1187 =  IS();
Connect& connect1188 =  Connect();
connect1188.setNodeField(std::string("key"));
connect1188.setProtoField(std::string("r_forefoot_key"));
IS1187.addChild(&connect1188);

Connect& connect1189 =  Connect();
connect1189.setNodeField(std::string("keyValue"));
connect1189.setProtoField(std::string("r_forefoot_keyValue"));
IS1187.addChild(&connect1189);

Connect& connect1190 =  Connect();
connect1190.setNodeField(std::string("value_changed"));
connect1190.setProtoField(std::string("r_forefoot_changed"));
IS1187.addChild(&connect1190);

OrientationInterpolator1186.addChild(&IS1187);

ProtoBody603.addChild(&OrientationInterpolator1186);

ROUTE& ROUTE1191 =  ROUTE();
ROUTE1191.setFromField(std::string("fraction_changed"));
ROUTE1191.setFromNode(std::string("BehaviorClock"));
ROUTE1191.setToField(std::string("set_fraction"));
ROUTE1191.setToNode(std::string("r_forefoot_OI"));
ProtoBody603.addChild(&ROUTE1191);

OrientationInterpolator& OrientationInterpolator1192 =  OrientationInterpolator();
OrientationInterpolator1192.setDEF(std::string("r_hand_OI"));
IS& IS1193 =  IS();
Connect& connect1194 =  Connect();
connect1194.setNodeField(std::string("key"));
connect1194.setProtoField(std::string("r_hand_key"));
IS1193.addChild(&connect1194);

Connect& connect1195 =  Connect();
connect1195.setNodeField(std::string("keyValue"));
connect1195.setProtoField(std::string("r_hand_keyValue"));
IS1193.addChild(&connect1195);

Connect& connect1196 =  Connect();
connect1196.setNodeField(std::string("value_changed"));
connect1196.setProtoField(std::string("r_hand_changed"));
IS1193.addChild(&connect1196);

OrientationInterpolator1192.addChild(&IS1193);

ProtoBody603.addChild(&OrientationInterpolator1192);

ROUTE& ROUTE1197 =  ROUTE();
ROUTE1197.setFromField(std::string("fraction_changed"));
ROUTE1197.setFromNode(std::string("BehaviorClock"));
ROUTE1197.setToField(std::string("set_fraction"));
ROUTE1197.setToNode(std::string("r_hand_OI"));
ProtoBody603.addChild(&ROUTE1197);

OrientationInterpolator& OrientationInterpolator1198 =  OrientationInterpolator();
OrientationInterpolator1198.setDEF(std::string("r_hindfoot_OI"));
IS& IS1199 =  IS();
Connect& connect1200 =  Connect();
connect1200.setNodeField(std::string("key"));
connect1200.setProtoField(std::string("r_hindfoot_key"));
IS1199.addChild(&connect1200);

Connect& connect1201 =  Connect();
connect1201.setNodeField(std::string("keyValue"));
connect1201.setProtoField(std::string("r_hindfoot_keyValue"));
IS1199.addChild(&connect1201);

Connect& connect1202 =  Connect();
connect1202.setNodeField(std::string("value_changed"));
connect1202.setProtoField(std::string("r_hindfoot_changed"));
IS1199.addChild(&connect1202);

OrientationInterpolator1198.addChild(&IS1199);

ProtoBody603.addChild(&OrientationInterpolator1198);

ROUTE& ROUTE1203 =  ROUTE();
ROUTE1203.setFromField(std::string("fraction_changed"));
ROUTE1203.setFromNode(std::string("BehaviorClock"));
ROUTE1203.setToField(std::string("set_fraction"));
ROUTE1203.setToNode(std::string("r_hindfoot_OI"));
ProtoBody603.addChild(&ROUTE1203);

OrientationInterpolator& OrientationInterpolator1204 =  OrientationInterpolator();
OrientationInterpolator1204.setDEF(std::string("r_hip_OI"));
IS& IS1205 =  IS();
Connect& connect1206 =  Connect();
connect1206.setNodeField(std::string("key"));
connect1206.setProtoField(std::string("r_hip_key"));
IS1205.addChild(&connect1206);

Connect& connect1207 =  Connect();
connect1207.setNodeField(std::string("keyValue"));
connect1207.setProtoField(std::string("r_hip_keyValue"));
IS1205.addChild(&connect1207);

Connect& connect1208 =  Connect();
connect1208.setNodeField(std::string("value_changed"));
connect1208.setProtoField(std::string("r_hip_changed"));
IS1205.addChild(&connect1208);

OrientationInterpolator1204.addChild(&IS1205);

ProtoBody603.addChild(&OrientationInterpolator1204);

ROUTE& ROUTE1209 =  ROUTE();
ROUTE1209.setFromField(std::string("fraction_changed"));
ROUTE1209.setFromNode(std::string("BehaviorClock"));
ROUTE1209.setToField(std::string("set_fraction"));
ROUTE1209.setToNode(std::string("r_hip_OI"));
ProtoBody603.addChild(&ROUTE1209);

OrientationInterpolator& OrientationInterpolator1210 =  OrientationInterpolator();
OrientationInterpolator1210.setDEF(std::string("r_index0_OI"));
IS& IS1211 =  IS();
Connect& connect1212 =  Connect();
connect1212.setNodeField(std::string("key"));
connect1212.setProtoField(std::string("r_index0_key"));
IS1211.addChild(&connect1212);

Connect& connect1213 =  Connect();
connect1213.setNodeField(std::string("keyValue"));
connect1213.setProtoField(std::string("r_index0_keyValue"));
IS1211.addChild(&connect1213);

Connect& connect1214 =  Connect();
connect1214.setNodeField(std::string("value_changed"));
connect1214.setProtoField(std::string("r_index0_changed"));
IS1211.addChild(&connect1214);

OrientationInterpolator1210.addChild(&IS1211);

ProtoBody603.addChild(&OrientationInterpolator1210);

ROUTE& ROUTE1215 =  ROUTE();
ROUTE1215.setFromField(std::string("fraction_changed"));
ROUTE1215.setFromNode(std::string("BehaviorClock"));
ROUTE1215.setToField(std::string("set_fraction"));
ROUTE1215.setToNode(std::string("r_index0_OI"));
ProtoBody603.addChild(&ROUTE1215);

OrientationInterpolator& OrientationInterpolator1216 =  OrientationInterpolator();
OrientationInterpolator1216.setDEF(std::string("r_index1_OI"));
IS& IS1217 =  IS();
Connect& connect1218 =  Connect();
connect1218.setNodeField(std::string("key"));
connect1218.setProtoField(std::string("r_index1_key"));
IS1217.addChild(&connect1218);

Connect& connect1219 =  Connect();
connect1219.setNodeField(std::string("keyValue"));
connect1219.setProtoField(std::string("r_index1_keyValue"));
IS1217.addChild(&connect1219);

Connect& connect1220 =  Connect();
connect1220.setNodeField(std::string("value_changed"));
connect1220.setProtoField(std::string("r_index1_changed"));
IS1217.addChild(&connect1220);

OrientationInterpolator1216.addChild(&IS1217);

ProtoBody603.addChild(&OrientationInterpolator1216);

ROUTE& ROUTE1221 =  ROUTE();
ROUTE1221.setFromField(std::string("fraction_changed"));
ROUTE1221.setFromNode(std::string("BehaviorClock"));
ROUTE1221.setToField(std::string("set_fraction"));
ROUTE1221.setToNode(std::string("r_index1_OI"));
ProtoBody603.addChild(&ROUTE1221);

OrientationInterpolator& OrientationInterpolator1222 =  OrientationInterpolator();
OrientationInterpolator1222.setDEF(std::string("r_index2_OI"));
IS& IS1223 =  IS();
Connect& connect1224 =  Connect();
connect1224.setNodeField(std::string("key"));
connect1224.setProtoField(std::string("r_index2_key"));
IS1223.addChild(&connect1224);

Connect& connect1225 =  Connect();
connect1225.setNodeField(std::string("keyValue"));
connect1225.setProtoField(std::string("r_index2_keyValue"));
IS1223.addChild(&connect1225);

Connect& connect1226 =  Connect();
connect1226.setNodeField(std::string("value_changed"));
connect1226.setProtoField(std::string("r_index2_changed"));
IS1223.addChild(&connect1226);

OrientationInterpolator1222.addChild(&IS1223);

ProtoBody603.addChild(&OrientationInterpolator1222);

ROUTE& ROUTE1227 =  ROUTE();
ROUTE1227.setFromField(std::string("fraction_changed"));
ROUTE1227.setFromNode(std::string("BehaviorClock"));
ROUTE1227.setToField(std::string("set_fraction"));
ROUTE1227.setToNode(std::string("r_index2_OI"));
ProtoBody603.addChild(&ROUTE1227);

OrientationInterpolator& OrientationInterpolator1228 =  OrientationInterpolator();
OrientationInterpolator1228.setDEF(std::string("r_index3_OI"));
IS& IS1229 =  IS();
Connect& connect1230 =  Connect();
connect1230.setNodeField(std::string("key"));
connect1230.setProtoField(std::string("r_index3_key"));
IS1229.addChild(&connect1230);

Connect& connect1231 =  Connect();
connect1231.setNodeField(std::string("keyValue"));
connect1231.setProtoField(std::string("r_index3_keyValue"));
IS1229.addChild(&connect1231);

Connect& connect1232 =  Connect();
connect1232.setNodeField(std::string("value_changed"));
connect1232.setProtoField(std::string("r_index3_changed"));
IS1229.addChild(&connect1232);

OrientationInterpolator1228.addChild(&IS1229);

ProtoBody603.addChild(&OrientationInterpolator1228);

ROUTE& ROUTE1233 =  ROUTE();
ROUTE1233.setFromField(std::string("fraction_changed"));
ROUTE1233.setFromNode(std::string("BehaviorClock"));
ROUTE1233.setToField(std::string("set_fraction"));
ROUTE1233.setToNode(std::string("r_index3_OI"));
ProtoBody603.addChild(&ROUTE1233);

OrientationInterpolator& OrientationInterpolator1234 =  OrientationInterpolator();
OrientationInterpolator1234.setDEF(std::string("r_index_distal_OI"));
IS& IS1235 =  IS();
Connect& connect1236 =  Connect();
connect1236.setNodeField(std::string("key"));
connect1236.setProtoField(std::string("r_index_distal_key"));
IS1235.addChild(&connect1236);

Connect& connect1237 =  Connect();
connect1237.setNodeField(std::string("keyValue"));
connect1237.setProtoField(std::string("r_index_distal_keyValue"));
IS1235.addChild(&connect1237);

Connect& connect1238 =  Connect();
connect1238.setNodeField(std::string("value_changed"));
connect1238.setProtoField(std::string("r_index_distal_changed"));
IS1235.addChild(&connect1238);

OrientationInterpolator1234.addChild(&IS1235);

ProtoBody603.addChild(&OrientationInterpolator1234);

ROUTE& ROUTE1239 =  ROUTE();
ROUTE1239.setFromField(std::string("fraction_changed"));
ROUTE1239.setFromNode(std::string("BehaviorClock"));
ROUTE1239.setToField(std::string("set_fraction"));
ROUTE1239.setToNode(std::string("r_index_distal_OI"));
ProtoBody603.addChild(&ROUTE1239);

OrientationInterpolator& OrientationInterpolator1240 =  OrientationInterpolator();
OrientationInterpolator1240.setDEF(std::string("r_index_metacarpal_OI"));
IS& IS1241 =  IS();
Connect& connect1242 =  Connect();
connect1242.setNodeField(std::string("key"));
connect1242.setProtoField(std::string("r_index_metacarpal_key"));
IS1241.addChild(&connect1242);

Connect& connect1243 =  Connect();
connect1243.setNodeField(std::string("keyValue"));
connect1243.setProtoField(std::string("r_index_metacarpal_keyValue"));
IS1241.addChild(&connect1243);

Connect& connect1244 =  Connect();
connect1244.setNodeField(std::string("value_changed"));
connect1244.setProtoField(std::string("r_index_metacarpal_changed"));
IS1241.addChild(&connect1244);

OrientationInterpolator1240.addChild(&IS1241);

ProtoBody603.addChild(&OrientationInterpolator1240);

ROUTE& ROUTE1245 =  ROUTE();
ROUTE1245.setFromField(std::string("fraction_changed"));
ROUTE1245.setFromNode(std::string("BehaviorClock"));
ROUTE1245.setToField(std::string("set_fraction"));
ROUTE1245.setToNode(std::string("r_index_metacarpal_OI"));
ProtoBody603.addChild(&ROUTE1245);

OrientationInterpolator& OrientationInterpolator1246 =  OrientationInterpolator();
OrientationInterpolator1246.setDEF(std::string("r_index_middle_OI"));
IS& IS1247 =  IS();
Connect& connect1248 =  Connect();
connect1248.setNodeField(std::string("key"));
connect1248.setProtoField(std::string("r_index_middle_key"));
IS1247.addChild(&connect1248);

Connect& connect1249 =  Connect();
connect1249.setNodeField(std::string("keyValue"));
connect1249.setProtoField(std::string("r_index_middle_keyValue"));
IS1247.addChild(&connect1249);

Connect& connect1250 =  Connect();
connect1250.setNodeField(std::string("value_changed"));
connect1250.setProtoField(std::string("r_index_middle_changed"));
IS1247.addChild(&connect1250);

OrientationInterpolator1246.addChild(&IS1247);

ProtoBody603.addChild(&OrientationInterpolator1246);

ROUTE& ROUTE1251 =  ROUTE();
ROUTE1251.setFromField(std::string("fraction_changed"));
ROUTE1251.setFromNode(std::string("BehaviorClock"));
ROUTE1251.setToField(std::string("set_fraction"));
ROUTE1251.setToNode(std::string("r_index_middle_OI"));
ProtoBody603.addChild(&ROUTE1251);

OrientationInterpolator& OrientationInterpolator1252 =  OrientationInterpolator();
OrientationInterpolator1252.setDEF(std::string("r_index_proximal_OI"));
IS& IS1253 =  IS();
Connect& connect1254 =  Connect();
connect1254.setNodeField(std::string("key"));
connect1254.setProtoField(std::string("r_index_proximal_key"));
IS1253.addChild(&connect1254);

Connect& connect1255 =  Connect();
connect1255.setNodeField(std::string("keyValue"));
connect1255.setProtoField(std::string("r_index_proximal_keyValue"));
IS1253.addChild(&connect1255);

Connect& connect1256 =  Connect();
connect1256.setNodeField(std::string("value_changed"));
connect1256.setProtoField(std::string("r_index_proximal_changed"));
IS1253.addChild(&connect1256);

OrientationInterpolator1252.addChild(&IS1253);

ProtoBody603.addChild(&OrientationInterpolator1252);

ROUTE& ROUTE1257 =  ROUTE();
ROUTE1257.setFromField(std::string("fraction_changed"));
ROUTE1257.setFromNode(std::string("BehaviorClock"));
ROUTE1257.setToField(std::string("set_fraction"));
ROUTE1257.setToNode(std::string("r_index_proximal_OI"));
ProtoBody603.addChild(&ROUTE1257);

OrientationInterpolator& OrientationInterpolator1258 =  OrientationInterpolator();
OrientationInterpolator1258.setDEF(std::string("r_knee_OI"));
IS& IS1259 =  IS();
Connect& connect1260 =  Connect();
connect1260.setNodeField(std::string("key"));
connect1260.setProtoField(std::string("r_knee_key"));
IS1259.addChild(&connect1260);

Connect& connect1261 =  Connect();
connect1261.setNodeField(std::string("keyValue"));
connect1261.setProtoField(std::string("r_knee_keyValue"));
IS1259.addChild(&connect1261);

Connect& connect1262 =  Connect();
connect1262.setNodeField(std::string("value_changed"));
connect1262.setProtoField(std::string("r_knee_changed"));
IS1259.addChild(&connect1262);

OrientationInterpolator1258.addChild(&IS1259);

ProtoBody603.addChild(&OrientationInterpolator1258);

ROUTE& ROUTE1263 =  ROUTE();
ROUTE1263.setFromField(std::string("fraction_changed"));
ROUTE1263.setFromNode(std::string("BehaviorClock"));
ROUTE1263.setToField(std::string("set_fraction"));
ROUTE1263.setToNode(std::string("r_knee_OI"));
ProtoBody603.addChild(&ROUTE1263);

OrientationInterpolator& OrientationInterpolator1264 =  OrientationInterpolator();
OrientationInterpolator1264.setDEF(std::string("r_metatarsal_OI"));
IS& IS1265 =  IS();
Connect& connect1266 =  Connect();
connect1266.setNodeField(std::string("key"));
connect1266.setProtoField(std::string("r_metatarsal_key"));
IS1265.addChild(&connect1266);

Connect& connect1267 =  Connect();
connect1267.setNodeField(std::string("keyValue"));
connect1267.setProtoField(std::string("r_metatarsal_keyValue"));
IS1265.addChild(&connect1267);

Connect& connect1268 =  Connect();
connect1268.setNodeField(std::string("value_changed"));
connect1268.setProtoField(std::string("r_metatarsal_changed"));
IS1265.addChild(&connect1268);

OrientationInterpolator1264.addChild(&IS1265);

ProtoBody603.addChild(&OrientationInterpolator1264);

ROUTE& ROUTE1269 =  ROUTE();
ROUTE1269.setFromField(std::string("fraction_changed"));
ROUTE1269.setFromNode(std::string("BehaviorClock"));
ROUTE1269.setToField(std::string("set_fraction"));
ROUTE1269.setToNode(std::string("r_metatarsal_OI"));
ProtoBody603.addChild(&ROUTE1269);

OrientationInterpolator& OrientationInterpolator1270 =  OrientationInterpolator();
OrientationInterpolator1270.setDEF(std::string("r_middistal_OI"));
IS& IS1271 =  IS();
Connect& connect1272 =  Connect();
connect1272.setNodeField(std::string("key"));
connect1272.setProtoField(std::string("r_middistal_key"));
IS1271.addChild(&connect1272);

Connect& connect1273 =  Connect();
connect1273.setNodeField(std::string("keyValue"));
connect1273.setProtoField(std::string("r_middistal_keyValue"));
IS1271.addChild(&connect1273);

Connect& connect1274 =  Connect();
connect1274.setNodeField(std::string("value_changed"));
connect1274.setProtoField(std::string("r_middistal_changed"));
IS1271.addChild(&connect1274);

OrientationInterpolator1270.addChild(&IS1271);

ProtoBody603.addChild(&OrientationInterpolator1270);

ROUTE& ROUTE1275 =  ROUTE();
ROUTE1275.setFromField(std::string("fraction_changed"));
ROUTE1275.setFromNode(std::string("BehaviorClock"));
ROUTE1275.setToField(std::string("set_fraction"));
ROUTE1275.setToNode(std::string("r_middistal_OI"));
ProtoBody603.addChild(&ROUTE1275);

OrientationInterpolator& OrientationInterpolator1276 =  OrientationInterpolator();
OrientationInterpolator1276.setDEF(std::string("r_middle0_OI"));
IS& IS1277 =  IS();
Connect& connect1278 =  Connect();
connect1278.setNodeField(std::string("key"));
connect1278.setProtoField(std::string("r_middle0_key"));
IS1277.addChild(&connect1278);

Connect& connect1279 =  Connect();
connect1279.setNodeField(std::string("keyValue"));
connect1279.setProtoField(std::string("r_middle0_keyValue"));
IS1277.addChild(&connect1279);

Connect& connect1280 =  Connect();
connect1280.setNodeField(std::string("value_changed"));
connect1280.setProtoField(std::string("r_middle0_changed"));
IS1277.addChild(&connect1280);

OrientationInterpolator1276.addChild(&IS1277);

ProtoBody603.addChild(&OrientationInterpolator1276);

ROUTE& ROUTE1281 =  ROUTE();
ROUTE1281.setFromField(std::string("fraction_changed"));
ROUTE1281.setFromNode(std::string("BehaviorClock"));
ROUTE1281.setToField(std::string("set_fraction"));
ROUTE1281.setToNode(std::string("r_middle0_OI"));
ProtoBody603.addChild(&ROUTE1281);

OrientationInterpolator& OrientationInterpolator1282 =  OrientationInterpolator();
OrientationInterpolator1282.setDEF(std::string("r_middle1_OI"));
IS& IS1283 =  IS();
Connect& connect1284 =  Connect();
connect1284.setNodeField(std::string("key"));
connect1284.setProtoField(std::string("r_middle1_key"));
IS1283.addChild(&connect1284);

Connect& connect1285 =  Connect();
connect1285.setNodeField(std::string("keyValue"));
connect1285.setProtoField(std::string("r_middle1_keyValue"));
IS1283.addChild(&connect1285);

Connect& connect1286 =  Connect();
connect1286.setNodeField(std::string("value_changed"));
connect1286.setProtoField(std::string("r_middle1_changed"));
IS1283.addChild(&connect1286);

OrientationInterpolator1282.addChild(&IS1283);

ProtoBody603.addChild(&OrientationInterpolator1282);

ROUTE& ROUTE1287 =  ROUTE();
ROUTE1287.setFromField(std::string("fraction_changed"));
ROUTE1287.setFromNode(std::string("BehaviorClock"));
ROUTE1287.setToField(std::string("set_fraction"));
ROUTE1287.setToNode(std::string("r_middle1_OI"));
ProtoBody603.addChild(&ROUTE1287);

OrientationInterpolator& OrientationInterpolator1288 =  OrientationInterpolator();
OrientationInterpolator1288.setDEF(std::string("r_middle2_OI"));
IS& IS1289 =  IS();
Connect& connect1290 =  Connect();
connect1290.setNodeField(std::string("key"));
connect1290.setProtoField(std::string("r_middle2_key"));
IS1289.addChild(&connect1290);

Connect& connect1291 =  Connect();
connect1291.setNodeField(std::string("keyValue"));
connect1291.setProtoField(std::string("r_middle2_keyValue"));
IS1289.addChild(&connect1291);

Connect& connect1292 =  Connect();
connect1292.setNodeField(std::string("value_changed"));
connect1292.setProtoField(std::string("r_middle2_changed"));
IS1289.addChild(&connect1292);

OrientationInterpolator1288.addChild(&IS1289);

ProtoBody603.addChild(&OrientationInterpolator1288);

ROUTE& ROUTE1293 =  ROUTE();
ROUTE1293.setFromField(std::string("fraction_changed"));
ROUTE1293.setFromNode(std::string("BehaviorClock"));
ROUTE1293.setToField(std::string("set_fraction"));
ROUTE1293.setToNode(std::string("r_middle2_OI"));
ProtoBody603.addChild(&ROUTE1293);

OrientationInterpolator& OrientationInterpolator1294 =  OrientationInterpolator();
OrientationInterpolator1294.setDEF(std::string("r_middle3_OI"));
IS& IS1295 =  IS();
Connect& connect1296 =  Connect();
connect1296.setNodeField(std::string("key"));
connect1296.setProtoField(std::string("r_middle3_key"));
IS1295.addChild(&connect1296);

Connect& connect1297 =  Connect();
connect1297.setNodeField(std::string("keyValue"));
connect1297.setProtoField(std::string("r_middle3_keyValue"));
IS1295.addChild(&connect1297);

Connect& connect1298 =  Connect();
connect1298.setNodeField(std::string("value_changed"));
connect1298.setProtoField(std::string("r_middle3_changed"));
IS1295.addChild(&connect1298);

OrientationInterpolator1294.addChild(&IS1295);

ProtoBody603.addChild(&OrientationInterpolator1294);

ROUTE& ROUTE1299 =  ROUTE();
ROUTE1299.setFromField(std::string("fraction_changed"));
ROUTE1299.setFromNode(std::string("BehaviorClock"));
ROUTE1299.setToField(std::string("set_fraction"));
ROUTE1299.setToNode(std::string("r_middle3_OI"));
ProtoBody603.addChild(&ROUTE1299);

OrientationInterpolator& OrientationInterpolator1300 =  OrientationInterpolator();
OrientationInterpolator1300.setDEF(std::string("r_middle_distal_OI"));
IS& IS1301 =  IS();
Connect& connect1302 =  Connect();
connect1302.setNodeField(std::string("key"));
connect1302.setProtoField(std::string("r_middle_distal_key"));
IS1301.addChild(&connect1302);

Connect& connect1303 =  Connect();
connect1303.setNodeField(std::string("keyValue"));
connect1303.setProtoField(std::string("r_middle_distal_keyValue"));
IS1301.addChild(&connect1303);

Connect& connect1304 =  Connect();
connect1304.setNodeField(std::string("value_changed"));
connect1304.setProtoField(std::string("r_middle_distal_changed"));
IS1301.addChild(&connect1304);

OrientationInterpolator1300.addChild(&IS1301);

ProtoBody603.addChild(&OrientationInterpolator1300);

ROUTE& ROUTE1305 =  ROUTE();
ROUTE1305.setFromField(std::string("fraction_changed"));
ROUTE1305.setFromNode(std::string("BehaviorClock"));
ROUTE1305.setToField(std::string("set_fraction"));
ROUTE1305.setToNode(std::string("r_middle_distal_OI"));
ProtoBody603.addChild(&ROUTE1305);

OrientationInterpolator& OrientationInterpolator1306 =  OrientationInterpolator();
OrientationInterpolator1306.setDEF(std::string("r_middle_metacarpal_OI"));
IS& IS1307 =  IS();
Connect& connect1308 =  Connect();
connect1308.setNodeField(std::string("key"));
connect1308.setProtoField(std::string("r_middle_metacarpal_key"));
IS1307.addChild(&connect1308);

Connect& connect1309 =  Connect();
connect1309.setNodeField(std::string("keyValue"));
connect1309.setProtoField(std::string("r_middle_metacarpal_keyValue"));
IS1307.addChild(&connect1309);

Connect& connect1310 =  Connect();
connect1310.setNodeField(std::string("value_changed"));
connect1310.setProtoField(std::string("r_middle_metacarpal_changed"));
IS1307.addChild(&connect1310);

OrientationInterpolator1306.addChild(&IS1307);

ProtoBody603.addChild(&OrientationInterpolator1306);

ROUTE& ROUTE1311 =  ROUTE();
ROUTE1311.setFromField(std::string("fraction_changed"));
ROUTE1311.setFromNode(std::string("BehaviorClock"));
ROUTE1311.setToField(std::string("set_fraction"));
ROUTE1311.setToNode(std::string("r_middle_metacarpal_OI"));
ProtoBody603.addChild(&ROUTE1311);

OrientationInterpolator& OrientationInterpolator1312 =  OrientationInterpolator();
OrientationInterpolator1312.setDEF(std::string("r_middle_middle_OI"));
IS& IS1313 =  IS();
Connect& connect1314 =  Connect();
connect1314.setNodeField(std::string("key"));
connect1314.setProtoField(std::string("r_middle_middle_key"));
IS1313.addChild(&connect1314);

Connect& connect1315 =  Connect();
connect1315.setNodeField(std::string("keyValue"));
connect1315.setProtoField(std::string("r_middle_middle_keyValue"));
IS1313.addChild(&connect1315);

Connect& connect1316 =  Connect();
connect1316.setNodeField(std::string("value_changed"));
connect1316.setProtoField(std::string("r_middle_middle_changed"));
IS1313.addChild(&connect1316);

OrientationInterpolator1312.addChild(&IS1313);

ProtoBody603.addChild(&OrientationInterpolator1312);

ROUTE& ROUTE1317 =  ROUTE();
ROUTE1317.setFromField(std::string("fraction_changed"));
ROUTE1317.setFromNode(std::string("BehaviorClock"));
ROUTE1317.setToField(std::string("set_fraction"));
ROUTE1317.setToNode(std::string("r_middle_middle_OI"));
ProtoBody603.addChild(&ROUTE1317);

OrientationInterpolator& OrientationInterpolator1318 =  OrientationInterpolator();
OrientationInterpolator1318.setDEF(std::string("r_middle_proximal_OI"));
IS& IS1319 =  IS();
Connect& connect1320 =  Connect();
connect1320.setNodeField(std::string("key"));
connect1320.setProtoField(std::string("r_middle_proximal_key"));
IS1319.addChild(&connect1320);

Connect& connect1321 =  Connect();
connect1321.setNodeField(std::string("keyValue"));
connect1321.setProtoField(std::string("r_middle_proximal_keyValue"));
IS1319.addChild(&connect1321);

Connect& connect1322 =  Connect();
connect1322.setNodeField(std::string("value_changed"));
connect1322.setProtoField(std::string("r_middle_proximal_changed"));
IS1319.addChild(&connect1322);

OrientationInterpolator1318.addChild(&IS1319);

ProtoBody603.addChild(&OrientationInterpolator1318);

ROUTE& ROUTE1323 =  ROUTE();
ROUTE1323.setFromField(std::string("fraction_changed"));
ROUTE1323.setFromNode(std::string("BehaviorClock"));
ROUTE1323.setToField(std::string("set_fraction"));
ROUTE1323.setToNode(std::string("r_middle_proximal_OI"));
ProtoBody603.addChild(&ROUTE1323);

OrientationInterpolator& OrientationInterpolator1324 =  OrientationInterpolator();
OrientationInterpolator1324.setDEF(std::string("r_midproximal_OI"));
IS& IS1325 =  IS();
Connect& connect1326 =  Connect();
connect1326.setNodeField(std::string("key"));
connect1326.setProtoField(std::string("r_midproximal_key"));
IS1325.addChild(&connect1326);

Connect& connect1327 =  Connect();
connect1327.setNodeField(std::string("keyValue"));
connect1327.setProtoField(std::string("r_midproximal_keyValue"));
IS1325.addChild(&connect1327);

Connect& connect1328 =  Connect();
connect1328.setNodeField(std::string("value_changed"));
connect1328.setProtoField(std::string("r_midproximal_changed"));
IS1325.addChild(&connect1328);

OrientationInterpolator1324.addChild(&IS1325);

ProtoBody603.addChild(&OrientationInterpolator1324);

ROUTE& ROUTE1329 =  ROUTE();
ROUTE1329.setFromField(std::string("fraction_changed"));
ROUTE1329.setFromNode(std::string("BehaviorClock"));
ROUTE1329.setToField(std::string("set_fraction"));
ROUTE1329.setToNode(std::string("r_midproximal_OI"));
ProtoBody603.addChild(&ROUTE1329);

OrientationInterpolator& OrientationInterpolator1330 =  OrientationInterpolator();
OrientationInterpolator1330.setDEF(std::string("r_midtarsal_OI"));
IS& IS1331 =  IS();
Connect& connect1332 =  Connect();
connect1332.setNodeField(std::string("key"));
connect1332.setProtoField(std::string("r_midtarsal_key"));
IS1331.addChild(&connect1332);

Connect& connect1333 =  Connect();
connect1333.setNodeField(std::string("keyValue"));
connect1333.setProtoField(std::string("r_midtarsal_keyValue"));
IS1331.addChild(&connect1333);

Connect& connect1334 =  Connect();
connect1334.setNodeField(std::string("value_changed"));
connect1334.setProtoField(std::string("r_midtarsal_changed"));
IS1331.addChild(&connect1334);

OrientationInterpolator1330.addChild(&IS1331);

ProtoBody603.addChild(&OrientationInterpolator1330);

ROUTE& ROUTE1335 =  ROUTE();
ROUTE1335.setFromField(std::string("fraction_changed"));
ROUTE1335.setFromNode(std::string("BehaviorClock"));
ROUTE1335.setToField(std::string("set_fraction"));
ROUTE1335.setToNode(std::string("r_midtarsal_OI"));
ProtoBody603.addChild(&ROUTE1335);

OrientationInterpolator& OrientationInterpolator1336 =  OrientationInterpolator();
OrientationInterpolator1336.setDEF(std::string("r_pinky0_OI"));
IS& IS1337 =  IS();
Connect& connect1338 =  Connect();
connect1338.setNodeField(std::string("key"));
connect1338.setProtoField(std::string("r_pinky0_key"));
IS1337.addChild(&connect1338);

Connect& connect1339 =  Connect();
connect1339.setNodeField(std::string("keyValue"));
connect1339.setProtoField(std::string("r_pinky0_keyValue"));
IS1337.addChild(&connect1339);

Connect& connect1340 =  Connect();
connect1340.setNodeField(std::string("value_changed"));
connect1340.setProtoField(std::string("r_pinky0_changed"));
IS1337.addChild(&connect1340);

OrientationInterpolator1336.addChild(&IS1337);

ProtoBody603.addChild(&OrientationInterpolator1336);

ROUTE& ROUTE1341 =  ROUTE();
ROUTE1341.setFromField(std::string("fraction_changed"));
ROUTE1341.setFromNode(std::string("BehaviorClock"));
ROUTE1341.setToField(std::string("set_fraction"));
ROUTE1341.setToNode(std::string("r_pinky0_OI"));
ProtoBody603.addChild(&ROUTE1341);

OrientationInterpolator& OrientationInterpolator1342 =  OrientationInterpolator();
OrientationInterpolator1342.setDEF(std::string("r_pinky1_OI"));
IS& IS1343 =  IS();
Connect& connect1344 =  Connect();
connect1344.setNodeField(std::string("key"));
connect1344.setProtoField(std::string("r_pinky1_key"));
IS1343.addChild(&connect1344);

Connect& connect1345 =  Connect();
connect1345.setNodeField(std::string("keyValue"));
connect1345.setProtoField(std::string("r_pinky1_keyValue"));
IS1343.addChild(&connect1345);

Connect& connect1346 =  Connect();
connect1346.setNodeField(std::string("value_changed"));
connect1346.setProtoField(std::string("r_pinky1_changed"));
IS1343.addChild(&connect1346);

OrientationInterpolator1342.addChild(&IS1343);

ProtoBody603.addChild(&OrientationInterpolator1342);

ROUTE& ROUTE1347 =  ROUTE();
ROUTE1347.setFromField(std::string("fraction_changed"));
ROUTE1347.setFromNode(std::string("BehaviorClock"));
ROUTE1347.setToField(std::string("set_fraction"));
ROUTE1347.setToNode(std::string("r_pinky1_OI"));
ProtoBody603.addChild(&ROUTE1347);

OrientationInterpolator& OrientationInterpolator1348 =  OrientationInterpolator();
OrientationInterpolator1348.setDEF(std::string("r_pinky2_OI"));
IS& IS1349 =  IS();
Connect& connect1350 =  Connect();
connect1350.setNodeField(std::string("key"));
connect1350.setProtoField(std::string("r_pinky2_key"));
IS1349.addChild(&connect1350);

Connect& connect1351 =  Connect();
connect1351.setNodeField(std::string("keyValue"));
connect1351.setProtoField(std::string("r_pinky2_keyValue"));
IS1349.addChild(&connect1351);

Connect& connect1352 =  Connect();
connect1352.setNodeField(std::string("value_changed"));
connect1352.setProtoField(std::string("r_pinky2_changed"));
IS1349.addChild(&connect1352);

OrientationInterpolator1348.addChild(&IS1349);

ProtoBody603.addChild(&OrientationInterpolator1348);

ROUTE& ROUTE1353 =  ROUTE();
ROUTE1353.setFromField(std::string("fraction_changed"));
ROUTE1353.setFromNode(std::string("BehaviorClock"));
ROUTE1353.setToField(std::string("set_fraction"));
ROUTE1353.setToNode(std::string("r_pinky2_OI"));
ProtoBody603.addChild(&ROUTE1353);

OrientationInterpolator& OrientationInterpolator1354 =  OrientationInterpolator();
OrientationInterpolator1354.setDEF(std::string("r_pinky3_OI"));
IS& IS1355 =  IS();
Connect& connect1356 =  Connect();
connect1356.setNodeField(std::string("key"));
connect1356.setProtoField(std::string("r_pinky3_key"));
IS1355.addChild(&connect1356);

Connect& connect1357 =  Connect();
connect1357.setNodeField(std::string("keyValue"));
connect1357.setProtoField(std::string("r_pinky3_keyValue"));
IS1355.addChild(&connect1357);

Connect& connect1358 =  Connect();
connect1358.setNodeField(std::string("value_changed"));
connect1358.setProtoField(std::string("r_pinky3_changed"));
IS1355.addChild(&connect1358);

OrientationInterpolator1354.addChild(&IS1355);

ProtoBody603.addChild(&OrientationInterpolator1354);

ROUTE& ROUTE1359 =  ROUTE();
ROUTE1359.setFromField(std::string("fraction_changed"));
ROUTE1359.setFromNode(std::string("BehaviorClock"));
ROUTE1359.setToField(std::string("set_fraction"));
ROUTE1359.setToNode(std::string("r_pinky3_OI"));
ProtoBody603.addChild(&ROUTE1359);

OrientationInterpolator& OrientationInterpolator1360 =  OrientationInterpolator();
OrientationInterpolator1360.setDEF(std::string("r_pinky_distal_OI"));
IS& IS1361 =  IS();
Connect& connect1362 =  Connect();
connect1362.setNodeField(std::string("key"));
connect1362.setProtoField(std::string("r_pinky_distal_key"));
IS1361.addChild(&connect1362);

Connect& connect1363 =  Connect();
connect1363.setNodeField(std::string("keyValue"));
connect1363.setProtoField(std::string("r_pinky_distal_keyValue"));
IS1361.addChild(&connect1363);

Connect& connect1364 =  Connect();
connect1364.setNodeField(std::string("value_changed"));
connect1364.setProtoField(std::string("r_pinky_distal_changed"));
IS1361.addChild(&connect1364);

OrientationInterpolator1360.addChild(&IS1361);

ProtoBody603.addChild(&OrientationInterpolator1360);

ROUTE& ROUTE1365 =  ROUTE();
ROUTE1365.setFromField(std::string("fraction_changed"));
ROUTE1365.setFromNode(std::string("BehaviorClock"));
ROUTE1365.setToField(std::string("set_fraction"));
ROUTE1365.setToNode(std::string("r_pinky_distal_OI"));
ProtoBody603.addChild(&ROUTE1365);

OrientationInterpolator& OrientationInterpolator1366 =  OrientationInterpolator();
OrientationInterpolator1366.setDEF(std::string("r_pinky_metacarpal_OI"));
IS& IS1367 =  IS();
Connect& connect1368 =  Connect();
connect1368.setNodeField(std::string("key"));
connect1368.setProtoField(std::string("r_pinky_metacarpal_key"));
IS1367.addChild(&connect1368);

Connect& connect1369 =  Connect();
connect1369.setNodeField(std::string("keyValue"));
connect1369.setProtoField(std::string("r_pinky_metacarpal_keyValue"));
IS1367.addChild(&connect1369);

Connect& connect1370 =  Connect();
connect1370.setNodeField(std::string("value_changed"));
connect1370.setProtoField(std::string("r_pinky_metacarpal_changed"));
IS1367.addChild(&connect1370);

OrientationInterpolator1366.addChild(&IS1367);

ProtoBody603.addChild(&OrientationInterpolator1366);

ROUTE& ROUTE1371 =  ROUTE();
ROUTE1371.setFromField(std::string("fraction_changed"));
ROUTE1371.setFromNode(std::string("BehaviorClock"));
ROUTE1371.setToField(std::string("set_fraction"));
ROUTE1371.setToNode(std::string("r_pinky_metacarpal_OI"));
ProtoBody603.addChild(&ROUTE1371);

OrientationInterpolator& OrientationInterpolator1372 =  OrientationInterpolator();
OrientationInterpolator1372.setDEF(std::string("r_pinky_middle_OI"));
IS& IS1373 =  IS();
Connect& connect1374 =  Connect();
connect1374.setNodeField(std::string("key"));
connect1374.setProtoField(std::string("r_pinky_middle_key"));
IS1373.addChild(&connect1374);

Connect& connect1375 =  Connect();
connect1375.setNodeField(std::string("keyValue"));
connect1375.setProtoField(std::string("r_pinky_middle_keyValue"));
IS1373.addChild(&connect1375);

Connect& connect1376 =  Connect();
connect1376.setNodeField(std::string("value_changed"));
connect1376.setProtoField(std::string("r_pinky_middle_changed"));
IS1373.addChild(&connect1376);

OrientationInterpolator1372.addChild(&IS1373);

ProtoBody603.addChild(&OrientationInterpolator1372);

ROUTE& ROUTE1377 =  ROUTE();
ROUTE1377.setFromField(std::string("fraction_changed"));
ROUTE1377.setFromNode(std::string("BehaviorClock"));
ROUTE1377.setToField(std::string("set_fraction"));
ROUTE1377.setToNode(std::string("r_pinky_middle_OI"));
ProtoBody603.addChild(&ROUTE1377);

OrientationInterpolator& OrientationInterpolator1378 =  OrientationInterpolator();
OrientationInterpolator1378.setDEF(std::string("r_pinky_proximal_OI"));
IS& IS1379 =  IS();
Connect& connect1380 =  Connect();
connect1380.setNodeField(std::string("key"));
connect1380.setProtoField(std::string("r_pinky_proximal_key"));
IS1379.addChild(&connect1380);

Connect& connect1381 =  Connect();
connect1381.setNodeField(std::string("keyValue"));
connect1381.setProtoField(std::string("r_pinky_proximal_keyValue"));
IS1379.addChild(&connect1381);

Connect& connect1382 =  Connect();
connect1382.setNodeField(std::string("value_changed"));
connect1382.setProtoField(std::string("r_pinky_proximal_changed"));
IS1379.addChild(&connect1382);

OrientationInterpolator1378.addChild(&IS1379);

ProtoBody603.addChild(&OrientationInterpolator1378);

ROUTE& ROUTE1383 =  ROUTE();
ROUTE1383.setFromField(std::string("fraction_changed"));
ROUTE1383.setFromNode(std::string("BehaviorClock"));
ROUTE1383.setToField(std::string("set_fraction"));
ROUTE1383.setToNode(std::string("r_pinky_proximal_OI"));
ProtoBody603.addChild(&ROUTE1383);

OrientationInterpolator& OrientationInterpolator1384 =  OrientationInterpolator();
OrientationInterpolator1384.setDEF(std::string("r_ring0_OI"));
IS& IS1385 =  IS();
Connect& connect1386 =  Connect();
connect1386.setNodeField(std::string("key"));
connect1386.setProtoField(std::string("r_ring0_key"));
IS1385.addChild(&connect1386);

Connect& connect1387 =  Connect();
connect1387.setNodeField(std::string("keyValue"));
connect1387.setProtoField(std::string("r_ring0_keyValue"));
IS1385.addChild(&connect1387);

Connect& connect1388 =  Connect();
connect1388.setNodeField(std::string("value_changed"));
connect1388.setProtoField(std::string("r_ring0_changed"));
IS1385.addChild(&connect1388);

OrientationInterpolator1384.addChild(&IS1385);

ProtoBody603.addChild(&OrientationInterpolator1384);

ROUTE& ROUTE1389 =  ROUTE();
ROUTE1389.setFromField(std::string("fraction_changed"));
ROUTE1389.setFromNode(std::string("BehaviorClock"));
ROUTE1389.setToField(std::string("set_fraction"));
ROUTE1389.setToNode(std::string("r_ring0_OI"));
ProtoBody603.addChild(&ROUTE1389);

OrientationInterpolator& OrientationInterpolator1390 =  OrientationInterpolator();
OrientationInterpolator1390.setDEF(std::string("r_ring1_OI"));
IS& IS1391 =  IS();
Connect& connect1392 =  Connect();
connect1392.setNodeField(std::string("key"));
connect1392.setProtoField(std::string("r_ring1_key"));
IS1391.addChild(&connect1392);

Connect& connect1393 =  Connect();
connect1393.setNodeField(std::string("keyValue"));
connect1393.setProtoField(std::string("r_ring1_keyValue"));
IS1391.addChild(&connect1393);

Connect& connect1394 =  Connect();
connect1394.setNodeField(std::string("value_changed"));
connect1394.setProtoField(std::string("r_ring1_changed"));
IS1391.addChild(&connect1394);

OrientationInterpolator1390.addChild(&IS1391);

ProtoBody603.addChild(&OrientationInterpolator1390);

ROUTE& ROUTE1395 =  ROUTE();
ROUTE1395.setFromField(std::string("fraction_changed"));
ROUTE1395.setFromNode(std::string("BehaviorClock"));
ROUTE1395.setToField(std::string("set_fraction"));
ROUTE1395.setToNode(std::string("r_ring1_OI"));
ProtoBody603.addChild(&ROUTE1395);

OrientationInterpolator& OrientationInterpolator1396 =  OrientationInterpolator();
OrientationInterpolator1396.setDEF(std::string("r_ring2_OI"));
IS& IS1397 =  IS();
Connect& connect1398 =  Connect();
connect1398.setNodeField(std::string("key"));
connect1398.setProtoField(std::string("r_ring2_key"));
IS1397.addChild(&connect1398);

Connect& connect1399 =  Connect();
connect1399.setNodeField(std::string("keyValue"));
connect1399.setProtoField(std::string("r_ring2_keyValue"));
IS1397.addChild(&connect1399);

Connect& connect1400 =  Connect();
connect1400.setNodeField(std::string("value_changed"));
connect1400.setProtoField(std::string("r_ring2_changed"));
IS1397.addChild(&connect1400);

OrientationInterpolator1396.addChild(&IS1397);

ProtoBody603.addChild(&OrientationInterpolator1396);

ROUTE& ROUTE1401 =  ROUTE();
ROUTE1401.setFromField(std::string("fraction_changed"));
ROUTE1401.setFromNode(std::string("BehaviorClock"));
ROUTE1401.setToField(std::string("set_fraction"));
ROUTE1401.setToNode(std::string("r_ring2_OI"));
ProtoBody603.addChild(&ROUTE1401);

OrientationInterpolator& OrientationInterpolator1402 =  OrientationInterpolator();
OrientationInterpolator1402.setDEF(std::string("r_ring3_OI"));
IS& IS1403 =  IS();
Connect& connect1404 =  Connect();
connect1404.setNodeField(std::string("key"));
connect1404.setProtoField(std::string("r_ring3_key"));
IS1403.addChild(&connect1404);

Connect& connect1405 =  Connect();
connect1405.setNodeField(std::string("keyValue"));
connect1405.setProtoField(std::string("r_ring3_keyValue"));
IS1403.addChild(&connect1405);

Connect& connect1406 =  Connect();
connect1406.setNodeField(std::string("value_changed"));
connect1406.setProtoField(std::string("r_ring3_changed"));
IS1403.addChild(&connect1406);

OrientationInterpolator1402.addChild(&IS1403);

ProtoBody603.addChild(&OrientationInterpolator1402);

ROUTE& ROUTE1407 =  ROUTE();
ROUTE1407.setFromField(std::string("fraction_changed"));
ROUTE1407.setFromNode(std::string("BehaviorClock"));
ROUTE1407.setToField(std::string("set_fraction"));
ROUTE1407.setToNode(std::string("r_ring3_OI"));
ProtoBody603.addChild(&ROUTE1407);

OrientationInterpolator& OrientationInterpolator1408 =  OrientationInterpolator();
OrientationInterpolator1408.setDEF(std::string("r_ring_distal_OI"));
IS& IS1409 =  IS();
Connect& connect1410 =  Connect();
connect1410.setNodeField(std::string("key"));
connect1410.setProtoField(std::string("r_ring_distal_key"));
IS1409.addChild(&connect1410);

Connect& connect1411 =  Connect();
connect1411.setNodeField(std::string("keyValue"));
connect1411.setProtoField(std::string("r_ring_distal_keyValue"));
IS1409.addChild(&connect1411);

Connect& connect1412 =  Connect();
connect1412.setNodeField(std::string("value_changed"));
connect1412.setProtoField(std::string("r_ring_distal_changed"));
IS1409.addChild(&connect1412);

OrientationInterpolator1408.addChild(&IS1409);

ProtoBody603.addChild(&OrientationInterpolator1408);

ROUTE& ROUTE1413 =  ROUTE();
ROUTE1413.setFromField(std::string("fraction_changed"));
ROUTE1413.setFromNode(std::string("BehaviorClock"));
ROUTE1413.setToField(std::string("set_fraction"));
ROUTE1413.setToNode(std::string("r_ring_distal_OI"));
ProtoBody603.addChild(&ROUTE1413);

OrientationInterpolator& OrientationInterpolator1414 =  OrientationInterpolator();
OrientationInterpolator1414.setDEF(std::string("r_ring_metacarpal_OI"));
IS& IS1415 =  IS();
Connect& connect1416 =  Connect();
connect1416.setNodeField(std::string("key"));
connect1416.setProtoField(std::string("r_ring_metacarpal_key"));
IS1415.addChild(&connect1416);

Connect& connect1417 =  Connect();
connect1417.setNodeField(std::string("keyValue"));
connect1417.setProtoField(std::string("r_ring_metacarpal_keyValue"));
IS1415.addChild(&connect1417);

Connect& connect1418 =  Connect();
connect1418.setNodeField(std::string("value_changed"));
connect1418.setProtoField(std::string("r_ring_metacarpal_changed"));
IS1415.addChild(&connect1418);

OrientationInterpolator1414.addChild(&IS1415);

ProtoBody603.addChild(&OrientationInterpolator1414);

ROUTE& ROUTE1419 =  ROUTE();
ROUTE1419.setFromField(std::string("fraction_changed"));
ROUTE1419.setFromNode(std::string("BehaviorClock"));
ROUTE1419.setToField(std::string("set_fraction"));
ROUTE1419.setToNode(std::string("r_ring_metacarpal_OI"));
ProtoBody603.addChild(&ROUTE1419);

OrientationInterpolator& OrientationInterpolator1420 =  OrientationInterpolator();
OrientationInterpolator1420.setDEF(std::string("r_ring_middle_OI"));
IS& IS1421 =  IS();
Connect& connect1422 =  Connect();
connect1422.setNodeField(std::string("key"));
connect1422.setProtoField(std::string("r_ring_middle_key"));
IS1421.addChild(&connect1422);

Connect& connect1423 =  Connect();
connect1423.setNodeField(std::string("keyValue"));
connect1423.setProtoField(std::string("r_ring_middle_keyValue"));
IS1421.addChild(&connect1423);

Connect& connect1424 =  Connect();
connect1424.setNodeField(std::string("value_changed"));
connect1424.setProtoField(std::string("r_ring_middle_changed"));
IS1421.addChild(&connect1424);

OrientationInterpolator1420.addChild(&IS1421);

ProtoBody603.addChild(&OrientationInterpolator1420);

ROUTE& ROUTE1425 =  ROUTE();
ROUTE1425.setFromField(std::string("fraction_changed"));
ROUTE1425.setFromNode(std::string("BehaviorClock"));
ROUTE1425.setToField(std::string("set_fraction"));
ROUTE1425.setToNode(std::string("r_ring_middle_OI"));
ProtoBody603.addChild(&ROUTE1425);

OrientationInterpolator& OrientationInterpolator1426 =  OrientationInterpolator();
OrientationInterpolator1426.setDEF(std::string("r_ring_proximal_OI"));
IS& IS1427 =  IS();
Connect& connect1428 =  Connect();
connect1428.setNodeField(std::string("key"));
connect1428.setProtoField(std::string("r_ring_proximal_key"));
IS1427.addChild(&connect1428);

Connect& connect1429 =  Connect();
connect1429.setNodeField(std::string("keyValue"));
connect1429.setProtoField(std::string("r_ring_proximal_keyValue"));
IS1427.addChild(&connect1429);

Connect& connect1430 =  Connect();
connect1430.setNodeField(std::string("value_changed"));
connect1430.setProtoField(std::string("r_ring_proximal_changed"));
IS1427.addChild(&connect1430);

OrientationInterpolator1426.addChild(&IS1427);

ProtoBody603.addChild(&OrientationInterpolator1426);

ROUTE& ROUTE1431 =  ROUTE();
ROUTE1431.setFromField(std::string("fraction_changed"));
ROUTE1431.setFromNode(std::string("BehaviorClock"));
ROUTE1431.setToField(std::string("set_fraction"));
ROUTE1431.setToNode(std::string("r_ring_proximal_OI"));
ProtoBody603.addChild(&ROUTE1431);

OrientationInterpolator& OrientationInterpolator1432 =  OrientationInterpolator();
OrientationInterpolator1432.setDEF(std::string("r_scapula_OI"));
IS& IS1433 =  IS();
Connect& connect1434 =  Connect();
connect1434.setNodeField(std::string("key"));
connect1434.setProtoField(std::string("r_scapula_key"));
IS1433.addChild(&connect1434);

Connect& connect1435 =  Connect();
connect1435.setNodeField(std::string("keyValue"));
connect1435.setProtoField(std::string("r_scapula_keyValue"));
IS1433.addChild(&connect1435);

Connect& connect1436 =  Connect();
connect1436.setNodeField(std::string("value_changed"));
connect1436.setProtoField(std::string("r_scapula_changed"));
IS1433.addChild(&connect1436);

OrientationInterpolator1432.addChild(&IS1433);

ProtoBody603.addChild(&OrientationInterpolator1432);

ROUTE& ROUTE1437 =  ROUTE();
ROUTE1437.setFromField(std::string("fraction_changed"));
ROUTE1437.setFromNode(std::string("BehaviorClock"));
ROUTE1437.setToField(std::string("set_fraction"));
ROUTE1437.setToNode(std::string("r_scapula_OI"));
ProtoBody603.addChild(&ROUTE1437);

OrientationInterpolator& OrientationInterpolator1438 =  OrientationInterpolator();
OrientationInterpolator1438.setDEF(std::string("r_shoulder_OI"));
IS& IS1439 =  IS();
Connect& connect1440 =  Connect();
connect1440.setNodeField(std::string("key"));
connect1440.setProtoField(std::string("r_shoulder_key"));
IS1439.addChild(&connect1440);

Connect& connect1441 =  Connect();
connect1441.setNodeField(std::string("keyValue"));
connect1441.setProtoField(std::string("r_shoulder_keyValue"));
IS1439.addChild(&connect1441);

Connect& connect1442 =  Connect();
connect1442.setNodeField(std::string("value_changed"));
connect1442.setProtoField(std::string("r_shoulder_changed"));
IS1439.addChild(&connect1442);

OrientationInterpolator1438.addChild(&IS1439);

ProtoBody603.addChild(&OrientationInterpolator1438);

ROUTE& ROUTE1443 =  ROUTE();
ROUTE1443.setFromField(std::string("fraction_changed"));
ROUTE1443.setFromNode(std::string("BehaviorClock"));
ROUTE1443.setToField(std::string("set_fraction"));
ROUTE1443.setToNode(std::string("r_shoulder_OI"));
ProtoBody603.addChild(&ROUTE1443);

OrientationInterpolator& OrientationInterpolator1444 =  OrientationInterpolator();
OrientationInterpolator1444.setDEF(std::string("r_sternoclavicular_OI"));
IS& IS1445 =  IS();
Connect& connect1446 =  Connect();
connect1446.setNodeField(std::string("key"));
connect1446.setProtoField(std::string("r_sternoclavicular_key"));
IS1445.addChild(&connect1446);

Connect& connect1447 =  Connect();
connect1447.setNodeField(std::string("keyValue"));
connect1447.setProtoField(std::string("r_sternoclavicular_keyValue"));
IS1445.addChild(&connect1447);

Connect& connect1448 =  Connect();
connect1448.setNodeField(std::string("value_changed"));
connect1448.setProtoField(std::string("r_sternoclavicular_changed"));
IS1445.addChild(&connect1448);

OrientationInterpolator1444.addChild(&IS1445);

ProtoBody603.addChild(&OrientationInterpolator1444);

ROUTE& ROUTE1449 =  ROUTE();
ROUTE1449.setFromField(std::string("fraction_changed"));
ROUTE1449.setFromNode(std::string("BehaviorClock"));
ROUTE1449.setToField(std::string("set_fraction"));
ROUTE1449.setToNode(std::string("r_sternoclavicular_OI"));
ProtoBody603.addChild(&ROUTE1449);

OrientationInterpolator& OrientationInterpolator1450 =  OrientationInterpolator();
OrientationInterpolator1450.setDEF(std::string("r_subtalar_OI"));
IS& IS1451 =  IS();
Connect& connect1452 =  Connect();
connect1452.setNodeField(std::string("key"));
connect1452.setProtoField(std::string("r_subtalar_key"));
IS1451.addChild(&connect1452);

Connect& connect1453 =  Connect();
connect1453.setNodeField(std::string("keyValue"));
connect1453.setProtoField(std::string("r_subtalar_keyValue"));
IS1451.addChild(&connect1453);

Connect& connect1454 =  Connect();
connect1454.setNodeField(std::string("value_changed"));
connect1454.setProtoField(std::string("r_subtalar_changed"));
IS1451.addChild(&connect1454);

OrientationInterpolator1450.addChild(&IS1451);

ProtoBody603.addChild(&OrientationInterpolator1450);

ROUTE& ROUTE1455 =  ROUTE();
ROUTE1455.setFromField(std::string("fraction_changed"));
ROUTE1455.setFromNode(std::string("BehaviorClock"));
ROUTE1455.setToField(std::string("set_fraction"));
ROUTE1455.setToNode(std::string("r_subtalar_OI"));
ProtoBody603.addChild(&ROUTE1455);

OrientationInterpolator& OrientationInterpolator1456 =  OrientationInterpolator();
OrientationInterpolator1456.setDEF(std::string("r_thigh_OI"));
IS& IS1457 =  IS();
Connect& connect1458 =  Connect();
connect1458.setNodeField(std::string("key"));
connect1458.setProtoField(std::string("r_thigh_key"));
IS1457.addChild(&connect1458);

Connect& connect1459 =  Connect();
connect1459.setNodeField(std::string("keyValue"));
connect1459.setProtoField(std::string("r_thigh_keyValue"));
IS1457.addChild(&connect1459);

Connect& connect1460 =  Connect();
connect1460.setNodeField(std::string("value_changed"));
connect1460.setProtoField(std::string("r_thigh_changed"));
IS1457.addChild(&connect1460);

OrientationInterpolator1456.addChild(&IS1457);

ProtoBody603.addChild(&OrientationInterpolator1456);

ROUTE& ROUTE1461 =  ROUTE();
ROUTE1461.setFromField(std::string("fraction_changed"));
ROUTE1461.setFromNode(std::string("BehaviorClock"));
ROUTE1461.setToField(std::string("set_fraction"));
ROUTE1461.setToNode(std::string("r_thigh_OI"));
ProtoBody603.addChild(&ROUTE1461);

OrientationInterpolator& OrientationInterpolator1462 =  OrientationInterpolator();
OrientationInterpolator1462.setDEF(std::string("r_thumb1_OI"));
IS& IS1463 =  IS();
Connect& connect1464 =  Connect();
connect1464.setNodeField(std::string("key"));
connect1464.setProtoField(std::string("r_thumb1_key"));
IS1463.addChild(&connect1464);

Connect& connect1465 =  Connect();
connect1465.setNodeField(std::string("keyValue"));
connect1465.setProtoField(std::string("r_thumb1_keyValue"));
IS1463.addChild(&connect1465);

Connect& connect1466 =  Connect();
connect1466.setNodeField(std::string("value_changed"));
connect1466.setProtoField(std::string("r_thumb1_changed"));
IS1463.addChild(&connect1466);

OrientationInterpolator1462.addChild(&IS1463);

ProtoBody603.addChild(&OrientationInterpolator1462);

ROUTE& ROUTE1467 =  ROUTE();
ROUTE1467.setFromField(std::string("fraction_changed"));
ROUTE1467.setFromNode(std::string("BehaviorClock"));
ROUTE1467.setToField(std::string("set_fraction"));
ROUTE1467.setToNode(std::string("r_thumb1_OI"));
ProtoBody603.addChild(&ROUTE1467);

OrientationInterpolator& OrientationInterpolator1468 =  OrientationInterpolator();
OrientationInterpolator1468.setDEF(std::string("r_thumb2_OI"));
IS& IS1469 =  IS();
Connect& connect1470 =  Connect();
connect1470.setNodeField(std::string("key"));
connect1470.setProtoField(std::string("r_thumb2_key"));
IS1469.addChild(&connect1470);

Connect& connect1471 =  Connect();
connect1471.setNodeField(std::string("keyValue"));
connect1471.setProtoField(std::string("r_thumb2_keyValue"));
IS1469.addChild(&connect1471);

Connect& connect1472 =  Connect();
connect1472.setNodeField(std::string("value_changed"));
connect1472.setProtoField(std::string("r_thumb2_changed"));
IS1469.addChild(&connect1472);

OrientationInterpolator1468.addChild(&IS1469);

ProtoBody603.addChild(&OrientationInterpolator1468);

ROUTE& ROUTE1473 =  ROUTE();
ROUTE1473.setFromField(std::string("fraction_changed"));
ROUTE1473.setFromNode(std::string("BehaviorClock"));
ROUTE1473.setToField(std::string("set_fraction"));
ROUTE1473.setToNode(std::string("r_thumb2_OI"));
ProtoBody603.addChild(&ROUTE1473);

OrientationInterpolator& OrientationInterpolator1474 =  OrientationInterpolator();
OrientationInterpolator1474.setDEF(std::string("r_thumb3_OI"));
IS& IS1475 =  IS();
Connect& connect1476 =  Connect();
connect1476.setNodeField(std::string("key"));
connect1476.setProtoField(std::string("r_thumb3_key"));
IS1475.addChild(&connect1476);

Connect& connect1477 =  Connect();
connect1477.setNodeField(std::string("keyValue"));
connect1477.setProtoField(std::string("r_thumb3_keyValue"));
IS1475.addChild(&connect1477);

Connect& connect1478 =  Connect();
connect1478.setNodeField(std::string("value_changed"));
connect1478.setProtoField(std::string("r_thumb3_changed"));
IS1475.addChild(&connect1478);

OrientationInterpolator1474.addChild(&IS1475);

ProtoBody603.addChild(&OrientationInterpolator1474);

ROUTE& ROUTE1479 =  ROUTE();
ROUTE1479.setFromField(std::string("fraction_changed"));
ROUTE1479.setFromNode(std::string("BehaviorClock"));
ROUTE1479.setToField(std::string("set_fraction"));
ROUTE1479.setToNode(std::string("r_thumb3_OI"));
ProtoBody603.addChild(&ROUTE1479);

OrientationInterpolator& OrientationInterpolator1480 =  OrientationInterpolator();
OrientationInterpolator1480.setDEF(std::string("r_thumb_distal_OI"));
IS& IS1481 =  IS();
Connect& connect1482 =  Connect();
connect1482.setNodeField(std::string("key"));
connect1482.setProtoField(std::string("r_thumb_distal_key"));
IS1481.addChild(&connect1482);

Connect& connect1483 =  Connect();
connect1483.setNodeField(std::string("keyValue"));
connect1483.setProtoField(std::string("r_thumb_distal_keyValue"));
IS1481.addChild(&connect1483);

Connect& connect1484 =  Connect();
connect1484.setNodeField(std::string("value_changed"));
connect1484.setProtoField(std::string("r_thumb_distal_changed"));
IS1481.addChild(&connect1484);

OrientationInterpolator1480.addChild(&IS1481);

ProtoBody603.addChild(&OrientationInterpolator1480);

ROUTE& ROUTE1485 =  ROUTE();
ROUTE1485.setFromField(std::string("fraction_changed"));
ROUTE1485.setFromNode(std::string("BehaviorClock"));
ROUTE1485.setToField(std::string("set_fraction"));
ROUTE1485.setToNode(std::string("r_thumb_distal_OI"));
ProtoBody603.addChild(&ROUTE1485);

OrientationInterpolator& OrientationInterpolator1486 =  OrientationInterpolator();
OrientationInterpolator1486.setDEF(std::string("r_thumb_metacarpal_OI"));
IS& IS1487 =  IS();
Connect& connect1488 =  Connect();
connect1488.setNodeField(std::string("key"));
connect1488.setProtoField(std::string("r_thumb_metacarpal_key"));
IS1487.addChild(&connect1488);

Connect& connect1489 =  Connect();
connect1489.setNodeField(std::string("keyValue"));
connect1489.setProtoField(std::string("r_thumb_metacarpal_keyValue"));
IS1487.addChild(&connect1489);

Connect& connect1490 =  Connect();
connect1490.setNodeField(std::string("value_changed"));
connect1490.setProtoField(std::string("r_thumb_metacarpal_changed"));
IS1487.addChild(&connect1490);

OrientationInterpolator1486.addChild(&IS1487);

ProtoBody603.addChild(&OrientationInterpolator1486);

ROUTE& ROUTE1491 =  ROUTE();
ROUTE1491.setFromField(std::string("fraction_changed"));
ROUTE1491.setFromNode(std::string("BehaviorClock"));
ROUTE1491.setToField(std::string("set_fraction"));
ROUTE1491.setToNode(std::string("r_thumb_metacarpal_OI"));
ProtoBody603.addChild(&ROUTE1491);

OrientationInterpolator& OrientationInterpolator1492 =  OrientationInterpolator();
OrientationInterpolator1492.setDEF(std::string("r_thumb_proximal_OI"));
IS& IS1493 =  IS();
Connect& connect1494 =  Connect();
connect1494.setNodeField(std::string("key"));
connect1494.setProtoField(std::string("r_thumb_proximal_key"));
IS1493.addChild(&connect1494);

Connect& connect1495 =  Connect();
connect1495.setNodeField(std::string("keyValue"));
connect1495.setProtoField(std::string("r_thumb_proximal_keyValue"));
IS1493.addChild(&connect1495);

Connect& connect1496 =  Connect();
connect1496.setNodeField(std::string("value_changed"));
connect1496.setProtoField(std::string("r_thumb_proximal_changed"));
IS1493.addChild(&connect1496);

OrientationInterpolator1492.addChild(&IS1493);

ProtoBody603.addChild(&OrientationInterpolator1492);

ROUTE& ROUTE1497 =  ROUTE();
ROUTE1497.setFromField(std::string("fraction_changed"));
ROUTE1497.setFromNode(std::string("BehaviorClock"));
ROUTE1497.setToField(std::string("set_fraction"));
ROUTE1497.setToNode(std::string("r_thumb_proximal_OI"));
ProtoBody603.addChild(&ROUTE1497);

OrientationInterpolator& OrientationInterpolator1498 =  OrientationInterpolator();
OrientationInterpolator1498.setDEF(std::string("r_upperarm_OI"));
IS& IS1499 =  IS();
Connect& connect1500 =  Connect();
connect1500.setNodeField(std::string("key"));
connect1500.setProtoField(std::string("r_upperarm_key"));
IS1499.addChild(&connect1500);

Connect& connect1501 =  Connect();
connect1501.setNodeField(std::string("keyValue"));
connect1501.setProtoField(std::string("r_upperarm_keyValue"));
IS1499.addChild(&connect1501);

Connect& connect1502 =  Connect();
connect1502.setNodeField(std::string("value_changed"));
connect1502.setProtoField(std::string("r_upperarm_changed"));
IS1499.addChild(&connect1502);

OrientationInterpolator1498.addChild(&IS1499);

ProtoBody603.addChild(&OrientationInterpolator1498);

ROUTE& ROUTE1503 =  ROUTE();
ROUTE1503.setFromField(std::string("fraction_changed"));
ROUTE1503.setFromNode(std::string("BehaviorClock"));
ROUTE1503.setToField(std::string("set_fraction"));
ROUTE1503.setToNode(std::string("r_upperarm_OI"));
ProtoBody603.addChild(&ROUTE1503);

OrientationInterpolator& OrientationInterpolator1504 =  OrientationInterpolator();
OrientationInterpolator1504.setDEF(std::string("r_wrist_OI"));
IS& IS1505 =  IS();
Connect& connect1506 =  Connect();
connect1506.setNodeField(std::string("key"));
connect1506.setProtoField(std::string("r_wrist_key"));
IS1505.addChild(&connect1506);

Connect& connect1507 =  Connect();
connect1507.setNodeField(std::string("keyValue"));
connect1507.setProtoField(std::string("r_wrist_keyValue"));
IS1505.addChild(&connect1507);

Connect& connect1508 =  Connect();
connect1508.setNodeField(std::string("value_changed"));
connect1508.setProtoField(std::string("r_wrist_changed"));
IS1505.addChild(&connect1508);

OrientationInterpolator1504.addChild(&IS1505);

ProtoBody603.addChild(&OrientationInterpolator1504);

ROUTE& ROUTE1509 =  ROUTE();
ROUTE1509.setFromField(std::string("fraction_changed"));
ROUTE1509.setFromNode(std::string("BehaviorClock"));
ROUTE1509.setToField(std::string("set_fraction"));
ROUTE1509.setToNode(std::string("r_wrist_OI"));
ProtoBody603.addChild(&ROUTE1509);

OrientationInterpolator& OrientationInterpolator1510 =  OrientationInterpolator();
OrientationInterpolator1510.setDEF(std::string("sacroiliac_OI"));
IS& IS1511 =  IS();
Connect& connect1512 =  Connect();
connect1512.setNodeField(std::string("key"));
connect1512.setProtoField(std::string("sacroiliac_key"));
IS1511.addChild(&connect1512);

Connect& connect1513 =  Connect();
connect1513.setNodeField(std::string("keyValue"));
connect1513.setProtoField(std::string("sacroiliac_keyValue"));
IS1511.addChild(&connect1513);

Connect& connect1514 =  Connect();
connect1514.setNodeField(std::string("value_changed"));
connect1514.setProtoField(std::string("sacroiliac_changed"));
IS1511.addChild(&connect1514);

OrientationInterpolator1510.addChild(&IS1511);

ProtoBody603.addChild(&OrientationInterpolator1510);

ROUTE& ROUTE1515 =  ROUTE();
ROUTE1515.setFromField(std::string("fraction_changed"));
ROUTE1515.setFromNode(std::string("BehaviorClock"));
ROUTE1515.setToField(std::string("set_fraction"));
ROUTE1515.setToNode(std::string("sacroiliac_OI"));
ProtoBody603.addChild(&ROUTE1515);

OrientationInterpolator& OrientationInterpolator1516 =  OrientationInterpolator();
OrientationInterpolator1516.setDEF(std::string("sacrum_OI"));
IS& IS1517 =  IS();
Connect& connect1518 =  Connect();
connect1518.setNodeField(std::string("key"));
connect1518.setProtoField(std::string("sacrum_key"));
IS1517.addChild(&connect1518);

Connect& connect1519 =  Connect();
connect1519.setNodeField(std::string("keyValue"));
connect1519.setProtoField(std::string("sacrum_keyValue"));
IS1517.addChild(&connect1519);

Connect& connect1520 =  Connect();
connect1520.setNodeField(std::string("value_changed"));
connect1520.setProtoField(std::string("sacrum_changed"));
IS1517.addChild(&connect1520);

OrientationInterpolator1516.addChild(&IS1517);

ProtoBody603.addChild(&OrientationInterpolator1516);

ROUTE& ROUTE1521 =  ROUTE();
ROUTE1521.setFromField(std::string("fraction_changed"));
ROUTE1521.setFromNode(std::string("BehaviorClock"));
ROUTE1521.setToField(std::string("set_fraction"));
ROUTE1521.setToNode(std::string("sacrum_OI"));
ProtoBody603.addChild(&ROUTE1521);

OrientationInterpolator& OrientationInterpolator1522 =  OrientationInterpolator();
OrientationInterpolator1522.setDEF(std::string("skull_OI"));
IS& IS1523 =  IS();
Connect& connect1524 =  Connect();
connect1524.setNodeField(std::string("key"));
connect1524.setProtoField(std::string("skull_key"));
IS1523.addChild(&connect1524);

Connect& connect1525 =  Connect();
connect1525.setNodeField(std::string("keyValue"));
connect1525.setProtoField(std::string("skull_keyValue"));
IS1523.addChild(&connect1525);

Connect& connect1526 =  Connect();
connect1526.setNodeField(std::string("value_changed"));
connect1526.setProtoField(std::string("skull_changed"));
IS1523.addChild(&connect1526);

OrientationInterpolator1522.addChild(&IS1523);

ProtoBody603.addChild(&OrientationInterpolator1522);

ROUTE& ROUTE1527 =  ROUTE();
ROUTE1527.setFromField(std::string("fraction_changed"));
ROUTE1527.setFromNode(std::string("BehaviorClock"));
ROUTE1527.setToField(std::string("set_fraction"));
ROUTE1527.setToNode(std::string("skull_OI"));
ProtoBody603.addChild(&ROUTE1527);

OrientationInterpolator& OrientationInterpolator1528 =  OrientationInterpolator();
OrientationInterpolator1528.setDEF(std::string("skullbase_OI"));
IS& IS1529 =  IS();
Connect& connect1530 =  Connect();
connect1530.setNodeField(std::string("key"));
connect1530.setProtoField(std::string("skullbase_key"));
IS1529.addChild(&connect1530);

Connect& connect1531 =  Connect();
connect1531.setNodeField(std::string("keyValue"));
connect1531.setProtoField(std::string("skullbase_keyValue"));
IS1529.addChild(&connect1531);

Connect& connect1532 =  Connect();
connect1532.setNodeField(std::string("value_changed"));
connect1532.setProtoField(std::string("skullbase_changed"));
IS1529.addChild(&connect1532);

OrientationInterpolator1528.addChild(&IS1529);

ProtoBody603.addChild(&OrientationInterpolator1528);

ROUTE& ROUTE1533 =  ROUTE();
ROUTE1533.setFromField(std::string("fraction_changed"));
ROUTE1533.setFromNode(std::string("BehaviorClock"));
ROUTE1533.setToField(std::string("set_fraction"));
ROUTE1533.setToNode(std::string("skullbase_OI"));
ProtoBody603.addChild(&ROUTE1533);

OrientationInterpolator& OrientationInterpolator1534 =  OrientationInterpolator();
OrientationInterpolator1534.setDEF(std::string("t1_OI"));
IS& IS1535 =  IS();
Connect& connect1536 =  Connect();
connect1536.setNodeField(std::string("key"));
connect1536.setProtoField(std::string("t1_key"));
IS1535.addChild(&connect1536);

Connect& connect1537 =  Connect();
connect1537.setNodeField(std::string("keyValue"));
connect1537.setProtoField(std::string("t1_keyValue"));
IS1535.addChild(&connect1537);

Connect& connect1538 =  Connect();
connect1538.setNodeField(std::string("value_changed"));
connect1538.setProtoField(std::string("t1_changed"));
IS1535.addChild(&connect1538);

OrientationInterpolator1534.addChild(&IS1535);

ProtoBody603.addChild(&OrientationInterpolator1534);

ROUTE& ROUTE1539 =  ROUTE();
ROUTE1539.setFromField(std::string("fraction_changed"));
ROUTE1539.setFromNode(std::string("BehaviorClock"));
ROUTE1539.setToField(std::string("set_fraction"));
ROUTE1539.setToNode(std::string("t1_OI"));
ProtoBody603.addChild(&ROUTE1539);

OrientationInterpolator& OrientationInterpolator1540 =  OrientationInterpolator();
OrientationInterpolator1540.setDEF(std::string("t2_OI"));
IS& IS1541 =  IS();
Connect& connect1542 =  Connect();
connect1542.setNodeField(std::string("key"));
connect1542.setProtoField(std::string("t2_key"));
IS1541.addChild(&connect1542);

Connect& connect1543 =  Connect();
connect1543.setNodeField(std::string("keyValue"));
connect1543.setProtoField(std::string("t2_keyValue"));
IS1541.addChild(&connect1543);

Connect& connect1544 =  Connect();
connect1544.setNodeField(std::string("value_changed"));
connect1544.setProtoField(std::string("t2_changed"));
IS1541.addChild(&connect1544);

OrientationInterpolator1540.addChild(&IS1541);

ProtoBody603.addChild(&OrientationInterpolator1540);

ROUTE& ROUTE1545 =  ROUTE();
ROUTE1545.setFromField(std::string("fraction_changed"));
ROUTE1545.setFromNode(std::string("BehaviorClock"));
ROUTE1545.setToField(std::string("set_fraction"));
ROUTE1545.setToNode(std::string("t2_OI"));
ProtoBody603.addChild(&ROUTE1545);

OrientationInterpolator& OrientationInterpolator1546 =  OrientationInterpolator();
OrientationInterpolator1546.setDEF(std::string("t3_OI"));
IS& IS1547 =  IS();
Connect& connect1548 =  Connect();
connect1548.setNodeField(std::string("key"));
connect1548.setProtoField(std::string("t3_key"));
IS1547.addChild(&connect1548);

Connect& connect1549 =  Connect();
connect1549.setNodeField(std::string("keyValue"));
connect1549.setProtoField(std::string("t3_keyValue"));
IS1547.addChild(&connect1549);

Connect& connect1550 =  Connect();
connect1550.setNodeField(std::string("value_changed"));
connect1550.setProtoField(std::string("t3_changed"));
IS1547.addChild(&connect1550);

OrientationInterpolator1546.addChild(&IS1547);

ProtoBody603.addChild(&OrientationInterpolator1546);

ROUTE& ROUTE1551 =  ROUTE();
ROUTE1551.setFromField(std::string("fraction_changed"));
ROUTE1551.setFromNode(std::string("BehaviorClock"));
ROUTE1551.setToField(std::string("set_fraction"));
ROUTE1551.setToNode(std::string("t3_OI"));
ProtoBody603.addChild(&ROUTE1551);

OrientationInterpolator& OrientationInterpolator1552 =  OrientationInterpolator();
OrientationInterpolator1552.setDEF(std::string("t4_OI"));
IS& IS1553 =  IS();
Connect& connect1554 =  Connect();
connect1554.setNodeField(std::string("key"));
connect1554.setProtoField(std::string("t4_key"));
IS1553.addChild(&connect1554);

Connect& connect1555 =  Connect();
connect1555.setNodeField(std::string("keyValue"));
connect1555.setProtoField(std::string("t4_keyValue"));
IS1553.addChild(&connect1555);

Connect& connect1556 =  Connect();
connect1556.setNodeField(std::string("value_changed"));
connect1556.setProtoField(std::string("t4_changed"));
IS1553.addChild(&connect1556);

OrientationInterpolator1552.addChild(&IS1553);

ProtoBody603.addChild(&OrientationInterpolator1552);

ROUTE& ROUTE1557 =  ROUTE();
ROUTE1557.setFromField(std::string("fraction_changed"));
ROUTE1557.setFromNode(std::string("BehaviorClock"));
ROUTE1557.setToField(std::string("set_fraction"));
ROUTE1557.setToNode(std::string("t4_OI"));
ProtoBody603.addChild(&ROUTE1557);

OrientationInterpolator& OrientationInterpolator1558 =  OrientationInterpolator();
OrientationInterpolator1558.setDEF(std::string("t5_OI"));
IS& IS1559 =  IS();
Connect& connect1560 =  Connect();
connect1560.setNodeField(std::string("key"));
connect1560.setProtoField(std::string("t5_key"));
IS1559.addChild(&connect1560);

Connect& connect1561 =  Connect();
connect1561.setNodeField(std::string("keyValue"));
connect1561.setProtoField(std::string("t5_keyValue"));
IS1559.addChild(&connect1561);

Connect& connect1562 =  Connect();
connect1562.setNodeField(std::string("value_changed"));
connect1562.setProtoField(std::string("t5_changed"));
IS1559.addChild(&connect1562);

OrientationInterpolator1558.addChild(&IS1559);

ProtoBody603.addChild(&OrientationInterpolator1558);

ROUTE& ROUTE1563 =  ROUTE();
ROUTE1563.setFromField(std::string("fraction_changed"));
ROUTE1563.setFromNode(std::string("BehaviorClock"));
ROUTE1563.setToField(std::string("set_fraction"));
ROUTE1563.setToNode(std::string("t5_OI"));
ProtoBody603.addChild(&ROUTE1563);

OrientationInterpolator& OrientationInterpolator1564 =  OrientationInterpolator();
OrientationInterpolator1564.setDEF(std::string("t6_OI"));
IS& IS1565 =  IS();
Connect& connect1566 =  Connect();
connect1566.setNodeField(std::string("key"));
connect1566.setProtoField(std::string("t6_key"));
IS1565.addChild(&connect1566);

Connect& connect1567 =  Connect();
connect1567.setNodeField(std::string("keyValue"));
connect1567.setProtoField(std::string("t6_keyValue"));
IS1565.addChild(&connect1567);

Connect& connect1568 =  Connect();
connect1568.setNodeField(std::string("value_changed"));
connect1568.setProtoField(std::string("t6_changed"));
IS1565.addChild(&connect1568);

OrientationInterpolator1564.addChild(&IS1565);

ProtoBody603.addChild(&OrientationInterpolator1564);

ROUTE& ROUTE1569 =  ROUTE();
ROUTE1569.setFromField(std::string("fraction_changed"));
ROUTE1569.setFromNode(std::string("BehaviorClock"));
ROUTE1569.setToField(std::string("set_fraction"));
ROUTE1569.setToNode(std::string("t6_OI"));
ProtoBody603.addChild(&ROUTE1569);

OrientationInterpolator& OrientationInterpolator1570 =  OrientationInterpolator();
OrientationInterpolator1570.setDEF(std::string("t7_OI"));
IS& IS1571 =  IS();
Connect& connect1572 =  Connect();
connect1572.setNodeField(std::string("key"));
connect1572.setProtoField(std::string("t7_key"));
IS1571.addChild(&connect1572);

Connect& connect1573 =  Connect();
connect1573.setNodeField(std::string("keyValue"));
connect1573.setProtoField(std::string("t7_keyValue"));
IS1571.addChild(&connect1573);

Connect& connect1574 =  Connect();
connect1574.setNodeField(std::string("value_changed"));
connect1574.setProtoField(std::string("t7_changed"));
IS1571.addChild(&connect1574);

OrientationInterpolator1570.addChild(&IS1571);

ProtoBody603.addChild(&OrientationInterpolator1570);

ROUTE& ROUTE1575 =  ROUTE();
ROUTE1575.setFromField(std::string("fraction_changed"));
ROUTE1575.setFromNode(std::string("BehaviorClock"));
ROUTE1575.setToField(std::string("set_fraction"));
ROUTE1575.setToNode(std::string("t7_OI"));
ProtoBody603.addChild(&ROUTE1575);

OrientationInterpolator& OrientationInterpolator1576 =  OrientationInterpolator();
OrientationInterpolator1576.setDEF(std::string("t8_OI"));
IS& IS1577 =  IS();
Connect& connect1578 =  Connect();
connect1578.setNodeField(std::string("key"));
connect1578.setProtoField(std::string("t8_key"));
IS1577.addChild(&connect1578);

Connect& connect1579 =  Connect();
connect1579.setNodeField(std::string("keyValue"));
connect1579.setProtoField(std::string("t8_keyValue"));
IS1577.addChild(&connect1579);

Connect& connect1580 =  Connect();
connect1580.setNodeField(std::string("value_changed"));
connect1580.setProtoField(std::string("t8_changed"));
IS1577.addChild(&connect1580);

OrientationInterpolator1576.addChild(&IS1577);

ProtoBody603.addChild(&OrientationInterpolator1576);

ROUTE& ROUTE1581 =  ROUTE();
ROUTE1581.setFromField(std::string("fraction_changed"));
ROUTE1581.setFromNode(std::string("BehaviorClock"));
ROUTE1581.setToField(std::string("set_fraction"));
ROUTE1581.setToNode(std::string("t8_OI"));
ProtoBody603.addChild(&ROUTE1581);

OrientationInterpolator& OrientationInterpolator1582 =  OrientationInterpolator();
OrientationInterpolator1582.setDEF(std::string("t9_OI"));
IS& IS1583 =  IS();
Connect& connect1584 =  Connect();
connect1584.setNodeField(std::string("key"));
connect1584.setProtoField(std::string("t9_key"));
IS1583.addChild(&connect1584);

Connect& connect1585 =  Connect();
connect1585.setNodeField(std::string("keyValue"));
connect1585.setProtoField(std::string("t9_keyValue"));
IS1583.addChild(&connect1585);

Connect& connect1586 =  Connect();
connect1586.setNodeField(std::string("value_changed"));
connect1586.setProtoField(std::string("t9_changed"));
IS1583.addChild(&connect1586);

OrientationInterpolator1582.addChild(&IS1583);

ProtoBody603.addChild(&OrientationInterpolator1582);

ROUTE& ROUTE1587 =  ROUTE();
ROUTE1587.setFromField(std::string("fraction_changed"));
ROUTE1587.setFromNode(std::string("BehaviorClock"));
ROUTE1587.setToField(std::string("set_fraction"));
ROUTE1587.setToNode(std::string("t9_OI"));
ProtoBody603.addChild(&ROUTE1587);

OrientationInterpolator& OrientationInterpolator1588 =  OrientationInterpolator();
OrientationInterpolator1588.setDEF(std::string("t10_OI"));
IS& IS1589 =  IS();
Connect& connect1590 =  Connect();
connect1590.setNodeField(std::string("key"));
connect1590.setProtoField(std::string("t10_key"));
IS1589.addChild(&connect1590);

Connect& connect1591 =  Connect();
connect1591.setNodeField(std::string("keyValue"));
connect1591.setProtoField(std::string("t10_keyValue"));
IS1589.addChild(&connect1591);

Connect& connect1592 =  Connect();
connect1592.setNodeField(std::string("value_changed"));
connect1592.setProtoField(std::string("t10_changed"));
IS1589.addChild(&connect1592);

OrientationInterpolator1588.addChild(&IS1589);

ProtoBody603.addChild(&OrientationInterpolator1588);

ROUTE& ROUTE1593 =  ROUTE();
ROUTE1593.setFromField(std::string("fraction_changed"));
ROUTE1593.setFromNode(std::string("BehaviorClock"));
ROUTE1593.setToField(std::string("set_fraction"));
ROUTE1593.setToNode(std::string("t10_OI"));
ProtoBody603.addChild(&ROUTE1593);

OrientationInterpolator& OrientationInterpolator1594 =  OrientationInterpolator();
OrientationInterpolator1594.setDEF(std::string("t11_OI"));
IS& IS1595 =  IS();
Connect& connect1596 =  Connect();
connect1596.setNodeField(std::string("key"));
connect1596.setProtoField(std::string("t11_key"));
IS1595.addChild(&connect1596);

Connect& connect1597 =  Connect();
connect1597.setNodeField(std::string("keyValue"));
connect1597.setProtoField(std::string("t11_keyValue"));
IS1595.addChild(&connect1597);

Connect& connect1598 =  Connect();
connect1598.setNodeField(std::string("value_changed"));
connect1598.setProtoField(std::string("t11_changed"));
IS1595.addChild(&connect1598);

OrientationInterpolator1594.addChild(&IS1595);

ProtoBody603.addChild(&OrientationInterpolator1594);

ROUTE& ROUTE1599 =  ROUTE();
ROUTE1599.setFromField(std::string("fraction_changed"));
ROUTE1599.setFromNode(std::string("BehaviorClock"));
ROUTE1599.setToField(std::string("set_fraction"));
ROUTE1599.setToNode(std::string("t11_OI"));
ProtoBody603.addChild(&ROUTE1599);

OrientationInterpolator& OrientationInterpolator1600 =  OrientationInterpolator();
OrientationInterpolator1600.setDEF(std::string("t12_OI"));
IS& IS1601 =  IS();
Connect& connect1602 =  Connect();
connect1602.setNodeField(std::string("key"));
connect1602.setProtoField(std::string("t12_key"));
IS1601.addChild(&connect1602);

Connect& connect1603 =  Connect();
connect1603.setNodeField(std::string("keyValue"));
connect1603.setProtoField(std::string("t12_keyValue"));
IS1601.addChild(&connect1603);

Connect& connect1604 =  Connect();
connect1604.setNodeField(std::string("value_changed"));
connect1604.setProtoField(std::string("t12_changed"));
IS1601.addChild(&connect1604);

OrientationInterpolator1600.addChild(&IS1601);

ProtoBody603.addChild(&OrientationInterpolator1600);

ROUTE& ROUTE1605 =  ROUTE();
ROUTE1605.setFromField(std::string("fraction_changed"));
ROUTE1605.setFromNode(std::string("BehaviorClock"));
ROUTE1605.setToField(std::string("set_fraction"));
ROUTE1605.setToNode(std::string("t12_OI"));
ProtoBody603.addChild(&ROUTE1605);

OrientationInterpolator& OrientationInterpolator1606 =  OrientationInterpolator();
OrientationInterpolator1606.setDEF(std::string("temporomandibular_OI"));
IS& IS1607 =  IS();
Connect& connect1608 =  Connect();
connect1608.setNodeField(std::string("key"));
connect1608.setProtoField(std::string("temporomandibular_key"));
IS1607.addChild(&connect1608);

Connect& connect1609 =  Connect();
connect1609.setNodeField(std::string("keyValue"));
connect1609.setProtoField(std::string("temporomandibular_keyValue"));
IS1607.addChild(&connect1609);

Connect& connect1610 =  Connect();
connect1610.setNodeField(std::string("value_changed"));
connect1610.setProtoField(std::string("temporomandibular_changed"));
IS1607.addChild(&connect1610);

OrientationInterpolator1606.addChild(&IS1607);

ProtoBody603.addChild(&OrientationInterpolator1606);

ROUTE& ROUTE1611 =  ROUTE();
ROUTE1611.setFromField(std::string("fraction_changed"));
ROUTE1611.setFromNode(std::string("BehaviorClock"));
ROUTE1611.setToField(std::string("set_fraction"));
ROUTE1611.setToNode(std::string("temporomandibular_OI"));
ProtoBody603.addChild(&ROUTE1611);

OrientationInterpolator& OrientationInterpolator1612 =  OrientationInterpolator();
OrientationInterpolator1612.setDEF(std::string("vc1_OI"));
IS& IS1613 =  IS();
Connect& connect1614 =  Connect();
connect1614.setNodeField(std::string("key"));
connect1614.setProtoField(std::string("vc1_key"));
IS1613.addChild(&connect1614);

Connect& connect1615 =  Connect();
connect1615.setNodeField(std::string("keyValue"));
connect1615.setProtoField(std::string("vc1_keyValue"));
IS1613.addChild(&connect1615);

Connect& connect1616 =  Connect();
connect1616.setNodeField(std::string("value_changed"));
connect1616.setProtoField(std::string("vc1_changed"));
IS1613.addChild(&connect1616);

OrientationInterpolator1612.addChild(&IS1613);

ProtoBody603.addChild(&OrientationInterpolator1612);

ROUTE& ROUTE1617 =  ROUTE();
ROUTE1617.setFromField(std::string("fraction_changed"));
ROUTE1617.setFromNode(std::string("BehaviorClock"));
ROUTE1617.setToField(std::string("set_fraction"));
ROUTE1617.setToNode(std::string("vc1_OI"));
ProtoBody603.addChild(&ROUTE1617);

OrientationInterpolator& OrientationInterpolator1618 =  OrientationInterpolator();
OrientationInterpolator1618.setDEF(std::string("vc2_OI"));
IS& IS1619 =  IS();
Connect& connect1620 =  Connect();
connect1620.setNodeField(std::string("key"));
connect1620.setProtoField(std::string("vc2_key"));
IS1619.addChild(&connect1620);

Connect& connect1621 =  Connect();
connect1621.setNodeField(std::string("keyValue"));
connect1621.setProtoField(std::string("vc2_keyValue"));
IS1619.addChild(&connect1621);

Connect& connect1622 =  Connect();
connect1622.setNodeField(std::string("value_changed"));
connect1622.setProtoField(std::string("vc2_changed"));
IS1619.addChild(&connect1622);

OrientationInterpolator1618.addChild(&IS1619);

ProtoBody603.addChild(&OrientationInterpolator1618);

ROUTE& ROUTE1623 =  ROUTE();
ROUTE1623.setFromField(std::string("fraction_changed"));
ROUTE1623.setFromNode(std::string("BehaviorClock"));
ROUTE1623.setToField(std::string("set_fraction"));
ROUTE1623.setToNode(std::string("vc2_OI"));
ProtoBody603.addChild(&ROUTE1623);

OrientationInterpolator& OrientationInterpolator1624 =  OrientationInterpolator();
OrientationInterpolator1624.setDEF(std::string("vc3_OI"));
IS& IS1625 =  IS();
Connect& connect1626 =  Connect();
connect1626.setNodeField(std::string("key"));
connect1626.setProtoField(std::string("vc3_key"));
IS1625.addChild(&connect1626);

Connect& connect1627 =  Connect();
connect1627.setNodeField(std::string("keyValue"));
connect1627.setProtoField(std::string("vc3_keyValue"));
IS1625.addChild(&connect1627);

Connect& connect1628 =  Connect();
connect1628.setNodeField(std::string("value_changed"));
connect1628.setProtoField(std::string("vc3_changed"));
IS1625.addChild(&connect1628);

OrientationInterpolator1624.addChild(&IS1625);

ProtoBody603.addChild(&OrientationInterpolator1624);

ROUTE& ROUTE1629 =  ROUTE();
ROUTE1629.setFromField(std::string("fraction_changed"));
ROUTE1629.setFromNode(std::string("BehaviorClock"));
ROUTE1629.setToField(std::string("set_fraction"));
ROUTE1629.setToNode(std::string("vc3_OI"));
ProtoBody603.addChild(&ROUTE1629);

OrientationInterpolator& OrientationInterpolator1630 =  OrientationInterpolator();
OrientationInterpolator1630.setDEF(std::string("vc4_OI"));
IS& IS1631 =  IS();
Connect& connect1632 =  Connect();
connect1632.setNodeField(std::string("key"));
connect1632.setProtoField(std::string("vc4_key"));
IS1631.addChild(&connect1632);

Connect& connect1633 =  Connect();
connect1633.setNodeField(std::string("keyValue"));
connect1633.setProtoField(std::string("vc4_keyValue"));
IS1631.addChild(&connect1633);

Connect& connect1634 =  Connect();
connect1634.setNodeField(std::string("value_changed"));
connect1634.setProtoField(std::string("vc4_changed"));
IS1631.addChild(&connect1634);

OrientationInterpolator1630.addChild(&IS1631);

ProtoBody603.addChild(&OrientationInterpolator1630);

ROUTE& ROUTE1635 =  ROUTE();
ROUTE1635.setFromField(std::string("fraction_changed"));
ROUTE1635.setFromNode(std::string("BehaviorClock"));
ROUTE1635.setToField(std::string("set_fraction"));
ROUTE1635.setToNode(std::string("vc4_OI"));
ProtoBody603.addChild(&ROUTE1635);

OrientationInterpolator& OrientationInterpolator1636 =  OrientationInterpolator();
OrientationInterpolator1636.setDEF(std::string("vc5_OI"));
IS& IS1637 =  IS();
Connect& connect1638 =  Connect();
connect1638.setNodeField(std::string("key"));
connect1638.setProtoField(std::string("vc5_key"));
IS1637.addChild(&connect1638);

Connect& connect1639 =  Connect();
connect1639.setNodeField(std::string("keyValue"));
connect1639.setProtoField(std::string("vc5_keyValue"));
IS1637.addChild(&connect1639);

Connect& connect1640 =  Connect();
connect1640.setNodeField(std::string("value_changed"));
connect1640.setProtoField(std::string("vc5_changed"));
IS1637.addChild(&connect1640);

OrientationInterpolator1636.addChild(&IS1637);

ProtoBody603.addChild(&OrientationInterpolator1636);

ROUTE& ROUTE1641 =  ROUTE();
ROUTE1641.setFromField(std::string("fraction_changed"));
ROUTE1641.setFromNode(std::string("BehaviorClock"));
ROUTE1641.setToField(std::string("set_fraction"));
ROUTE1641.setToNode(std::string("vc5_OI"));
ProtoBody603.addChild(&ROUTE1641);

OrientationInterpolator& OrientationInterpolator1642 =  OrientationInterpolator();
OrientationInterpolator1642.setDEF(std::string("vc6_OI"));
IS& IS1643 =  IS();
Connect& connect1644 =  Connect();
connect1644.setNodeField(std::string("key"));
connect1644.setProtoField(std::string("vc6_key"));
IS1643.addChild(&connect1644);

Connect& connect1645 =  Connect();
connect1645.setNodeField(std::string("keyValue"));
connect1645.setProtoField(std::string("vc6_keyValue"));
IS1643.addChild(&connect1645);

Connect& connect1646 =  Connect();
connect1646.setNodeField(std::string("value_changed"));
connect1646.setProtoField(std::string("vc6_changed"));
IS1643.addChild(&connect1646);

OrientationInterpolator1642.addChild(&IS1643);

ProtoBody603.addChild(&OrientationInterpolator1642);

ROUTE& ROUTE1647 =  ROUTE();
ROUTE1647.setFromField(std::string("fraction_changed"));
ROUTE1647.setFromNode(std::string("BehaviorClock"));
ROUTE1647.setToField(std::string("set_fraction"));
ROUTE1647.setToNode(std::string("vc6_OI"));
ProtoBody603.addChild(&ROUTE1647);

OrientationInterpolator& OrientationInterpolator1648 =  OrientationInterpolator();
OrientationInterpolator1648.setDEF(std::string("vc7_OI"));
IS& IS1649 =  IS();
Connect& connect1650 =  Connect();
connect1650.setNodeField(std::string("key"));
connect1650.setProtoField(std::string("vc7_key"));
IS1649.addChild(&connect1650);

Connect& connect1651 =  Connect();
connect1651.setNodeField(std::string("keyValue"));
connect1651.setProtoField(std::string("vc7_keyValue"));
IS1649.addChild(&connect1651);

Connect& connect1652 =  Connect();
connect1652.setNodeField(std::string("value_changed"));
connect1652.setProtoField(std::string("vc7_changed"));
IS1649.addChild(&connect1652);

OrientationInterpolator1648.addChild(&IS1649);

ProtoBody603.addChild(&OrientationInterpolator1648);

ROUTE& ROUTE1653 =  ROUTE();
ROUTE1653.setFromField(std::string("fraction_changed"));
ROUTE1653.setFromNode(std::string("BehaviorClock"));
ROUTE1653.setToField(std::string("set_fraction"));
ROUTE1653.setToNode(std::string("vc7_OI"));
ProtoBody603.addChild(&ROUTE1653);

OrientationInterpolator& OrientationInterpolator1654 =  OrientationInterpolator();
OrientationInterpolator1654.setDEF(std::string("vl1_OI"));
IS& IS1655 =  IS();
Connect& connect1656 =  Connect();
connect1656.setNodeField(std::string("key"));
connect1656.setProtoField(std::string("vl1_key"));
IS1655.addChild(&connect1656);

Connect& connect1657 =  Connect();
connect1657.setNodeField(std::string("keyValue"));
connect1657.setProtoField(std::string("vl1_keyValue"));
IS1655.addChild(&connect1657);

Connect& connect1658 =  Connect();
connect1658.setNodeField(std::string("value_changed"));
connect1658.setProtoField(std::string("vl1_changed"));
IS1655.addChild(&connect1658);

OrientationInterpolator1654.addChild(&IS1655);

ProtoBody603.addChild(&OrientationInterpolator1654);

ROUTE& ROUTE1659 =  ROUTE();
ROUTE1659.setFromField(std::string("fraction_changed"));
ROUTE1659.setFromNode(std::string("BehaviorClock"));
ROUTE1659.setToField(std::string("set_fraction"));
ROUTE1659.setToNode(std::string("vl1_OI"));
ProtoBody603.addChild(&ROUTE1659);

OrientationInterpolator& OrientationInterpolator1660 =  OrientationInterpolator();
OrientationInterpolator1660.setDEF(std::string("vl2_OI"));
IS& IS1661 =  IS();
Connect& connect1662 =  Connect();
connect1662.setNodeField(std::string("key"));
connect1662.setProtoField(std::string("vl2_key"));
IS1661.addChild(&connect1662);

Connect& connect1663 =  Connect();
connect1663.setNodeField(std::string("keyValue"));
connect1663.setProtoField(std::string("vl2_keyValue"));
IS1661.addChild(&connect1663);

Connect& connect1664 =  Connect();
connect1664.setNodeField(std::string("value_changed"));
connect1664.setProtoField(std::string("vl2_changed"));
IS1661.addChild(&connect1664);

OrientationInterpolator1660.addChild(&IS1661);

ProtoBody603.addChild(&OrientationInterpolator1660);

ROUTE& ROUTE1665 =  ROUTE();
ROUTE1665.setFromField(std::string("fraction_changed"));
ROUTE1665.setFromNode(std::string("BehaviorClock"));
ROUTE1665.setToField(std::string("set_fraction"));
ROUTE1665.setToNode(std::string("vl2_OI"));
ProtoBody603.addChild(&ROUTE1665);

OrientationInterpolator& OrientationInterpolator1666 =  OrientationInterpolator();
OrientationInterpolator1666.setDEF(std::string("vl3_OI"));
IS& IS1667 =  IS();
Connect& connect1668 =  Connect();
connect1668.setNodeField(std::string("key"));
connect1668.setProtoField(std::string("vl3_key"));
IS1667.addChild(&connect1668);

Connect& connect1669 =  Connect();
connect1669.setNodeField(std::string("keyValue"));
connect1669.setProtoField(std::string("vl3_keyValue"));
IS1667.addChild(&connect1669);

Connect& connect1670 =  Connect();
connect1670.setNodeField(std::string("value_changed"));
connect1670.setProtoField(std::string("vl3_changed"));
IS1667.addChild(&connect1670);

OrientationInterpolator1666.addChild(&IS1667);

ProtoBody603.addChild(&OrientationInterpolator1666);

ROUTE& ROUTE1671 =  ROUTE();
ROUTE1671.setFromField(std::string("fraction_changed"));
ROUTE1671.setFromNode(std::string("BehaviorClock"));
ROUTE1671.setToField(std::string("set_fraction"));
ROUTE1671.setToNode(std::string("vl3_OI"));
ProtoBody603.addChild(&ROUTE1671);

OrientationInterpolator& OrientationInterpolator1672 =  OrientationInterpolator();
OrientationInterpolator1672.setDEF(std::string("vl4_OI"));
IS& IS1673 =  IS();
Connect& connect1674 =  Connect();
connect1674.setNodeField(std::string("key"));
connect1674.setProtoField(std::string("vl4_key"));
IS1673.addChild(&connect1674);

Connect& connect1675 =  Connect();
connect1675.setNodeField(std::string("keyValue"));
connect1675.setProtoField(std::string("vl4_keyValue"));
IS1673.addChild(&connect1675);

Connect& connect1676 =  Connect();
connect1676.setNodeField(std::string("value_changed"));
connect1676.setProtoField(std::string("vl4_changed"));
IS1673.addChild(&connect1676);

OrientationInterpolator1672.addChild(&IS1673);

ProtoBody603.addChild(&OrientationInterpolator1672);

ROUTE& ROUTE1677 =  ROUTE();
ROUTE1677.setFromField(std::string("fraction_changed"));
ROUTE1677.setFromNode(std::string("BehaviorClock"));
ROUTE1677.setToField(std::string("set_fraction"));
ROUTE1677.setToNode(std::string("vl4_OI"));
ProtoBody603.addChild(&ROUTE1677);

OrientationInterpolator& OrientationInterpolator1678 =  OrientationInterpolator();
OrientationInterpolator1678.setDEF(std::string("vl5_OI"));
IS& IS1679 =  IS();
Connect& connect1680 =  Connect();
connect1680.setNodeField(std::string("key"));
connect1680.setProtoField(std::string("vl5_key"));
IS1679.addChild(&connect1680);

Connect& connect1681 =  Connect();
connect1681.setNodeField(std::string("keyValue"));
connect1681.setProtoField(std::string("vl5_keyValue"));
IS1679.addChild(&connect1681);

Connect& connect1682 =  Connect();
connect1682.setNodeField(std::string("value_changed"));
connect1682.setProtoField(std::string("vl5_changed"));
IS1679.addChild(&connect1682);

OrientationInterpolator1678.addChild(&IS1679);

ProtoBody603.addChild(&OrientationInterpolator1678);

ROUTE& ROUTE1683 =  ROUTE();
ROUTE1683.setFromField(std::string("fraction_changed"));
ROUTE1683.setFromNode(std::string("BehaviorClock"));
ROUTE1683.setToField(std::string("set_fraction"));
ROUTE1683.setToNode(std::string("vl5_OI"));
ProtoBody603.addChild(&ROUTE1683);

OrientationInterpolator& OrientationInterpolator1684 =  OrientationInterpolator();
OrientationInterpolator1684.setDEF(std::string("vt1_OI"));
IS& IS1685 =  IS();
Connect& connect1686 =  Connect();
connect1686.setNodeField(std::string("key"));
connect1686.setProtoField(std::string("vt1_key"));
IS1685.addChild(&connect1686);

Connect& connect1687 =  Connect();
connect1687.setNodeField(std::string("keyValue"));
connect1687.setProtoField(std::string("vt1_keyValue"));
IS1685.addChild(&connect1687);

Connect& connect1688 =  Connect();
connect1688.setNodeField(std::string("value_changed"));
connect1688.setProtoField(std::string("vt1_changed"));
IS1685.addChild(&connect1688);

OrientationInterpolator1684.addChild(&IS1685);

ProtoBody603.addChild(&OrientationInterpolator1684);

ROUTE& ROUTE1689 =  ROUTE();
ROUTE1689.setFromField(std::string("fraction_changed"));
ROUTE1689.setFromNode(std::string("BehaviorClock"));
ROUTE1689.setToField(std::string("set_fraction"));
ROUTE1689.setToNode(std::string("vt1_OI"));
ProtoBody603.addChild(&ROUTE1689);

OrientationInterpolator& OrientationInterpolator1690 =  OrientationInterpolator();
OrientationInterpolator1690.setDEF(std::string("vt2_OI"));
IS& IS1691 =  IS();
Connect& connect1692 =  Connect();
connect1692.setNodeField(std::string("key"));
connect1692.setProtoField(std::string("vt2_key"));
IS1691.addChild(&connect1692);

Connect& connect1693 =  Connect();
connect1693.setNodeField(std::string("keyValue"));
connect1693.setProtoField(std::string("vt2_keyValue"));
IS1691.addChild(&connect1693);

Connect& connect1694 =  Connect();
connect1694.setNodeField(std::string("value_changed"));
connect1694.setProtoField(std::string("vt2_changed"));
IS1691.addChild(&connect1694);

OrientationInterpolator1690.addChild(&IS1691);

ProtoBody603.addChild(&OrientationInterpolator1690);

ROUTE& ROUTE1695 =  ROUTE();
ROUTE1695.setFromField(std::string("fraction_changed"));
ROUTE1695.setFromNode(std::string("BehaviorClock"));
ROUTE1695.setToField(std::string("set_fraction"));
ROUTE1695.setToNode(std::string("vt2_OI"));
ProtoBody603.addChild(&ROUTE1695);

OrientationInterpolator& OrientationInterpolator1696 =  OrientationInterpolator();
OrientationInterpolator1696.setDEF(std::string("vt3_OI"));
IS& IS1697 =  IS();
Connect& connect1698 =  Connect();
connect1698.setNodeField(std::string("key"));
connect1698.setProtoField(std::string("vt3_key"));
IS1697.addChild(&connect1698);

Connect& connect1699 =  Connect();
connect1699.setNodeField(std::string("keyValue"));
connect1699.setProtoField(std::string("vt3_keyValue"));
IS1697.addChild(&connect1699);

Connect& connect1700 =  Connect();
connect1700.setNodeField(std::string("value_changed"));
connect1700.setProtoField(std::string("vt3_changed"));
IS1697.addChild(&connect1700);

OrientationInterpolator1696.addChild(&IS1697);

ProtoBody603.addChild(&OrientationInterpolator1696);

ROUTE& ROUTE1701 =  ROUTE();
ROUTE1701.setFromField(std::string("fraction_changed"));
ROUTE1701.setFromNode(std::string("BehaviorClock"));
ROUTE1701.setToField(std::string("set_fraction"));
ROUTE1701.setToNode(std::string("vt3_OI"));
ProtoBody603.addChild(&ROUTE1701);

OrientationInterpolator& OrientationInterpolator1702 =  OrientationInterpolator();
OrientationInterpolator1702.setDEF(std::string("vt4_OI"));
IS& IS1703 =  IS();
Connect& connect1704 =  Connect();
connect1704.setNodeField(std::string("key"));
connect1704.setProtoField(std::string("vt4_key"));
IS1703.addChild(&connect1704);

Connect& connect1705 =  Connect();
connect1705.setNodeField(std::string("keyValue"));
connect1705.setProtoField(std::string("vt4_keyValue"));
IS1703.addChild(&connect1705);

Connect& connect1706 =  Connect();
connect1706.setNodeField(std::string("value_changed"));
connect1706.setProtoField(std::string("vt4_changed"));
IS1703.addChild(&connect1706);

OrientationInterpolator1702.addChild(&IS1703);

ProtoBody603.addChild(&OrientationInterpolator1702);

ROUTE& ROUTE1707 =  ROUTE();
ROUTE1707.setFromField(std::string("fraction_changed"));
ROUTE1707.setFromNode(std::string("BehaviorClock"));
ROUTE1707.setToField(std::string("set_fraction"));
ROUTE1707.setToNode(std::string("vt4_OI"));
ProtoBody603.addChild(&ROUTE1707);

OrientationInterpolator& OrientationInterpolator1708 =  OrientationInterpolator();
OrientationInterpolator1708.setDEF(std::string("vt5_OI"));
IS& IS1709 =  IS();
Connect& connect1710 =  Connect();
connect1710.setNodeField(std::string("key"));
connect1710.setProtoField(std::string("vt5_key"));
IS1709.addChild(&connect1710);

Connect& connect1711 =  Connect();
connect1711.setNodeField(std::string("keyValue"));
connect1711.setProtoField(std::string("vt5_keyValue"));
IS1709.addChild(&connect1711);

Connect& connect1712 =  Connect();
connect1712.setNodeField(std::string("value_changed"));
connect1712.setProtoField(std::string("vt5_changed"));
IS1709.addChild(&connect1712);

OrientationInterpolator1708.addChild(&IS1709);

ProtoBody603.addChild(&OrientationInterpolator1708);

ROUTE& ROUTE1713 =  ROUTE();
ROUTE1713.setFromField(std::string("fraction_changed"));
ROUTE1713.setFromNode(std::string("BehaviorClock"));
ROUTE1713.setToField(std::string("set_fraction"));
ROUTE1713.setToNode(std::string("vt5_OI"));
ProtoBody603.addChild(&ROUTE1713);

OrientationInterpolator& OrientationInterpolator1714 =  OrientationInterpolator();
OrientationInterpolator1714.setDEF(std::string("vt6_OI"));
IS& IS1715 =  IS();
Connect& connect1716 =  Connect();
connect1716.setNodeField(std::string("key"));
connect1716.setProtoField(std::string("vt6_key"));
IS1715.addChild(&connect1716);

Connect& connect1717 =  Connect();
connect1717.setNodeField(std::string("keyValue"));
connect1717.setProtoField(std::string("vt6_keyValue"));
IS1715.addChild(&connect1717);

Connect& connect1718 =  Connect();
connect1718.setNodeField(std::string("value_changed"));
connect1718.setProtoField(std::string("vt6_changed"));
IS1715.addChild(&connect1718);

OrientationInterpolator1714.addChild(&IS1715);

ProtoBody603.addChild(&OrientationInterpolator1714);

ROUTE& ROUTE1719 =  ROUTE();
ROUTE1719.setFromField(std::string("fraction_changed"));
ROUTE1719.setFromNode(std::string("BehaviorClock"));
ROUTE1719.setToField(std::string("set_fraction"));
ROUTE1719.setToNode(std::string("vt6_OI"));
ProtoBody603.addChild(&ROUTE1719);

OrientationInterpolator& OrientationInterpolator1720 =  OrientationInterpolator();
OrientationInterpolator1720.setDEF(std::string("vt7_OI"));
IS& IS1721 =  IS();
Connect& connect1722 =  Connect();
connect1722.setNodeField(std::string("key"));
connect1722.setProtoField(std::string("vt7_key"));
IS1721.addChild(&connect1722);

Connect& connect1723 =  Connect();
connect1723.setNodeField(std::string("keyValue"));
connect1723.setProtoField(std::string("vt7_keyValue"));
IS1721.addChild(&connect1723);

Connect& connect1724 =  Connect();
connect1724.setNodeField(std::string("value_changed"));
connect1724.setProtoField(std::string("vt7_changed"));
IS1721.addChild(&connect1724);

OrientationInterpolator1720.addChild(&IS1721);

ProtoBody603.addChild(&OrientationInterpolator1720);

ROUTE& ROUTE1725 =  ROUTE();
ROUTE1725.setFromField(std::string("fraction_changed"));
ROUTE1725.setFromNode(std::string("BehaviorClock"));
ROUTE1725.setToField(std::string("set_fraction"));
ROUTE1725.setToNode(std::string("vt7_OI"));
ProtoBody603.addChild(&ROUTE1725);

OrientationInterpolator& OrientationInterpolator1726 =  OrientationInterpolator();
OrientationInterpolator1726.setDEF(std::string("vt8_OI"));
IS& IS1727 =  IS();
Connect& connect1728 =  Connect();
connect1728.setNodeField(std::string("key"));
connect1728.setProtoField(std::string("vt8_key"));
IS1727.addChild(&connect1728);

Connect& connect1729 =  Connect();
connect1729.setNodeField(std::string("keyValue"));
connect1729.setProtoField(std::string("vt8_keyValue"));
IS1727.addChild(&connect1729);

Connect& connect1730 =  Connect();
connect1730.setNodeField(std::string("value_changed"));
connect1730.setProtoField(std::string("vt8_changed"));
IS1727.addChild(&connect1730);

OrientationInterpolator1726.addChild(&IS1727);

ProtoBody603.addChild(&OrientationInterpolator1726);

ROUTE& ROUTE1731 =  ROUTE();
ROUTE1731.setFromField(std::string("fraction_changed"));
ROUTE1731.setFromNode(std::string("BehaviorClock"));
ROUTE1731.setToField(std::string("set_fraction"));
ROUTE1731.setToNode(std::string("vt8_OI"));
ProtoBody603.addChild(&ROUTE1731);

OrientationInterpolator& OrientationInterpolator1732 =  OrientationInterpolator();
OrientationInterpolator1732.setDEF(std::string("vt9_OI"));
IS& IS1733 =  IS();
Connect& connect1734 =  Connect();
connect1734.setNodeField(std::string("key"));
connect1734.setProtoField(std::string("vt9_key"));
IS1733.addChild(&connect1734);

Connect& connect1735 =  Connect();
connect1735.setNodeField(std::string("keyValue"));
connect1735.setProtoField(std::string("vt9_keyValue"));
IS1733.addChild(&connect1735);

Connect& connect1736 =  Connect();
connect1736.setNodeField(std::string("value_changed"));
connect1736.setProtoField(std::string("vt9_changed"));
IS1733.addChild(&connect1736);

OrientationInterpolator1732.addChild(&IS1733);

ProtoBody603.addChild(&OrientationInterpolator1732);

ROUTE& ROUTE1737 =  ROUTE();
ROUTE1737.setFromField(std::string("fraction_changed"));
ROUTE1737.setFromNode(std::string("BehaviorClock"));
ROUTE1737.setToField(std::string("set_fraction"));
ROUTE1737.setToNode(std::string("vt9_OI"));
ProtoBody603.addChild(&ROUTE1737);

OrientationInterpolator& OrientationInterpolator1738 =  OrientationInterpolator();
OrientationInterpolator1738.setDEF(std::string("vt10_OI"));
IS& IS1739 =  IS();
Connect& connect1740 =  Connect();
connect1740.setNodeField(std::string("key"));
connect1740.setProtoField(std::string("vt10_key"));
IS1739.addChild(&connect1740);

Connect& connect1741 =  Connect();
connect1741.setNodeField(std::string("keyValue"));
connect1741.setProtoField(std::string("vt10_keyValue"));
IS1739.addChild(&connect1741);

Connect& connect1742 =  Connect();
connect1742.setNodeField(std::string("value_changed"));
connect1742.setProtoField(std::string("vt10_changed"));
IS1739.addChild(&connect1742);

OrientationInterpolator1738.addChild(&IS1739);

ProtoBody603.addChild(&OrientationInterpolator1738);

ROUTE& ROUTE1743 =  ROUTE();
ROUTE1743.setFromField(std::string("fraction_changed"));
ROUTE1743.setFromNode(std::string("BehaviorClock"));
ROUTE1743.setToField(std::string("set_fraction"));
ROUTE1743.setToNode(std::string("vt10_OI"));
ProtoBody603.addChild(&ROUTE1743);

OrientationInterpolator& OrientationInterpolator1744 =  OrientationInterpolator();
OrientationInterpolator1744.setDEF(std::string("vt11_OI"));
IS& IS1745 =  IS();
Connect& connect1746 =  Connect();
connect1746.setNodeField(std::string("key"));
connect1746.setProtoField(std::string("vt11_key"));
IS1745.addChild(&connect1746);

Connect& connect1747 =  Connect();
connect1747.setNodeField(std::string("keyValue"));
connect1747.setProtoField(std::string("vt11_keyValue"));
IS1745.addChild(&connect1747);

Connect& connect1748 =  Connect();
connect1748.setNodeField(std::string("value_changed"));
connect1748.setProtoField(std::string("vt11_changed"));
IS1745.addChild(&connect1748);

OrientationInterpolator1744.addChild(&IS1745);

ProtoBody603.addChild(&OrientationInterpolator1744);

ROUTE& ROUTE1749 =  ROUTE();
ROUTE1749.setFromField(std::string("fraction_changed"));
ROUTE1749.setFromNode(std::string("BehaviorClock"));
ROUTE1749.setToField(std::string("set_fraction"));
ROUTE1749.setToNode(std::string("vt11_OI"));
ProtoBody603.addChild(&ROUTE1749);

OrientationInterpolator& OrientationInterpolator1750 =  OrientationInterpolator();
OrientationInterpolator1750.setDEF(std::string("vt12_OI"));
IS& IS1751 =  IS();
Connect& connect1752 =  Connect();
connect1752.setNodeField(std::string("key"));
connect1752.setProtoField(std::string("vt12_key"));
IS1751.addChild(&connect1752);

Connect& connect1753 =  Connect();
connect1753.setNodeField(std::string("keyValue"));
connect1753.setProtoField(std::string("vt12_keyValue"));
IS1751.addChild(&connect1753);

Connect& connect1754 =  Connect();
connect1754.setNodeField(std::string("value_changed"));
connect1754.setProtoField(std::string("vt12_changed"));
IS1751.addChild(&connect1754);

OrientationInterpolator1750.addChild(&IS1751);

ProtoBody603.addChild(&OrientationInterpolator1750);

ROUTE& ROUTE1755 =  ROUTE();
ROUTE1755.setFromField(std::string("fraction_changed"));
ROUTE1755.setFromNode(std::string("BehaviorClock"));
ROUTE1755.setToField(std::string("set_fraction"));
ROUTE1755.setToNode(std::string("vt12_OI"));
ProtoBody603.addChild(&ROUTE1755);

ProtoDeclare20.addChild(&ProtoBody603);

Scene18.addChild(&ProtoDeclare20);

ProtoDeclare& ProtoDeclare1756 =  ProtoDeclare();
ProtoDeclare1756.setName(std::string("HAnimBodyBehaviorChooser"));
ProtoDeclare1756.setAppinfo(std::string("The HAnimBodyBehaviorChooser node allows an author to select one of several HAnimHumanoid bodies and simultaneously apply multiple HAnimBehavior animations to the active body. Individual behaviors may be enabled or disabled at any time."));
ProtoInterface& ProtoInterface1757 =  ProtoInterface();
//TODO: supported Level of Articulation (LOA) might be adapted to more efficiently setup/teardown pertinent ROUTEs
//accessType=\"inputOutput\" avoided to maintain backwards compatilibility with VRML97 scripting constraints
//shared common TimeSensor inputs for all BehaviorAnimation nodes, connected via ROUTEs
//TODO: consider named accessors, e.g. enableBehaviorByName and disableBehaviorByName
//TODO: consider addBody, removeBody, addBehavior, removeBehavior
//TODO: consider startBehaviorByIndex, stopBehaviorByIndex, startBehaviorByName, stopBehaviorByName
field& field1758 =  field();
field1758.setName(std::string("supportedLOA"));
field1758.setAccessType(std::string("inputOutput"));
field1758.setAppinfo(std::string("Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3."));
field1758.setType(std::string("SFInt32"));
field1758.setValue(std::string("-1"));
ProtoInterface1757.addChild(&field1758);

field& field1759 =  field();
field1759.setName(std::string("HumanoidArray"));
field1759.setAccessType(std::string("initializeOnly"));
field1759.setAppinfo(std::string("[HAnimHumanoid] nodes only"));
field1759.setType(std::string("MFNode"));
//default NULL
ProtoInterface1757.addChild(&field1759);

field& field1760 =  field();
field1760.setName(std::string("whichBody"));
field1760.setAccessType(std::string("initializeOnly"));
field1760.setAppinfo(std::string("whichBody is selected default is initial member of HumanoidArray"));
field1760.setType(std::string("SFInt32"));
field1760.setValue(std::string("-1"));
ProtoInterface1757.addChild(&field1760);

field& field1761 =  field();
field1761.setName(std::string("set_whichBody"));
field1761.setAccessType(std::string("inputOnly"));
field1761.setAppinfo(std::string("whichBody is selected default is none"));
field1761.setType(std::string("SFInt32"));
ProtoInterface1757.addChild(&field1761);

field& field1762 =  field();
field1762.setName(std::string("whichBody_changed"));
field1762.setAccessType(std::string("outputOnly"));
field1762.setAppinfo(std::string("whichBody is selected default is none"));
field1762.setType(std::string("SFInt32"));
ProtoInterface1757.addChild(&field1762);

field& field1763 =  field();
field1763.setName(std::string("hAnimBehaviorNodes"));
field1763.setAccessType(std::string("initializeOnly"));
field1763.setAppinfo(std::string("[HAnimBehavior] nodes only some or all of which may be enabled. Warning: do not animate a single joint with more than one interpolator at a given time."));
field1763.setType(std::string("MFNode"));
//default NULL
ProtoInterface1757.addChild(&field1763);

field& field1764 =  field();
field1764.setName(std::string("enabledBehaviorsArray"));
field1764.setAccessType(std::string("initializeOnly"));
field1764.setAppinfo(std::string("indicate which HAnimBehavior nodes are activated, empty indicates all enabled true"));
field1764.setType(std::string("MFBool"));
//no default values
ProtoInterface1757.addChild(&field1764);

field& field1765 =  field();
field1765.setName(std::string("enableBehavior"));
field1765.setAccessType(std::string("inputOnly"));
field1765.setAppinfo(std::string("enable corresponding behavior identified by index number"));
field1765.setType(std::string("SFInt32"));
ProtoInterface1757.addChild(&field1765);

field& field1766 =  field();
field1766.setName(std::string("disableBehavior"));
field1766.setAccessType(std::string("inputOnly"));
field1766.setAppinfo(std::string("disable corresponding behavior identified by index number"));
field1766.setType(std::string("SFInt32"));
ProtoInterface1757.addChild(&field1766);

field& field1767 =  field();
field1767.setName(std::string("startTime"));
field1767.setAccessType(std::string("inputOutput"));
field1767.setType(std::string("SFTime"));
field1767.setValue(std::string("0"));
ProtoInterface1757.addChild(&field1767);

field& field1768 =  field();
field1768.setName(std::string("stopTime"));
field1768.setAccessType(std::string("inputOutput"));
field1768.setType(std::string("SFTime"));
field1768.setValue(std::string("0"));
ProtoInterface1757.addChild(&field1768);

ProtoDeclare1756.addChild(&ProtoInterface1757);

ProtoBody& ProtoBody1769 =  ProtoBody();
Switch& Switch1770 =  Switch();
Switch1770.setDEF(std::string("BodySwitch"));
Switch1770.setWhichChoice(-1);
IS& IS1771 =  IS();
Connect& connect1772 =  Connect();
connect1772.setNodeField(std::string("whichChoice"));
connect1772.setProtoField(std::string("whichBody"));
IS1771.addChild(&connect1772);

Connect& connect1773 =  Connect();
connect1773.setNodeField(std::string("children"));
connect1773.setProtoField(std::string("HumanoidArray"));
IS1771.addChild(&connect1773);

Switch1770.addChild(&IS1771);

ProtoBody1769.addChild(&Switch1770);

//note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless
Group& Group1774 =  Group();
Group1774.setDEF(std::string("BehaviorArrayHolder"));
IS& IS1775 =  IS();
Connect& connect1776 =  Connect();
connect1776.setNodeField(std::string("children"));
connect1776.setProtoField(std::string("hAnimBehaviorNodes"));
IS1775.addChild(&connect1776);

Group1774.addChild(&IS1775);

ProtoBody1769.addChild(&Group1774);

TimeSensor& TimeSensor1777 =  TimeSensor();
TimeSensor1777.setDEF(std::string("TimeSensorHolderStartStopTimes"));
IS& IS1778 =  IS();
Connect& connect1779 =  Connect();
connect1779.setNodeField(std::string("startTime"));
connect1779.setProtoField(std::string("startTime"));
IS1778.addChild(&connect1779);

Connect& connect1780 =  Connect();
connect1780.setNodeField(std::string("stopTime"));
connect1780.setProtoField(std::string("stopTime"));
IS1778.addChild(&connect1780);

TimeSensor1777.addChild(&IS1778);

ProtoBody1769.addChild(&TimeSensor1777);

Switch& Switch1781 =  Switch();
Switch1781.setDEF(std::string("SupportedLoaHolder2"));
Switch1781.setWhichChoice(-1);
IS& IS1782 =  IS();
Connect& connect1783 =  Connect();
connect1783.setNodeField(std::string("whichChoice"));
connect1783.setProtoField(std::string("supportedLOA"));
IS1782.addChild(&connect1783);

Switch1781.addChild(&IS1782);

ProtoBody1769.addChild(&Switch1781);

Script& Script1784 =  Script();
Script1784.setDEF(std::string("BehaviorSelectionScript"));
Script1784.setDirectOutput(true);
Script1784.setUrl((std::string[]){"HAnimBehaviorPrototypesScript.js", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypesScript.js"}, 2);
field& field1785 =  field();
field1785.setName(std::string("HumanoidArray"));
field1785.setAccessType(std::string("initializeOnly"));
field1785.setAppinfo(std::string("[HAnimHumanoid] nodes only"));
field1785.setType(std::string("MFNode"));
Script1784.addChild(&field1785);

field& field1786 =  field();
field1786.setName(std::string("whichBody"));
field1786.setAccessType(std::string("initializeOnly"));
field1786.setAppinfo(std::string("whichBody is selected default is none"));
field1786.setType(std::string("SFInt32"));
Script1784.addChild(&field1786);

field& field1787 =  field();
field1787.setName(std::string("set_whichBody"));
field1787.setAccessType(std::string("inputOnly"));
field1787.setAppinfo(std::string("whichBody is selected default is none"));
field1787.setType(std::string("SFInt32"));
Script1784.addChild(&field1787);

field& field1788 =  field();
field1788.setName(std::string("whichBody_changed"));
field1788.setAccessType(std::string("outputOnly"));
field1788.setAppinfo(std::string("whichBody is selected default is none"));
field1788.setType(std::string("SFInt32"));
Script1784.addChild(&field1788);

field& field1789 =  field();
field1789.setName(std::string("hAnimBehaviorNodes"));
field1789.setAccessType(std::string("initializeOnly"));
field1789.setAppinfo(std::string("[HAnimBehavior] nodes only"));
field1789.setType(std::string("MFNode"));
//TODO: might consider accessType=\"inputOutput\" if VRML97 compatibility not needed
Script1784.addChild(&field1789);

field& field1790 =  field();
field1790.setName(std::string("enabledBehaviorsArray"));
field1790.setAccessType(std::string("initializeOnly"));
field1790.setType(std::string("MFBool"));
Script1784.addChild(&field1790);

field& field1791 =  field();
field1791.setName(std::string("enableBehavior"));
field1791.setAccessType(std::string("inputOnly"));
field1791.setAppinfo(std::string("enable corresponding behavior"));
field1791.setType(std::string("SFInt32"));
Script1784.addChild(&field1791);

field& field1792 =  field();
field1792.setName(std::string("disableBehavior"));
field1792.setAccessType(std::string("inputOnly"));
field1792.setAppinfo(std::string("enable corresponding behavior"));
field1792.setType(std::string("SFInt32"));
Script1784.addChild(&field1792);

field& field1793 =  field();
field1793.setName(std::string("timeSensorNode"));
field1793.setAccessType(std::string("initializeOnly"));
field1793.setType(std::string("SFNode"));
TimeSensor& TimeSensor1794 =  TimeSensor();
TimeSensor1794.setUSE(std::string("TimeSensorHolderStartStopTimes"));
field1793.addChild(&TimeSensor1794);

Script1784.addChild(&field1793);

field& field1795 =  field();
field1795.setName(std::string("previousBodyIndex"));
field1795.setAccessType(std::string("initializeOnly"));
field1795.setAppinfo(std::string("remember prior body index to avoid unnecessary ROUTE teardown and creation"));
field1795.setType(std::string("SFInt32"));
field1795.setValue(std::string("-1"));
Script1784.addChild(&field1795);

field& field1796 =  field();
field1796.setName(std::string("traceEnabled"));
field1796.setAccessType(std::string("initializeOnly"));
field1796.setType(std::string("SFBool"));
field1796.setValue(std::string("true"));
Script1784.addChild(&field1796);

IS& IS1797 =  IS();
Connect& connect1798 =  Connect();
connect1798.setNodeField(std::string("HumanoidArray"));
connect1798.setProtoField(std::string("HumanoidArray"));
IS1797.addChild(&connect1798);

Connect& connect1799 =  Connect();
connect1799.setNodeField(std::string("whichBody"));
connect1799.setProtoField(std::string("whichBody"));
IS1797.addChild(&connect1799);

Connect& connect1800 =  Connect();
connect1800.setNodeField(std::string("set_whichBody"));
connect1800.setProtoField(std::string("set_whichBody"));
IS1797.addChild(&connect1800);

Connect& connect1801 =  Connect();
connect1801.setNodeField(std::string("whichBody_changed"));
connect1801.setProtoField(std::string("whichBody_changed"));
IS1797.addChild(&connect1801);

Connect& connect1802 =  Connect();
connect1802.setNodeField(std::string("hAnimBehaviorNodes"));
connect1802.setProtoField(std::string("hAnimBehaviorNodes"));
IS1797.addChild(&connect1802);

Connect& connect1803 =  Connect();
connect1803.setNodeField(std::string("enabledBehaviorsArray"));
connect1803.setProtoField(std::string("enabledBehaviorsArray"));
IS1797.addChild(&connect1803);

Connect& connect1804 =  Connect();
connect1804.setNodeField(std::string("enableBehavior"));
connect1804.setProtoField(std::string("enableBehavior"));
IS1797.addChild(&connect1804);

Connect& connect1805 =  Connect();
connect1805.setNodeField(std::string("disableBehavior"));
connect1805.setProtoField(std::string("disableBehavior"));
IS1797.addChild(&connect1805);

Script1784.addChild(&IS1797);

ProtoBody1769.addChild(&Script1784);

ProtoDeclare1756.addChild(&ProtoBody1769);

Scene18.addChild(&ProtoDeclare1756);

//TODO: Goal is to have 3 different ways to present a body: local creation, Inline with IMPORT/EXPORT, or external prototype.
ProtoInstance& ProtoInstance1806 =  ProtoInstance();
ProtoInstance1806.setName(std::string("HAnimBehavior"));
ProtoInstance1806.setDEF(std::string("BehaviorTest1"));
//only one PositionInterpolator key/keyValue definition for entire humanoid - optional
//must have paired overrides of each key/keyValue array being defined
fieldValue& fieldValue1807 =  fieldValue();
fieldValue1807.setName(std::string("HumanoidRoot_translation_key"));
fieldValue1807.setValue(std::string("0 0.25 0.5 0.75 1"));
ProtoInstance1806.addChild(&fieldValue1807);

fieldValue& fieldValue1808 =  fieldValue();
fieldValue1808.setName(std::string("HumanoidRoot_translation_keyValue"));
fieldValue1808.setValue(std::string("0 0 0 0 0 10 0 0 20 0 0 30 0 0 40 0 0 50"));
ProtoInstance1806.addChild(&fieldValue1808);

fieldValue& fieldValue1809 =  fieldValue();
fieldValue1809.setName(std::string("r_ankle_key"));
fieldValue1809.setValue(std::string("0 0.5 1"));
ProtoInstance1806.addChild(&fieldValue1809);

fieldValue& fieldValue1810 =  fieldValue();
fieldValue1810.setName(std::string("r_ankle_keyValue"));
fieldValue1810.setValue(std::string("0 1 0 0 0 1 0 0.2 0 1 0 0.4"));
ProtoInstance1806.addChild(&fieldValue1810);

Scene18.addChild(&ProtoInstance1806);

ProtoInstance& ProtoInstance1811 =  ProtoInstance();
ProtoInstance1811.setName(std::string("HAnimBodyBehaviorChooser"));
ProtoInstance1811.setDEF(std::string("ChooserTest"));
fieldValue& fieldValue1812 =  fieldValue();
fieldValue1812.setName(std::string("HumanoidArray"));
HAnimHumanoid& HAnimHumanoid1813 =  HAnimHumanoid();
HAnimHumanoid1813.X3DNode::setName(std::string("DiamondManLOA-1"));
HAnimHumanoid1813.setDEF(std::string("hanim_DiamondManLOA-1"));
HAnimHumanoid1813.setVersion(std::string("2.0"));
fieldValue1812.addChild(&HAnimHumanoid1813);

ProtoInstance1811.addChild(&fieldValue1812);

fieldValue& fieldValue1814 =  fieldValue();
fieldValue1814.setName(std::string("whichBody"));
fieldValue1814.setValue(std::string("0"));
ProtoInstance1811.addChild(&fieldValue1814);

fieldValue& fieldValue1815 =  fieldValue();
fieldValue1815.setName(std::string("hAnimBehaviorNodes"));
ProtoInstance& ProtoInstance1816 =  ProtoInstance();
ProtoInstance1816.setName(std::string("HAnimBehavior"));
ProtoInstance1816.setUSE(std::string("BehaviorTest1"));
fieldValue1815.addChild(&ProtoInstance1816);

ProtoInstance1811.addChild(&fieldValue1815);

fieldValue& fieldValue1817 =  fieldValue();
fieldValue1817.setName(std::string("enabledBehaviorsArray"));
fieldValue1817.setValue(std::string("true"));
ProtoInstance1811.addChild(&fieldValue1817);

Scene18.addChild(&ProtoInstance1811);

X3D0.setScene(&Scene18);

}
