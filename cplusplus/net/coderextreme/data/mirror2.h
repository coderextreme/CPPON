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
meta10.setContent(std::string("mirror2.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("creator"));
meta11.setContent(std::string("John Carlson"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("generator"));
meta12.setContent(std::string("manual"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("identifier"));
meta13.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("description"));
meta14.setContent(std::string("a mirrored sphere"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
Viewpoint& Viewpoint16 =  Viewpoint();
Viewpoint16.setPosition(new float[]{0.0,5.0,100.0});
Viewpoint16.setDescription(std::string("Switch background and images texture"));
Scene15.addChild(&Viewpoint16);

Background& Background17 =  Background();
Background17.setDEF(std::string("cube"));
Background17.setLeftUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
Background17.setRightUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
Background17.setFrontUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
Background17.setBackUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
Background17.setTopUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
Background17.setBottomUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
Scene15.addChild(&Background17);

Transform& Transform18 =  Transform();
Shape& Shape19 =  Shape();
Appearance& Appearance20 =  Appearance();
Material& Material21 =  Material();
Material21.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material21.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance20.addChild(&Material21);

ComposedCubeMapTexture& ComposedCubeMapTexture22 =  ComposedCubeMapTexture();
ImageTexture& ImageTexture23 =  ImageTexture();
ImageTexture23.setDEF(std::string("backShader"));
ImageTexture23.setUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
ComposedCubeMapTexture22.setBack(ImageTexture23);

ImageTexture& ImageTexture24 =  ImageTexture();
ImageTexture24.setDEF(std::string("bottomShader"));
ImageTexture24.setUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
ComposedCubeMapTexture22.setBottom(ImageTexture24);

ImageTexture& ImageTexture25 =  ImageTexture();
ImageTexture25.setDEF(std::string("frontShader"));
ImageTexture25.setUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
ComposedCubeMapTexture22.setFront(ImageTexture25);

ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setDEF(std::string("leftShader"));
ImageTexture26.setUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
ComposedCubeMapTexture22.setLeft(ImageTexture26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setDEF(std::string("rightShader"));
ImageTexture27.setUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
ComposedCubeMapTexture22.setRight(ImageTexture27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setDEF(std::string("topShader"));
ImageTexture28.setUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
ComposedCubeMapTexture22.setTop(ImageTexture28);

Appearance20.addChild(&ComposedCubeMapTexture22);

ComposedShader& ComposedShader29 =  ComposedShader();
ComposedShader29.setDEF(std::string("x_ite"));
ComposedShader29.setLanguage(std::string("GLSL"));
//http://hypertextbook.com/facts/2005/JustinChe.shtml
field& field30 =  field();
field30.setName(std::string("chromaticDispertion"));
field30.setAccessType(std::string("inputOutput"));
field30.setType(std::string("SFVec3f"));
field30.setValue(std::string("0.98 1 1.033"));
ComposedShader29.addChild(&field30);

field& field31 =  field();
field31.setName(std::string("cube"));
field31.setAccessType(std::string("inputOutput"));
field31.setType(std::string("SFInt32"));
field31.setValue(std::string("0"));
ComposedShader29.addChild(&field31);

field& field32 =  field();
field32.setName(std::string("bias"));
field32.setAccessType(std::string("inputOutput"));
field32.setType(std::string("SFFloat"));
field32.setValue(std::string("0.5"));
ComposedShader29.addChild(&field32);

field& field33 =  field();
field33.setName(std::string("scale"));
field33.setAccessType(std::string("inputOutput"));
field33.setType(std::string("SFFloat"));
field33.setValue(std::string("0.5"));
ComposedShader29.addChild(&field33);

field& field34 =  field();
field34.setName(std::string("power"));
field34.setAccessType(std::string("inputOutput"));
field34.setType(std::string("SFFloat"));
field34.setValue(std::string("2"));
ComposedShader29.addChild(&field34);

ShaderPart& ShaderPart35 =  ShaderPart();
ShaderPart35.setUrl((std::string[]){"../shaders/x_ite.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart35.setType(std::string("VERTEX"));
ComposedShader29.setParts(&ShaderPart35);

ShaderPart& ShaderPart36 =  ShaderPart();
ShaderPart36.setUrl((std::string[]){"../shaders/x_itemix.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"}, 2);
ShaderPart36.setType(std::string("FRAGMENT"));
ComposedShader29.setParts(&ShaderPart36);

Appearance20.addChild(&ComposedShader29);

ComposedShader& ComposedShader37 =  ComposedShader();
ComposedShader37.setDEF(std::string("x3dom"));
ComposedShader37.setLanguage(std::string("GLSL"));
field& field38 =  field();
field38.setName(std::string("chromaticDispertion"));
field38.setAccessType(std::string("inputOutput"));
field38.setType(std::string("SFVec3f"));
field38.setValue(std::string("0.98 1 1.033"));
ComposedShader37.addChild(&field38);

field& field39 =  field();
field39.setName(std::string("cube"));
field39.setAccessType(std::string("inputOutput"));
field39.setType(std::string("SFInt32"));
field39.setValue(std::string("0"));
ComposedShader37.addChild(&field39);

field& field40 =  field();
field40.setName(std::string("bias"));
field40.setAccessType(std::string("inputOutput"));
field40.setType(std::string("SFFloat"));
field40.setValue(std::string("0.5"));
ComposedShader37.addChild(&field40);

field& field41 =  field();
field41.setName(std::string("scale"));
field41.setAccessType(std::string("inputOutput"));
field41.setType(std::string("SFFloat"));
field41.setValue(std::string("0.5"));
ComposedShader37.addChild(&field41);

field& field42 =  field();
field42.setName(std::string("power"));
field42.setAccessType(std::string("inputOutput"));
field42.setType(std::string("SFFloat"));
field42.setValue(std::string("2"));
ComposedShader37.addChild(&field42);

ShaderPart& ShaderPart43 =  ShaderPart();
ShaderPart43.setUrl((std::string[]){"../shaders/x3dom.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart43.setType(std::string("VERTEX"));
ComposedShader37.setParts(&ShaderPart43);

ShaderPart& ShaderPart44 =  ShaderPart();
ShaderPart44.setUrl((std::string[]){"../shaders/mix.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"}, 2);
ShaderPart44.setType(std::string("FRAGMENT"));
ComposedShader37.setParts(&ShaderPart44);

Appearance20.addChild(&ComposedShader37);

Shape19.addChild(&Appearance20);

Sphere& Sphere45 =  Sphere();
Sphere45.setRadius(30);
Shape19.setGeometry(&Sphere45);

Transform18.addChild(&Shape19);

Script& Script46 =  Script();
Script46.setDEF(std::string("UrlSelector"));
Script46.setDirectOutput(true);
field& field47 =  field();
field47.setName(std::string("frontUrls"));
field47.setType(std::string("MFString"));
field47.setAccessType(std::string("initializeOnly"));
field47.setValue(std::string("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\""));
Script46.addChild(&field47);

field& field48 =  field();
field48.setName(std::string("backUrls"));
field48.setType(std::string("MFString"));
field48.setAccessType(std::string("initializeOnly"));
field48.setValue(std::string("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\""));
Script46.addChild(&field48);

field& field49 =  field();
field49.setName(std::string("leftUrls"));
field49.setType(std::string("MFString"));
field49.setAccessType(std::string("initializeOnly"));
field49.setValue(std::string("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\""));
Script46.addChild(&field49);

field& field50 =  field();
field50.setName(std::string("rightUrls"));
field50.setType(std::string("MFString"));
field50.setAccessType(std::string("initializeOnly"));
field50.setValue(std::string("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\""));
Script46.addChild(&field50);

field& field51 =  field();
field51.setName(std::string("topUrls"));
field51.setType(std::string("MFString"));
field51.setAccessType(std::string("initializeOnly"));
field51.setValue(std::string("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\""));
Script46.addChild(&field51);

field& field52 =  field();
field52.setName(std::string("bottomUrls"));
field52.setType(std::string("MFString"));
field52.setAccessType(std::string("initializeOnly"));
field52.setValue(std::string("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""));
Script46.addChild(&field52);

field& field53 =  field();
field53.setName(std::string("front_changed"));
field53.setType(std::string("MFString"));
field53.setAccessType(std::string("outputOnly"));
Script46.addChild(&field53);

field& field54 =  field();
field54.setName(std::string("back_changed"));
field54.setType(std::string("MFString"));
field54.setAccessType(std::string("outputOnly"));
Script46.addChild(&field54);

field& field55 =  field();
field55.setName(std::string("left_changed"));
field55.setType(std::string("MFString"));
field55.setAccessType(std::string("outputOnly"));
Script46.addChild(&field55);

field& field56 =  field();
field56.setName(std::string("right_changed"));
field56.setType(std::string("MFString"));
field56.setAccessType(std::string("outputOnly"));
Script46.addChild(&field56);

field& field57 =  field();
field57.setName(std::string("top_changed"));
field57.setType(std::string("MFString"));
field57.setAccessType(std::string("outputOnly"));
Script46.addChild(&field57);

field& field58 =  field();
field58.setName(std::string("bottom_changed"));
field58.setType(std::string("MFString"));
field58.setAccessType(std::string("outputOnly"));
Script46.addChild(&field58);

field& field59 =  field();
field59.setName(std::string("set_fraction"));
field59.setType(std::string("SFFloat"));
field59.setAccessType(std::string("inputOnly"));
Script46.addChild(&field59);

field& field60 =  field();
field60.setName(std::string("old"));
field60.setType(std::string("SFInt32"));
field60.setAccessType(std::string("inputOutput"));
field60.setValue(std::string("-1"));
Script46.addChild(&field60);


//Script46.setSourceCode(std::string("ecmascript:")+
//_T("        function set_fraction( f, tm ) {")+
//_T("	    var side = Math.floor(f*frontUrls.length);")+
//_T("	    if (side > frontUrls.length-1) {")+
//_T("	    	side = 0;")+
//_T("	    }")+
//_T("	    if (side != old) {")+
//_T("	    	    // Browser.print(f+\" \"+side);")+
//_T("	    	    old = side;")+
//_T("		    front_changed[0] = frontUrls[side];")+
//_T("		    back_changed[0] = backUrls[side];")+
//_T("		    left_changed[0] = leftUrls[side];")+
//_T("		    right_changed[0] = rightUrls[side];")+
//_T("		    top_changed[0] = topUrls[side];")+
//_T("		    bottom_changed[0] = bottomUrls[side];")+
//_T("            }")+
//_T("        }"));
Transform18.addChild(&Script46);

TimeSensor& TimeSensor61 =  TimeSensor();
TimeSensor61.setDEF(std::string("Clock"));
TimeSensor61.setCycleInterval(45);
TimeSensor61.setLoop(true);
Transform18.addChild(&TimeSensor61);

ROUTE& ROUTE62 =  ROUTE();
ROUTE62.setFromNode(std::string("Clock"));
ROUTE62.setFromField(std::string("fraction_changed"));
ROUTE62.setToNode(std::string("UrlSelector"));
ROUTE62.setToField(std::string("set_fraction"));
Transform18.addChild(&ROUTE62);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(std::string("UrlSelector"));
ROUTE63.setFromField(std::string("front_changed"));
ROUTE63.setToNode(std::string("cube"));
ROUTE63.setToField(std::string("frontUrl"));
Transform18.addChild(&ROUTE63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(std::string("UrlSelector"));
ROUTE64.setFromField(std::string("back_changed"));
ROUTE64.setToNode(std::string("cube"));
ROUTE64.setToField(std::string("backUrl"));
Transform18.addChild(&ROUTE64);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(std::string("UrlSelector"));
ROUTE65.setFromField(std::string("left_changed"));
ROUTE65.setToNode(std::string("cube"));
ROUTE65.setToField(std::string("leftUrl"));
Transform18.addChild(&ROUTE65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(std::string("UrlSelector"));
ROUTE66.setFromField(std::string("right_changed"));
ROUTE66.setToNode(std::string("cube"));
ROUTE66.setToField(std::string("rightUrl"));
Transform18.addChild(&ROUTE66);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(std::string("UrlSelector"));
ROUTE67.setFromField(std::string("top_changed"));
ROUTE67.setToNode(std::string("cube"));
ROUTE67.setToField(std::string("topUrl"));
Transform18.addChild(&ROUTE67);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(std::string("UrlSelector"));
ROUTE68.setFromField(std::string("bottom_changed"));
ROUTE68.setToNode(std::string("cube"));
ROUTE68.setToField(std::string("bottomUrl"));
Transform18.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(std::string("UrlSelector"));
ROUTE69.setFromField(std::string("front_changed"));
ROUTE69.setToNode(std::string("frontShader"));
ROUTE69.setToField(std::string("url"));
Transform18.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(std::string("UrlSelector"));
ROUTE70.setFromField(std::string("back_changed"));
ROUTE70.setToNode(std::string("backShader"));
ROUTE70.setToField(std::string("url"));
Transform18.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromNode(std::string("UrlSelector"));
ROUTE71.setFromField(std::string("left_changed"));
ROUTE71.setToNode(std::string("leftShader"));
ROUTE71.setToField(std::string("url"));
Transform18.addChild(&ROUTE71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromNode(std::string("UrlSelector"));
ROUTE72.setFromField(std::string("right_changed"));
ROUTE72.setToNode(std::string("rightShader"));
ROUTE72.setToField(std::string("url"));
Transform18.addChild(&ROUTE72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromNode(std::string("UrlSelector"));
ROUTE73.setFromField(std::string("top_changed"));
ROUTE73.setToNode(std::string("topShader"));
ROUTE73.setToField(std::string("url"));
Transform18.addChild(&ROUTE73);

ROUTE& ROUTE74 =  ROUTE();
ROUTE74.setFromNode(std::string("UrlSelector"));
ROUTE74.setFromField(std::string("bottom_changed"));
ROUTE74.setToNode(std::string("bottomShader"));
ROUTE74.setToField(std::string("url"));
Transform18.addChild(&ROUTE74);

Scene15.addChild(&Transform18);

X3D0.setScene(&Scene15);

//}
