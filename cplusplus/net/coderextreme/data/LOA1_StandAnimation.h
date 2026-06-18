#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
int LOA1_StandAnimation(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("LOA1_StandAnimation.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("Humanoid animation prototype reusable by any Humanoid."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("rights"));
meta5.setContent(std::string("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("translator"));
meta6.setContent(std::string("Ozan APAYDIN"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("created"));
meta7.setContent(std::string("1 December 2001"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("modified"));
meta8.setContent(std::string("23 May 2020"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("TODO"));
meta9.setContent(std::string("consider adding eyeball animation"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("reference"));
meta10.setContent(std::string("https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("reference"));
meta11.setContent(std::string("https://www.HAnim.org"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("reference"));
meta12.setContent(std::string("https://HAnim.org/Models"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("reference"));
meta13.setContent(std::string("https://HAnim.org/Nodes"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("subject"));
meta14.setContent(std::string("Nancy Stand Animation HAnim 2001"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("identifier"));
meta15.setContent(std::string("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StandAnimation.x3d"));
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
WorldInfo19.setTitle(std::string("LOA1_StandAnimation.x3d"));
Scene18.addChild(&WorldInfo19);

ProtoDeclare& ProtoDeclare20 =  ProtoDeclare();
ProtoDeclare20.setName(std::string("LOA1_StandAnimation"));
ProtoInterface& ProtoInterface21 =  ProtoInterface();
field& field22 =  field();
field22.setName(std::string("cycleInterval"));
field22.setAccessType(std::string("inputOutput"));
field22.setType(std::string("SFTime"));
field22.setValue(std::string("0.009999999776482582"));
ProtoInterface21.addChild(&field22);

field& field23 =  field();
field23.setName(std::string("enabled"));
field23.setAccessType(std::string("inputOutput"));
field23.setType(std::string("SFBool"));
field23.setValue(std::string("true"));
ProtoInterface21.addChild(&field23);

field& field24 =  field();
field24.setName(std::string("loop"));
field24.setAccessType(std::string("inputOutput"));
field24.setType(std::string("SFBool"));
field24.setValue(std::string("true"));
ProtoInterface21.addChild(&field24);

field& field25 =  field();
field25.setName(std::string("startTime"));
field25.setAccessType(std::string("inputOutput"));
field25.setType(std::string("SFTime"));
field25.setValue(std::string("0"));
ProtoInterface21.addChild(&field25);

field& field26 =  field();
field26.setName(std::string("stopTime"));
field26.setAccessType(std::string("inputOutput"));
field26.setType(std::string("SFTime"));
field26.setValue(std::string("-1"));
ProtoInterface21.addChild(&field26);

field& field27 =  field();
field27.setName(std::string("fraction_changed"));
field27.setAccessType(std::string("outputOnly"));
field27.setType(std::string("SFFloat"));
ProtoInterface21.addChild(&field27);

field& field28 =  field();
field28.setName(std::string("isActive"));
field28.setAccessType(std::string("outputOnly"));
field28.setType(std::string("SFBool"));
ProtoInterface21.addChild(&field28);

field& field29 =  field();
field29.setName(std::string("HumanoidRoot_translation_changed"));
field29.setAccessType(std::string("outputOnly"));
field29.setType(std::string("SFVec3f"));
ProtoInterface21.addChild(&field29);

field& field30 =  field();
field30.setName(std::string("HumanoidRoot_rotation_changed"));
field30.setAccessType(std::string("outputOnly"));
field30.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field30);

field& field31 =  field();
field31.setName(std::string("lower_body_rotation_changed"));
field31.setAccessType(std::string("outputOnly"));
field31.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field31);

field& field32 =  field();
field32.setName(std::string("l_hip_rotation_changed"));
field32.setAccessType(std::string("outputOnly"));
field32.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field32);

field& field33 =  field();
field33.setName(std::string("l_knee_rotation_changed"));
field33.setAccessType(std::string("outputOnly"));
field33.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field33);

field& field34 =  field();
field34.setName(std::string("l_ankle_rotation_changed"));
field34.setAccessType(std::string("outputOnly"));
field34.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field34);

field& field35 =  field();
field35.setName(std::string("l_midtarsal_rotation_changed"));
field35.setAccessType(std::string("outputOnly"));
field35.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field35);

field& field36 =  field();
field36.setName(std::string("r_hip_rotation_changed"));
field36.setAccessType(std::string("outputOnly"));
field36.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field36);

field& field37 =  field();
field37.setName(std::string("r_knee_rotation_changed"));
field37.setAccessType(std::string("outputOnly"));
field37.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field37);

field& field38 =  field();
field38.setName(std::string("r_ankle_rotation_changed"));
field38.setAccessType(std::string("outputOnly"));
field38.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field38);

field& field39 =  field();
field39.setName(std::string("r_midtarsal_rotation_changed"));
field39.setAccessType(std::string("outputOnly"));
field39.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field39);

field& field40 =  field();
field40.setName(std::string("vl5_rotation_changed"));
field40.setAccessType(std::string("outputOnly"));
field40.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field40);

field& field41 =  field();
field41.setName(std::string("skullbase_rotation_changed"));
field41.setAccessType(std::string("outputOnly"));
field41.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field41);

field& field42 =  field();
field42.setName(std::string("l_shoulder_rotation_changed"));
field42.setAccessType(std::string("outputOnly"));
field42.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field42);

field& field43 =  field();
field43.setName(std::string("l_elbow_rotation_changed"));
field43.setAccessType(std::string("outputOnly"));
field43.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field43);

