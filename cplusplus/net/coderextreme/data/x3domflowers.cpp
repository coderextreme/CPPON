#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#define XML_PARSER_H
//#include "pch.h"
//#include "framework.h"
//#include "glut.h"
//#include "X3DLib.h"
int x3domflowers(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(std::string("Scripting"));
component2.setLevel(1);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(std::string("EnvironmentalEffects"));
component3.setLevel(3);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(std::string("Shaders"));
component4.setLevel(1);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(std::string("CubeMapTexturing"));
component5.setLevel(1);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(std::string("Texturing"));
component6.setLevel(1);
head1.addChild(&component6);

component& component7 =  component();
component7.setName(std::string("Rendering"));
component7.setLevel(1);
head1.addChild(&component7);

component& component8 =  component();
component8.setName(std::string("Grouping"));
component8.setLevel(3);
head1.addChild(&component8);

component& component9 =  component();
component9.setName(std::string("Core"));
component9.setLevel(1);
head1.addChild(&component9);

meta& meta10 =  meta();
meta10.setName(std::string("title"));
meta10.setContent(std::string("x3domflowers.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("creator"));
meta11.setContent(std::string("John Carlson"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("description"));
meta12.setContent(std::string("5 or more prismatic flowers"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("generator"));
meta13.setContent(std::string("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("identifier"));
meta14.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/x3domflowers.x3d"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
NavigationInfo& NavigationInfo16 =  NavigationInfo();
Scene15.addChild(&NavigationInfo16);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background& Background17 =  Background();
Background17.setBackUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background17.setBottomUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background17.setFrontUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background17.setLeftUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background17.setRightUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background17.setTopUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Scene15.addChild(&Background17);

Group& Group18 =  Group();
ExternProtoDeclare& ExternProtoDeclare19 =  ExternProtoDeclare();
ExternProtoDeclare19.setName(std::string("FlowerProto"));
ExternProtoDeclare19.setUrl((std::string[]){"../data/flowerproto.json#FlowerProto"}, 1);
field& field20 =  field();
field20.setName(std::string("vertex"));
field20.setAccessType(std::string("inputOutput"));
field20.setType(std::string("MFString"));
ExternProtoDeclare19.addChild(&field20);

field& field21 =  field();
field21.setName(std::string("fragment"));
field21.setAccessType(std::string("inputOutput"));
field21.setType(std::string("MFString"));
ExternProtoDeclare19.addChild(&field21);

Group18.addChild(&ExternProtoDeclare19);

ProtoDeclare& ProtoDeclare22 =  ProtoDeclare();
ProtoDeclare22.setName(std::string("flower"));
ProtoBody& ProtoBody23 =  ProtoBody();
Group& Group24 =  Group();
ProtoInstance& ProtoInstance25 =  ProtoInstance();
ProtoInstance25.setName(std::string("FlowerProto"));
fieldValue& fieldValue26 =  fieldValue();
fieldValue26.setName(std::string("vertex"));
fieldValue26.setValue(std::string("\"../shaders/x3dom_flowers_chromatic.vs\""));
ProtoInstance25.addChild(&fieldValue26);

fieldValue& fieldValue27 =  fieldValue();
fieldValue27.setName(std::string("fragment"));
fieldValue27.setValue(std::string("\"../shaders/common.fs\""));
ProtoInstance25.addChild(&fieldValue27);

Group24.addChild(&ProtoInstance25);

ProtoBody23.addChild(&Group24);

ProtoDeclare22.addChild(&ProtoBody23);

Group18.addChild(&ProtoDeclare22);

ProtoInstance& ProtoInstance28 =  ProtoInstance();
ProtoInstance28.setName(std::string("flower"));
Group18.addChild(&ProtoInstance28);

ProtoInstance& ProtoInstance29 =  ProtoInstance();
ProtoInstance29.setName(std::string("flower"));
Group18.addChild(&ProtoInstance29);

ProtoInstance& ProtoInstance30 =  ProtoInstance();
ProtoInstance30.setName(std::string("flower"));
Group18.addChild(&ProtoInstance30);

ProtoInstance& ProtoInstance31 =  ProtoInstance();
ProtoInstance31.setName(std::string("flower"));
Group18.addChild(&ProtoInstance31);

ProtoInstance& ProtoInstance32 =  ProtoInstance();
ProtoInstance32.setName(std::string("flower"));
Group18.addChild(&ProtoInstance32);

ProtoInstance& ProtoInstance33 =  ProtoInstance();
ProtoInstance33.setName(std::string("flower"));
Group18.addChild(&ProtoInstance33);

Scene15.addChild(&Group18);

X3D0.setScene(&Scene15);

}
