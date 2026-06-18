#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void asmallbox(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("asmallbox.x3d"));
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
meta5.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/abox.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("description"));
meta6.setContent(std::string("a box"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(std::string("anyShape"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(std::string("myShape"));
field10.setAccessType(std::string("inputOutput"));
field10.setType(std::string("MFNode"));
Shape& Shape11 =  Shape();
Sphere& Sphere12 =  Sphere();
Shape11.setGeometry(&Sphere12);

field10.addChild(&Shape11);

ProtoInterface9.addChild(&field10);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody13 =  ProtoBody();
Transform& Transform14 =  Transform();
IS& IS15 =  IS();
Connect& connect16 =  Connect();
connect16.setNodeField(std::string("children"));
connect16.setProtoField(std::string("myShape"));
IS15.addChild(&connect16);

Transform14.addChild(&IS15);

ProtoBody13.addChild(&Transform14);

ProtoDeclare8.addChild(&ProtoBody13);

Scene7.addChild(&ProtoDeclare8);

ProtoDeclare& ProtoDeclare17 =  ProtoDeclare();
ProtoDeclare17.setName(std::string("one"));
ProtoInterface& ProtoInterface18 =  ProtoInterface();
field& field19 =  field();
field19.setName(std::string("myShape"));
field19.setAccessType(std::string("inputOutput"));
field19.setType(std::string("MFNode"));
Shape& Shape20 =  Shape();
Cylinder& Cylinder21 =  Cylinder();
Shape20.setGeometry(&Cylinder21);

field19.addChild(&Shape20);

ProtoInterface18.addChild(&field19);

ProtoDeclare17.addChild(&ProtoInterface18);

ProtoBody& ProtoBody22 =  ProtoBody();
Transform& Transform23 =  Transform();
ProtoInstance& ProtoInstance24 =  ProtoInstance();
ProtoInstance24.setName(std::string("anyShape"));
IS& IS25 =  IS();
Connect& connect26 =  Connect();
connect26.setNodeField(std::string("myShape"));
connect26.setProtoField(std::string("myShape"));
IS25.addChild(&connect26);

ProtoInstance24.addChild(&IS25);

Transform23.addChild(&ProtoInstance24);

ProtoBody22.addChild(&Transform23);

ProtoDeclare17.addChild(&ProtoBody22);

Scene7.addChild(&ProtoDeclare17);

ProtoInstance& ProtoInstance27 =  ProtoInstance();
ProtoInstance27.setName(std::string("one"));
fieldValue& fieldValue28 =  fieldValue();
fieldValue28.setName(std::string("myShape"));
Shape& Shape29 =  Shape();
Box& Box30 =  Box();
Shape29.setGeometry(&Box30);

fieldValue28.addChild(&Shape29);

ProtoInstance27.addChild(&fieldValue28);

Scene7.addChild(&ProtoInstance27);

X3D0.setScene(&Scene7);

}