field& field44 =  field();
field44.setName(std::string("l_wrist_rotation_changed"));
field44.setAccessType(std::string("outputOnly"));
field44.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field44);

field& field45 =  field();
field45.setName(std::string("r_shoulder_rotation_changed"));
field45.setAccessType(std::string("outputOnly"));
field45.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field45);

field& field46 =  field();
field46.setName(std::string("r_elbow_rotation_changed"));
field46.setAccessType(std::string("outputOnly"));
field46.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field46);

field& field47 =  field();
field47.setName(std::string("r_wrist_rotation_changed"));
field47.setAccessType(std::string("outputOnly"));
field47.setType(std::string("SFRotation"));
ProtoInterface21.addChild(&field47);

ProtoDeclare20.addChild(&ProtoInterface21);

ProtoBody& ProtoBody48 =  ProtoBody();
Group& Group49 =  Group();
TimeSensor& TimeSensor50 =  TimeSensor();
TimeSensor50.setDEF(std::string("TIMER"));
IS& IS51 =  IS();
Connect& connect52 =  Connect();
connect52.setNodeField(std::string("cycleInterval"));
connect52.setProtoField(std::string("cycleInterval"));
IS51.addChild(&connect52);

Connect& connect53 =  Connect();
connect53.setNodeField(std::string("enabled"));
connect53.setProtoField(std::string("enabled"));
IS51.addChild(&connect53);

Connect& connect54 =  Connect();
connect54.setNodeField(std::string("loop"));
connect54.setProtoField(std::string("loop"));
IS51.addChild(&connect54);

Connect& connect55 =  Connect();
connect55.setNodeField(std::string("startTime"));
connect55.setProtoField(std::string("startTime"));
IS51.addChild(&connect55);

Connect& connect56 =  Connect();
connect56.setNodeField(std::string("stopTime"));
connect56.setProtoField(std::string("stopTime"));
IS51.addChild(&connect56);

Connect& connect57 =  Connect();
connect57.setNodeField(std::string("fraction_changed"));
connect57.setProtoField(std::string("fraction_changed"));
IS51.addChild(&connect57);

Connect& connect58 =  Connect();
connect58.setNodeField(std::string("isActive"));
connect58.setProtoField(std::string("isActive"));
IS51.addChild(&connect58);

TimeSensor50.addChild(&IS51);

Group49.addChild(&TimeSensor50);

