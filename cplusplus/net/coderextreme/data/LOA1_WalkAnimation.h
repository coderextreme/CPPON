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
meta2.setContent(std::string("LOA1_WalkAnimation.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("Humanoid animation prototype reusable by any Humanoid."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("Cindy Ballreich cindy@ballreich.net 3Name3D"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("rights"));
meta5.setContent(std::string("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("translator"));
meta6.setContent(std::string("Don Brutzman"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("translated"));
meta7.setContent(std::string("1 October 2001"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("modified"));
meta8.setContent(std::string("23 May 2020"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("reference"));
meta9.setContent(std::string("https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("reference"));
meta10.setContent(std::string("https://HAnim.org/Specifications/HAnim2001"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("reference"));
meta11.setContent(std::string("https://HAnim.org/Models"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("reference"));
meta12.setContent(std::string("https://HAnim.org/Nodes"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("subject"));
meta13.setContent(std::string("Nancy Walk Animation HAnim 2001"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("identifier"));
meta14.setContent(std::string("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("generator"));
meta15.setContent(std::string("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(std::string("license"));
meta16.setContent(std::string("../license.html"));
head1.addMeta(&meta16);

X3D0.setHead(&head1);

Scene& Scene17 =  Scene();
WorldInfo& WorldInfo18 =  WorldInfo();
WorldInfo18.setTitle(std::string("LOA1_WalkAnimation.x3d"));
Scene17.addChild(&WorldInfo18);

ProtoDeclare& ProtoDeclare19 =  ProtoDeclare();
ProtoDeclare19.setName(std::string("LOA1_WalkAnimation"));
ProtoInterface& ProtoInterface20 =  ProtoInterface();
field& field21 =  field();
field21.setName(std::string("cycleInterval"));
field21.setAccessType(std::string("inputOutput"));
field21.setType(std::string("SFTime"));
field21.setValue(std::string("2"));
ProtoInterface20.addChild(&field21);

field& field22 =  field();
field22.setName(std::string("enabled"));
field22.setAccessType(std::string("inputOutput"));
field22.setType(std::string("SFBool"));
field22.setValue(std::string("true"));
ProtoInterface20.addChild(&field22);

field& field23 =  field();
field23.setName(std::string("loop"));
field23.setAccessType(std::string("inputOutput"));
field23.setType(std::string("SFBool"));
field23.setValue(std::string("true"));
ProtoInterface20.addChild(&field23);

field& field24 =  field();
field24.setName(std::string("startTime"));
field24.setAccessType(std::string("inputOutput"));
field24.setType(std::string("SFTime"));
field24.setValue(std::string("0"));
ProtoInterface20.addChild(&field24);

field& field25 =  field();
field25.setName(std::string("stopTime"));
field25.setAccessType(std::string("inputOutput"));
field25.setType(std::string("SFTime"));
field25.setValue(std::string("-1"));
ProtoInterface20.addChild(&field25);

field& field26 =  field();
field26.setName(std::string("fraction_changed"));
field26.setAccessType(std::string("outputOnly"));
field26.setType(std::string("SFFloat"));
ProtoInterface20.addChild(&field26);

field& field27 =  field();
field27.setName(std::string("isActive"));
field27.setAccessType(std::string("outputOnly"));
field27.setType(std::string("SFBool"));
ProtoInterface20.addChild(&field27);

field& field28 =  field();
field28.setName(std::string("HumanoidRoot_translation_changed"));
field28.setAccessType(std::string("outputOnly"));
field28.setType(std::string("SFVec3f"));
ProtoInterface20.addChild(&field28);

field& field29 =  field();
field29.setName(std::string("HumanoidRoot_rotation_changed"));
field29.setAccessType(std::string("outputOnly"));
field29.setType(std::string("SFRotation"));
ProtoInterface20.addChild(&field29);

field& field30 =  field();
field30.setName(std::string("lower_body_rotation_changed"));
field30.setAccessType(std::string("outputOnly"));
field30.setType(std::string("SFRotation"));
ProtoInterface20.addChild(&field30);

field& field31 =  field();
field31.setName(std::string("l_hip_rotation_changed"));
field31.setAccessType(std::string("outputOnly"));
field31.setType(std::string("SFRotation"));
ProtoInterface20.addChild(&field31);

field& field32 =  field();
field32.setName(std::string("l_knee_rotation_changed"));
field32.setAccessType(std::string("outputOnly"));
field32.setType(std::string("SFRotation"));
ProtoInterface20.addChild(&field32);

field& field33 =  field();
field33.setName(std::string("l_ankle_rotation_changed"));
field33.setAccessType(std::string("outputOnly"));
field33.setType(std::string("SFRotation"));
ProtoInterface20.addChild(&field33);

field& field34 =  field();
field34.setName(std::string("l_midtarsal_rotation_changed"));
field34.setAccessType(std::string("outputOnly"));
field34.setType(std::string("SFRotation"));
ProtoInterface20.addChild(&field34);

field& field35 =  field();
field35.setName(std::string("r_hip_rotation_changed"));
field35.setAccessType(std::string("outputOnly"));
field35.setType(std::string("SFRotation"));
ProtoInterface20.addChild(&field35);

field& field36 =  field();
field36.setName(std::string("r_knee_rotation_changed"));
field36.setAccessType(std::string("outputOnly"));
field36.setType(std::string("SFRotation"));
ProtoInterface20.addChild(&field36);

field& field37 =  field();
field37.setName(std::string("r_ankle_rotation_changed"));
field37.setAccessType(std::string("outputOnly"));
field37.setType(std::string("SFRotation"));
ProtoInterface20.addChild(&field37);

field& field38 =  field();
field38.setName(std::string("r_midtarsal_rotation_changed"));
field38.setAccessType(std::string("outputOnly"));
field38.setType(std::string("SFRotation"));
ProtoInterface20.addChild(&field38);

field& field39 =  field();
field39.setName(std::string("vl5_rotation_changed"));
field39.setAccessType(std::string("outputOnly"));
field39.setType(std::string("SFRotation"));
ProtoInterface20.addChild(&field39);

field& field40 =  field();
field40.setName(std::string("skullbase_rotation_changed"));
field40.setAccessType(std::string("outputOnly"));
field40.setType(std::string("SFRotation"));
ProtoInterface20.addChild(&field40);

field& field41 =  field();
field41.setName(std::string("l_shoulder_rotation_changed"));
field41.setAccessType(std::string("outputOnly"));
field41.setType(std::string("SFRotation"));
ProtoInterface20.addChild(&field41);

field& field42 =  field();
field42.setName(std::string("l_elbow_rotation_changed"));
field42.setAccessType(std::string("outputOnly"));
field42.setType(std::string("SFRotation"));
ProtoInterface20.addChild(&field42);

field& field43 =  field();
field43.setName(std::string("l_wrist_rotation_changed"));
field43.setAccessType(std::string("outputOnly"));
field43.setType(std::string("SFRotation"));
ProtoInterface20.addChild(&field43);

field& field44 =  field();
field44.setName(std::string("r_shoulder_rotation_changed"));
field44.setAccessType(std::string("outputOnly"));
field44.setType(std::string("SFRotation"));
ProtoInterface20.addChild(&field44);

field& field45 =  field();
field45.setName(std::string("r_elbow_rotation_changed"));
field45.setAccessType(std::string("outputOnly"));
field45.setType(std::string("SFRotation"));
ProtoInterface20.addChild(&field45);

field& field46 =  field();
field46.setName(std::string("r_wrist_rotation_changed"));
field46.setAccessType(std::string("outputOnly"));
field46.setType(std::string("SFRotation"));
ProtoInterface20.addChild(&field46);

ProtoDeclare19.addChild(&ProtoInterface20);

ProtoBody& ProtoBody47 =  ProtoBody();
Group& Group48 =  Group();
TimeSensor& TimeSensor49 =  TimeSensor();
TimeSensor49.setDEF(std::string("TIMER"));
IS& IS50 =  IS();
Connect& connect51 =  Connect();
connect51.setNodeField(std::string("cycleInterval"));
connect51.setProtoField(std::string("cycleInterval"));
IS50.addChild(&connect51);

Connect& connect52 =  Connect();
connect52.setNodeField(std::string("enabled"));
connect52.setProtoField(std::string("enabled"));
IS50.addChild(&connect52);

Connect& connect53 =  Connect();
connect53.setNodeField(std::string("loop"));
connect53.setProtoField(std::string("loop"));
IS50.addChild(&connect53);

Connect& connect54 =  Connect();
connect54.setNodeField(std::string("startTime"));
connect54.setProtoField(std::string("startTime"));
IS50.addChild(&connect54);

Connect& connect55 =  Connect();
connect55.setNodeField(std::string("stopTime"));
connect55.setProtoField(std::string("stopTime"));
IS50.addChild(&connect55);

Connect& connect56 =  Connect();
connect56.setNodeField(std::string("fraction_changed"));
connect56.setProtoField(std::string("fraction_changed"));
IS50.addChild(&connect56);

Connect& connect57 =  Connect();
connect57.setNodeField(std::string("isActive"));
connect57.setProtoField(std::string("isActive"));
IS50.addChild(&connect57);

TimeSensor49.addChild(&IS50);

Group48.addChild(&TimeSensor49);

PositionInterpolator& PositionInterpolator58 =  PositionInterpolator();
PositionInterpolator58.setDEF(std::string("HUMANOIDROOT_POSITION_ANIMATOR"));
PositionInterpolator58.setKey(new float[]{0.0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0}, 19);
PositionInterpolator58.setKeyValue(new float[]{0.0,-0.00928,0.0,0.0,-0.003858,0.0,0.0,-0.008847,0.0,0.0,-0.01486,0.0,0.0,-0.02641,0.0,0.0,-0.03934,0.0,0.0,-0.0502,0.0,0.0,-0.07469,0.0,0.0,-0.02732,0.0,0.0,-0.01608,0.0,0.0,-0.01129,0.0,0.0,-0.005819,0.0,0.0,-0.002004,0.0,0.0,-0.002579,0.0,0.0,-0.0143,0.0,0.0,-0.03799,0.0,0.0,-0.05648,0.0,0.0,-0.045,0.0,0.0,-0.00928,0.0}, 57);
IS& IS59 =  IS();
Connect& connect60 =  Connect();
connect60.setNodeField(std::string("value_changed"));
connect60.setProtoField(std::string("HumanoidRoot_translation_changed"));
IS59.addChild(&connect60);

PositionInterpolator58.addChild(&IS59);

Group48.addChild(&PositionInterpolator58);

OrientationInterpolator& OrientationInterpolator61 =  OrientationInterpolator();
OrientationInterpolator61.setDEF(std::string("HUMANOIDROOT_ANIMATOR"));
OrientationInterpolator61.setKey(new float[]{0.0,1.0}, 2);
OrientationInterpolator61.setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0}, 8);
IS& IS62 =  IS();
Connect& connect63 =  Connect();
connect63.setNodeField(std::string("value_changed"));
connect63.setProtoField(std::string("HumanoidRoot_rotation_changed"));
IS62.addChild(&connect63);

OrientationInterpolator61.addChild(&IS62);

Group48.addChild(&OrientationInterpolator61);

OrientationInterpolator& OrientationInterpolator64 =  OrientationInterpolator();
OrientationInterpolator64.setDEF(std::string("SACROILIAC_ANIMATOR"));
OrientationInterpolator64.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator64.setKeyValue(new float[]{0.0,0.0,-1.0,0.1056,0.0,0.0,1.0,0.09018,0.0,0.0,-1.0,0.1056}, 12);
IS& IS65 =  IS();
Connect& connect66 =  Connect();
connect66.setNodeField(std::string("value_changed"));
connect66.setProtoField(std::string("lower_body_rotation_changed"));
IS65.addChild(&connect66);

OrientationInterpolator64.addChild(&IS65);

Group48.addChild(&OrientationInterpolator64);

OrientationInterpolator& OrientationInterpolator67 =  OrientationInterpolator();
OrientationInterpolator67.setDEF(std::string("L_HIP_ANIMATOR"));
OrientationInterpolator67.setKey(new float[]{0.0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
OrientationInterpolator67.setKeyValue(new float[]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1.0,0.0,0.0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865}, 32);
IS& IS68 =  IS();
Connect& connect69 =  Connect();
connect69.setNodeField(std::string("value_changed"));
connect69.setProtoField(std::string("l_hip_rotation_changed"));
IS68.addChild(&connect69);

OrientationInterpolator67.addChild(&IS68);

Group48.addChild(&OrientationInterpolator67);

OrientationInterpolator& OrientationInterpolator70 =  OrientationInterpolator();
OrientationInterpolator70.setDEF(std::string("L_KNEE_ANIMATOR"));
OrientationInterpolator70.setKey(new float[]{0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
OrientationInterpolator70.setKeyValue(new float[]{1.0,0.0,0.0,0.3226,1.0,0.0,0.0,0.1556,1.0,0.0,0.0,0.08678,1.0,0.0,0.0,0.8751,1.0,0.0,0.0,1.131,1.0,0.0,0.0,0.09961,1.0,0.0,0.0,0.3942,1.0,0.0,0.0,0.3226}, 32);
IS& IS71 =  IS();
Connect& connect72 =  Connect();
connect72.setNodeField(std::string("value_changed"));
connect72.setProtoField(std::string("l_knee_rotation_changed"));
IS71.addChild(&connect72);

OrientationInterpolator70.addChild(&IS71);

Group48.addChild(&OrientationInterpolator70);

OrientationInterpolator& OrientationInterpolator73 =  OrientationInterpolator();
OrientationInterpolator73.setDEF(std::string("L_ANKLE_ANIMATOR"));
OrientationInterpolator73.setKey(new float[]{0.0,0.125,0.2083,0.375,0.6667,0.9167,1.0}, 7);
OrientationInterpolator73.setKeyValue(new float[]{-1.0,0.0,0.0,0.06714,-1.0,0.0,0.0,0.2152,-1.0,0.0,0.0,0.3184,-1.0,0.0,0.0,0.4717,-1.0,0.0,0.0,0.2912,1.0,0.0,0.0,0.1222,-1.0,0.0,0.0,0.06714}, 28);
IS& IS74 =  IS();
Connect& connect75 =  Connect();
connect75.setNodeField(std::string("value_changed"));
connect75.setProtoField(std::string("l_ankle_rotation_changed"));
IS74.addChild(&connect75);

OrientationInterpolator73.addChild(&IS74);

Group48.addChild(&OrientationInterpolator73);

OrientationInterpolator& OrientationInterpolator76 =  OrientationInterpolator();
OrientationInterpolator76.setDEF(std::string("L_MIDTARSAL_ANIMATOR"));
OrientationInterpolator76.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator76.setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.2,1.0,0.0,0.0,0.0}, 12);
IS& IS77 =  IS();
Connect& connect78 =  Connect();
connect78.setNodeField(std::string("value_changed"));
connect78.setProtoField(std::string("l_midtarsal_rotation_changed"));
IS77.addChild(&connect78);

OrientationInterpolator76.addChild(&IS77);

Group48.addChild(&OrientationInterpolator76);

OrientationInterpolator& OrientationInterpolator79 =  OrientationInterpolator();
OrientationInterpolator79.setDEF(std::string("R_HIP_ANIMATOR"));
OrientationInterpolator79.setKey(new float[]{0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 10);
OrientationInterpolator79.setKeyValue(new float[]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1.0,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1.0,0.0,0.0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481}, 40);
IS& IS80 =  IS();
Connect& connect81 =  Connect();
connect81.setNodeField(std::string("value_changed"));
connect81.setProtoField(std::string("r_hip_rotation_changed"));
IS80.addChild(&connect81);

OrientationInterpolator79.addChild(&IS80);

Group48.addChild(&OrientationInterpolator79);

OrientationInterpolator& OrientationInterpolator82 =  OrientationInterpolator();
OrientationInterpolator82.setDEF(std::string("R_KNEE_ANIMATOR"));
OrientationInterpolator82.setKey(new float[]{0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 10);
OrientationInterpolator82.setKeyValue(new float[]{1.0,0.0,0.0,0.8573,1.0,0.0,0.0,0.8926,1.0,0.0,0.0,0.5351,1.0,0.0,0.0,0.1756,1.0,0.0,0.0,0.1194,1.0,0.0,0.0,0.3153,1.0,-1.176e-8,-4.971e-9,0.09354,1.0,0.0,0.0,0.08558,1.0,0.0,0.0,0.2475,1.0,0.0,0.0,0.8573}, 40);
IS& IS83 =  IS();
Connect& connect84 =  Connect();
connect84.setNodeField(std::string("value_changed"));
connect84.setProtoField(std::string("r_knee_rotation_changed"));
IS83.addChild(&connect84);

OrientationInterpolator82.addChild(&IS83);

Group48.addChild(&OrientationInterpolator82);

OrientationInterpolator& OrientationInterpolator85 =  OrientationInterpolator();
OrientationInterpolator85.setDEF(std::string("R_ANKLE_ANIMATOR"));
OrientationInterpolator85.setKey(new float[]{0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0}, 11);
OrientationInterpolator85.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.3533,-1.0,0.0,0.0,0.1072,1.0,0.0,0.0,0.2612,1.0,-1.641e-7,1.827e-8,0.1268,-1.0,0.0,0.0,0.01793,-1.0,0.0,0.0,0.05824,-1.0,0.0,0.0,0.2398,-1.0,0.0,0.0,0.35,-1.0,0.0,0.0,0.3322,0.0,0.0,1.0,0.0}, 44);
IS& IS86 =  IS();
Connect& connect87 =  Connect();
connect87.setNodeField(std::string("value_changed"));
connect87.setProtoField(std::string("r_ankle_rotation_changed"));
IS86.addChild(&connect87);

OrientationInterpolator85.addChild(&IS86);

Group48.addChild(&OrientationInterpolator85);

OrientationInterpolator& OrientationInterpolator88 =  OrientationInterpolator();
OrientationInterpolator88.setDEF(std::string("R_MIDTARSAL_ANIMATOR"));
OrientationInterpolator88.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator88.setKeyValue(new float[]{1.0,0.0,0.0,-0.2,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.2}, 12);
IS& IS89 =  IS();
Connect& connect90 =  Connect();
connect90.setNodeField(std::string("value_changed"));
connect90.setProtoField(std::string("r_midtarsal_rotation_changed"));
IS89.addChild(&connect90);

OrientationInterpolator88.addChild(&IS89);

Group48.addChild(&OrientationInterpolator88);

OrientationInterpolator& OrientationInterpolator91 =  OrientationInterpolator();
OrientationInterpolator91.setDEF(std::string("VL5_ANIMATOR"));
OrientationInterpolator91.setKey(new float[]{0.0,0.2083,0.375,0.75,0.8333,1.0}, 6);
OrientationInterpolator91.setKeyValue(new float[]{0.0,1.0,0.0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0.0,1.0,0.0,0.0826}, 24);
IS& IS92 =  IS();
Connect& connect93 =  Connect();
connect93.setNodeField(std::string("value_changed"));
connect93.setProtoField(std::string("vl5_rotation_changed"));
IS92.addChild(&connect93);

OrientationInterpolator91.addChild(&IS92);

Group48.addChild(&OrientationInterpolator91);

OrientationInterpolator& OrientationInterpolator94 =  OrientationInterpolator();
OrientationInterpolator94.setDEF(std::string("SKULLBASE_ANIMATOR"));
OrientationInterpolator94.setKey(new float[]{0.0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1.0}, 10);
OrientationInterpolator94.setKeyValue(new float[]{0.0,-1.0,0.0,0.08642,0.0,1.0,0.0,0.1825,0.0,1.0,0.0,0.1505,0.0,1.0,0.0,0.1053,0.0,1.0,0.0,0.04391,0.0,-1.0,0.0,0.03119,0.0,-1.0,0.0,0.07936,0.0,-1.0,0.0,0.1616,0.0,-1.0,0.0,0.155,0.0,-1.0,0.0,0.08642}, 40);
IS& IS95 =  IS();
Connect& connect96 =  Connect();
connect96.setNodeField(std::string("value_changed"));
connect96.setProtoField(std::string("skullbase_rotation_changed"));
IS95.addChild(&connect96);

OrientationInterpolator94.addChild(&IS95);

Group48.addChild(&OrientationInterpolator94);

OrientationInterpolator& OrientationInterpolator97 =  OrientationInterpolator();
OrientationInterpolator97.setDEF(std::string("L_SHOULDER_ANIMATOR"));
OrientationInterpolator97.setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator97.setKeyValue(new float[]{1.0,0.0,0.0,0.1189,-1.0,-5.928e-7,1.525e-7,0.1861,1.0,-2.038e-7,-1.257e-7,0.3357,1.0,0.0,0.0,0.1189}, 16);
IS& IS98 =  IS();
Connect& connect99 =  Connect();
connect99.setNodeField(std::string("value_changed"));
connect99.setProtoField(std::string("l_shoulder_rotation_changed"));
IS98.addChild(&connect99);

OrientationInterpolator97.addChild(&IS98);

Group48.addChild(&OrientationInterpolator97);

OrientationInterpolator& OrientationInterpolator100 =  OrientationInterpolator();
OrientationInterpolator100.setDEF(std::string("L_ELBOW_ANIMATOR"));
OrientationInterpolator100.setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator100.setKeyValue(new float[]{-1.0,-1.58298e-7,8.15967e-8,0.0659878,-1.0,-3.28826e-8,-2.31665e-8,0.488383,-1.0,0.00000306462,-0.00000311947,0.0177536,-1.0,-1.58298e-7,8.15967e-8,0.0659878}, 16);
IS& IS101 =  IS();
Connect& connect102 =  Connect();
connect102.setNodeField(std::string("value_changed"));
connect102.setProtoField(std::string("l_elbow_rotation_changed"));
IS101.addChild(&connect102);

OrientationInterpolator100.addChild(&IS101);

Group48.addChild(&OrientationInterpolator100);

OrientationInterpolator& OrientationInterpolator103 =  OrientationInterpolator();
OrientationInterpolator103.setDEF(std::string("L_WRIST_ANIMATOR"));
OrientationInterpolator103.setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator103.setKeyValue(new float[]{0.00000151276,-1.0,0.0000017724,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0.00000151276,-1.0,0.0000017724,0.461076}, 16);
IS& IS104 =  IS();
Connect& connect105 =  Connect();
connect105.setNodeField(std::string("value_changed"));
connect105.setProtoField(std::string("l_wrist_rotation_changed"));
IS104.addChild(&connect105);

OrientationInterpolator103.addChild(&IS104);

Group48.addChild(&OrientationInterpolator103);

OrientationInterpolator& OrientationInterpolator106 =  OrientationInterpolator();
OrientationInterpolator106.setDEF(std::string("R_SHOULDER_ANIMATOR"));
OrientationInterpolator106.setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator106.setKeyValue(new float[]{-1.0,-7.689e-7,-1.48e-7,0.09346,1.0,5.004e-8,2.254e-8,0.3197,-1.0,-1.104e-7,5.267e-10,0.1564,-1.0,-7.689e-7,-1.48e-7,0.09346}, 16);
IS& IS107 =  IS();
Connect& connect108 =  Connect();
connect108.setNodeField(std::string("value_changed"));
connect108.setProtoField(std::string("r_shoulder_rotation_changed"));
IS107.addChild(&connect108);

OrientationInterpolator106.addChild(&IS107);

Group48.addChild(&OrientationInterpolator106);

OrientationInterpolator& OrientationInterpolator109 =  OrientationInterpolator();
OrientationInterpolator109.setDEF(std::string("R_ELBOW_ANIMATOR"));
OrientationInterpolator109.setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator109.setKeyValue(new float[]{-1.0,-4.45619e-8,2.70318e-8,0.411508,-1.0,8.16742e-7,-1.09556e-7,0.0925011,-1.0,-2.47628e-8,-7.02862e-9,0.572568,-1.0,-4.45619e-8,2.70318e-8,0.411508}, 16);
IS& IS110 =  IS();
Connect& connect111 =  Connect();
connect111.setNodeField(std::string("value_changed"));
connect111.setProtoField(std::string("r_elbow_rotation_changed"));
IS110.addChild(&connect111);

OrientationInterpolator109.addChild(&IS110);

Group48.addChild(&OrientationInterpolator109);

OrientationInterpolator& OrientationInterpolator112 =  OrientationInterpolator();
OrientationInterpolator112.setDEF(std::string("R_WRIST_ANIMATOR"));
OrientationInterpolator112.setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator112.setKeyValue(new float[]{-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346}, 16);
IS& IS113 =  IS();
Connect& connect114 =  Connect();
connect114.setNodeField(std::string("value_changed"));
connect114.setProtoField(std::string("r_wrist_rotation_changed"));
IS113.addChild(&connect114);

OrientationInterpolator112.addChild(&IS113);

Group48.addChild(&OrientationInterpolator112);

ProtoBody47.addChild(&Group48);

ROUTE& ROUTE115 =  ROUTE();
ROUTE115.setFromField(std::string("fraction_changed"));
ROUTE115.setFromNode(std::string("TIMER"));
ROUTE115.setToField(std::string("set_fraction"));
ROUTE115.setToNode(std::string("HUMANOIDROOT_POSITION_ANIMATOR"));
ProtoBody47.addChild(&ROUTE115);

ROUTE& ROUTE116 =  ROUTE();
ROUTE116.setFromField(std::string("fraction_changed"));
ROUTE116.setFromNode(std::string("TIMER"));
ROUTE116.setToField(std::string("set_fraction"));
ROUTE116.setToNode(std::string("HUMANOIDROOT_ANIMATOR"));
ProtoBody47.addChild(&ROUTE116);

ROUTE& ROUTE117 =  ROUTE();
ROUTE117.setFromField(std::string("fraction_changed"));
ROUTE117.setFromNode(std::string("TIMER"));
ROUTE117.setToField(std::string("set_fraction"));
ROUTE117.setToNode(std::string("SACROILIAC_ANIMATOR"));
ProtoBody47.addChild(&ROUTE117);

ROUTE& ROUTE118 =  ROUTE();
ROUTE118.setFromField(std::string("fraction_changed"));
ROUTE118.setFromNode(std::string("TIMER"));
ROUTE118.setToField(std::string("set_fraction"));
ROUTE118.setToNode(std::string("L_HIP_ANIMATOR"));
ProtoBody47.addChild(&ROUTE118);

ROUTE& ROUTE119 =  ROUTE();
ROUTE119.setFromField(std::string("fraction_changed"));
ROUTE119.setFromNode(std::string("TIMER"));
ROUTE119.setToField(std::string("set_fraction"));
ROUTE119.setToNode(std::string("L_KNEE_ANIMATOR"));
ProtoBody47.addChild(&ROUTE119);

ROUTE& ROUTE120 =  ROUTE();
ROUTE120.setFromField(std::string("fraction_changed"));
ROUTE120.setFromNode(std::string("TIMER"));
ROUTE120.setToField(std::string("set_fraction"));
ROUTE120.setToNode(std::string("L_ANKLE_ANIMATOR"));
ProtoBody47.addChild(&ROUTE120);

ROUTE& ROUTE121 =  ROUTE();
ROUTE121.setFromField(std::string("fraction_changed"));
ROUTE121.setFromNode(std::string("TIMER"));
ROUTE121.setToField(std::string("set_fraction"));
ROUTE121.setToNode(std::string("L_MIDTARSAL_ANIMATOR"));
ProtoBody47.addChild(&ROUTE121);

ROUTE& ROUTE122 =  ROUTE();
ROUTE122.setFromField(std::string("fraction_changed"));
ROUTE122.setFromNode(std::string("TIMER"));
ROUTE122.setToField(std::string("set_fraction"));
ROUTE122.setToNode(std::string("R_HIP_ANIMATOR"));
ProtoBody47.addChild(&ROUTE122);

ROUTE& ROUTE123 =  ROUTE();
ROUTE123.setFromField(std::string("fraction_changed"));
ROUTE123.setFromNode(std::string("TIMER"));
ROUTE123.setToField(std::string("set_fraction"));
ROUTE123.setToNode(std::string("R_KNEE_ANIMATOR"));
ProtoBody47.addChild(&ROUTE123);

ROUTE& ROUTE124 =  ROUTE();
ROUTE124.setFromField(std::string("fraction_changed"));
ROUTE124.setFromNode(std::string("TIMER"));
ROUTE124.setToField(std::string("set_fraction"));
ROUTE124.setToNode(std::string("R_ANKLE_ANIMATOR"));
ProtoBody47.addChild(&ROUTE124);

ROUTE& ROUTE125 =  ROUTE();
ROUTE125.setFromField(std::string("fraction_changed"));
ROUTE125.setFromNode(std::string("TIMER"));
ROUTE125.setToField(std::string("set_fraction"));
ROUTE125.setToNode(std::string("R_MIDTARSAL_ANIMATOR"));
ProtoBody47.addChild(&ROUTE125);

ROUTE& ROUTE126 =  ROUTE();
ROUTE126.setFromField(std::string("fraction_changed"));
ROUTE126.setFromNode(std::string("TIMER"));
ROUTE126.setToField(std::string("set_fraction"));
ROUTE126.setToNode(std::string("VL5_ANIMATOR"));
ProtoBody47.addChild(&ROUTE126);

ROUTE& ROUTE127 =  ROUTE();
ROUTE127.setFromField(std::string("fraction_changed"));
ROUTE127.setFromNode(std::string("TIMER"));
ROUTE127.setToField(std::string("set_fraction"));
ROUTE127.setToNode(std::string("SKULLBASE_ANIMATOR"));
ProtoBody47.addChild(&ROUTE127);

ROUTE& ROUTE128 =  ROUTE();
ROUTE128.setFromField(std::string("fraction_changed"));
ROUTE128.setFromNode(std::string("TIMER"));
ROUTE128.setToField(std::string("set_fraction"));
ROUTE128.setToNode(std::string("L_SHOULDER_ANIMATOR"));
ProtoBody47.addChild(&ROUTE128);

ROUTE& ROUTE129 =  ROUTE();
ROUTE129.setFromField(std::string("fraction_changed"));
ROUTE129.setFromNode(std::string("TIMER"));
ROUTE129.setToField(std::string("set_fraction"));
ROUTE129.setToNode(std::string("L_ELBOW_ANIMATOR"));
ProtoBody47.addChild(&ROUTE129);

ROUTE& ROUTE130 =  ROUTE();
ROUTE130.setFromField(std::string("fraction_changed"));
ROUTE130.setFromNode(std::string("TIMER"));
ROUTE130.setToField(std::string("set_fraction"));
ROUTE130.setToNode(std::string("L_WRIST_ANIMATOR"));
ProtoBody47.addChild(&ROUTE130);

ROUTE& ROUTE131 =  ROUTE();
ROUTE131.setFromField(std::string("fraction_changed"));
ROUTE131.setFromNode(std::string("TIMER"));
ROUTE131.setToField(std::string("set_fraction"));
ROUTE131.setToNode(std::string("R_SHOULDER_ANIMATOR"));
ProtoBody47.addChild(&ROUTE131);

ROUTE& ROUTE132 =  ROUTE();
ROUTE132.setFromField(std::string("fraction_changed"));
ROUTE132.setFromNode(std::string("TIMER"));
ROUTE132.setToField(std::string("set_fraction"));
ROUTE132.setToNode(std::string("R_ELBOW_ANIMATOR"));
ProtoBody47.addChild(&ROUTE132);

ROUTE& ROUTE133 =  ROUTE();
ROUTE133.setFromField(std::string("fraction_changed"));
ROUTE133.setFromNode(std::string("TIMER"));
ROUTE133.setToField(std::string("set_fraction"));
ROUTE133.setToNode(std::string("R_WRIST_ANIMATOR"));
ProtoBody47.addChild(&ROUTE133);

ProtoDeclare19.addChild(&ProtoBody47);

Scene17.addChild(&ProtoDeclare19);

//======================================
//Point to example use in case someone inspects this file
Anchor& Anchor134 =  Anchor();
Anchor134.setDescription(std::string("InterchangableActorsViaDynamicRouting"));
Anchor134.setParameter((std::string[]){"target=_blank"}, 1);
Anchor134.setUrl((std::string[]){"InterchangableActorsViaDynamicRouting.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d", "InterchangableActorsViaDynamicRouting.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"}, 4);
Shape& Shape135 =  Shape();
Text& Text136 =  Text();
Text136.setString((std::string[]){"LOA1_WalkAnimation.x3d", "defines a prototype", "for animating a humanoid.", "Click this text to see", "InterchangableActorsViaDynamicRouting example."}, 5);
CFontStyle& FontStyle137 =  CFontStyle();
FontStyle137.setJustify((std::string[]){"MIDDLE", "MIDDLE"}, 2);
FontStyle137.setSize(0.8);
Text136.setFontStyle(&FontStyle137);

Shape135.setGeometry(&Text136);

Appearance& Appearance138 =  Appearance();
Material& Material139 =  Material();
Material139.setDiffuseColor(new float[]{1.0,1.0,0.2});
Appearance138.addChild(&Material139);

Shape135.addChild(&Appearance138);

Anchor134.addChild(&Shape135);

Scene17.addChild(&Anchor134);

X3D0.setScene(&Scene17);

//}
