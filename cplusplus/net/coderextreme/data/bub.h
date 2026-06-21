#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void bub(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
//<component name='Shape' level='4'></component>
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
meta10.setContent(std::string("bub.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("creator"));
meta11.setContent(std::string("John Carlson"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("description"));
meta12.setContent(std::string("3 prismatic spheres"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("generator"));
meta13.setContent(std::string("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("identifier"));
meta14.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/bub.x3d"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
NavigationInfo& NavigationInfo16 =  NavigationInfo();
Scene15.addChild(&NavigationInfo16);

Background& Background17 =  Background();
Background17.setBackUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background17.setBottomUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background17.setFrontUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background17.setLeftUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background17.setRightUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background17.setTopUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Scene15.addChild(&Background17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setPosition(new float[]{0.0,0.0,20.0});
Viewpoint18.setDescription(std::string("Look at the bubbles flying"));
Scene15.addChild(&Viewpoint18);

ProtoDeclare& ProtoDeclare19 =  ProtoDeclare();
ProtoDeclare19.setName(std::string("Bubble"));
ProtoBody& ProtoBody20 =  ProtoBody();
Transform& Transform21 =  Transform();
Transform21.setDEF(std::string("transform"));
Shape& Shape22 =  Shape();
Shape22.setDEF(std::string("myShape"));
Appearance& Appearance23 =  Appearance();
Appearance23.setContainerField("appearance");
Material& Material24 =  Material();
Material24.setContainerField("material");
Material24.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material24.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance23.addChild(&Material24);

ComposedCubeMapTexture& ComposedCubeMapTexture25 =  ComposedCubeMapTexture();
ComposedCubeMapTexture25.setContainerField("texture");
ComposedCubeMapTexture25.setDEF(std::string("texture"));
ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setContainerField("backTexture");
ImageTexture26.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture25.setBack(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setContainerField("bottomTexture");
ImageTexture27.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture25.setBottom(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setContainerField("frontTexture");
ImageTexture28.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture25.setFront(ImageTexture28);

ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setContainerField("leftTexture");
ImageTexture29.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture25.setLeft(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setContainerField("rightTexture");
ImageTexture30.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture25.setRight(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setContainerField("topTexture");
ImageTexture31.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture25.setTop(ImageTexture31);

Appearance23.addChild(&ComposedCubeMapTexture25);

//<ComposedShader DEF='gl' language=\"GLSL\">
//<field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/>
//<field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/>
//<field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/>
//<field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/>
//<field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/>
//<ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"'></ShaderPart>
//<ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart>
//</ComposedShader>
//<ComposedShader DEF='freewrl' language=\"GLSL\">
//<field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/>
//<field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/>
//<field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/>
//<field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/>
//<field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/>
//<ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"'></ShaderPart>
//<ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart>
//</ComposedShader>
//<ComposedShader DEF='instant' language=\"GLSL\">
//<field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/>
//<field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/>
//<field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/>
//<field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/>
//<field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/>
//<ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"'></ShaderPart>
//<ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart>
//</ComposedShader>
ComposedShader& ComposedShader32 =  ComposedShader();
ComposedShader32.setDEF(std::string("x3dom"));
ComposedShader32.setLanguage(std::string("GLSL"));
field& field33 =  field();
field33.setName(std::string("cube"));
field33.setType(std::string("SFInt32"));
field33.setAccessType(std::string("inputOutput"));
field33.setValue(std::string("0"));
ComposedShader32.addChild(&field33);

field& field34 =  field();
field34.setName(std::string("chromaticDispertion"));
field34.setType(std::string("SFVec3f"));
field34.setAccessType(std::string("inputOutput"));
field34.setValue(std::string("0.98 1 1.033"));
ComposedShader32.addChild(&field34);

field& field35 =  field();
field35.setName(std::string("bias"));
field35.setType(std::string("SFFloat"));
field35.setAccessType(std::string("inputOutput"));
field35.setValue(std::string("0.5"));
ComposedShader32.addChild(&field35);

field& field36 =  field();
field36.setName(std::string("scale"));
field36.setType(std::string("SFFloat"));
field36.setAccessType(std::string("inputOutput"));
field36.setValue(std::string("0.5"));
ComposedShader32.addChild(&field36);

field& field37 =  field();
field37.setName(std::string("power"));
field37.setType(std::string("SFFloat"));
field37.setAccessType(std::string("inputOutput"));
field37.setValue(std::string("2"));
ComposedShader32.addChild(&field37);

ShaderPart& ShaderPart38 =  ShaderPart();
ShaderPart38.setUrl(new std::string[]{"../shaders/x3dom.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart38.setType(std::string("VERTEX"));
ComposedShader32.setParts(&ShaderPart38);

ShaderPart& ShaderPart39 =  ShaderPart();
ShaderPart39.setUrl(new std::string[]{"../shaders/pc_bubbles.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"}, 2);
ShaderPart39.setType(std::string("FRAGMENT"));
ComposedShader32.setParts(&ShaderPart39);

Appearance23.addChild(&ComposedShader32);

ComposedShader& ComposedShader40 =  ComposedShader();
ComposedShader40.setDEF(std::string("x_ite"));
ComposedShader40.setLanguage(std::string("GLSL"));
field& field41 =  field();
field41.setName(std::string("cube"));
field41.setType(std::string("SFNode"));
field41.setAccessType(std::string("inputOutput"));
ComposedCubeMapTexture& ComposedCubeMapTexture42 =  ComposedCubeMapTexture();
ComposedCubeMapTexture42.setUSE(std::string("texture"));
field41.addChild(&ComposedCubeMapTexture42);

ComposedShader40.addChild(&field41);

field& field43 =  field();
field43.setName(std::string("chromaticDispertion"));
field43.setType(std::string("SFVec3f"));
field43.setAccessType(std::string("inputOutput"));
field43.setValue(std::string("0.98 1 1.033"));
ComposedShader40.addChild(&field43);

field& field44 =  field();
field44.setName(std::string("bias"));
field44.setType(std::string("SFFloat"));
field44.setAccessType(std::string("inputOutput"));
field44.setValue(std::string("0.5"));
ComposedShader40.addChild(&field44);

field& field45 =  field();
field45.setName(std::string("scale"));
field45.setType(std::string("SFFloat"));
field45.setAccessType(std::string("inputOutput"));
field45.setValue(std::string("0.5"));
ComposedShader40.addChild(&field45);

field& field46 =  field();
field46.setName(std::string("power"));
field46.setType(std::string("SFFloat"));
field46.setAccessType(std::string("inputOutput"));
field46.setValue(std::string("2"));
ComposedShader40.addChild(&field46);

ShaderPart& ShaderPart47 =  ShaderPart();
ShaderPart47.setUrl(new std::string[]{"../shaders/x_ite.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart47.setType(std::string("VERTEX"));
ComposedShader40.setParts(&ShaderPart47);

ShaderPart& ShaderPart48 =  ShaderPart();
ShaderPart48.setUrl(new std::string[]{"../shaders/x_itebubbles.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"}, 2);
ShaderPart48.setType(std::string("FRAGMENT"));
ComposedShader40.setParts(&ShaderPart48);

Appearance23.addChild(&ComposedShader40);

Shape22.addChild(&Appearance23);

Sphere& Sphere49 =  Sphere();
Shape22.setGeometry(&Sphere49);

Transform21.addChild(&Shape22);

ProtoBody20.addChild(&Transform21);

Script& Script50 =  Script();
Script50.setDEF(std::string("Bounce"));
field& field51 =  field();
field51.setName(std::string("translation"));
field51.setAccessType(std::string("inputOutput"));
field51.setType(std::string("SFVec3f"));
field51.setValue(std::string("0 0 0"));
Script50.addChild(&field51);

field& field52 =  field();
field52.setName(std::string("velocity"));
field52.setAccessType(std::string("inputOutput"));
field52.setType(std::string("SFVec3f"));
field52.setValue(std::string("0 0 0"));
Script50.addChild(&field52);

field& field53 =  field();
field53.setName(std::string("set_fraction"));
field53.setAccessType(std::string("inputOnly"));
field53.setType(std::string("SFTime"));
Script50.addChild(&field53);


//Script50.setSourceCode(std::string("ecmascript:")+
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
//_T("			    if (Math.abs(translation.x) > 10) {")+
//_T("				initialize();")+
//_T("			    } else if (Math.abs(translation.y) > 10) {")+
//_T("				initialize();")+
//_T("			    } else if (Math.abs(translation.z) > 10) {")+
//_T("				initialize();")+
//_T("			    } else {")+
//_T("				velocity.x += Math.random() * 0.2 - 0.1;")+
//_T("				velocity.y += Math.random() * 0.2 - 0.1;")+
//_T("				velocity.z += Math.random() * 0.2 - 0.1;")+
//_T("			    }")+
//_T("			}"));
ProtoBody20.addChild(&Script50);

TimeSensor& TimeSensor54 =  TimeSensor();
TimeSensor54.setDEF(std::string("TourTime"));
TimeSensor54.setCycleInterval(0.15);
TimeSensor54.setLoop(true);
ProtoBody20.addChild(&TimeSensor54);

ROUTE& ROUTE55 =  ROUTE();
ROUTE55.setFromNode(std::string("TourTime"));
ROUTE55.setFromField(std::string("cycleTime"));
ROUTE55.setToNode(std::string("Bounce"));
ROUTE55.setToField(std::string("set_fraction"));
ProtoBody20.addChild(&ROUTE55);

ROUTE& ROUTE56 =  ROUTE();
ROUTE56.setFromNode(std::string("Bounce"));
ROUTE56.setFromField(std::string("translation_changed"));
ROUTE56.setToNode(std::string("transform"));
ROUTE56.setToField(std::string("set_translation"));
ProtoBody20.addChild(&ROUTE56);

ProtoDeclare19.addChild(&ProtoBody20);

Scene15.addChild(&ProtoDeclare19);

ProtoInstance& ProtoInstance57 =  ProtoInstance();
ProtoInstance57.setName(std::string("Bubble"));
Scene15.addChild(&ProtoInstance57);

ProtoInstance& ProtoInstance58 =  ProtoInstance();
ProtoInstance58.setName(std::string("Bubble"));
Scene15.addChild(&ProtoInstance58);

ProtoInstance& ProtoInstance59 =  ProtoInstance();
ProtoInstance59.setName(std::string("Bubble"));
Scene15.addChild(&ProtoInstance59);

X3D0.setScene(&Scene15);

//}
