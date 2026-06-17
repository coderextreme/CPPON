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
//#include "X3DLib.h"
//int main(int argc, char ** argv) 
//{
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
meta11.setContent(std::string("flowers.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("creator"));
meta12.setContent(std::string("John Carlson"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("description"));
meta13.setContent(std::string("5 or more prismatic flowers"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("generator"));
meta14.setContent(std::string("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("identifier"));
meta15.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d"));
head1.addMeta(&meta15);

X3D0.setHead(&head1);

Scene& Scene16 =  Scene();
NavigationInfo& NavigationInfo17 =  NavigationInfo();
Scene16.addChild(&NavigationInfo17);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background& Background18 =  Background();
Background18.setBackUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background18.setBottomUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background18.setFrontUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background18.setLeftUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background18.setRightUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background18.setTopUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Scene16.addChild(&Background18);

ProtoDeclare& ProtoDeclare19 =  ProtoDeclare();
ProtoDeclare19.setName(std::string("flower"));
ProtoBody& ProtoBody20 =  ProtoBody();
Transform& Transform21 =  Transform();
Transform21.setDEF(std::string("animate_transform"));
Shape& Shape22 =  Shape();
Appearance& Appearance23 =  Appearance();
Material& Material24 =  Material();
Material24.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material24.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance23.addChild(&Material24);

ComposedCubeMapTexture& ComposedCubeMapTexture25 =  ComposedCubeMapTexture();
ComposedCubeMapTexture25.setDEF(std::string("texture"));
ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture25.setBack(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture25.setBottom(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture25.setFront(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture25.setLeft(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture25.setRight(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture25.setTop(ImageTexture31);

Appearance23.addChild(&ComposedCubeMapTexture25);

//<ComposedShader DEF='x3dom' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='1'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\"'></ShaderPart> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>
ComposedShader& ComposedShader32 =  ComposedShader();
ComposedShader32.setDEF(std::string("x_ite"));
ComposedShader32.setLanguage(std::string("GLSL"));
field& field33 =  field();
field33.setName(std::string("cube"));
field33.setType(std::string("SFNode"));
field33.setAccessType(std::string("inputOutput"));
ComposedCubeMapTexture& ComposedCubeMapTexture34 =  ComposedCubeMapTexture();
ComposedCubeMapTexture34.setUSE(std::string("texture"));
field33.addChild(&ComposedCubeMapTexture34);

ComposedShader32.addChild(&field33);

field& field35 =  field();
field35.setName(std::string("chromaticDispertion"));
field35.setAccessType(std::string("initializeOnly"));
field35.setType(std::string("SFVec3f"));
field35.setValue(std::string("0.98 1 1.033"));
ComposedShader32.addChild(&field35);

field& field36 =  field();
field36.setName(std::string("bias"));
field36.setType(std::string("SFFloat"));
field36.setAccessType(std::string("inputOnly"));
field36.setValue(std::string("0.5"));
ComposedShader32.addChild(&field36);

field& field37 =  field();
field37.setName(std::string("scale"));
field37.setType(std::string("SFFloat"));
field37.setAccessType(std::string("inputOnly"));
field37.setValue(std::string("0.5"));
ComposedShader32.addChild(&field37);

field& field38 =  field();
field38.setName(std::string("power"));
field38.setType(std::string("SFFloat"));
field38.setAccessType(std::string("inputOnly"));
field38.setValue(std::string("2"));
ComposedShader32.addChild(&field38);

field& field39 =  field();
field39.setName(std::string("a"));
field39.setType(std::string("SFFloat"));
field39.setAccessType(std::string("inputOnly"));
field39.setValue(std::string("10"));
ComposedShader32.addChild(&field39);

field& field40 =  field();
field40.setName(std::string("b"));
field40.setType(std::string("SFFloat"));
field40.setAccessType(std::string("inputOnly"));
field40.setValue(std::string("1"));
ComposedShader32.addChild(&field40);

field& field41 =  field();
field41.setName(std::string("c"));
field41.setType(std::string("SFFloat"));
field41.setAccessType(std::string("inputOnly"));
field41.setValue(std::string("20"));
ComposedShader32.addChild(&field41);

field& field42 =  field();
field42.setName(std::string("d"));
field42.setType(std::string("SFFloat"));
field42.setAccessType(std::string("inputOnly"));
field42.setValue(std::string("20"));
ComposedShader32.addChild(&field42);

field& field43 =  field();
field43.setName(std::string("tdelta"));
field43.setType(std::string("SFFloat"));
field43.setAccessType(std::string("inputOnly"));
field43.setValue(std::string("0"));
ComposedShader32.addChild(&field43);

field& field44 =  field();
field44.setName(std::string("pdelta"));
field44.setType(std::string("SFFloat"));
field44.setAccessType(std::string("inputOnly"));
field44.setValue(std::string("0"));
ComposedShader32.addChild(&field44);

ShaderPart& ShaderPart45 =  ShaderPart();
ShaderPart45.setUrl((std::string[]){"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"}, 2);
ShaderPart45.setType(std::string("VERTEX"));
ComposedShader32.setParts(&ShaderPart45);

ShaderPart& ShaderPart46 =  ShaderPart();
ShaderPart46.setUrl((std::string[]){"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}, 2);
ShaderPart46.setType(std::string("FRAGMENT"));
ComposedShader32.setParts(&ShaderPart46);

Appearance23.addChild(&ComposedShader32);

Shape22.addChild(&Appearance23);

Sphere& Sphere47 =  Sphere();
Shape22.setGeometry(&Sphere47);

Transform21.addChild(&Shape22);

ProtoBody20.addChild(&Transform21);

Script& Script48 =  Script();
Script48.setDEF(std::string("Animate"));
field& field49 =  field();
field49.setName(std::string("translation"));
field49.setAccessType(std::string("inputOutput"));
field49.setType(std::string("SFVec3f"));
field49.setValue(std::string("0 0 0"));
Script48.addChild(&field49);

field& field50 =  field();
field50.setName(std::string("velocity"));
field50.setAccessType(std::string("inputOutput"));
field50.setType(std::string("SFVec3f"));
field50.setValue(std::string("0 0 0"));
Script48.addChild(&field50);

field& field51 =  field();
field51.setName(std::string("set_fraction"));
field51.setAccessType(std::string("inputOnly"));
field51.setType(std::string("SFFloat"));
Script48.addChild(&field51);

field& field52 =  field();
field52.setName(std::string("a"));
field52.setType(std::string("SFFloat"));
field52.setAccessType(std::string("inputOutput"));
field52.setValue(std::string("0.5"));
Script48.addChild(&field52);

field& field53 =  field();
field53.setName(std::string("b"));
field53.setType(std::string("SFFloat"));
field53.setAccessType(std::string("inputOutput"));
field53.setValue(std::string("0.5"));
Script48.addChild(&field53);

field& field54 =  field();
field54.setName(std::string("c"));
field54.setType(std::string("SFFloat"));
field54.setAccessType(std::string("inputOutput"));
field54.setValue(std::string("3"));
Script48.addChild(&field54);

field& field55 =  field();
field55.setName(std::string("d"));
field55.setType(std::string("SFFloat"));
field55.setAccessType(std::string("inputOutput"));
field55.setValue(std::string("3"));
Script48.addChild(&field55);

field& field56 =  field();
field56.setName(std::string("tdelta"));
field56.setType(std::string("SFFloat"));
field56.setAccessType(std::string("inputOutput"));
field56.setValue(std::string("0.5"));
Script48.addChild(&field56);

field& field57 =  field();
field57.setName(std::string("pdelta"));
field57.setType(std::string("SFFloat"));
field57.setAccessType(std::string("inputOutput"));
field57.setValue(std::string("0.5"));
Script48.addChild(&field57);


//Script48.setSourceCode(std::string("ecmascript:")+
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
//_T("				tdelta = tdelta + 0.5;")+
//_T("				pdelta = pdelta + 0.5;")+
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
ProtoBody20.addChild(&Script48);

TimeSensor& TimeSensor58 =  TimeSensor();
TimeSensor58.setDEF(std::string("TourTime"));
TimeSensor58.setCycleInterval(5);
TimeSensor58.setLoop(true);
ProtoBody20.addChild(&TimeSensor58);

ROUTE& ROUTE59 =  ROUTE();
ROUTE59.setFromNode(std::string("TourTime"));
ROUTE59.setFromField(std::string("fraction_changed"));
ROUTE59.setToNode(std::string("Animate"));
ROUTE59.setToField(std::string("set_fraction"));
ProtoBody20.addChild(&ROUTE59);

ROUTE& ROUTE60 =  ROUTE();
ROUTE60.setFromNode(std::string("Animate"));
ROUTE60.setFromField(std::string("translation_changed"));
ROUTE60.setToNode(std::string("animate_transform"));
ROUTE60.setToField(std::string("set_translation"));
ProtoBody20.addChild(&ROUTE60);

ROUTE& ROUTE61 =  ROUTE();
ROUTE61.setFromNode(std::string("Animate"));
ROUTE61.setFromField(std::string("a"));
ROUTE61.setToNode(std::string("x_ite"));
ROUTE61.setToField(std::string("a"));
ProtoBody20.addChild(&ROUTE61);

ROUTE& ROUTE62 =  ROUTE();
ROUTE62.setFromNode(std::string("Animate"));
ROUTE62.setFromField(std::string("b"));
ROUTE62.setToNode(std::string("x_ite"));
ROUTE62.setToField(std::string("b"));
ProtoBody20.addChild(&ROUTE62);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(std::string("Animate"));
ROUTE63.setFromField(std::string("c"));
ROUTE63.setToNode(std::string("x_ite"));
ROUTE63.setToField(std::string("c"));
ProtoBody20.addChild(&ROUTE63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(std::string("Animate"));
ROUTE64.setFromField(std::string("d"));
ROUTE64.setToNode(std::string("x_ite"));
ROUTE64.setToField(std::string("d"));
ProtoBody20.addChild(&ROUTE64);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(std::string("Animate"));
ROUTE65.setFromField(std::string("pdelta"));
ROUTE65.setToNode(std::string("x_ite"));
ROUTE65.setToField(std::string("pdelta"));
ProtoBody20.addChild(&ROUTE65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(std::string("Animate"));
ROUTE66.setFromField(std::string("tdelta"));
ROUTE66.setToNode(std::string("x_ite"));
ROUTE66.setToField(std::string("tdelta"));
ProtoBody20.addChild(&ROUTE66);

//<ROUTE fromNode='Animate' fromField='a' toNode='x3dom' toField='a'/> <ROUTE fromNode='Animate' fromField='b' toNode='x3dom' toField='b'/> <ROUTE fromNode='Animate' fromField='c' toNode='x3dom' toField='c'/> <ROUTE fromNode='Animate' fromField='d' toNode='x3dom' toField='d'/> <ROUTE fromNode='Animate' fromField='pdelta' toNode='x3dom' toField='pdelta'/> <ROUTE fromNode='Animate' fromField='tdelta' toNode='x3dom' toField='tdelta'/>
ProtoDeclare19.addChild(&ProtoBody20);

Scene16.addChild(&ProtoDeclare19);

ProtoInstance& ProtoInstance67 =  ProtoInstance();
ProtoInstance67.setName(std::string("flower"));
Scene16.addChild(&ProtoInstance67);

ProtoInstance& ProtoInstance68 =  ProtoInstance();
ProtoInstance68.setName(std::string("flower"));
Scene16.addChild(&ProtoInstance68);

ProtoInstance& ProtoInstance69 =  ProtoInstance();
ProtoInstance69.setName(std::string("flower"));
Scene16.addChild(&ProtoInstance69);

X3D0.setScene(&Scene16);

//}
