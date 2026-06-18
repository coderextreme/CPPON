#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void rubikPly(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("rubikFurnace.x3d"));
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
meta5.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/rubikFurnace.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("description"));
meta6.setContent(std::string("a green rubik cube"));
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
field13.setType(std::string("MFNode"));
Shape& Shape14 =  Shape();
Sphere& Sphere15 =  Sphere();
Shape14.setGeometry(&Sphere15);

Appearance& Appearance16 =  Appearance();
Appearance16.setContainerField("appearance");
Material& Material17 =  Material();
Material17.setContainerField("material");
Material17.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance16.addChild(&Material17);

Shape14.addChild(&Appearance16);

field13.addChild(&Shape14);

ProtoInterface11.addChild(&field13);

ProtoDeclare10.addChild(&ProtoInterface11);

ProtoBody& ProtoBody18 =  ProtoBody();
Transform& Transform19 =  Transform();
IS& IS20 =  IS();
Connect& connect21 =  Connect();
connect21.setNodeField(std::string("translation"));
connect21.setProtoField(std::string("xtranslation"));
IS20.addChild(&connect21);

Connect& connect22 =  Connect();
connect22.setNodeField(std::string("children"));
connect22.setProtoField(std::string("myShape"));
IS20.addChild(&connect22);

Transform19.addChild(&IS20);

ProtoBody18.addChild(&Transform19);

ProtoDeclare10.addChild(&ProtoBody18);

Scene7.addChild(&ProtoDeclare10);

ProtoDeclare& ProtoDeclare23 =  ProtoDeclare();
ProtoDeclare23.setName(std::string("three"));
ProtoInterface& ProtoInterface24 =  ProtoInterface();
field& field25 =  field();
field25.setName(std::string("ytranslation"));
field25.setAccessType(std::string("inputOutput"));
field25.setType(std::string("SFVec3f"));
field25.setValue(std::string("0 0 0"));
ProtoInterface24.addChild(&field25);

field& field26 =  field();
field26.setName(std::string("myShape"));
field26.setAccessType(std::string("inputOutput"));
field26.setType(std::string("MFNode"));
Shape& Shape27 =  Shape();
Sphere& Sphere28 =  Sphere();
Shape27.setGeometry(&Sphere28);

Appearance& Appearance29 =  Appearance();
Appearance29.setContainerField("appearance");
Material& Material30 =  Material();
Material30.setContainerField("material");
Material30.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance29.addChild(&Material30);

Shape27.addChild(&Appearance29);

field26.addChild(&Shape27);

ProtoInterface24.addChild(&field26);

ProtoDeclare23.addChild(&ProtoInterface24);

ProtoBody& ProtoBody31 =  ProtoBody();
Transform& Transform32 =  Transform();
IS& IS33 =  IS();
Connect& connect34 =  Connect();
connect34.setNodeField(std::string("translation"));
connect34.setProtoField(std::string("ytranslation"));
IS33.addChild(&connect34);

Transform32.addChild(&IS33);

ProtoInstance& ProtoInstance35 =  ProtoInstance();
ProtoInstance35.setName(std::string("anyShape"));
fieldValue& fieldValue36 =  fieldValue();
fieldValue36.setName(std::string("xtranslation"));
fieldValue36.setValue(std::string("0 0 0"));
ProtoInstance35.addChild(&fieldValue36);

IS& IS37 =  IS();
Connect& connect38 =  Connect();
connect38.setNodeField(std::string("myShape"));
connect38.setProtoField(std::string("myShape"));
IS37.addChild(&connect38);

ProtoInstance35.addChild(&IS37);

Transform32.addChild(&ProtoInstance35);

ProtoInstance& ProtoInstance39 =  ProtoInstance();
ProtoInstance39.setName(std::string("anyShape"));
fieldValue& fieldValue40 =  fieldValue();
fieldValue40.setName(std::string("xtranslation"));
fieldValue40.setValue(std::string("2 0 0"));
ProtoInstance39.addChild(&fieldValue40);

IS& IS41 =  IS();
Connect& connect42 =  Connect();
connect42.setNodeField(std::string("myShape"));
connect42.setProtoField(std::string("myShape"));
IS41.addChild(&connect42);

ProtoInstance39.addChild(&IS41);

Transform32.addChild(&ProtoInstance39);

ProtoInstance& ProtoInstance43 =  ProtoInstance();
ProtoInstance43.setName(std::string("anyShape"));
fieldValue& fieldValue44 =  fieldValue();
fieldValue44.setName(std::string("xtranslation"));
fieldValue44.setValue(std::string("-2 0 0"));
ProtoInstance43.addChild(&fieldValue44);

IS& IS45 =  IS();
Connect& connect46 =  Connect();
connect46.setNodeField(std::string("myShape"));
connect46.setProtoField(std::string("myShape"));
IS45.addChild(&connect46);

ProtoInstance43.addChild(&IS45);

Transform32.addChild(&ProtoInstance43);