PositionInterpolator& PositionInterpolator59 =  PositionInterpolator();
PositionInterpolator59.setDEF(std::string("HUMANOIDROOT_POSITION_ANIMATOR"));
PositionInterpolator59.setKey(new float[]{0.0,1.0});
PositionInterpolator59.setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0}, 6);
IS& IS60 =  IS();
Connect& connect61 =  Connect();
connect61.setNodeField(std::string("value_changed"));
connect61.setProtoField(std::string("HumanoidRoot_translation_changed"));
IS60.addChild(&connect61);

PositionInterpolator59.addChild(&IS60);

Group49.addChild(&PositionInterpolator59);

OrientationInterpolator& OrientationInterpolator62 =  OrientationInterpolator();
OrientationInterpolator62.setDEF(std::string("HUMANOIDROOT_ANIMATOR"));
OrientationInterpolator62.setKey(new float[]{0.0,1.0});
OrientationInterpolator62.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
IS& IS63 =  IS();
Connect& connect64 =  Connect();
connect64.setNodeField(std::string("value_changed"));
connect64.setProtoField(std::string("HumanoidRoot_rotation_changed"));
IS63.addChild(&connect64);

OrientationInterpolator62.addChild(&IS63);

Group49.addChild(&OrientationInterpolator62);

OrientationInterpolator& OrientationInterpolator65 =  OrientationInterpolator();
OrientationInterpolator65.setDEF(std::string("SACROILIAC_ANIMATOR"));
OrientationInterpolator65.setKey(new float[]{0.0,1.0});
OrientationInterpolator65.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
IS& IS66 =  IS();
Connect& connect67 =  Connect();
connect67.setNodeField(std::string("value_changed"));
connect67.setProtoField(std::string("lower_body_rotation_changed"));
IS66.addChild(&connect67);

OrientationInterpolator65.addChild(&IS66);

Group49.addChild(&OrientationInterpolator65);

OrientationInterpolator& OrientationInterpolator68 =  OrientationInterpolator();
OrientationInterpolator68.setDEF(std::string("L_HIP_ANIMATOR"));
OrientationInterpolator68.setKey(new float[]{0.0,1.0});
OrientationInterpolator68.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
IS& IS69 =  IS();
Connect& connect70 =  Connect();
connect70.setNodeField(std::string("value_changed"));
connect70.setProtoField(std::string("l_hip_rotation_changed"));
IS69.addChild(&connect70);

OrientationInterpolator68.addChild(&IS69);

Group49.addChild(&OrientationInterpolator68);

OrientationInterpolator& OrientationInterpolator71 =  OrientationInterpolator();
OrientationInterpolator71.setDEF(std::string("L_KNEE_ANIMATOR"));
OrientationInterpolator71.setKey(new float[]{0.0,1.0});
OrientationInterpolator71.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
IS& IS72 =  IS();
Connect& connect73 =  Connect();
connect73.setNodeField(std::string("value_changed"));
connect73.setProtoField(std::string("l_knee_rotation_changed"));
IS72.addChild(&connect73);

OrientationInterpolator71.addChild(&IS72);

Group49.addChild(&OrientationInterpolator71);

OrientationInterpolator& OrientationInterpolator74 =  OrientationInterpolator();
OrientationInterpolator74.setDEF(std::string("L_ANKLE_ANIMATOR"));
OrientationInterpolator74.setKey(new float[]{0.0,1.0});
OrientationInterpolator74.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
IS& IS75 =  IS();
Connect& connect76 =  Connect();
connect76.setNodeField(std::string("value_changed"));
connect76.setProtoField(std::string("l_ankle_rotation_changed"));
IS75.addChild(&connect76);

OrientationInterpolator74.addChild(&IS75);

Group49.addChild(&OrientationInterpolator74);

OrientationInterpolator& OrientationInterpolator77 =  OrientationInterpolator();
OrientationInterpolator77.setDEF(std::string("L_MIDTARSAL_ANIMATOR"));
OrientationInterpolator77.setKey(new float[]{0.0,1.0});
OrientationInterpolator77.setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0}, 8);
IS& IS78 =  IS();
Connect& connect79 =  Connect();
connect79.setNodeField(std::string("value_changed"));
connect79.setProtoField(std::string("l_midtarsal_rotation_changed"));
IS78.addChild(&connect79);

OrientationInterpolator77.addChild(&IS78);

