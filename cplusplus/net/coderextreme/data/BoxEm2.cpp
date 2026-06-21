#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("BoxEm2.x3d"));
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
meta5.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/BoxEm2.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("description"));
meta6.setContent(std::string("3 boxes"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
NavigationInfo8.setType(new std::string[]{"EXAMINE"}, 1);
Scene7.addChild(&NavigationInfo8);

Viewpoint& Viewpoint9 =  Viewpoint();
Viewpoint9.setDescription(std::string("Cubes on Fire"));
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
Cylinder& Cylinder28 =  Cylinder();
Shape27.setGeometry(&Cylinder28);

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

ProtoInstance& ProtoInstance47 =  ProtoInstance();
ProtoInstance47.setName(std::string("three"));
ProtoInstance47.setDEF(std::string("threepi"));
fieldValue& fieldValue48 =  fieldValue();
fieldValue48.setName(std::string("ytranslation"));
fieldValue48.setValue(std::string("0 0 0"));
ProtoInstance47.addChild(&fieldValue48);

fieldValue& fieldValue49 =  fieldValue();
fieldValue49.setName(std::string("myShape"));
Shape& Shape50 =  Shape();
Shape50.setDEF(std::string("box"));
Box& Box51 =  Box();
Box51.setSize(new float[]{1.0,1.0,1.0});
Shape50.setGeometry(&Box51);

Appearance& Appearance52 =  Appearance();
Appearance52.setContainerField("appearance");
Material& Material53 =  Material();
Material53.setContainerField("material");
Material53.setDiffuseColor(new float[]{0.0,1.0,0.0});
Appearance52.addChild(&Material53);

Shape50.addChild(&Appearance52);

fieldValue49.addChild(&Shape50);

ProtoInstance47.addChild(&fieldValue49);

Scene7.addChild(&ProtoInstance47);

Transform& Transform54 =  Transform();
Transform54.setTranslation(new float[]{0.0,2.0,0.0});
Shape& Shape55 =  Shape();
Shape55.setUSE(std::string("box"));
Transform54.addChild(&Shape55);

Scene7.addChild(&Transform54);

X3D0.setScene(&Scene7);

}
