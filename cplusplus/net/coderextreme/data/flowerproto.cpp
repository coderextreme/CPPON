#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void flowerproto(int argc, char ** argv) {
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
ProtoDeclare& ProtoDeclare17 =  ProtoDeclare();
ProtoDeclare17.setName(std::string("FlowerProto"));
ProtoInterface& ProtoInterface18 =  ProtoInterface();
field& field19 =  field();
field19.setName(std::string("vertex"));
field19.setAccessType(std::string("inputOnly"));
field19.setType(std::string("MFString"));
field19.setValue(std::string("\"../shaders/gl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl_flowers_chromatic.vs\""));
ProtoInterface18.addChild(&field19);

field& field20 =  field();
field20.setName(std::string("fragment"));
field20.setAccessType(std::string("inputOnly"));
field20.setType(std::string("MFString"));
field20.setValue(std::string("\"../shaders/pc_flowers.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_flowers.fs\""));
ProtoInterface18.addChild(&field20);

ProtoDeclare17.addChild(&ProtoInterface18);

ProtoBody& ProtoBody21 =  ProtoBody();
Transform& Transform22 =  Transform();
Transform22.setDEF(std::string("transform"));
Shape& Shape23 =  Shape();
Appearance& Appearance24 =  Appearance();
Appearance24.setContainerField("appearance");
Material& Material25 =  Material();
Material25.setContainerField("material");
Material25.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material25.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance24.addChild(&Material25);

