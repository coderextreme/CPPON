#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void rubikOnFire(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("rubikOnFire.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("creator"));
meta3.setContent(std::string("John Carlson"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("generator"));
meta4.setContent(std::string("manual"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("identifier"));
meta5.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/rubikOnFire.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("description"));
meta6.setContent(std::string("a white rubik cube"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
NavigationInfo8.setType(new std::string[]{"ANY", "EXAMINE", "WALK", "FLY", "LOOKAT"}, 5);
Scene7.addChild(&NavigationInfo8);

Viewpoint& Viewpoint9 =  Viewpoint();
Viewpoint9.setDescription(std::string("Rubiks Cube on Fire"));
Viewpoint9.setPosition(new float[]{0.0,0.0,12.0});
Scene7.addChild(&Viewpoint9);

ProtoDeclare& ProtoDeclare10 =  ProtoDeclare();
ProtoDeclare10.setName(std::string("anyShape"));
ProtoInterface& ProtoInterface11 =  ProtoInterface();
field& field12 =  field();
field12.setName(std::string("xtranslation"));
field12.setAccessType(std::string("inputOutput"));
field12.setType(std::string("SFVec3f"));
field12.setValue(std::string("0 0 0"));
ProtoInterface11.addChild(&field12);

field& field13 =  field();
field13.setName(std::string("myShape"));
field13.setAccessType(std::string("inputOutput"));
field13.setType(std::string("SFNode"));
Sphere& Sphere14 =  Sphere();
field13.addChild(Sphere14);

ProtoInterface11.addChild(&field13);

ProtoDeclare10.addChild(&ProtoInterface11);

ProtoBody& ProtoBody15 =  ProtoBody();
Transform& Transform16 =  Transform();
IS& IS17 =  IS();
Connect& connect18 =  Connect();
connect18.setNodeField(std::string("translation"));
connect18.setProtoField(std::string("xtranslation"));
IS17.addChild(&connect18);

Transform16.addChild(&IS17);

Shape& Shape19 =  Shape();
IS& IS20 =  IS();
Connect& connect21 =  Connect();
connect21.setNodeField(std::string("geometry"));
connect21.setProtoField(std::string("myShape"));
IS20.addChild(&connect21);

Shape19.addChild(&IS20);

Appearance& Appearance22 =  Appearance();
Appearance22.setContainerField("appearance");
Material& Material23 =  Material();
Material23.setContainerField("material");
Material23.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance22.addChild(&Material23);

Shape19.addChild(&Appearance22);

Transform16.addChild(&Shape19);

ProtoBody15.addChild(&Transform16);

ProtoDeclare10.addChild(&ProtoBody15);

Scene7.addChild(&ProtoDeclare10);

ProtoDeclare& ProtoDeclare24 =  ProtoDeclare();
ProtoDeclare24.setName(std::string("three"));
ProtoInterface& ProtoInterface25 =  ProtoInterface();
field& field26 =  field();
field26.setName(std::string("ytranslation"));
field26.setAccessType(std::string("inputOutput"));
field26.setType(std::string("SFVec3f"));
field26.setValue(std::string("0 0 0"));
ProtoInterface25.addChild(&field26);

field& field27 =  field();
field27.setName(std::string("myShape"));
field27.setAccessType(std::string("inputOutput"));
field27.setType(std::string("SFNode"));
Sphere& Sphere28 =  Sphere();
field27.addChild(Sphere28);

ProtoInterface25.addChild(&field27);

ProtoDeclare24.addChild(&ProtoInterface25);

ProtoBody& ProtoBody29 =  ProtoBody();
Transform& Transform30 =  Transform();
IS& IS31 =  IS();
Connect& connect32 =  Connect();
connect32.setNodeField(std::string("translation"));
connect32.setProtoField(std::string("ytranslation"));
IS31.addChild(&connect32);

Transform30.addChild(&IS31);

ProtoInstance& ProtoInstance33 =  ProtoInstance();
ProtoInstance33.setName(std::string("anyShape"));
fieldValue& fieldValue34 =  fieldValue();
fieldValue34.setName(std::string("xtranslation"));
fieldValue34.setValue(std::string("0 0 0"));
ProtoInstance33.addChild(&fieldValue34);

IS& IS35 =  IS();
Connect& connect36 =  Connect();
connect36.setNodeField(std::string("myShape"));
connect36.setProtoField(std::string("myShape"));
IS35.addChild(&connect36);

ProtoInstance33.addChild(&IS35);

Transform30.addChild(&ProtoInstance33);

ProtoInstance& ProtoInstance37 =  ProtoInstance();
ProtoInstance37.setName(std::string("anyShape"));
fieldValue& fieldValue38 =  fieldValue();
fieldValue38.setName(std::string("xtranslation"));
fieldValue38.setValue(std::string("2 0 0"));
ProtoInstance37.addChild(&fieldValue38);

IS& IS39 =  IS();
Connect& connect40 =  Connect();
connect40.setNodeField(std::string("myShape"));
connect40.setProtoField(std::string("myShape"));
IS39.addChild(&connect40);

ProtoInstance37.addChild(&IS39);

Transform30.addChild(&ProtoInstance37);

ProtoInstance& ProtoInstance41 =  ProtoInstance();
ProtoInstance41.setName(std::string("anyShape"));
fieldValue& fieldValue42 =  fieldValue();
fieldValue42.setName(std::string("xtranslation"));
fieldValue42.setValue(std::string("-2 0 0"));
ProtoInstance41.addChild(&fieldValue42);

IS& IS43 =  IS();
Connect& connect44 =  Connect();
connect44.setNodeField(std::string("myShape"));
connect44.setProtoField(std::string("myShape"));
IS43.addChild(&connect44);

ProtoInstance41.addChild(&IS43);

Transform30.addChild(&ProtoInstance41);

ProtoBody29.addChild(&Transform30);

ProtoDeclare24.addChild(&ProtoBody29);

Scene7.addChild(&ProtoDeclare24);

ProtoDeclare& ProtoDeclare45 =  ProtoDeclare();
ProtoDeclare45.setName(std::string("nine"));
ProtoInterface& ProtoInterface46 =  ProtoInterface();
field& field47 =  field();
field47.setName(std::string("ztranslation"));
field47.setAccessType(std::string("inputOutput"));
field47.setType(std::string("SFVec3f"));
field47.setValue(std::string("0 0 0"));
ProtoInterface46.addChild(&field47);

field& field48 =  field();
field48.setName(std::string("myShape"));
field48.setAccessType(std::string("inputOutput"));
field48.setType(std::string("SFNode"));
Sphere& Sphere49 =  Sphere();
field48.addChild(Sphere49);

ProtoInterface46.addChild(&field48);

ProtoDeclare45.addChild(&ProtoInterface46);

ProtoBody& ProtoBody50 =  ProtoBody();
Transform& Transform51 =  Transform();
IS& IS52 =  IS();
Connect& connect53 =  Connect();
connect53.setNodeField(std::string("translation"));
connect53.setProtoField(std::string("ztranslation"));
IS52.addChild(&connect53);

Transform51.addChild(&IS52);

ProtoInstance& ProtoInstance54 =  ProtoInstance();
ProtoInstance54.setName(std::string("three"));
fieldValue& fieldValue55 =  fieldValue();
fieldValue55.setName(std::string("ytranslation"));
fieldValue55.setValue(std::string("0 0 0"));
ProtoInstance54.addChild(&fieldValue55);

IS& IS56 =  IS();
Connect& connect57 =  Connect();
connect57.setNodeField(std::string("myShape"));
connect57.setProtoField(std::string("myShape"));
IS56.addChild(&connect57);

ProtoInstance54.addChild(&IS56);

Transform51.addChild(&ProtoInstance54);

ProtoInstance& ProtoInstance58 =  ProtoInstance();
ProtoInstance58.setName(std::string("three"));
fieldValue& fieldValue59 =  fieldValue();
fieldValue59.setName(std::string("ytranslation"));
fieldValue59.setValue(std::string("0 2 0"));
ProtoInstance58.addChild(&fieldValue59);

IS& IS60 =  IS();
Connect& connect61 =  Connect();
connect61.setNodeField(std::string("myShape"));
connect61.setProtoField(std::string("myShape"));
IS60.addChild(&connect61);

ProtoInstance58.addChild(&IS60);

Transform51.addChild(&ProtoInstance58);

ProtoInstance& ProtoInstance62 =  ProtoInstance();
ProtoInstance62.setName(std::string("three"));
fieldValue& fieldValue63 =  fieldValue();
fieldValue63.setName(std::string("ytranslation"));
fieldValue63.setValue(std::string("0 -2 0"));
ProtoInstance62.addChild(&fieldValue63);

IS& IS64 =  IS();
Connect& connect65 =  Connect();
connect65.setNodeField(std::string("myShape"));
connect65.setProtoField(std::string("myShape"));
IS64.addChild(&connect65);

ProtoInstance62.addChild(&IS64);

Transform51.addChild(&ProtoInstance62);

ProtoBody50.addChild(&Transform51);

ProtoDeclare45.addChild(&ProtoBody50);

Scene7.addChild(&ProtoDeclare45);

ProtoDeclare& ProtoDeclare66 =  ProtoDeclare();
ProtoDeclare66.setName(std::string("twentyseven"));
ProtoInterface& ProtoInterface67 =  ProtoInterface();
field& field68 =  field();
field68.setName(std::string("ttranslation"));
field68.setAccessType(std::string("inputOutput"));
field68.setType(std::string("SFVec3f"));
field68.setValue(std::string("0 0 0"));
ProtoInterface67.addChild(&field68);

field& field69 =  field();
field69.setName(std::string("myShape"));
field69.setAccessType(std::string("inputOutput"));
field69.setType(std::string("SFNode"));
Sphere& Sphere70 =  Sphere();
field69.addChild(Sphere70);

ProtoInterface67.addChild(&field69);

ProtoDeclare66.addChild(&ProtoInterface67);

ProtoBody& ProtoBody71 =  ProtoBody();
Transform& Transform72 =  Transform();
IS& IS73 =  IS();
Connect& connect74 =  Connect();
connect74.setNodeField(std::string("translation"));
connect74.setProtoField(std::string("ttranslation"));
IS73.addChild(&connect74);

Transform72.addChild(&IS73);

ProtoInstance& ProtoInstance75 =  ProtoInstance();
ProtoInstance75.setName(std::string("nine"));
fieldValue& fieldValue76 =  fieldValue();
fieldValue76.setName(std::string("ztranslation"));
fieldValue76.setValue(std::string("0 0 0"));
ProtoInstance75.addChild(&fieldValue76);

IS& IS77 =  IS();
Connect& connect78 =  Connect();
connect78.setNodeField(std::string("myShape"));
connect78.setProtoField(std::string("myShape"));
IS77.addChild(&connect78);

ProtoInstance75.addChild(&IS77);

Transform72.addChild(&ProtoInstance75);

ProtoInstance& ProtoInstance79 =  ProtoInstance();
ProtoInstance79.setName(std::string("nine"));
fieldValue& fieldValue80 =  fieldValue();
fieldValue80.setName(std::string("ztranslation"));
fieldValue80.setValue(std::string("0 0 2"));
ProtoInstance79.addChild(&fieldValue80);

IS& IS81 =  IS();
Connect& connect82 =  Connect();
connect82.setNodeField(std::string("myShape"));
connect82.setProtoField(std::string("myShape"));
IS81.addChild(&connect82);

ProtoInstance79.addChild(&IS81);

Transform72.addChild(&ProtoInstance79);

ProtoInstance& ProtoInstance83 =  ProtoInstance();
ProtoInstance83.setName(std::string("nine"));
fieldValue& fieldValue84 =  fieldValue();
fieldValue84.setName(std::string("ztranslation"));
fieldValue84.setValue(std::string("0 0 -2"));
ProtoInstance83.addChild(&fieldValue84);

IS& IS85 =  IS();
Connect& connect86 =  Connect();
connect86.setNodeField(std::string("myShape"));
connect86.setProtoField(std::string("myShape"));
IS85.addChild(&connect86);

ProtoInstance83.addChild(&IS85);

Transform72.addChild(&ProtoInstance83);

ProtoBody71.addChild(&Transform72);

ProtoDeclare66.addChild(&ProtoBody71);

Scene7.addChild(&ProtoDeclare66);

ProtoInstance& ProtoInstance87 =  ProtoInstance();
ProtoInstance87.setName(std::string("twentyseven"));
fieldValue& fieldValue88 =  fieldValue();
fieldValue88.setName(std::string("ttranslation"));
fieldValue88.setValue(std::string("0 0 0"));
ProtoInstance87.addChild(&fieldValue88);

fieldValue& fieldValue89 =  fieldValue();
fieldValue89.setName(std::string("myShape"));
Box& Box90 =  Box();
Box90.setSize(new float[]{1.0,1.0,1.0});
fieldValue89.addChild(&Box90);

ProtoInstance87.addChild(&fieldValue89);

Scene7.addChild(&ProtoInstance87);

X3D0.setScene(&Scene7);

}
