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
//#include "X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("LOA1_SwimmingFlutterKickAnimation.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("Humanoid animation prototype reusable by any Humanoid."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("Etsuko Lippi"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("created"));
meta5.setContent(std::string("13 December 2001"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("modified"));
meta6.setContent(std::string("23 May 2020"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("warning"));
meta7.setContent(std::string("not yet tested, need to compare with NancyDivingExample interpolators"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("reference"));
meta8.setContent(std::string("https://www.HAnim.org"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("reference"));
meta9.setContent(std::string("https://HAnim.org/Models"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("reference"));
meta10.setContent(std::string("https://HAnim.org/Nodes"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("subject"));
meta11.setContent(std::string("Swimming flutter kick Animation HAnim 2001"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("identifier"));
meta12.setContent(std::string("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_SwimmingFlutterKickAnimation.x3d"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("generator"));
meta13.setContent(std::string("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("license"));
meta14.setContent(std::string("../license.html"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
WorldInfo& WorldInfo16 =  WorldInfo();
WorldInfo16.setTitle(std::string("LOA1_SwimmingFlutterKickAnimation.x3d"));
Scene15.addChild(&WorldInfo16);

ProtoDeclare& ProtoDeclare17 =  ProtoDeclare();
ProtoDeclare17.setName(std::string("LOA1_DivingAnimation"));
ProtoInterface& ProtoInterface18 =  ProtoInterface();
field& field19 =  field();
field19.setName(std::string("cycleInterval"));
field19.setAccessType(std::string("inputOutput"));
field19.setType(std::string("SFTime"));
field19.setValue(std::string("7"));
ProtoInterface18.addChild(&field19);

field& field20 =  field();
field20.setName(std::string("enabled"));
field20.setAccessType(std::string("inputOutput"));
field20.setType(std::string("SFBool"));
field20.setValue(std::string("true"));
ProtoInterface18.addChild(&field20);

field& field21 =  field();
field21.setName(std::string("loop"));
field21.setAccessType(std::string("inputOutput"));
field21.setType(std::string("SFBool"));
field21.setValue(std::string("true"));
ProtoInterface18.addChild(&field21);

field& field22 =  field();
field22.setName(std::string("startTime"));
field22.setAccessType(std::string("inputOutput"));
field22.setType(std::string("SFTime"));
field22.setValue(std::string("0"));
ProtoInterface18.addChild(&field22);

field& field23 =  field();
field23.setName(std::string("stopTime"));
field23.setAccessType(std::string("inputOutput"));
field23.setType(std::string("SFTime"));
field23.setValue(std::string("-1"));
ProtoInterface18.addChild(&field23);

field& field24 =  field();
field24.setName(std::string("fraction_changed"));
field24.setAccessType(std::string("outputOnly"));
field24.setType(std::string("SFFloat"));
ProtoInterface18.addChild(&field24);

field& field25 =  field();
field25.setName(std::string("isActive"));
field25.setAccessType(std::string("outputOnly"));
field25.setType(std::string("SFBool"));
ProtoInterface18.addChild(&field25);

field& field26 =  field();
field26.setName(std::string("HumanoidRoot_translation_changed"));
field26.setAccessType(std::string("outputOnly"));
field26.setType(std::string("SFVec3f"));
ProtoInterface18.addChild(&field26);

field& field27 =  field();
field27.setName(std::string("HumanoidRoot_rotation_changed"));
field27.setAccessType(std::string("outputOnly"));
field27.setType(std::string("SFRotation"));
ProtoInterface18.addChild(&field27);

field& field28 =  field();
field28.setName(std::string("lower_body_rotation_changed"));
field28.setAccessType(std::string("outputOnly"));
field28.setType(std::string("SFRotation"));
ProtoInterface18.addChild(&field28);

field& field29 =  field();
field29.setName(std::string("l_hip_rotation_changed"));
field29.setAccessType(std::string("outputOnly"));
field29.setType(std::string("SFRotation"));
ProtoInterface18.addChild(&field29);

field& field30 =  field();
field30.setName(std::string("l_knee_rotation_changed"));
field30.setAccessType(std::string("outputOnly"));
field30.setType(std::string("SFRotation"));
ProtoInterface18.addChild(&field30);

field& field31 =  field();
field31.setName(std::string("l_ankle_rotation_changed"));
field31.setAccessType(std::string("outputOnly"));
field31.setType(std::string("SFRotation"));
ProtoInterface18.addChild(&field31);

field& field32 =  field();
field32.setName(std::string("l_midtarsal_rotation_changed"));
field32.setAccessType(std::string("outputOnly"));
field32.setType(std::string("SFRotation"));
ProtoInterface18.addChild(&field32);

field& field33 =  field();
field33.setName(std::string("r_hip_rotation_changed"));
field33.setAccessType(std::string("outputOnly"));
field33.setType(std::string("SFRotation"));
ProtoInterface18.addChild(&field33);

field& field34 =  field();
field34.setName(std::string("r_knee_rotation_changed"));
field34.setAccessType(std::string("outputOnly"));
field34.setType(std::string("SFRotation"));
ProtoInterface18.addChild(&field34);

field& field35 =  field();
field35.setName(std::string("r_ankle_rotation_changed"));
field35.setAccessType(std::string("outputOnly"));
field35.setType(std::string("SFRotation"));
ProtoInterface18.addChild(&field35);

field& field36 =  field();
field36.setName(std::string("r_midtarsal_rotation_changed"));
field36.setAccessType(std::string("outputOnly"));
field36.setType(std::string("SFRotation"));
ProtoInterface18.addChild(&field36);

field& field37 =  field();
field37.setName(std::string("vl5_rotation_changed"));
field37.setAccessType(std::string("outputOnly"));
field37.setType(std::string("SFRotation"));
ProtoInterface18.addChild(&field37);

field& field38 =  field();
field38.setName(std::string("skullbase_rotation_changed"));
field38.setAccessType(std::string("outputOnly"));
field38.setType(std::string("SFRotation"));
ProtoInterface18.addChild(&field38);

field& field39 =  field();
field39.setName(std::string("l_shoulder_rotation_changed"));
field39.setAccessType(std::string("outputOnly"));
field39.setType(std::string("SFRotation"));
ProtoInterface18.addChild(&field39);

field& field40 =  field();
field40.setName(std::string("l_elbow_rotation_changed"));
field40.setAccessType(std::string("outputOnly"));
field40.setType(std::string("SFRotation"));
ProtoInterface18.addChild(&field40);

field& field41 =  field();
field41.setName(std::string("l_wrist_rotation_changed"));
field41.setAccessType(std::string("outputOnly"));
field41.setType(std::string("SFRotation"));
ProtoInterface18.addChild(&field41);

field& field42 =  field();
field42.setName(std::string("r_shoulder_rotation_changed"));
field42.setAccessType(std::string("outputOnly"));
field42.setType(std::string("SFRotation"));
ProtoInterface18.addChild(&field42);

field& field43 =  field();
field43.setName(std::string("r_elbow_rotation_changed"));
field43.setAccessType(std::string("outputOnly"));
field43.setType(std::string("SFRotation"));
ProtoInterface18.addChild(&field43);

field& field44 =  field();
field44.setName(std::string("r_wrist_rotation_changed"));
field44.setAccessType(std::string("outputOnly"));
field44.setType(std::string("SFRotation"));
ProtoInterface18.addChild(&field44);

ProtoDeclare17.addChild(&ProtoInterface18);

ProtoBody& ProtoBody45 =  ProtoBody();
Group& Group46 =  Group();
TimeSensor& TimeSensor47 =  TimeSensor();
TimeSensor47.setDEF(std::string("TIMER"));
TimeSensor47.setLoop(true);
IS& IS48 =  IS();
Connect& connect49 =  Connect();
connect49.setNodeField(std::string("cycleInterval"));
connect49.setProtoField(std::string("cycleInterval"));
IS48.addChild(&connect49);

Connect& connect50 =  Connect();
connect50.setNodeField(std::string("enabled"));
connect50.setProtoField(std::string("enabled"));
IS48.addChild(&connect50);

Connect& connect51 =  Connect();
connect51.setNodeField(std::string("loop"));
connect51.setProtoField(std::string("loop"));
IS48.addChild(&connect51);

Connect& connect52 =  Connect();
connect52.setNodeField(std::string("startTime"));
connect52.setProtoField(std::string("startTime"));
IS48.addChild(&connect52);

Connect& connect53 =  Connect();
connect53.setNodeField(std::string("stopTime"));
connect53.setProtoField(std::string("stopTime"));
IS48.addChild(&connect53);

Connect& connect54 =  Connect();
connect54.setNodeField(std::string("fraction_changed"));
connect54.setProtoField(std::string("fraction_changed"));
IS48.addChild(&connect54);

Connect& connect55 =  Connect();
connect55.setNodeField(std::string("isActive"));
connect55.setProtoField(std::string("isActive"));
IS48.addChild(&connect55);

TimeSensor47.addChild(&IS48);

Group46.addChild(&TimeSensor47);

PositionInterpolator& PositionInterpolator56 =  PositionInterpolator();
PositionInterpolator56.setDEF(std::string("HUMANOIDROOT_POSITION_ANIMATOR"));
PositionInterpolator56.setKey(new float[]{0.0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0}, 19);
PositionInterpolator56.setKeyValue(new float[]{0.0,-0.00928,0.0,0.0,-0.003858,0.0,0.0,-0.008847,0.0,0.0,-0.01486,0.0,0.0,-0.02641,0.0,0.0,-0.03934,0.0,0.0,-0.0502,0.0,0.0,-0.07469,0.0,0.0,-0.02732,0.0,0.0,-0.01608,0.0,0.0,-0.01129,0.0,0.0,-0.005819,0.0,0.0,-0.002004,0.0,0.0,-0.002579,0.0,0.0,-0.0143,0.0,0.0,-0.03799,0.0,0.0,-0.05648,0.0,0.0,-0.045,0.0,0.0,-0.00928,0.0}, 57);
IS& IS57 =  IS();
Connect& connect58 =  Connect();
connect58.setNodeField(std::string("value_changed"));
connect58.setProtoField(std::string("HumanoidRoot_translation_changed"));
IS57.addChild(&connect58);

PositionInterpolator56.addChild(&IS57);

Group46.addChild(&PositionInterpolator56);

OrientationInterpolator& OrientationInterpolator59 =  OrientationInterpolator();
OrientationInterpolator59.setDEF(std::string("HUMANOIDROOT_ANIMATOR"));
OrientationInterpolator59.setKey(new float[]{0.0,1.0}, 2);
OrientationInterpolator59.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
IS& IS60 =  IS();
Connect& connect61 =  Connect();
connect61.setNodeField(std::string("value_changed"));
connect61.setProtoField(std::string("HumanoidRoot_rotation_changed"));
IS60.addChild(&connect61);

OrientationInterpolator59.addChild(&IS60);

Group46.addChild(&OrientationInterpolator59);

//no SACROILIAC_ANIMATOR
OrientationInterpolator& OrientationInterpolator62 =  OrientationInterpolator();
OrientationInterpolator62.setDEF(std::string("L_HIP_ANIMATOR"));
OrientationInterpolator62.setKey(new float[]{0.0,0.25,0.375,0.6667,0.7917,0.9167,1.0}, 7);
OrientationInterpolator62.setKeyValue(new float[]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1.0,0.0,0.0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865}, 28);
IS& IS63 =  IS();
Connect& connect64 =  Connect();
connect64.setNodeField(std::string("value_changed"));
connect64.setProtoField(std::string("l_hip_rotation_changed"));
IS63.addChild(&connect64);

OrientationInterpolator62.addChild(&IS63);

Group46.addChild(&OrientationInterpolator62);

OrientationInterpolator& OrientationInterpolator65 =  OrientationInterpolator();
OrientationInterpolator65.setDEF(std::string("L_KNEE_ANIMATOR"));
OrientationInterpolator65.setKey(new float[]{0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
OrientationInterpolator65.setKeyValue(new float[]{1.0,0.0,0.0,0.3226,1.0,0.0,0.0,0.1556,1.0,0.0,0.0,0.08678,1.0,0.0,0.0,0.8751,1.0,0.0,0.0,1.131,1.0,0.0,0.0,0.09961,1.0,0.0,0.0,0.3942,1.0,0.0,0.0,0.3226}, 32);
IS& IS66 =  IS();
Connect& connect67 =  Connect();
connect67.setNodeField(std::string("value_changed"));
connect67.setProtoField(std::string("l_knee_rotation_changed"));
IS66.addChild(&connect67);

OrientationInterpolator65.addChild(&IS66);

Group46.addChild(&OrientationInterpolator65);

OrientationInterpolator& OrientationInterpolator68 =  OrientationInterpolator();
OrientationInterpolator68.setDEF(std::string("L_ANKLE_ANIMATOR"));
OrientationInterpolator68.setKey(new float[]{0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0}, 11);
OrientationInterpolator68.setKeyValue(new float[]{1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001}, 44);
IS& IS69 =  IS();
Connect& connect70 =  Connect();
connect70.setNodeField(std::string("value_changed"));
connect70.setProtoField(std::string("l_ankle_rotation_changed"));
IS69.addChild(&connect70);

OrientationInterpolator68.addChild(&IS69);

Group46.addChild(&OrientationInterpolator68);

//no L_MIDTARSAL_ANIMATOR
OrientationInterpolator& OrientationInterpolator71 =  OrientationInterpolator();
OrientationInterpolator71.setDEF(std::string("R_HIP_ANIMATOR"));
OrientationInterpolator71.setKey(new float[]{0.0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1.0}, 8);
OrientationInterpolator71.setKeyValue(new float[]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1.0,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1.0,0.0,0.0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481}, 32);
IS& IS72 =  IS();
Connect& connect73 =  Connect();
connect73.setNodeField(std::string("value_changed"));
connect73.setProtoField(std::string("r_hip_rotation_changed"));
IS72.addChild(&connect73);

OrientationInterpolator71.addChild(&IS72);

Group46.addChild(&OrientationInterpolator71);

OrientationInterpolator& OrientationInterpolator74 =  OrientationInterpolator();
OrientationInterpolator74.setDEF(std::string("R_KNEE_ANIMATOR"));
OrientationInterpolator74.setKey(new float[]{0.0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1.0}, 8);
OrientationInterpolator74.setKeyValue(new float[]{1.0,0.0,0.0,0.8573,1.0,0.0,0.0,0.5351,1.0,0.0,0.0,0.1756,1.0,0.0,0.0,0.1194,1.0,0.0,0.0,0.3153,1.0,0.0,0.0,0.09354,1.0,0.0,0.0,0.08558,1.0,0.0,0.0,0.8573}, 32);
IS& IS75 =  IS();
Connect& connect76 =  Connect();
connect76.setNodeField(std::string("value_changed"));
connect76.setProtoField(std::string("r_knee_rotation_changed"));
IS75.addChild(&connect76);

OrientationInterpolator74.addChild(&IS75);

Group46.addChild(&OrientationInterpolator74);

OrientationInterpolator& OrientationInterpolator77 =  OrientationInterpolator();
OrientationInterpolator77.setDEF(std::string("R_ANKLE_ANIMATOR"));
OrientationInterpolator77.setKey(new float[]{0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0}, 11);
OrientationInterpolator77.setKeyValue(new float[]{1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8509,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8509,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8509,1.0,0.0,0.0,0.86001}, 44);
IS& IS78 =  IS();
Connect& connect79 =  Connect();
connect79.setNodeField(std::string("value_changed"));
connect79.setProtoField(std::string("r_ankle_rotation_changed"));
IS78.addChild(&connect79);

OrientationInterpolator77.addChild(&IS78);

Group46.addChild(&OrientationInterpolator77);

//no L_MIDTARSAL_ANIMATOR
OrientationInterpolator& OrientationInterpolator80 =  OrientationInterpolator();
OrientationInterpolator80.setDEF(std::string("VL5_ANIMATOR"));
OrientationInterpolator80.setKey(new float[]{0.0,0.2083,0.375,0.75,0.8333,1.0}, 6);
OrientationInterpolator80.setKeyValue(new float[]{0.0,1.0,0.0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0.0,1.0,0.0,0.0826}, 24);
IS& IS81 =  IS();
Connect& connect82 =  Connect();
connect82.setNodeField(std::string("value_changed"));
connect82.setProtoField(std::string("vl5_rotation_changed"));
IS81.addChild(&connect82);

OrientationInterpolator80.addChild(&IS81);

Group46.addChild(&OrientationInterpolator80);

OrientationInterpolator& OrientationInterpolator83 =  OrientationInterpolator();
OrientationInterpolator83.setDEF(std::string("SKULLBASE_ANIMATOR"));
OrientationInterpolator83.setKey(new float[]{0.0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1.0}, 14);
OrientationInterpolator83.setKeyValue(new float[]{-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,0.999,-1.0,0.0,0.0,0.99,-1.0,0.0,0.0,0.99,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,1.0}, 56);
IS& IS84 =  IS();
Connect& connect85 =  Connect();
connect85.setNodeField(std::string("value_changed"));
connect85.setProtoField(std::string("skullbase_rotation_changed"));
IS84.addChild(&connect85);

OrientationInterpolator83.addChild(&IS84);

Group46.addChild(&OrientationInterpolator83);

OrientationInterpolator& OrientationInterpolator86 =  OrientationInterpolator();
OrientationInterpolator86.setDEF(std::string("L_SHOULDER_ANIMATOR"));
OrientationInterpolator86.setKey(new float[]{0.0,0.25,0.375,0.6667,0.7917,0.9167,1.0}, 7);
OrientationInterpolator86.setKeyValue(new float[]{0.0,0.0,1.0,0.1,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2}, 28);
IS& IS87 =  IS();
Connect& connect88 =  Connect();
connect88.setNodeField(std::string("value_changed"));
connect88.setProtoField(std::string("l_shoulder_rotation_changed"));
IS87.addChild(&connect88);

OrientationInterpolator86.addChild(&IS87);

Group46.addChild(&OrientationInterpolator86);

OrientationInterpolator& OrientationInterpolator89 =  OrientationInterpolator();
OrientationInterpolator89.setDEF(std::string("L_ELBOW_ANIMATOR"));
OrientationInterpolator89.setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
OrientationInterpolator89.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.1229,-1.0,0.0,0.0,0.1229,-1.0,0.0,0.0,0.5976,-1.0,0.0,0.0,0.3917,0.0,0.0,1.0,0.0}, 24);
IS& IS90 =  IS();
Connect& connect91 =  Connect();
connect91.setNodeField(std::string("value_changed"));
connect91.setProtoField(std::string("l_elbow_rotation_changed"));
IS90.addChild(&connect91);

OrientationInterpolator89.addChild(&IS90);

Group46.addChild(&OrientationInterpolator89);

OrientationInterpolator& OrientationInterpolator92 =  OrientationInterpolator();
OrientationInterpolator92.setDEF(std::string("L_WRIST_ANIMATOR"));
OrientationInterpolator92.setKey(new float[]{0.0,0.32,0.64,0.88,1.0}, 5);
OrientationInterpolator92.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.0,0.0,1.0,0.0}, 20);
IS& IS93 =  IS();
Connect& connect94 =  Connect();
connect94.setNodeField(std::string("value_changed"));
connect94.setProtoField(std::string("l_wrist_rotation_changed"));
IS93.addChild(&connect94);

OrientationInterpolator92.addChild(&IS93);

Group46.addChild(&OrientationInterpolator92);

OrientationInterpolator& OrientationInterpolator95 =  OrientationInterpolator();
OrientationInterpolator95.setDEF(std::string("R_SHOULDER_ANIMATOR"));
OrientationInterpolator95.setKey(new float[]{0.0,0.45,0.64,0.76,0.88,1.0}, 6);
OrientationInterpolator95.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0.0,0.0,1.0,0.0}, 24);
IS& IS96 =  IS();
Connect& connect97 =  Connect();
connect97.setNodeField(std::string("value_changed"));
connect97.setProtoField(std::string("r_shoulder_rotation_changed"));
IS96.addChild(&connect97);

OrientationInterpolator95.addChild(&IS96);

Group46.addChild(&OrientationInterpolator95);

OrientationInterpolator& OrientationInterpolator98 =  OrientationInterpolator();
OrientationInterpolator98.setDEF(std::string("R_ELBOW_ANIMATOR"));
OrientationInterpolator98.setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
OrientationInterpolator98.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.5855,-1.0,0.0,0.0,0.5852,0.0,0.0,1.0,0.0}, 24);
IS& IS99 =  IS();
Connect& connect100 =  Connect();
connect100.setNodeField(std::string("value_changed"));
connect100.setProtoField(std::string("r_elbow_rotation_changed"));
IS99.addChild(&connect100);

OrientationInterpolator98.addChild(&IS99);

Group46.addChild(&OrientationInterpolator98);

OrientationInterpolator& OrientationInterpolator101 =  OrientationInterpolator();
OrientationInterpolator101.setDEF(std::string("R_WRIST_ANIMATOR"));
OrientationInterpolator101.setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
OrientationInterpolator101.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0.0,1.0,0.0,0.497349,0.0,0.0,1.0,0.0}, 24);
IS& IS102 =  IS();
Connect& connect103 =  Connect();
connect103.setNodeField(std::string("value_changed"));
connect103.setProtoField(std::string("r_wrist_rotation_changed"));
IS102.addChild(&connect103);

OrientationInterpolator101.addChild(&IS102);

Group46.addChild(&OrientationInterpolator101);

ProtoBody45.addChild(&Group46);

ROUTE& ROUTE104 =  ROUTE();
ROUTE104.setFromField(std::string("fraction_changed"));
ROUTE104.setFromNode(std::string("TIMER"));
ROUTE104.setToField(std::string("set_fraction"));
ROUTE104.setToNode(std::string("HUMANOIDROOT_POSITION_ANIMATOR"));
ProtoBody45.addChild(&ROUTE104);

ROUTE& ROUTE105 =  ROUTE();
ROUTE105.setFromField(std::string("fraction_changed"));
ROUTE105.setFromNode(std::string("TIMER"));
ROUTE105.setToField(std::string("set_fraction"));
ROUTE105.setToNode(std::string("HUMANOIDROOT_ANIMATOR"));
ProtoBody45.addChild(&ROUTE105);

ROUTE& ROUTE106 =  ROUTE();
ROUTE106.setFromField(std::string("fraction_changed"));
ROUTE106.setFromNode(std::string("TIMER"));
ROUTE106.setToField(std::string("set_fraction"));
ROUTE106.setToNode(std::string("SKULLBASE_ANIMATOR"));
ProtoBody45.addChild(&ROUTE106);

ROUTE& ROUTE107 =  ROUTE();
ROUTE107.setFromField(std::string("fraction_changed"));
ROUTE107.setFromNode(std::string("TIMER"));
ROUTE107.setToField(std::string("set_fraction"));
ROUTE107.setToNode(std::string("VL5_ANIMATOR"));
ProtoBody45.addChild(&ROUTE107);

ROUTE& ROUTE108 =  ROUTE();
ROUTE108.setFromField(std::string("fraction_changed"));
ROUTE108.setFromNode(std::string("TIMER"));
ROUTE108.setToField(std::string("set_fraction"));
ROUTE108.setToNode(std::string("L_HIP_ANIMATOR"));
ProtoBody45.addChild(&ROUTE108);

ROUTE& ROUTE109 =  ROUTE();
ROUTE109.setFromField(std::string("fraction_changed"));
ROUTE109.setFromNode(std::string("TIMER"));
ROUTE109.setToField(std::string("set_fraction"));
ROUTE109.setToNode(std::string("L_KNEE_ANIMATOR"));
ProtoBody45.addChild(&ROUTE109);

ROUTE& ROUTE110 =  ROUTE();
ROUTE110.setFromField(std::string("fraction_changed"));
ROUTE110.setFromNode(std::string("TIMER"));
ROUTE110.setToField(std::string("set_fraction"));
ROUTE110.setToNode(std::string("L_ANKLE_ANIMATOR"));
ProtoBody45.addChild(&ROUTE110);

ROUTE& ROUTE111 =  ROUTE();
ROUTE111.setFromField(std::string("fraction_changed"));
ROUTE111.setFromNode(std::string("TIMER"));
ROUTE111.setToField(std::string("set_fraction"));
ROUTE111.setToNode(std::string("R_HIP_ANIMATOR"));
ProtoBody45.addChild(&ROUTE111);

ROUTE& ROUTE112 =  ROUTE();
ROUTE112.setFromField(std::string("fraction_changed"));
ROUTE112.setFromNode(std::string("TIMER"));
ROUTE112.setToField(std::string("set_fraction"));
ROUTE112.setToNode(std::string("R_KNEE_ANIMATOR"));
ProtoBody45.addChild(&ROUTE112);

ROUTE& ROUTE113 =  ROUTE();
ROUTE113.setFromField(std::string("fraction_changed"));
ROUTE113.setFromNode(std::string("TIMER"));
ROUTE113.setToField(std::string("set_fraction"));
ROUTE113.setToNode(std::string("R_ANKLE_ANIMATOR"));
ProtoBody45.addChild(&ROUTE113);

ROUTE& ROUTE114 =  ROUTE();
ROUTE114.setFromField(std::string("fraction_changed"));
ROUTE114.setFromNode(std::string("TIMER"));
ROUTE114.setToField(std::string("set_fraction"));
ROUTE114.setToNode(std::string("L_SHOULDER_ANIMATOR"));
ProtoBody45.addChild(&ROUTE114);

ROUTE& ROUTE115 =  ROUTE();
ROUTE115.setFromField(std::string("fraction_changed"));
ROUTE115.setFromNode(std::string("TIMER"));
ROUTE115.setToField(std::string("set_fraction"));
ROUTE115.setToNode(std::string("L_ELBOW_ANIMATOR"));
ProtoBody45.addChild(&ROUTE115);

ROUTE& ROUTE116 =  ROUTE();
ROUTE116.setFromField(std::string("fraction_changed"));
ROUTE116.setFromNode(std::string("TIMER"));
ROUTE116.setToField(std::string("set_fraction"));
ROUTE116.setToNode(std::string("L_WRIST_ANIMATOR"));
ProtoBody45.addChild(&ROUTE116);

ROUTE& ROUTE117 =  ROUTE();
ROUTE117.setFromField(std::string("fraction_changed"));
ROUTE117.setFromNode(std::string("TIMER"));
ROUTE117.setToField(std::string("set_fraction"));
ROUTE117.setToNode(std::string("R_SHOULDER_ANIMATOR"));
ProtoBody45.addChild(&ROUTE117);

ROUTE& ROUTE118 =  ROUTE();
ROUTE118.setFromField(std::string("fraction_changed"));
ROUTE118.setFromNode(std::string("TIMER"));
ROUTE118.setToField(std::string("set_fraction"));
ROUTE118.setToNode(std::string("R_ELBOW_ANIMATOR"));
ProtoBody45.addChild(&ROUTE118);

ROUTE& ROUTE119 =  ROUTE();
ROUTE119.setFromField(std::string("fraction_changed"));
ROUTE119.setFromNode(std::string("TIMER"));
ROUTE119.setToField(std::string("set_fraction"));
ROUTE119.setToNode(std::string("R_WRIST_ANIMATOR"));
ProtoBody45.addChild(&ROUTE119);

ProtoDeclare17.addChild(&ProtoBody45);

Scene15.addChild(&ProtoDeclare17);

Viewpoint& Viewpoint120 =  Viewpoint();
Viewpoint120.setDescription(std::string("LOA1_SwimmingFlutterKickAnimation scene"));
Viewpoint120.setPosition(new float[]{0.0,0.0,12.0});
Scene15.addChild(&Viewpoint120);

Anchor& Anchor121 =  Anchor();
Anchor121.setDescription(std::string("Nancy Diving"));
Anchor121.setParameter((std::string[]){"target=_blank"}, 1);
Anchor121.setUrl((std::string[]){"NancyDiving.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d", "NancyDiving.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl"}, 4);
Shape& Shape122 =  Shape();
Text& Text123 =  Text();
Text123.setString((std::string[]){"LOA1_SwimmingFlutterKickAnimation.x3d", "defines a prototype", "for animating a humanoid.", "Click text to see example."}, 4);
CFontStyle& FontStyle124 =  CFontStyle();
FontStyle124.setJustify((std::string[]){"MIDDLE", "MIDDLE"}, 2);
FontStyle124.setSize(0.8);
Text123.setFontStyle(&FontStyle124);

Shape122.setGeometry(&Text123);

Appearance& Appearance125 =  Appearance();
Material& Material126 =  Material();
Material126.setDiffuseColor(new float[]{1.0,1.0,0.2});
Appearance125.addChild(&Material126);

Shape122.addChild(&Appearance125);

Anchor121.addChild(&Shape122);

Scene15.addChild(&Anchor121);

X3D0.setScene(&Scene15);

//}