Group49.addChild(&OrientationInterpolator77);

OrientationInterpolator& OrientationInterpolator80 =  OrientationInterpolator();
OrientationInterpolator80.setDEF(std::string("R_HIP_ANIMATOR"));
OrientationInterpolator80.setKey(new float[]{0.0,1.0});
OrientationInterpolator80.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
IS& IS81 =  IS();
Connect& connect82 =  Connect();
connect82.setNodeField(std::string("value_changed"));
connect82.setProtoField(std::string("r_hip_rotation_changed"));
IS81.addChild(&connect82);

OrientationInterpolator80.addChild(&IS81);

Group49.addChild(&OrientationInterpolator80);

OrientationInterpolator& OrientationInterpolator83 =  OrientationInterpolator();
OrientationInterpolator83.setDEF(std::string("R_KNEE_ANIMATOR"));
OrientationInterpolator83.setKey(new float[]{0.0,1.0});
OrientationInterpolator83.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
IS& IS84 =  IS();
Connect& connect85 =  Connect();
connect85.setNodeField(std::string("value_changed"));
connect85.setProtoField(std::string("r_knee_rotation_changed"));
IS84.addChild(&connect85);

OrientationInterpolator83.addChild(&IS84);

Group49.addChild(&OrientationInterpolator83);

OrientationInterpolator& OrientationInterpolator86 =  OrientationInterpolator();
OrientationInterpolator86.setDEF(std::string("R_ANKLE_ANIMATOR"));
OrientationInterpolator86.setKey(new float[]{0.0,1.0});
OrientationInterpolator86.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
IS& IS87 =  IS();
Connect& connect88 =  Connect();
connect88.setNodeField(std::string("value_changed"));
connect88.setProtoField(std::string("r_ankle_rotation_changed"));
IS87.addChild(&connect88);

OrientationInterpolator86.addChild(&IS87);

Group49.addChild(&OrientationInterpolator86);

OrientationInterpolator& OrientationInterpolator89 =  OrientationInterpolator();
OrientationInterpolator89.setDEF(std::string("R_MIDTARSAL_ANIMATOR"));
OrientationInterpolator89.setKey(new float[]{0.0,1.0});
OrientationInterpolator89.setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0}, 8);
IS& IS90 =  IS();
Connect& connect91 =  Connect();
connect91.setNodeField(std::string("value_changed"));
connect91.setProtoField(std::string("r_midtarsal_rotation_changed"));
IS90.addChild(&connect91);

OrientationInterpolator89.addChild(&IS90);

Group49.addChild(&OrientationInterpolator89);

OrientationInterpolator& OrientationInterpolator92 =  OrientationInterpolator();
OrientationInterpolator92.setDEF(std::string("VL5_ANIMATOR"));
OrientationInterpolator92.setKey(new float[]{0.0,1.0});
OrientationInterpolator92.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
IS& IS93 =  IS();
Connect& connect94 =  Connect();
connect94.setNodeField(std::string("value_changed"));
connect94.setProtoField(std::string("vl5_rotation_changed"));
IS93.addChild(&connect94);

OrientationInterpolator92.addChild(&IS93);

Group49.addChild(&OrientationInterpolator92);

OrientationInterpolator& OrientationInterpolator95 =  OrientationInterpolator();
OrientationInterpolator95.setDEF(std::string("SKULLBASE_ANIMATOR"));
OrientationInterpolator95.setKey(new float[]{0.0,0.5,1.0});
OrientationInterpolator95.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.5,0.0,0.0,1.0,0.0}, 12);
IS& IS96 =  IS();
Connect& connect97 =  Connect();
connect97.setNodeField(std::string("value_changed"));
connect97.setProtoField(std::string("skullbase_rotation_changed"));
IS96.addChild(&connect97);

OrientationInterpolator95.addChild(&IS96);

Group49.addChild(&OrientationInterpolator95);

