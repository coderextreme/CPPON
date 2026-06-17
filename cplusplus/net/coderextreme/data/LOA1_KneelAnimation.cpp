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
int LOA1_KneelAnimation(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("LOA1_KneelAnimation.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("Humanoid animation prototype reusable by any Humanoid."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("Tom Miller"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("translator"));
meta5.setContent(std::string("Curt Blais"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("translated"));
meta6.setContent(std::string("1 December 2001"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("modified"));
meta7.setContent(std::string("23 May 2020"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("reference"));
meta8.setContent(std::string("https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("reference"));
meta9.setContent(std::string("https://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("reference"));
meta10.setContent(std::string("https://www.HAnim.org"));
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
meta13.setContent(std::string("Nancy kneel Animation HAnim 2001"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("identifier"));
meta14.setContent(std::string("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d"));
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
WorldInfo18.setTitle(std::string("LOA1_KneelAnimation.x3d"));
Scene17.addChild(&WorldInfo18);

ProtoDeclare& ProtoDeclare19 =  ProtoDeclare();
ProtoDeclare19.setName(std::string("LOA1_KneelAnimation"));
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
field23.setValue(std::string("false"));
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
PositionInterpolator58.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
PositionInterpolator58.setKeyValue(new float[]{0.0,0.0,0.0,0.0,-0.049999,0.0,0.0,-0.195,0.0,0.0,-0.439997,0.0}, 12);
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

//no SACROILIAC_ANIMATOR
OrientationInterpolator& OrientationInterpolator64 =  OrientationInterpolator();
OrientationInterpolator64.setDEF(std::string("L_HIP_ANIMATOR"));
OrientationInterpolator64.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
OrientationInterpolator64.setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.619393,-1.0,0.0,0.0,1.069302,-1.0,0.0,0.0,1.937315}, 16);
IS& IS65 =  IS();
Connect& connect66 =  Connect();
connect66.setNodeField(std::string("value_changed"));
connect66.setProtoField(std::string("l_hip_rotation_changed"));
IS65.addChild(&connect66);

OrientationInterpolator64.addChild(&IS65);

Group48.addChild(&OrientationInterpolator64);

OrientationInterpolator& OrientationInterpolator67 =  OrientationInterpolator();
OrientationInterpolator67.setDEF(std::string("L_KNEE_ANIMATOR"));
OrientationInterpolator67.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
OrientationInterpolator67.setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.615228,1.0,0.0,0.0,0.984524,1.0,0.0,0.0,2.076941}, 16);
IS& IS68 =  IS();
Connect& connect69 =  Connect();
connect69.setNodeField(std::string("value_changed"));
connect69.setProtoField(std::string("l_knee_rotation_changed"));
IS68.addChild(&connect69);

OrientationInterpolator67.addChild(&IS68);

Group48.addChild(&OrientationInterpolator67);

OrientationInterpolator& OrientationInterpolator70 =  OrientationInterpolator();
OrientationInterpolator70.setDEF(std::string("L_ANKLE_ANIMATOR"));
OrientationInterpolator70.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
OrientationInterpolator70.setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.017453,-1.0,0.0,0.0,0.069812,1.0,0.0,0.0,0.261799}, 16);
IS& IS71 =  IS();
Connect& connect72 =  Connect();
connect72.setNodeField(std::string("value_changed"));
connect72.setProtoField(std::string("l_ankle_rotation_changed"));
IS71.addChild(&connect72);

OrientationInterpolator70.addChild(&IS71);

Group48.addChild(&OrientationInterpolator70);

//no L_MIDTARSAL_ANIMATOR
OrientationInterpolator& OrientationInterpolator73 =  OrientationInterpolator();
OrientationInterpolator73.setDEF(std::string("R_HIP_ANIMATOR"));
OrientationInterpolator73.setKey(new float[]{0.0,0.3125,1.0}, 3);
OrientationInterpolator73.setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.523598,-1.0,0.0,0.0,0.157079}, 12);
IS& IS74 =  IS();
Connect& connect75 =  Connect();
connect75.setNodeField(std::string("value_changed"));
connect75.setProtoField(std::string("r_hip_rotation_changed"));
IS74.addChild(&connect75);

OrientationInterpolator73.addChild(&IS74);

Group48.addChild(&OrientationInterpolator73);

OrientationInterpolator& OrientationInterpolator76 =  OrientationInterpolator();
OrientationInterpolator76.setDEF(std::string("R_KNEE_ANIMATOR"));
OrientationInterpolator76.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
OrientationInterpolator76.setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.349065,1.0,0.0,0.0,1.023397,0.999934,0.008043,0.008185,1.727938}, 16);
IS& IS77 =  IS();
Connect& connect78 =  Connect();
connect78.setNodeField(std::string("value_changed"));
connect78.setProtoField(std::string("r_knee_rotation_changed"));
IS77.addChild(&connect78);

