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
int freewrlflowers(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("freewrlflowers.x3d"));
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
meta6.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/freewrlflowers.x3d"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
Scene7.addChild(&NavigationInfo8);

Viewpoint& Viewpoint9 =  Viewpoint();
Viewpoint9.setDescription(std::string("Tour Views"));
Viewpoint9.setPosition(new float[]{0.0,0.0,50.0});
Scene7.addChild(&Viewpoint9);

Background& Background10 =  Background();
Background10.setBackUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background10.setBottomUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background10.setFrontUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background10.setLeftUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background10.setRightUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background10.setTopUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Scene7.addChild(&Background10);

Group& Group11 =  Group();
ExternProtoDeclare& ExternProtoDeclare12 =  ExternProtoDeclare();
ExternProtoDeclare12.setName(std::string("FlowerProto"));
ExternProtoDeclare12.setUrl((std::string[]){"../data/flowerprotofreewrl.x3d#FlowerProto", "https://coderextreme.net/X3DJSONLD/src/main/data/flowerprotofreewrl.x3d#FlowerProto"}, 2);
field& field13 =  field();
field13.setName(std::string("vertex"));
field13.setAccessType(std::string("inputOutput"));
field13.setType(std::string("MFString"));
ExternProtoDeclare12.addChild(&field13);

field& field14 =  field();
field14.setName(std::string("fragment"));
field14.setAccessType(std::string("inputOutput"));
field14.setType(std::string("MFString"));
ExternProtoDeclare12.addChild(&field14);

Group11.addChild(&ExternProtoDeclare12);

ProtoDeclare& ProtoDeclare15 =  ProtoDeclare();
ProtoDeclare15.setName(std::string("flower"));
ProtoBody& ProtoBody16 =  ProtoBody();
Group& Group17 =  Group();
ProtoInstance& ProtoInstance18 =  ProtoInstance();
ProtoInstance18.setName(std::string("FlowerProto"));
fieldValue& fieldValue19 =  fieldValue();
fieldValue19.setName(std::string("vertex"));
fieldValue19.setValue(std::string("\"../shaders/freewrl_flowers_chromatic.vs\""));
ProtoInstance18.addChild(&fieldValue19);

fieldValue& fieldValue20 =  fieldValue();
fieldValue20.setName(std::string("fragment"));
fieldValue20.setValue(std::string("\"../shaders/freewrl.fs\""));
ProtoInstance18.addChild(&fieldValue20);

Group17.addChild(&ProtoInstance18);

ProtoBody16.addChild(&Group17);

ProtoDeclare15.addChild(&ProtoBody16);

Group11.addChild(&ProtoDeclare15);

ProtoInstance& ProtoInstance21 =  ProtoInstance();
ProtoInstance21.setName(std::string("flower"));
Group11.addChild(&ProtoInstance21);

ProtoInstance& ProtoInstance22 =  ProtoInstance();
ProtoInstance22.setName(std::string("flower"));
Group11.addChild(&ProtoInstance22);

ProtoInstance& ProtoInstance23 =  ProtoInstance();
ProtoInstance23.setName(std::string("flower"));
Group11.addChild(&ProtoInstance23);

ProtoInstance& ProtoInstance24 =  ProtoInstance();
ProtoInstance24.setName(std::string("flower"));
Group11.addChild(&ProtoInstance24);

ProtoInstance& ProtoInstance25 =  ProtoInstance();
ProtoInstance25.setName(std::string("flower"));
Group11.addChild(&ProtoInstance25);

ProtoInstance& ProtoInstance26 =  ProtoInstance();
ProtoInstance26.setName(std::string("flower"));
Group11.addChild(&ProtoInstance26);

Scene7.addChild(&Group11);

X3D0.setScene(&Scene7);

}