OrientationInterpolator& OrientationInterpolator98 =  OrientationInterpolator();
OrientationInterpolator98.setDEF(std::string("L_SHOULDER_ANIMATOR"));
OrientationInterpolator98.setKey(new float[]{0.0,1.0});
OrientationInterpolator98.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
IS& IS99 =  IS();
Connect& connect100 =  Connect();
connect100.setNodeField(std::string("value_changed"));
connect100.setProtoField(std::string("l_shoulder_rotation_changed"));
IS99.addChild(&connect100);

OrientationInterpolator98.addChild(&IS99);

Group49.addChild(&OrientationInterpolator98);

OrientationInterpolator& OrientationInterpolator101 =  OrientationInterpolator();
OrientationInterpolator101.setDEF(std::string("L_ELBOW_ANIMATOR"));
OrientationInterpolator101.setKey(new float[]{0.0,1.0});
OrientationInterpolator101.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
IS& IS102 =  IS();
Connect& connect103 =  Connect();
connect103.setNodeField(std::string("value_changed"));
connect103.setProtoField(std::string("l_elbow_rotation_changed"));
IS102.addChild(&connect103);

OrientationInterpolator101.addChild(&IS102);

Group49.addChild(&OrientationInterpolator101);

OrientationInterpolator& OrientationInterpolator104 =  OrientationInterpolator();
OrientationInterpolator104.setDEF(std::string("L_WRIST_ANIMATOR"));
OrientationInterpolator104.setKey(new float[]{0.0,1.0});
OrientationInterpolator104.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
IS& IS105 =  IS();
Connect& connect106 =  Connect();
connect106.setNodeField(std::string("value_changed"));
connect106.setProtoField(std::string("l_wrist_rotation_changed"));
IS105.addChild(&connect106);

OrientationInterpolator104.addChild(&IS105);

Group49.addChild(&OrientationInterpolator104);

OrientationInterpolator& OrientationInterpolator107 =  OrientationInterpolator();
OrientationInterpolator107.setDEF(std::string("R_SHOULDER_ANIMATOR"));
OrientationInterpolator107.setKey(new float[]{0.0,1.0});
OrientationInterpolator107.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
IS& IS108 =  IS();
Connect& connect109 =  Connect();
connect109.setNodeField(std::string("value_changed"));
connect109.setProtoField(std::string("r_shoulder_rotation_changed"));
IS108.addChild(&connect109);

OrientationInterpolator107.addChild(&IS108);

Group49.addChild(&OrientationInterpolator107);

OrientationInterpolator& OrientationInterpolator110 =  OrientationInterpolator();
OrientationInterpolator110.setDEF(std::string("R_ELBOW_ANIMATOR"));
OrientationInterpolator110.setKey(new float[]{0.0,1.0});
OrientationInterpolator110.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
IS& IS111 =  IS();
Connect& connect112 =  Connect();
connect112.setNodeField(std::string("value_changed"));
connect112.setProtoField(std::string("r_elbow_rotation_changed"));
IS111.addChild(&connect112);

OrientationInterpolator110.addChild(&IS111);

Group49.addChild(&OrientationInterpolator110);

OrientationInterpolator& OrientationInterpolator113 =  OrientationInterpolator();
OrientationInterpolator113.setDEF(std::string("R_WRIST_ANIMATOR"));
OrientationInterpolator113.setKey(new float[]{0.0,1.0});
OrientationInterpolator113.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
IS& IS114 =  IS();
Connect& connect115 =  Connect();
connect115.setNodeField(std::string("value_changed"));
connect115.setProtoField(std::string("r_wrist_rotation_changed"));
IS114.addChild(&connect115);

OrientationInterpolator113.addChild(&IS114);

Group49.addChild(&OrientationInterpolator113);

ProtoBody48.addChild(&Group49);

ROUTE& ROUTE116 =  ROUTE();
ROUTE116.setFromField(std::string("fraction_changed"));
ROUTE116.setFromNode(std::string("TIMER"));
ROUTE116.setToField(std::string("set_fraction"));
ROUTE116.setToNode(std::string("HUMANOIDROOT_POSITION_ANIMATOR"));
ProtoBody48.addChild(&ROUTE116);