OrientationInterpolator76.addChild(&IS77);

Group48.addChild(&OrientationInterpolator76);

OrientationInterpolator& OrientationInterpolator79 =  OrientationInterpolator();
OrientationInterpolator79.setDEF(std::string("R_ANKLE_ANIMATOR"));
OrientationInterpolator79.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
OrientationInterpolator79.setKeyValue(new float[]{1.0,0.0,0.0,0.0,-0.991692,-0.072372,0.106338,0.205053,-0.981083,-0.103267,0.163741,0.272231,-1.0,0.0,0.0,0.349065}, 16);
IS& IS80 =  IS();
Connect& connect81 =  Connect();
connect81.setNodeField(std::string("value_changed"));
connect81.setProtoField(std::string("r_ankle_rotation_changed"));
IS80.addChild(&connect81);

OrientationInterpolator79.addChild(&IS80);

Group48.addChild(&OrientationInterpolator79);

//no R_MIDTARSAL_ANIMATOR
OrientationInterpolator& OrientationInterpolator82 =  OrientationInterpolator();
OrientationInterpolator82.setDEF(std::string("VL5_ANIMATOR"));
OrientationInterpolator82.setKey(new float[]{0.0,1.0}, 2);
OrientationInterpolator82.setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.174533}, 8);
IS& IS83 =  IS();
Connect& connect84 =  Connect();
connect84.setNodeField(std::string("value_changed"));
connect84.setProtoField(std::string("vl5_rotation_changed"));
IS83.addChild(&connect84);

OrientationInterpolator82.addChild(&IS83);

Group48.addChild(&OrientationInterpolator82);

//no SKULLBASE_ANIMATOR
OrientationInterpolator& OrientationInterpolator85 =  OrientationInterpolator();
OrientationInterpolator85.setDEF(std::string("L_SHOULDER_ANIMATOR"));
OrientationInterpolator85.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
OrientationInterpolator85.setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.279252,-1.0,0.0,0.0,0.506145,-1.0,0.0,0.0,0.191986}, 16);
IS& IS86 =  IS();
Connect& connect87 =  Connect();
connect87.setNodeField(std::string("value_changed"));
connect87.setProtoField(std::string("l_shoulder_rotation_changed"));
IS86.addChild(&connect87);

OrientationInterpolator85.addChild(&IS86);

Group48.addChild(&OrientationInterpolator85);

OrientationInterpolator& OrientationInterpolator88 =  OrientationInterpolator();
OrientationInterpolator88.setDEF(std::string("L_ELBOW_ANIMATOR"));
OrientationInterpolator88.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
OrientationInterpolator88.setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.052359,-1.0,0.0,0.0,0.296706,-1.0,0.0,0.0,1.431169}, 16);
IS& IS89 =  IS();
Connect& connect90 =  Connect();
connect90.setNodeField(std::string("value_changed"));
connect90.setProtoField(std::string("l_elbow_rotation_changed"));
IS89.addChild(&connect90);

OrientationInterpolator88.addChild(&IS89);

