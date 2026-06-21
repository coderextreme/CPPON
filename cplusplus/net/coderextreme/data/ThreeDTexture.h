#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void ThreeDTexture(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("ThreeDTexture.x3d"));
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
meta5.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/ThreeDTexture.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("description"));
meta6.setContent(std::string("a kind of ThreeDTexture cube with spheres"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
NavigationInfo8.setType(new std::string[]{"EXAMINE"}, 1);
Scene7.addChild(&NavigationInfo8);

Viewpoint& Viewpoint9 =  Viewpoint();
Viewpoint9.setDescription(std::string("Rubiks Cube"));
Viewpoint9.setPosition(new float[]{0.0,0.0,12.0});
Scene7.addChild(&Viewpoint9);

ProtoDeclare& ProtoDeclare10 =  ProtoDeclare();
ProtoDeclare10.setName(std::string("sphereproto"));
ProtoInterface& ProtoInterface11 =  ProtoInterface();
field& field12 =  field();
field12.setName(std::string("xtranslation"));
field12.setAccessType(std::string("inputOutput"));
field12.setType(std::string("SFVec3f"));
field12.setValue(std::string("0 0 0"));
ProtoInterface11.addChild(&field12);

ProtoDeclare10.addChild(&ProtoInterface11);

ProtoBody& ProtoBody13 =  ProtoBody();
Transform& Transform14 =  Transform();
IS& IS15 =  IS();
Connect& connect16 =  Connect();
connect16.setNodeField(std::string("translation"));
connect16.setProtoField(std::string("xtranslation"));
IS15.addChild(&connect16);

Transform14.addChild(&IS15);

Shape& Shape17 =  Shape();
Sphere& Sphere18 =  Sphere();
Shape17.setGeometry(&Sphere18);

Appearance& Appearance19 =  Appearance();
Appearance19.setContainerField("appearance");
Material& Material20 =  Material();
Material20.setContainerField("material");
Material20.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance19.addChild(&Material20);

Shape17.addChild(&Appearance19);

Transform14.addChild(&Shape17);

ProtoBody13.addChild(&Transform14);

ProtoDeclare10.addChild(&ProtoBody13);

Scene7.addChild(&ProtoDeclare10);

ProtoDeclare& ProtoDeclare21 =  ProtoDeclare();
ProtoDeclare21.setName(std::string("three"));
ProtoInterface& ProtoInterface22 =  ProtoInterface();
field& field23 =  field();
field23.setName(std::string("ytranslation"));
field23.setAccessType(std::string("inputOutput"));
field23.setType(std::string("SFVec3f"));
field23.setValue(std::string("0 0 0"));
ProtoInterface22.addChild(&field23);

ProtoDeclare21.addChild(&ProtoInterface22);

ProtoBody& ProtoBody24 =  ProtoBody();
Transform& Transform25 =  Transform();
IS& IS26 =  IS();
Connect& connect27 =  Connect();
connect27.setNodeField(std::string("translation"));
connect27.setProtoField(std::string("ytranslation"));
IS26.addChild(&connect27);

Transform25.addChild(&IS26);

ProtoInstance& ProtoInstance28 =  ProtoInstance();
ProtoInstance28.setName(std::string("sphereproto"));
fieldValue& fieldValue29 =  fieldValue();
fieldValue29.setName(std::string("xtranslation"));
fieldValue29.setValue(std::string("0 0 0"));
ProtoInstance28.addChild(&fieldValue29);

Transform25.addChild(&ProtoInstance28);

ProtoInstance& ProtoInstance30 =  ProtoInstance();
ProtoInstance30.setName(std::string("sphereproto"));
fieldValue& fieldValue31 =  fieldValue();
fieldValue31.setName(std::string("xtranslation"));
fieldValue31.setValue(std::string("2 0 0"));
ProtoInstance30.addChild(&fieldValue31);

Transform25.addChild(&ProtoInstance30);

ProtoInstance& ProtoInstance32 =  ProtoInstance();
ProtoInstance32.setName(std::string("sphereproto"));
fieldValue& fieldValue33 =  fieldValue();
fieldValue33.setName(std::string("xtranslation"));
fieldValue33.setValue(std::string("-2 0 0"));
ProtoInstance32.addChild(&fieldValue33);

Transform25.addChild(&ProtoInstance32);

ProtoBody24.addChild(&Transform25);

ProtoDeclare21.addChild(&ProtoBody24);

Scene7.addChild(&ProtoDeclare21);

ProtoDeclare& ProtoDeclare34 =  ProtoDeclare();
ProtoDeclare34.setName(std::string("nine"));
ProtoInterface& ProtoInterface35 =  ProtoInterface();
field& field36 =  field();
field36.setName(std::string("ztranslation"));
field36.setAccessType(std::string("inputOutput"));
field36.setType(std::string("SFVec3f"));
field36.setValue(std::string("0 0 0"));
ProtoInterface35.addChild(&field36);

ProtoDeclare34.addChild(&ProtoInterface35);

ProtoBody& ProtoBody37 =  ProtoBody();
Transform& Transform38 =  Transform();
IS& IS39 =  IS();
Connect& connect40 =  Connect();
connect40.setNodeField(std::string("translation"));
connect40.setProtoField(std::string("ztranslation"));
IS39.addChild(&connect40);

Transform38.addChild(&IS39);

ProtoInstance& ProtoInstance41 =  ProtoInstance();
ProtoInstance41.setName(std::string("three"));
fieldValue& fieldValue42 =  fieldValue();
fieldValue42.setName(std::string("ytranslation"));
fieldValue42.setValue(std::string("0 0 0"));
ProtoInstance41.addChild(&fieldValue42);

Transform38.addChild(&ProtoInstance41);

ProtoInstance& ProtoInstance43 =  ProtoInstance();
ProtoInstance43.setName(std::string("three"));
fieldValue& fieldValue44 =  fieldValue();
fieldValue44.setName(std::string("ytranslation"));
fieldValue44.setValue(std::string("0 2 0"));
ProtoInstance43.addChild(&fieldValue44);

Transform38.addChild(&ProtoInstance43);

ProtoInstance& ProtoInstance45 =  ProtoInstance();
ProtoInstance45.setName(std::string("three"));
fieldValue& fieldValue46 =  fieldValue();
fieldValue46.setName(std::string("ytranslation"));
fieldValue46.setValue(std::string("0 -2 0"));
ProtoInstance45.addChild(&fieldValue46);

Transform38.addChild(&ProtoInstance45);

ProtoBody37.addChild(&Transform38);

ProtoDeclare34.addChild(&ProtoBody37);

Scene7.addChild(&ProtoDeclare34);

ProtoDeclare& ProtoDeclare47 =  ProtoDeclare();
ProtoDeclare47.setName(std::string("twentyseven"));
ProtoInterface& ProtoInterface48 =  ProtoInterface();
field& field49 =  field();
field49.setName(std::string("ttranslation"));
field49.setAccessType(std::string("inputOutput"));
field49.setType(std::string("SFVec3f"));
field49.setValue(std::string("0 0 0"));
ProtoInterface48.addChild(&field49);

ProtoDeclare47.addChild(&ProtoInterface48);

ProtoBody& ProtoBody50 =  ProtoBody();
Transform& Transform51 =  Transform();
IS& IS52 =  IS();
Connect& connect53 =  Connect();
connect53.setNodeField(std::string("translation"));
connect53.setProtoField(std::string("ttranslation"));
IS52.addChild(&connect53);

Transform51.addChild(&IS52);

ProtoInstance& ProtoInstance54 =  ProtoInstance();
ProtoInstance54.setName(std::string("nine"));
fieldValue& fieldValue55 =  fieldValue();
fieldValue55.setName(std::string("ztranslation"));
fieldValue55.setValue(std::string("0 0 0"));
ProtoInstance54.addChild(&fieldValue55);

Transform51.addChild(&ProtoInstance54);

ProtoInstance& ProtoInstance56 =  ProtoInstance();
ProtoInstance56.setName(std::string("nine"));
fieldValue& fieldValue57 =  fieldValue();
fieldValue57.setName(std::string("ztranslation"));
fieldValue57.setValue(std::string("0 0 2"));
ProtoInstance56.addChild(&fieldValue57);

Transform51.addChild(&ProtoInstance56);

ProtoInstance& ProtoInstance58 =  ProtoInstance();
ProtoInstance58.setName(std::string("nine"));
fieldValue& fieldValue59 =  fieldValue();
fieldValue59.setName(std::string("ztranslation"));
fieldValue59.setValue(std::string("0 0 -2"));
ProtoInstance58.addChild(&fieldValue59);

Transform51.addChild(&ProtoInstance58);

ProtoBody50.addChild(&Transform51);

ProtoDeclare47.addChild(&ProtoBody50);

Scene7.addChild(&ProtoDeclare47);

ProtoInstance& ProtoInstance60 =  ProtoInstance();
ProtoInstance60.setName(std::string("twentyseven"));
fieldValue& fieldValue61 =  fieldValue();
fieldValue61.setName(std::string("ttranslation"));
fieldValue61.setValue(std::string("0 0 0"));
ProtoInstance60.addChild(&fieldValue61);

Scene7.addChild(&ProtoInstance60);

X3D0.setScene(&Scene7);

//}