ROUTE& ROUTE117 =  ROUTE();
ROUTE117.setFromField(std::string("fraction_changed"));
ROUTE117.setFromNode(std::string("TIMER"));
ROUTE117.setToField(std::string("set_fraction"));
ROUTE117.setToNode(std::string("HUMANOIDROOT_ANIMATOR"));
ProtoBody48.addChild(&ROUTE117);

ROUTE& ROUTE118 =  ROUTE();
ROUTE118.setFromField(std::string("fraction_changed"));
ROUTE118.setFromNode(std::string("TIMER"));
ROUTE118.setToField(std::string("set_fraction"));
ROUTE118.setToNode(std::string("SACROILIAC_ANIMATOR"));
ProtoBody48.addChild(&ROUTE118);

ROUTE& ROUTE119 =  ROUTE();
ROUTE119.setFromField(std::string("fraction_changed"));
ROUTE119.setFromNode(std::string("TIMER"));
ROUTE119.setToField(std::string("set_fraction"));
ROUTE119.setToNode(std::string("L_HIP_ANIMATOR"));
ProtoBody48.addChild(&ROUTE119);

ROUTE& ROUTE120 =  ROUTE();
ROUTE120.setFromField(std::string("fraction_changed"));
ROUTE120.setFromNode(std::string("TIMER"));
ROUTE120.setToField(std::string("set_fraction"));
ROUTE120.setToNode(std::string("L_KNEE_ANIMATOR"));
ProtoBody48.addChild(&ROUTE120);

ROUTE& ROUTE121 =  ROUTE();
ROUTE121.setFromField(std::string("fraction_changed"));
ROUTE121.setFromNode(std::string("TIMER"));
ROUTE121.setToField(std::string("set_fraction"));
ROUTE121.setToNode(std::string("L_ANKLE_ANIMATOR"));
ProtoBody48.addChild(&ROUTE121);

ROUTE& ROUTE122 =  ROUTE();
ROUTE122.setFromField(std::string("fraction_changed"));
ROUTE122.setFromNode(std::string("TIMER"));
ROUTE122.setToField(std::string("set_fraction"));
ROUTE122.setToNode(std::string("L_MIDTARSAL_ANIMATOR"));
ProtoBody48.addChild(&ROUTE122);

ROUTE& ROUTE123 =  ROUTE();
ROUTE123.setFromField(std::string("fraction_changed"));
ROUTE123.setFromNode(std::string("TIMER"));
ROUTE123.setToField(std::string("set_fraction"));
ROUTE123.setToNode(std::string("R_HIP_ANIMATOR"));
ProtoBody48.addChild(&ROUTE123);

ROUTE& ROUTE124 =  ROUTE();
ROUTE124.setFromField(std::string("fraction_changed"));
ROUTE124.setFromNode(std::string("TIMER"));
ROUTE124.setToField(std::string("set_fraction"));
ROUTE124.setToNode(std::string("R_KNEE_ANIMATOR"));
ProtoBody48.addChild(&ROUTE124);

ROUTE& ROUTE125 =  ROUTE();
ROUTE125.setFromField(std::string("fraction_changed"));
ROUTE125.setFromNode(std::string("TIMER"));
ROUTE125.setToField(std::string("set_fraction"));
ROUTE125.setToNode(std::string("R_ANKLE_ANIMATOR"));
ProtoBody48.addChild(&ROUTE125);

ROUTE& ROUTE126 =  ROUTE();
ROUTE126.setFromField(std::string("fraction_changed"));
ROUTE126.setFromNode(std::string("TIMER"));
ROUTE126.setToField(std::string("set_fraction"));
ROUTE126.setToNode(std::string("R_MIDTARSAL_ANIMATOR"));
ProtoBody48.addChild(&ROUTE126);

ROUTE& ROUTE127 =  ROUTE();
ROUTE127.setFromField(std::string("fraction_changed"));
ROUTE127.setFromNode(std::string("TIMER"));
ROUTE127.setToField(std::string("set_fraction"));
ROUTE127.setToNode(std::string("VL5_ANIMATOR"));
ProtoBody48.addChild(&ROUTE127);

