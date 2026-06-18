#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void asteroids(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("asteroids.x3d"));
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
meta5.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/asteroids.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("description"));
meta6.setContent(std::string("asteroids"));
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

ProtoInstance& ProtoInstance17 =  ProtoInstance();
ProtoInstance17.setName(std::string("anyShape"));
Scene7.addChild(&ProtoInstance17);

X3D0.setScene(&Scene7);

}