ComposedCubeMapTexture& ComposedCubeMapTexture26 =  ComposedCubeMapTexture();
ComposedCubeMapTexture26.setContainerField("texture");
ComposedCubeMapTexture26.setDEF(std::string("texture"));
ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setContainerField("backTexture");
ImageTexture27.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture26.setBack(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setContainerField("bottomTexture");
ImageTexture28.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture26.setBottom(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setContainerField("frontTexture");
ImageTexture29.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture26.setFront(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setContainerField("leftTexture");
ImageTexture30.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture26.setLeft(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setContainerField("rightTexture");
ImageTexture31.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture26.setRight(ImageTexture31);

ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setContainerField("topTexture");
ImageTexture32.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture26.setTop(ImageTexture32);

Appearance24.addChild(&ComposedCubeMapTexture26);

ComposedShader& ComposedShader33 =  ComposedShader();
ComposedShader33.setDEF(std::string("shader"));
ComposedShader33.setLanguage(std::string("GLSL"));
//<field name='fw_textureCoordGenType' accessType='inputOnly' type='SFInt32' value='0'></field>
field& field34 =  field();
field34.setName(std::string("cube"));
field34.setType(std::string("SFNode"));
field34.setAccessType(std::string("inputOnly"));
ComposedCubeMapTexture& ComposedCubeMapTexture35 =  ComposedCubeMapTexture();
ComposedCubeMapTexture35.setUSE(std::string("texture"));
field34.addChild(&ComposedCubeMapTexture35);

ComposedShader33.addChild(&field34);

field& field36 =  field();
field36.setName(std::string("chromaticDispertion"));
field36.setAccessType(std::string("initializeOnly"));
field36.setType(std::string("SFVec3f"));
field36.setValue(std::string("0.98 1 1.033"));
ComposedShader33.addChild(&field36);

field& field37 =  field();
field37.setName(std::string("bias"));
field37.setType(std::string("SFFloat"));
field37.setAccessType(std::string("inputOnly"));
field37.setValue(std::string("0.5"));
ComposedShader33.addChild(&field37);

field& field38 =  field();
field38.setName(std::string("scale"));
field38.setType(std::string("SFFloat"));
field38.setAccessType(std::string("inputOnly"));
field38.setValue(std::string("0.5"));
ComposedShader33.addChild(&field38);

field& field39 =  field();
field39.setName(std::string("power"));
field39.setType(std::string("SFFloat"));
field39.setAccessType(std::string("inputOnly"));
field39.setValue(std::string("2"));
ComposedShader33.addChild(&field39);

field& field40 =  field();
field40.setName(std::string("a"));
field40.setType(std::string("SFFloat"));
field40.setAccessType(std::string("inputOnly"));
field40.setValue(std::string("10"));
ComposedShader33.addChild(&field40);

field& field41 =  field();
field41.setName(std::string("b"));
field41.setType(std::string("SFFloat"));
field41.setAccessType(std::string("inputOnly"));
field41.setValue(std::string("1"));
ComposedShader33.addChild(&field41);

field& field42 =  field();
field42.setName(std::string("c"));
field42.setType(std::string("SFFloat"));
field42.setAccessType(std::string("inputOnly"));
field42.setValue(std::string("20"));
ComposedShader33.addChild(&field42);

field& field43 =  field();
field43.setName(std::string("d"));
field43.setType(std::string("SFFloat"));
field43.setAccessType(std::string("inputOnly"));
field43.setValue(std::string("20"));
ComposedShader33.addChild(&field43);

field& field44 =  field();
field44.setName(std::string("tdelta"));
field44.setType(std::string("SFFloat"));
field44.setAccessType(std::string("inputOnly"));
field44.setValue(std::string("0"));
ComposedShader33.addChild(&field44);

field& field45 =  field();
field45.setName(std::string("pdelta"));
field45.setType(std::string("SFFloat"));
field45.setAccessType(std::string("inputOnly"));
field45.setValue(std::string("0"));
ComposedShader33.addChild(&field45);

ShaderPart& ShaderPart46 =  ShaderPart();
ShaderPart46.setType(std::string("VERTEX"));
IS& IS47 =  IS();
Connect& connect48 =  Connect();
connect48.setNodeField(std::string("url"));
connect48.setProtoField(std::string("vertex"));
IS47.addChild(&connect48);

ShaderPart46.X3DBaseNode::addChild(&IS47));

ComposedShader33.setParts(&ShaderPart46);

ShaderPart& ShaderPart49 =  ShaderPart();
ShaderPart49.setType(std::string("FRAGMENT"));
IS& IS50 =  IS();
Connect& connect51 =  Connect();
connect51.setNodeField(std::string("url"));
connect51.setProtoField(std::string("fragment"));
IS50.addChild(&connect51);

ShaderPart49.X3DBaseNode::addChild(&IS50));

ComposedShader33.setParts(&ShaderPart49);

Appearance24.addChild(&ComposedShader33);

Shape23.addChild(&Appearance24);

Sphere& Sphere52 =  Sphere();
Shape23.setGeometry(&Sphere52);

Transform22.addChild(&Shape23);

Script& Script53 =  Script();
Script53.setDEF(std::string("Animate"));
Script53.setDirectOutput(true);
field& field54 =  field();
field54.setName(std::string("translation"));
field54.setAccessType(std::string("inputOutput"));
field54.setType(std::string("SFVec3f"));
field54.setValue(std::string("0 0 0"));
Script53.addChild(&field54);

field& field55 =  field();
field55.setName(std::string("velocity"));
field55.setAccessType(std::string("outputOnly"));
field55.setType(std::string("SFVec3f"));
field55.setValue(std::string("0 0 0"));
Script53.addChild(&field55);

field& field56 =  field();
field56.setName(std::string("set_fraction"));
field56.setAccessType(std::string("inputOnly"));
field56.setType(std::string("SFFloat"));
Script53.addChild(&field56);

field& field57 =  field();
field57.setName(std::string("a"));
field57.setType(std::string("SFFloat"));
field57.setAccessType(std::string("outputOnly"));
field57.setValue(std::string("0.5"));
Script53.addChild(&field57);

field& field58 =  field();
field58.setName(std::string("b"));
field58.setType(std::string("SFFloat"));
field58.setAccessType(std::string("outputOnly"));
field58.setValue(std::string("0.5"));
Script53.addChild(&field58);

field& field59 =  field();
field59.setName(std::string("c"));
field59.setType(std::string("SFFloat"));
field59.setAccessType(std::string("outputOnly"));
field59.setValue(std::string("3"));
Script53.addChild(&field59);

field& field60 =  field();
field60.setName(std::string("d"));
field60.setType(std::string("SFFloat"));
field60.setAccessType(std::string("outputOnly"));
field60.setValue(std::string("3"));
Script53.addChild(&field60);

field& field61 =  field();
field61.setName(std::string("tdelta"));
field61.setType(std::string("SFFloat"));
field61.setAccessType(std::string("outputOnly"));
field61.setValue(std::string("0.5"));
Script53.addChild(&field61);

field& field62 =  field();
field62.setName(std::string("pdelta"));
field62.setType(std::string("SFFloat"));
field62.setAccessType(std::string("outputOnly"));
field62.setValue(std::string("0.5"));
Script53.addChild(&field62);


//Script53.setSourceCode(std::string("ecmascript:")+
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
Transform22.addChild(&Script53);

TimeSensor& TimeSensor63 =  TimeSensor();
TimeSensor63.setDEF(std::string("TourTime"));
TimeSensor63.setCycleInterval(5);
TimeSensor63.setLoop(true);
Transform22.addChild(&TimeSensor63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(std::string("TourTime"));
ROUTE64.setFromField(std::string("fraction_changed"));
ROUTE64.setToNode(std::string("Animate"));
ROUTE64.setToField(std::string("set_fraction"));
Transform22.addChild(&ROUTE64);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(std::string("Animate"));
ROUTE65.setFromField(std::string("translation_changed"));
ROUTE65.setToNode(std::string("transform"));
ROUTE65.setToField(std::string("set_translation"));
Transform22.addChild(&ROUTE65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(std::string("Animate"));
ROUTE66.setFromField(std::string("a"));
ROUTE66.setToNode(std::string("shader"));
ROUTE66.setToField(std::string("a"));
Transform22.addChild(&ROUTE66);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(std::string("Animate"));
ROUTE67.setFromField(std::string("b"));
ROUTE67.setToNode(std::string("shader"));
ROUTE67.setToField(std::string("b"));
Transform22.addChild(&ROUTE67);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(std::string("Animate"));
ROUTE68.setFromField(std::string("c"));
ROUTE68.setToNode(std::string("shader"));
ROUTE68.setToField(std::string("c"));
Transform22.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(std::string("Animate"));
ROUTE69.setFromField(std::string("d"));
ROUTE69.setToNode(std::string("shader"));
ROUTE69.setToField(std::string("d"));
Transform22.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(std::string("Animate"));
ROUTE70.setFromField(std::string("tdelta"));
ROUTE70.setToNode(std::string("shader"));
ROUTE70.setToField(std::string("tdelta"));
Transform22.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromNode(std::string("Animate"));
ROUTE71.setFromField(std::string("pdelta"));
ROUTE71.setToNode(std::string("shader"));
ROUTE71.setToField(std::string("pdelta"));
Transform22.addChild(&ROUTE71);

ProtoBody21.addChild(&Transform22);

ProtoDeclare17.addChild(&ProtoBody21);

Scene16.addChild(&ProtoDeclare17);

X3D0.setScene(&Scene16);

}