ROUTE& ROUTE128 =  ROUTE();
ROUTE128.setFromField(std::string("fraction_changed"));
ROUTE128.setFromNode(std::string("TIMER"));
ROUTE128.setToField(std::string("set_fraction"));
ROUTE128.setToNode(std::string("SKULLBASE_ANIMATOR"));
ProtoBody48.addChild(&ROUTE128);

ROUTE& ROUTE129 =  ROUTE();
ROUTE129.setFromField(std::string("fraction_changed"));
ROUTE129.setFromNode(std::string("TIMER"));
ROUTE129.setToField(std::string("set_fraction"));
ROUTE129.setToNode(std::string("L_SHOULDER_ANIMATOR"));
ProtoBody48.addChild(&ROUTE129);

ROUTE& ROUTE130 =  ROUTE();
ROUTE130.setFromField(std::string("fraction_changed"));
ROUTE130.setFromNode(std::string("TIMER"));
ROUTE130.setToField(std::string("set_fraction"));
ROUTE130.setToNode(std::string("L_ELBOW_ANIMATOR"));
ProtoBody48.addChild(&ROUTE130);

ROUTE& ROUTE131 =  ROUTE();
ROUTE131.setFromField(std::string("fraction_changed"));
ROUTE131.setFromNode(std::string("TIMER"));
ROUTE131.setToField(std::string("set_fraction"));
ROUTE131.setToNode(std::string("L_WRIST_ANIMATOR"));
ProtoBody48.addChild(&ROUTE131);

ROUTE& ROUTE132 =  ROUTE();
ROUTE132.setFromField(std::string("fraction_changed"));
ROUTE132.setFromNode(std::string("TIMER"));
ROUTE132.setToField(std::string("set_fraction"));
ROUTE132.setToNode(std::string("R_SHOULDER_ANIMATOR"));
ProtoBody48.addChild(&ROUTE132);

ROUTE& ROUTE133 =  ROUTE();
ROUTE133.setFromField(std::string("fraction_changed"));
ROUTE133.setFromNode(std::string("TIMER"));
ROUTE133.setToField(std::string("set_fraction"));
ROUTE133.setToNode(std::string("R_ELBOW_ANIMATOR"));
ProtoBody48.addChild(&ROUTE133);

ROUTE& ROUTE134 =  ROUTE();
ROUTE134.setFromField(std::string("fraction_changed"));
ROUTE134.setFromNode(std::string("TIMER"));
ROUTE134.setToField(std::string("set_fraction"));
ROUTE134.setToNode(std::string("R_WRIST_ANIMATOR"));
ProtoBody48.addChild(&ROUTE134);

ProtoDeclare20.addChild(&ProtoBody48);

Scene18.addChild(&ProtoDeclare20);

//======================================
//Point to example use in case someone inspects this file
Anchor& Anchor135 =  Anchor();
Anchor135.setDescription(std::string("InterchangableActorsViaDynamicRouting"));
Anchor135.setParameter((std::string[]){"target=_blank"}, 1);
Anchor135.setUrl((std::string[]){"InterchangableActorsViaDynamicRouting.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d", "InterchangableActorsViaDynamicRouting.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"}, 4);
Shape& Shape136 =  Shape();
Text& Text137 =  Text();
Text137.setString((std::string[]){"LOA1_StandAnimation.x3d", "defines a prototype", "for animating a humanoid.", "Click this text to see", "InterchangableActorsViaDynamicRouting example."}, 5);
CFontStyle& FontStyle138 =  CFontStyle();
FontStyle138.setContainerField("fontStyle");
FontStyle138.setJustify((std::string[]){"MIDDLE", "MIDDLE"}, 2);
FontStyle138.setSize(0.8);
Text137.setFontStyle(&FontStyle138);

Shape136.setGeometry(&Text137);

Appearance& Appearance139 =  Appearance();
Appearance139.setContainerField("appearance");
Material& Material140 =  Material();
Material140.setContainerField("material");
Material140.setDiffuseColor(new float[]{1.0,1.0,0.2});
Appearance139.addChild(&Material140);

Shape136.addChild(&Appearance139);

Anchor135.addChild(&Shape136);

Scene18.addChild(&Anchor135);

X3D0.setScene(&Scene18);

}