Group48.addChild(&OrientationInterpolator88);

//no L_WRIST_ANIMATOR
OrientationInterpolator& OrientationInterpolator91 =  OrientationInterpolator();
OrientationInterpolator91.setDEF(std::string("R_SHOULDER_ANIMATOR"));
OrientationInterpolator91.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
OrientationInterpolator91.setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.104719,-1.0,0.0,0.0,0.157079,1.0,0.0,0.0,0.314159}, 16);
IS& IS92 =  IS();
Connect& connect93 =  Connect();
connect93.setNodeField(std::string("value_changed"));
connect93.setProtoField(std::string("r_shoulder_rotation_changed"));
IS92.addChild(&connect93);

OrientationInterpolator91.addChild(&IS92);

Group48.addChild(&OrientationInterpolator91);

OrientationInterpolator& OrientationInterpolator94 =  OrientationInterpolator();
OrientationInterpolator94.setDEF(std::string("R_ELBOW_ANIMATOR"));
OrientationInterpolator94.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
OrientationInterpolator94.setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.837757,-1.0,0.0,0.0,1.239183,-1.0,0.0,0.0,1.500983}, 16);
IS& IS95 =  IS();
Connect& connect96 =  Connect();
connect96.setNodeField(std::string("value_changed"));
connect96.setProtoField(std::string("r_elbow_rotation_changed"));
IS95.addChild(&connect96);

OrientationInterpolator94.addChild(&IS95);

Group48.addChild(&OrientationInterpolator94);

//no R_WRIST_ANIMATOR
ProtoBody47.addChild(&Group48);

ROUTE& ROUTE97 =  ROUTE();
ROUTE97.setFromField(std::string("fraction_changed"));
ROUTE97.setFromNode(std::string("TIMER"));
ROUTE97.setToField(std::string("set_fraction"));
ROUTE97.setToNode(std::string("HUMANOIDROOT_POSITION_ANIMATOR"));
ProtoBody47.addChild(&ROUTE97);

ROUTE& ROUTE98 =  ROUTE();
ROUTE98.setFromField(std::string("fraction_changed"));
ROUTE98.setFromNode(std::string("TIMER"));
ROUTE98.setToField(std::string("set_fraction"));
ROUTE98.setToNode(std::string("HUMANOIDROOT_ANIMATOR"));
ProtoBody47.addChild(&ROUTE98);

ROUTE& ROUTE99 =  ROUTE();
ROUTE99.setFromField(std::string("fraction_changed"));
ROUTE99.setFromNode(std::string("TIMER"));
ROUTE99.setToField(std::string("set_fraction"));
ROUTE99.setToNode(std::string("L_HIP_ANIMATOR"));
ProtoBody47.addChild(&ROUTE99);

ROUTE& ROUTE100 =  ROUTE();
ROUTE100.setFromField(std::string("fraction_changed"));
ROUTE100.setFromNode(std::string("TIMER"));
ROUTE100.setToField(std::string("set_fraction"));
ROUTE100.setToNode(std::string("L_KNEE_ANIMATOR"));
ProtoBody47.addChild(&ROUTE100);

ROUTE& ROUTE101 =  ROUTE();
ROUTE101.setFromField(std::string("fraction_changed"));
ROUTE101.setFromNode(std::string("TIMER"));
ROUTE101.setToField(std::string("set_fraction"));
ROUTE101.setToNode(std::string("L_ANKLE_ANIMATOR"));
ProtoBody47.addChild(&ROUTE101);

ROUTE& ROUTE102 =  ROUTE();
ROUTE102.setFromField(std::string("fraction_changed"));
ROUTE102.setFromNode(std::string("TIMER"));
ROUTE102.setToField(std::string("set_fraction"));
ROUTE102.setToNode(std::string("R_HIP_ANIMATOR"));
ProtoBody47.addChild(&ROUTE102);

