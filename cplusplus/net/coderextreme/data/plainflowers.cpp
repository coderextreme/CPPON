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
meta2.setContent(std::string("plainflowers.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("creator"));
meta3.setContent(std::string("John Carlson"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("description"));
meta4.setContent(std::string("5 or more prismatic flowers"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("generator"));
meta5.setContent(std::string("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("identifier"));
meta6.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/plainflowers.x3d"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
Scene7.addChild(&NavigationInfo8);

Background& Background9 =  Background();
Background9.setBackUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background9.setBottomUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background9.setFrontUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background9.setLeftUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background9.setRightUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background9.setTopUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Scene7.addChild(&Background9);

Group& Group10 =  Group();
ExternProtoDeclare& ExternProtoDeclare11 =  ExternProtoDeclare();
ExternProtoDeclare11.setName(std::string("FlowerProto"));
ExternProtoDeclare11.setUrl(new std::string[]{"../data/flowerproto.x3d#FlowerProto"}, 1);
field& field12 =  field();
field12.setName(std::string("vertex"));
field12.setAccessType(std::string("inputOutput"));
field12.setType(std::string("MFString"));
ExternProtoDeclare11.addChild(&field12);

field& field13 =  field();
field13.setName(std::string("fragment"));
field13.setAccessType(std::string("inputOutput"));
field13.setType(std::string("MFString"));
ExternProtoDeclare11.addChild(&field13);

Group10.addChild(&ExternProtoDeclare11);

ProtoDeclare& ProtoDeclare14 =  ProtoDeclare();
ProtoDeclare14.setName(std::string("flower"));
ProtoBody& ProtoBody15 =  ProtoBody();
Group& Group16 =  Group();
ProtoInstance& ProtoInstance17 =  ProtoInstance();
ProtoInstance17.setName(std::string("FlowerProto"));
fieldValue& fieldValue18 =  fieldValue();
fieldValue18.setName(std::string("vertex"));
fieldValue18.setValue(std::string("\"../shaders/gl_flowers_plain.vs\""));
ProtoInstance17.addChild(&fieldValue18);

fieldValue& fieldValue19 =  fieldValue();
fieldValue19.setName(std::string("fragment"));
fieldValue19.setValue(std::string("\"../shaders/plain.fs\""));
ProtoInstance17.addChild(&fieldValue19);

Group16.addChild(&ProtoInstance17);

ProtoBody15.addChild(&Group16);

ProtoDeclare14.addChild(&ProtoBody15);

Group10.addChild(&ProtoDeclare14);

ProtoInstance& ProtoInstance20 =  ProtoInstance();
ProtoInstance20.setName(std::string("flower"));
Group10.addChild(&ProtoInstance20);

ProtoInstance& ProtoInstance21 =  ProtoInstance();
ProtoInstance21.setName(std::string("flower"));
Group10.addChild(&ProtoInstance21);

ProtoInstance& ProtoInstance22 =  ProtoInstance();
ProtoInstance22.setName(std::string("flower"));
Group10.addChild(&ProtoInstance22);

ProtoInstance& ProtoInstance23 =  ProtoInstance();
ProtoInstance23.setName(std::string("flower"));
Group10.addChild(&ProtoInstance23);

ProtoInstance& ProtoInstance24 =  ProtoInstance();
ProtoInstance24.setName(std::string("flower"));
Group10.addChild(&ProtoInstance24);

ProtoInstance& ProtoInstance25 =  ProtoInstance();
ProtoInstance25.setName(std::string("flower"));
Group10.addChild(&ProtoInstance25);

Scene7.addChild(&Group10);

X3D0.setScene(&Scene7);

}