ProtoBody31.addChild(&Transform32);

ProtoDeclare23.addChild(&ProtoBody31);

Scene7.addChild(&ProtoDeclare23);

ProtoDeclare& ProtoDeclare47 =  ProtoDeclare();
ProtoDeclare47.setName(std::string("nine"));
ProtoInterface& ProtoInterface48 =  ProtoInterface();
field& field49 =  field();
field49.setName(std::string("ztranslation"));
field49.setAccessType(std::string("inputOutput"));
field49.setType(std::string("SFVec3f"));
field49.setValue(std::string("0 0 0"));
ProtoInterface48.addChild(&field49);

field& field50 =  field();
field50.setName(std::string("myShape"));
field50.setAccessType(std::string("inputOutput"));
field50.setType(std::string("MFNode"));
Shape& Shape51 =  Shape();
Sphere& Sphere52 =  Sphere();
Shape51.setGeometry(&Sphere52);

Appearance& Appearance53 =  Appearance();
Appearance53.setContainerField("appearance");
Material& Material54 =  Material();
Material54.setContainerField("material");
Material54.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance53.addChild(&Material54);

Shape51.addChild(&Appearance53);

field50.addChild(&Shape51);

ProtoInterface48.addChild(&field50);

ProtoDeclare47.addChild(&ProtoInterface48);

ProtoBody& ProtoBody55 =  ProtoBody();
Transform& Transform56 =  Transform();
IS& IS57 =  IS();
Connect& connect58 =  Connect();
connect58.setNodeField(std::string("translation"));
connect58.setProtoField(std::string("ztranslation"));
IS57.addChild(&connect58);

Transform56.addChild(&IS57);

ProtoInstance& ProtoInstance59 =  ProtoInstance();
ProtoInstance59.setName(std::string("three"));
fieldValue& fieldValue60 =  fieldValue();
fieldValue60.setName(std::string("ytranslation"));
fieldValue60.setValue(std::string("0 0 0"));
ProtoInstance59.addChild(&fieldValue60);

IS& IS61 =  IS();
Connect& connect62 =  Connect();
connect62.setNodeField(std::string("myShape"));
connect62.setProtoField(std::string("myShape"));
IS61.addChild(&connect62);

ProtoInstance59.addChild(&IS61);

Transform56.addChild(&ProtoInstance59);

ProtoInstance& ProtoInstance63 =  ProtoInstance();
ProtoInstance63.setName(std::string("three"));
fieldValue& fieldValue64 =  fieldValue();
fieldValue64.setName(std::string("ytranslation"));
fieldValue64.setValue(std::string("0 2 0"));
ProtoInstance63.addChild(&fieldValue64);

IS& IS65 =  IS();
Connect& connect66 =  Connect();
connect66.setNodeField(std::string("myShape"));
connect66.setProtoField(std::string("myShape"));
IS65.addChild(&connect66);

ProtoInstance63.addChild(&IS65);

Transform56.addChild(&ProtoInstance63);

ProtoInstance& ProtoInstance67 =  ProtoInstance();
ProtoInstance67.setName(std::string("three"));
fieldValue& fieldValue68 =  fieldValue();
fieldValue68.setName(std::string("ytranslation"));
fieldValue68.setValue(std::string("0 -2 0"));
ProtoInstance67.addChild(&fieldValue68);

IS& IS69 =  IS();
Connect& connect70 =  Connect();
connect70.setNodeField(std::string("myShape"));
connect70.setProtoField(std::string("myShape"));
IS69.addChild(&connect70);

ProtoInstance67.addChild(&IS69);

Transform56.addChild(&ProtoInstance67);

ProtoBody55.addChild(&Transform56);

ProtoDeclare47.addChild(&ProtoBody55);

Scene7.addChild(&ProtoDeclare47);

ProtoDeclare& ProtoDeclare71 =  ProtoDeclare();
ProtoDeclare71.setName(std::string("twentyseven"));
ProtoInterface& ProtoInterface72 =  ProtoInterface();
field& field73 =  field();
field73.setName(std::string("ttranslation"));
field73.setAccessType(std::string("inputOutput"));
field73.setType(std::string("SFVec3f"));
field73.setValue(std::string("0 0 0"));
ProtoInterface72.addChild(&field73);

field& field74 =  field();
field74.setName(std::string("myShape"));
field74.setAccessType(std::string("inputOutput"));
field74.setType(std::string("MFNode"));
Shape& Shape75 =  Shape();
Sphere& Sphere76 =  Sphere();
Shape75.setGeometry(&Sphere76);

Appearance& Appearance77 =  Appearance();
Appearance77.setContainerField("appearance");
Material& Material78 =  Material();
Material78.setContainerField("material");
Material78.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance77.addChild(&Material78);

Shape75.addChild(&Appearance77);

field74.addChild(&Shape75);

ProtoInterface72.addChild(&field74);

ProtoDeclare71.addChild(&ProtoInterface72);

