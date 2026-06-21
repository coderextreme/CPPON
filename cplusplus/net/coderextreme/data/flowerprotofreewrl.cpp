#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Full"));
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
component8.setName(std::string("Shape"));
component8.setLevel(4);
head1.addChild(&component8);

component& component9 =  component();
component9.setName(std::string("Grouping"));
component9.setLevel(3);
head1.addChild(&component9);

component& component10 =  component();
component10.setName(std::string("Core"));
component10.setLevel(1);
head1.addChild(&component10);

meta& meta11 =  meta();
meta11.setName(std::string("title"));
meta11.setContent(std::string("flowerproto.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("creator"));
meta12.setContent(std::string("John Carlson"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("description"));
meta13.setContent(std::string("A flower proto with configurable shaders"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("generator"));
meta14.setContent(std::string("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("identifier"));
meta15.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d"));
head1.addMeta(&meta15);

X3D0.setHead(&head1);

Scene& Scene16 =  Scene();
NavigationInfo& NavigationInfo17 =  NavigationInfo();
Scene16.addChild(&NavigationInfo17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setDescription(std::string("Tour Views"));
Viewpoint18.setPosition(new float[]{0.0,0.0,50.0});
Scene16.addChild(&Viewpoint18);

Background& Background19 =  Background();
Background19.setBackUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background19.setBottomUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background19.setFrontUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background19.setLeftUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background19.setRightUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background19.setTopUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Scene16.addChild(&Background19);

ProtoDeclare& ProtoDeclare20 =  ProtoDeclare();
ProtoDeclare20.setName(std::string("FlowerProto"));
ProtoInterface& ProtoInterface21 =  ProtoInterface();
field& field22 =  field();
field22.setName(std::string("vertex"));
field22.setAccessType(std::string("inputOnly"));
field22.setType(std::string("MFString"));
field22.setValue(std::string("\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\""));
ProtoInterface21.addChild(&field22);

field& field23 =  field();
field23.setName(std::string("fragment"));
field23.setAccessType(std::string("inputOnly"));
field23.setType(std::string("MFString"));
field23.setValue(std::string("\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\""));
ProtoInterface21.addChild(&field23);

ProtoDeclare20.addChild(&ProtoInterface21);

ProtoBody& ProtoBody24 =  ProtoBody();
Transform& Transform25 =  Transform();
Transform25.setDEF(std::string("transform"));
Shape& Shape26 =  Shape();
Appearance& Appearance27 =  Appearance();
Appearance27.setContainerField("appearance");
Material& Material28 =  Material();
Material28.setContainerField("material");
Material28.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material28.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance27.addChild(&Material28);

ComposedCubeMapTexture& ComposedCubeMapTexture29 =  ComposedCubeMapTexture();
ComposedCubeMapTexture29.setContainerField("texture");
ComposedCubeMapTexture29.setDEF(std::string("texture"));
ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setContainerField("backTexture");
ImageTexture30.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture29.setBack(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setContainerField("bottomTexture");
ImageTexture31.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture29.setBottom(ImageTexture31);

ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setContainerField("frontTexture");
ImageTexture32.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture29.setFront(ImageTexture32);

ImageTexture& ImageTexture33 =  ImageTexture();
ImageTexture33.setContainerField("leftTexture");
ImageTexture33.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture29.setLeft(ImageTexture33);

ImageTexture& ImageTexture34 =  ImageTexture();
ImageTexture34.setContainerField("rightTexture");
ImageTexture34.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture29.setRight(ImageTexture34);

ImageTexture& ImageTexture35 =  ImageTexture();
ImageTexture35.setContainerField("topTexture");
ImageTexture35.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture29.setTop(ImageTexture35);

Appearance27.addChild(&ComposedCubeMapTexture29);

ComposedShader& ComposedShader36 =  ComposedShader();
ComposedShader36.setDEF(std::string("shader"));
ComposedShader36.setLanguage(std::string("GLSL"));
field& field37 =  field();
field37.setName(std::string("fw_textureCoordGenType"));
field37.setAccessType(std::string("inputOutput"));
field37.setType(std::string("SFInt32"));
field37.setValue(std::string("0"));
ComposedShader36.addChild(&field37);

field& field38 =  field();
field38.setName(std::string("chromaticDispertion"));
field38.setAccessType(std::string("initializeOnly"));
field38.setType(std::string("SFVec3f"));
field38.setValue(std::string("0.98 1 1.033"));
ComposedShader36.addChild(&field38);

field& field39 =  field();
field39.setName(std::string("bias"));
field39.setType(std::string("SFFloat"));
field39.setAccessType(std::string("inputOutput"));
field39.setValue(std::string("0.5"));
ComposedShader36.addChild(&field39);

field& field40 =  field();
field40.setName(std::string("scale"));
field40.setType(std::string("SFFloat"));
field40.setAccessType(std::string("inputOutput"));
field40.setValue(std::string("0.5"));
ComposedShader36.addChild(&field40);

field& field41 =  field();
field41.setName(std::string("power"));
field41.setType(std::string("SFFloat"));
field41.setAccessType(std::string("inputOutput"));
field41.setValue(std::string("2"));
ComposedShader36.addChild(&field41);

field& field42 =  field();
field42.setName(std::string("a"));
field42.setType(std::string("SFFloat"));
field42.setAccessType(std::string("inputOutput"));
field42.setValue(std::string("5"));
ComposedShader36.addChild(&field42);

field& field43 =  field();
field43.setName(std::string("b"));
field43.setType(std::string("SFFloat"));
field43.setAccessType(std::string("inputOutput"));
field43.setValue(std::string("5"));
ComposedShader36.addChild(&field43);

field& field44 =  field();
field44.setName(std::string("c"));
field44.setType(std::string("SFFloat"));
field44.setAccessType(std::string("inputOutput"));
field44.setValue(std::string("20"));
ComposedShader36.addChild(&field44);

field& field45 =  field();
field45.setName(std::string("d"));
field45.setType(std::string("SFFloat"));
field45.setAccessType(std::string("inputOutput"));
field45.setValue(std::string("20"));
ComposedShader36.addChild(&field45);

field& field46 =  field();
field46.setName(std::string("tdelta"));
field46.setType(std::string("SFFloat"));
field46.setAccessType(std::string("inputOutput"));
field46.setValue(std::string("0"));
ComposedShader36.addChild(&field46);

field& field47 =  field();
field47.setName(std::string("pdelta"));
field47.setType(std::string("SFFloat"));
field47.setAccessType(std::string("inputOutput"));
field47.setValue(std::string("0"));
ComposedShader36.addChild(&field47);

//<field name='cube' type='SFNode' accessType=\"inputOutput\">
//<ComposedCubeMapTexture USE=\"texture\"/>
//</field>
ShaderPart& ShaderPart48 =  ShaderPart();
ShaderPart48.setType(std::string("VERTEX"));
IS& IS49 =  IS();
Connect& connect50 =  Connect();
connect50.setNodeField(std::string("url"));
connect50.setProtoField(std::string("vertex"));
IS49.addChild(&connect50);

ShaderPart48.X3DBaseNode::addChild(&IS49);

ComposedShader36.setParts(&ShaderPart48);

ShaderPart& ShaderPart51 =  ShaderPart();
ShaderPart51.setType(std::string("FRAGMENT"));
IS& IS52 =  IS();
Connect& connect53 =  Connect();
connect53.setNodeField(std::string("url"));
connect53.setProtoField(std::string("fragment"));
IS52.addChild(&connect53);

ShaderPart51.X3DBaseNode::addChild(&IS52);

ComposedShader36.setParts(&ShaderPart51);

Appearance27.addChild(&ComposedShader36);

Shape26.addChild(&Appearance27);

Sphere& Sphere54 =  Sphere();
Sphere54.setRadius(5);
Shape26.setGeometry(&Sphere54);

Transform25.addChild(&Shape26);

Script& Script55 =  Script();
Script55.setDEF(std::string("Animate"));
Script55.setDirectOutput(true);
field& field56 =  field();
field56.setName(std::string("translation"));
field56.setAccessType(std::string("inputOutput"));
field56.setType(std::string("SFVec3f"));
field56.setValue(std::string("0 0 0"));
Script55.addChild(&field56);

field& field57 =  field();
field57.setName(std::string("velocity"));
field57.setAccessType(std::string("inputOutput"));
field57.setType(std::string("SFVec3f"));
field57.setValue(std::string("0 0 0"));
Script55.addChild(&field57);

field& field58 =  field();
field58.setName(std::string("set_fraction"));
field58.setAccessType(std::string("inputOutput"));
field58.setType(std::string("SFFloat"));
Script55.addChild(&field58);

field& field59 =  field();
field59.setName(std::string("a"));
field59.setType(std::string("SFFloat"));
field59.setAccessType(std::string("inputOutput"));
field59.setValue(std::string("0.5"));
Script55.addChild(&field59);

field& field60 =  field();
field60.setName(std::string("b"));
field60.setType(std::string("SFFloat"));
field60.setAccessType(std::string("inputOutput"));
field60.setValue(std::string("0.5"));
Script55.addChild(&field60);

field& field61 =  field();
field61.setName(std::string("c"));
field61.setType(std::string("SFFloat"));
field61.setAccessType(std::string("inputOutput"));
field61.setValue(std::string("3"));
Script55.addChild(&field61);

field& field62 =  field();
field62.setName(std::string("d"));
field62.setType(std::string("SFFloat"));
field62.setAccessType(std::string("inputOutput"));
field62.setValue(std::string("3"));
Script55.addChild(&field62);

field& field63 =  field();
field63.setName(std::string("tdelta"));
field63.setType(std::string("SFFloat"));
field63.setAccessType(std::string("inputOutput"));
field63.setValue(std::string("0.5"));
Script55.addChild(&field63);

field& field64 =  field();
field64.setName(std::string("pdelta"));
field64.setType(std::string("SFFloat"));
field64.setAccessType(std::string("inputOutput"));
field64.setValue(std::string("0.5"));
Script55.addChild(&field64);


//Script55.setSourceCode(std::string("ecmascript:")+
//_T("			function initialize() {")+
//_T("			    translation = new SFVec3f(0, 0, 0);")+
//_T("			    velocity = new SFVec3f(")+
//_T("			    	Math.random() - 0.5,")+
//_T("				Math.random() - 0.5,")+
//_T("				Math.random() - 0.5);")+
//_T("			}")+
//_T("			function set_fraction() {")+
//_T("			    translation = new SFVec3f(")+
//_T("			    	translation.x + velocity.x,")+
//_T("				translation.y + velocity.y,")+
//_T("				translation.z + velocity.z);")+
//_T("			    for (var j = 0; j <= 2; j++) {")+
//_T("				    if (Math.abs(translation.x) > 10) {")+
//_T("					initialize();")+
//_T("				    } else if (Math.abs(translation.y) > 10) {")+
//_T("					initialize();")+
//_T("				    } else if (Math.abs(translation.z) > 10) {")+
//_T("					initialize();")+
//_T("				    } else {")+
//_T("					velocity.x += Math.random() * 0.2 - 0.1;")+
//_T("					velocity.y += Math.random() * 0.2 - 0.1;")+
//_T("					velocity.z += Math.random() * 0.2 - 0.1;")+
//_T("				    }")+
//_T("			    }")+
//_T("			    animate_flowers();")+
//_T("			}")+
//_T("			function animate_flowers(fraction, eventTime) {")+
//_T("				var choice = Math.floor(Math.random() * 4);")+
//_T("				switch (choice) {")+
//_T("				case 0:")+
//_T("					a += Math.random() * 0.2 - 0.1;")+
//_T("					break;")+
//_T("				case 1:")+
//_T("					b += Math.random() * 0.2 - 0.1;")+
//_T("					break;")+
//_T("				case 2:")+
//_T("					c += Math.random() * 2 - 1;")+
//_T("					break;")+
//_T("				case 3:")+
//_T("					d += Math.random() * 2 - 1;")+
//_T("					break;")+
//_T("				}")+
//_T("				tdelta += 0.5;")+
//_T("				pdelta += 0.5;")+
//_T("				if (a > 1) {")+
//_T("					a =  0.5;")+
//_T("				}")+
//_T("				if (b > 1) {")+
//_T("					b =  0.5;")+
//_T("				}")+
//_T("				if (c < 1) {")+
//_T("					c =  4;")+
//_T("				}")+
//_T("				if (d < 1) {")+
//_T("					d =  4;")+
//_T("				}")+
//_T("				if (c > 10) {")+
//_T("					c = 4;")+
//_T("				}")+
//_T("				if (d > 10) {")+
//_T("					d = 4;")+
//_T("				}")+
//_T("			}"));
Transform25.addChild(&Script55);

TimeSensor& TimeSensor65 =  TimeSensor();
TimeSensor65.setDEF(std::string("TourTime"));
TimeSensor65.setCycleInterval(5);
TimeSensor65.setLoop(true);
Transform25.addChild(&TimeSensor65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(std::string("TourTime"));
ROUTE66.setFromField(std::string("fraction_changed"));
ROUTE66.setToNode(std::string("Animate"));
ROUTE66.setToField(std::string("set_fraction"));
Transform25.addChild(&ROUTE66);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(std::string("Animate"));
ROUTE67.setFromField(std::string("translation_changed"));
ROUTE67.setToNode(std::string("transform"));
ROUTE67.setToField(std::string("set_translation"));
Transform25.addChild(&ROUTE67);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(std::string("Animate"));
ROUTE68.setFromField(std::string("a"));
ROUTE68.setToNode(std::string("shader"));
ROUTE68.setToField(std::string("a"));
Transform25.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(std::string("Animate"));
ROUTE69.setFromField(std::string("b"));
ROUTE69.setToNode(std::string("shader"));
ROUTE69.setToField(std::string("b"));
Transform25.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(std::string("Animate"));
ROUTE70.setFromField(std::string("c"));
ROUTE70.setToNode(std::string("shader"));
ROUTE70.setToField(std::string("c"));
Transform25.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromNode(std::string("Animate"));
ROUTE71.setFromField(std::string("d"));
ROUTE71.setToNode(std::string("shader"));
ROUTE71.setToField(std::string("d"));
Transform25.addChild(&ROUTE71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromNode(std::string("Animate"));
ROUTE72.setFromField(std::string("tdelta"));
ROUTE72.setToNode(std::string("shader"));
ROUTE72.setToField(std::string("tdelta"));
Transform25.addChild(&ROUTE72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromNode(std::string("Animate"));
ROUTE73.setFromField(std::string("pdelta"));
ROUTE73.setToNode(std::string("shader"));
ROUTE73.setToField(std::string("pdelta"));
Transform25.addChild(&ROUTE73);

ProtoBody24.addChild(&Transform25);

ProtoDeclare20.addChild(&ProtoBody24);

Scene16.addChild(&ProtoDeclare20);

ProtoInstance& ProtoInstance74 =  ProtoInstance();
ProtoInstance74.setName(std::string("FlowerProto"));
fieldValue& fieldValue75 =  fieldValue();
fieldValue75.setName(std::string("vertex"));
fieldValue75.setValue(std::string("\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\""));
ProtoInstance74.addChild(&fieldValue75);

fieldValue& fieldValue76 =  fieldValue();
fieldValue76.setName(std::string("fragment"));
fieldValue76.setValue(std::string("\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\""));
ProtoInstance74.addChild(&fieldValue76);

Scene16.addChild(&ProtoInstance74);

X3D0.setScene(&Scene16);

}