ROUTE& ROUTE103 =  ROUTE();
ROUTE103.setFromField(std::string("fraction_changed"));
ROUTE103.setFromNode(std::string("TIMER"));
ROUTE103.setToField(std::string("set_fraction"));
ROUTE103.setToNode(std::string("R_KNEE_ANIMATOR"));
ProtoBody47.addChild(&ROUTE103);

ROUTE& ROUTE104 =  ROUTE();
ROUTE104.setFromField(std::string("fraction_changed"));
ROUTE104.setFromNode(std::string("TIMER"));
ROUTE104.setToField(std::string("set_fraction"));
ROUTE104.setToNode(std::string("R_ANKLE_ANIMATOR"));
ProtoBody47.addChild(&ROUTE104);

ROUTE& ROUTE105 =  ROUTE();
ROUTE105.setFromField(std::string("fraction_changed"));
ROUTE105.setFromNode(std::string("TIMER"));
ROUTE105.setToField(std::string("set_fraction"));
ROUTE105.setToNode(std::string("VL5_ANIMATOR"));
ProtoBody47.addChild(&ROUTE105);

ROUTE& ROUTE106 =  ROUTE();
ROUTE106.setFromField(std::string("fraction_changed"));
ROUTE106.setFromNode(std::string("TIMER"));
ROUTE106.setToField(std::string("set_fraction"));
ROUTE106.setToNode(std::string("L_SHOULDER_ANIMATOR"));
ProtoBody47.addChild(&ROUTE106);

ROUTE& ROUTE107 =  ROUTE();
ROUTE107.setFromField(std::string("fraction_changed"));
ROUTE107.setFromNode(std::string("TIMER"));
ROUTE107.setToField(std::string("set_fraction"));
ROUTE107.setToNode(std::string("L_ELBOW_ANIMATOR"));
ProtoBody47.addChild(&ROUTE107);

ROUTE& ROUTE108 =  ROUTE();
ROUTE108.setFromField(std::string("fraction_changed"));
ROUTE108.setFromNode(std::string("TIMER"));
ROUTE108.setToField(std::string("set_fraction"));
ROUTE108.setToNode(std::string("R_SHOULDER_ANIMATOR"));
ProtoBody47.addChild(&ROUTE108);

ROUTE& ROUTE109 =  ROUTE();
ROUTE109.setFromField(std::string("fraction_changed"));
ROUTE109.setFromNode(std::string("TIMER"));
ROUTE109.setToField(std::string("set_fraction"));
ROUTE109.setToNode(std::string("R_ELBOW_ANIMATOR"));
ProtoBody47.addChild(&ROUTE109);

ProtoDeclare19.addChild(&ProtoBody47);

Scene17.addChild(&ProtoDeclare19);

Anchor& Anchor110 =  Anchor();
Anchor110.setDescription(std::string("InterchangableActorsViaDynamicRouting"));
Anchor110.setParameter((std::string[]){"target=_blank"}, 1);
Anchor110.setUrl((std::string[]){"InterchangableActorsViaDynamicRouting.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d", "InterchangableActorsViaDynamicRouting.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"}, 4);
Shape& Shape111 =  Shape();
Text& Text112 =  Text();
Text112.setString((std::string[]){"LOA1_KneelAnimation.x3d", "defines a prototype", "for animating a humanoid.", "Click this text to see", "InterchangableActorsViaDynamicRouting example."}, 5);
CFontStyle& FontStyle113 =  CFontStyle();
FontStyle113.setJustify((std::string[]){"MIDDLE", "MIDDLE"}, 2);
FontStyle113.setSize(0.8);
Text112.setFontStyle(&FontStyle113);

Shape111.setGeometry(&Text112);

Appearance& Appearance114 =  Appearance();
Material& Material115 =  Material();
Material115.setDiffuseColor(new float[]{1.0,1.0,0.2});
Appearance114.addChild(&Material115);

Shape111.addChild(&Appearance114);

Anchor110.addChild(&Shape111);

Scene17.addChild(&Anchor110);

X3D0.setScene(&Scene17);

}