ProtoBody& ProtoBody79 =  ProtoBody();
Transform& Transform80 =  Transform();
IS& IS81 =  IS();
Connect& connect82 =  Connect();
connect82.setNodeField(std::string("translation"));
connect82.setProtoField(std::string("ttranslation"));
IS81.addChild(&connect82);

Transform80.addChild(&IS81);

ProtoInstance& ProtoInstance83 =  ProtoInstance();
ProtoInstance83.setName(std::string("nine"));
fieldValue& fieldValue84 =  fieldValue();
fieldValue84.setName(std::string("ztranslation"));
fieldValue84.setValue(std::string("0 0 0"));
ProtoInstance83.addChild(&fieldValue84);

IS& IS85 =  IS();
Connect& connect86 =  Connect();
connect86.setNodeField(std::string("myShape"));
connect86.setProtoField(std::string("myShape"));
IS85.addChild(&connect86);

ProtoInstance83.addChild(&IS85);

Transform80.addChild(&ProtoInstance83);

ProtoInstance& ProtoInstance87 =  ProtoInstance();
ProtoInstance87.setName(std::string("nine"));
fieldValue& fieldValue88 =  fieldValue();
fieldValue88.setName(std::string("ztranslation"));
fieldValue88.setValue(std::string("0 0 2"));
ProtoInstance87.addChild(&fieldValue88);

IS& IS89 =  IS();
Connect& connect90 =  Connect();
connect90.setNodeField(std::string("myShape"));
connect90.setProtoField(std::string("myShape"));
IS89.addChild(&connect90);

ProtoInstance87.addChild(&IS89);

Transform80.addChild(&ProtoInstance87);

ProtoInstance& ProtoInstance91 =  ProtoInstance();
ProtoInstance91.setName(std::string("nine"));
fieldValue& fieldValue92 =  fieldValue();
fieldValue92.setName(std::string("ztranslation"));
fieldValue92.setValue(std::string("0 0 -2"));
ProtoInstance91.addChild(&fieldValue92);

IS& IS93 =  IS();
Connect& connect94 =  Connect();
connect94.setNodeField(std::string("myShape"));
connect94.setProtoField(std::string("myShape"));
IS93.addChild(&connect94);

ProtoInstance91.addChild(&IS93);

Transform80.addChild(&ProtoInstance91);

ProtoBody79.addChild(&Transform80);

ProtoDeclare71.addChild(&ProtoBody79);

Scene7.addChild(&ProtoDeclare71);

ProtoInstance& ProtoInstance95 =  ProtoInstance();
ProtoInstance95.setName(std::string("twentyseven"));
fieldValue& fieldValue96 =  fieldValue();
fieldValue96.setName(std::string("ttranslation"));
fieldValue96.setValue(std::string("0 0 0"));
ProtoInstance95.addChild(&fieldValue96);

fieldValue& fieldValue97 =  fieldValue();
fieldValue97.setName(std::string("myShape"));
Group& Group98 =  Group();
Shape& Shape99 =  Shape();
IndexedFaceSet& IndexedFaceSet100 =  IndexedFaceSet();
IndexedFaceSet100.setConvex(false);
IndexedFaceSet100.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,7,6,5,4,-1,0,4,5,1,-1,1,5,6,2,-1,2,6,7,3,-1,3,7,4,0}, 32);
IndexedFaceSet100.setColorIndex(new int[]{0,1,2,-1,0,2,3,-1,7,6,5,4,-1,0,4,5,1,-1,1,5,6,2,-1,2,6,7,3,-1,3,7,4,0}, 32);
Coordinate& Coordinate101 =  Coordinate();
Coordinate101.setPoint(new float[]{0.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0}, 24);
IndexedFaceSet100.setCoord(&Coordinate101);

Color& Color102 =  Color();
Color102.setContainerField("color");
Color102.setColor(new float[]{1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0}, 24);
IndexedFaceSet100.setColor(Color102);

Shape99.setGeometry(&IndexedFaceSet100);

Group98.addChild(&Shape99);

Shape& Shape103 =  Shape();
IndexedLineSet& IndexedLineSet104 =  IndexedLineSet();
IndexedLineSet104.setCoordIndex(new int32_t[]{0,1,-1,1,2,-1,2,3,-1,3,0,-1,2,0,-1}, 15);
Coordinate& Coordinate105 =  Coordinate();
Coordinate105.setPoint(new float[]{0.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0}, 24);
IndexedLineSet104.setCoord(&Coordinate105);

Color& Color106 =  Color();
Color106.setContainerField("color");
Color106.setColor(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,0.0,0.0}, 15);
IndexedLineSet104.setColor(&Color106);

Shape103.setGeometry(&IndexedLineSet104);

Group98.addChild(&Shape103);

fieldValue97.addChild(&Group98);

ProtoInstance95.addChild(&fieldValue97);

Scene7.addChild(&ProtoInstance95);

X3D0.setScene(&Scene7);

}
