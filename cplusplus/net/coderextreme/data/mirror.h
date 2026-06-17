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
meta10.setContent(std::string("mirror.x3d"));
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
meta13.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("description"));
meta14.setContent(std::string("sphere with alternating backgrounds"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
Viewpoint& Viewpoint16 =  Viewpoint();
Viewpoint16.setPosition(new float[]{0.0,5.0,100.0});
Viewpoint16.setDescription(std::string("Switch background and images texture"));
Scene15.addChild(&Viewpoint16);

TextureBackground& TextureBackground17 =  TextureBackground();
ImageTexture& ImageTexture18 =  ImageTexture();
ImageTexture18.setDEF(std::string("leftBackgroundTexture"));
ImageTexture18.setUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_left.png", "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
TextureBackground17.setLeftTexture(ImageTexture18);

ImageTexture& ImageTexture19 =  ImageTexture();
ImageTexture19.setDEF(std::string("rightBackgroundTexture"));
ImageTexture19.setUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_right.png", "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
TextureBackground17.setRightTexture(ImageTexture19);

ImageTexture& ImageTexture20 =  ImageTexture();
ImageTexture20.setDEF(std::string("frontBackgroundTexture"));
ImageTexture20.setUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_front.png", "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
TextureBackground17.setFrontTexture(ImageTexture20);

ImageTexture& ImageTexture21 =  ImageTexture();
ImageTexture21.setDEF(std::string("backBackgroundTexture"));
ImageTexture21.setUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_back.png", "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
TextureBackground17.setBackTexture(ImageTexture21);

ImageTexture& ImageTexture22 =  ImageTexture();
ImageTexture22.setDEF(std::string("topBackgroundTexture"));
ImageTexture22.setUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_top.png", "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
TextureBackground17.setTopTexture(ImageTexture22);

ImageTexture& ImageTexture23 =  ImageTexture();
ImageTexture23.setDEF(std::string("bottomBackgroundTexture"));
ImageTexture23.setUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_bottom.png", "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
TextureBackground17.setBottomTexture(ImageTexture23);

Scene15.addChild(&TextureBackground17);

Transform& Transform24 =  Transform();
Shape& Shape25 =  Shape();
Appearance& Appearance26 =  Appearance();
Material& Material27 =  Material();
Material27.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material27.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance26.addChild(&Material27);

ComposedCubeMapTexture& ComposedCubeMapTexture28 =  ComposedCubeMapTexture();
ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setDEF(std::string("backShader"));
ImageTexture29.setUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_back.png", "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}, 2);
ComposedCubeMapTexture28.setBack(ImageTexture29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setDEF(std::string("bottomShader"));
ImageTexture30.setUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_bottom.png", "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}, 2);
ComposedCubeMapTexture28.setBottom(ImageTexture30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setDEF(std::string("frontShader"));
ImageTexture31.setUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_front.png", "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}, 2);
ComposedCubeMapTexture28.setFront(ImageTexture31);

ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setDEF(std::string("leftShader"));
ImageTexture32.setUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_left.png", "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}, 2);
ComposedCubeMapTexture28.setLeft(ImageTexture32);

ImageTexture& ImageTexture33 =  ImageTexture();
ImageTexture33.setDEF(std::string("rightShader"));
ImageTexture33.setUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_right.png", "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}, 2);
ComposedCubeMapTexture28.setRight(ImageTexture33);

ImageTexture& ImageTexture34 =  ImageTexture();
ImageTexture34.setDEF(std::string("topShader"));
ImageTexture34.setUrl((std::string[]){"../resources/images/all_probes/beach_cross/beach_top.png", "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}, 2);
ComposedCubeMapTexture28.setTop(ImageTexture34);

Appearance26.addChild(&ComposedCubeMapTexture28);

ComposedShader& ComposedShader35 =  ComposedShader();
ComposedShader35.setDEF(std::string("x3dom"));
ComposedShader35.setLanguage(std::string("GLSL"));
field& field36 =  field();
field36.setName(std::string("chromaticDispertion"));
field36.setAccessType(std::string("inputOutput"));
field36.setType(std::string("SFVec3f"));
field36.setValue(std::string("0.98 1 1.033"));
ComposedShader35.addChild(&field36);

field& field37 =  field();
field37.setName(std::string("cube"));
field37.setAccessType(std::string("inputOutput"));
field37.setType(std::string("SFInt32"));
field37.setValue(std::string("0"));
ComposedShader35.addChild(&field37);

field& field38 =  field();
field38.setName(std::string("bias"));
field38.setAccessType(std::string("inputOutput"));
field38.setType(std::string("SFFloat"));
field38.setValue(std::string("0.5"));
ComposedShader35.addChild(&field38);

field& field39 =  field();
field39.setName(std::string("scale"));
field39.setAccessType(std::string("inputOutput"));
field39.setType(std::string("SFFloat"));
field39.setValue(std::string("0.5"));
ComposedShader35.addChild(&field39);

field& field40 =  field();
field40.setName(std::string("power"));
field40.setAccessType(std::string("inputOutput"));
field40.setType(std::string("SFFloat"));
field40.setValue(std::string("2"));
ComposedShader35.addChild(&field40);

ShaderPart& ShaderPart41 =  ShaderPart();
ShaderPart41.setUrl((std::string[]){"../shaders/x3dom.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart41.setType(std::string("VERTEX"));
ComposedShader35.setParts(&ShaderPart41);

ShaderPart& ShaderPart42 =  ShaderPart();
ShaderPart42.setUrl((std::string[]){"../shaders/mix.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"}, 2);
ShaderPart42.setType(std::string("FRAGMENT"));
ComposedShader35.setParts(&ShaderPart42);

Appearance26.addChild(&ComposedShader35);

ComposedShader& ComposedShader43 =  ComposedShader();
ComposedShader43.setDEF(std::string("x_ite"));
ComposedShader43.setLanguage(std::string("GLSL"));
//http://hypertextbook.com/facts/2005/JustinChe.shtml
field& field44 =  field();
field44.setName(std::string("chromaticDispertion"));
field44.setAccessType(std::string("inputOutput"));
field44.setType(std::string("SFVec3f"));
field44.setValue(std::string("0.98 1 1.033"));
ComposedShader43.addChild(&field44);

field& field45 =  field();
field45.setName(std::string("cube"));
field45.setAccessType(std::string("inputOutput"));
field45.setType(std::string("SFInt32"));
field45.setValue(std::string("0"));
ComposedShader43.addChild(&field45);

field& field46 =  field();
field46.setName(std::string("bias"));
field46.setAccessType(std::string("inputOutput"));
field46.setType(std::string("SFFloat"));
field46.setValue(std::string("0.5"));
ComposedShader43.addChild(&field46);

field& field47 =  field();
field47.setName(std::string("scale"));
field47.setAccessType(std::string("inputOutput"));
field47.setType(std::string("SFFloat"));
field47.setValue(std::string("0.5"));
ComposedShader43.addChild(&field47);

field& field48 =  field();
field48.setName(std::string("power"));
field48.setAccessType(std::string("inputOutput"));
field48.setType(std::string("SFFloat"));
field48.setValue(std::string("2"));
ComposedShader43.addChild(&field48);

ShaderPart& ShaderPart49 =  ShaderPart();
ShaderPart49.setUrl((std::string[]){"../shaders/x_ite.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart49.setType(std::string("VERTEX"));
ComposedShader43.setParts(&ShaderPart49);

ShaderPart& ShaderPart50 =  ShaderPart();
ShaderPart50.setUrl((std::string[]){"../shaders/x_itemix.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"}, 2);
ShaderPart50.setType(std::string("FRAGMENT"));
ComposedShader43.setParts(&ShaderPart50);

Appearance26.addChild(&ComposedShader43);

Shape25.addChild(&Appearance26);

Sphere& Sphere51 =  Sphere();
Sphere51.setRadius(30);
Shape25.setGeometry(&Sphere51);

Transform24.addChild(&Shape25);

Script& Script52 =  Script();
Script52.setDEF(std::string("UrlSelector"));
Script52.setDirectOutput(true);
field& field53 =  field();
field53.setName(std::string("frontUrls"));
field53.setType(std::string("MFString"));
field53.setAccessType(std::string("initializeOnly"));
field53.setValue(std::string("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\""));
Script52.addChild(&field53);

field& field54 =  field();
field54.setName(std::string("backUrls"));
field54.setType(std::string("MFString"));
field54.setAccessType(std::string("initializeOnly"));
field54.setValue(std::string("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\""));
Script52.addChild(&field54);

field& field55 =  field();
field55.setName(std::string("leftUrls"));
field55.setType(std::string("MFString"));
field55.setAccessType(std::string("initializeOnly"));
field55.setValue(std::string("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\""));
Script52.addChild(&field55);

field& field56 =  field();
field56.setName(std::string("rightUrls"));
field56.setType(std::string("MFString"));
field56.setAccessType(std::string("initializeOnly"));
field56.setValue(std::string("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\""));
Script52.addChild(&field56);

field& field57 =  field();
field57.setName(std::string("topUrls"));
field57.setType(std::string("MFString"));
field57.setAccessType(std::string("initializeOnly"));
field57.setValue(std::string("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\""));
Script52.addChild(&field57);

field& field58 =  field();
field58.setName(std::string("bottomUrls"));
field58.setType(std::string("MFString"));
field58.setAccessType(std::string("initializeOnly"));
field58.setValue(std::string("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""));
Script52.addChild(&field58);

field& field59 =  field();
field59.setName(std::string("front_changed"));
field59.setType(std::string("MFString"));
field59.setAccessType(std::string("outputOnly"));
Script52.addChild(&field59);

field& field60 =  field();
field60.setName(std::string("back_changed"));
field60.setType(std::string("MFString"));
field60.setAccessType(std::string("outputOnly"));
Script52.addChild(&field60);

field& field61 =  field();
field61.setName(std::string("left_changed"));
field61.setType(std::string("MFString"));
field61.setAccessType(std::string("outputOnly"));
Script52.addChild(&field61);

field& field62 =  field();
field62.setName(std::string("right_changed"));
field62.setType(std::string("MFString"));
field62.setAccessType(std::string("outputOnly"));
Script52.addChild(&field62);

field& field63 =  field();
field63.setName(std::string("top_changed"));
field63.setType(std::string("MFString"));
field63.setAccessType(std::string("outputOnly"));
Script52.addChild(&field63);

field& field64 =  field();
field64.setName(std::string("bottom_changed"));
field64.setType(std::string("MFString"));
field64.setAccessType(std::string("outputOnly"));
Script52.addChild(&field64);

field& field65 =  field();
field65.setName(std::string("set_fraction"));
field65.setType(std::string("SFFloat"));
field65.setAccessType(std::string("inputOnly"));
Script52.addChild(&field65);

field& field66 =  field();
field66.setName(std::string("old"));
field66.setType(std::string("SFInt32"));
field66.setAccessType(std::string("inputOutput"));
field66.setValue(std::string("-1"));
Script52.addChild(&field66);


//Script52.setSourceCode(std::string("ecmascript:")+
//_T("        function set_fraction( f, tm ) {")+
//_T("	    var side = Math.floor(f*frontUrls.length);")+
//_T("	    if (side > frontUrls.length-1) {")+
//_T("	    	side = 0;")+
//_T("	    }")+
//_T("	    if (side != old) {")+
//_T("	    	    Browser.print(f+\" \"+side);")+
//_T("	    	    old = side;")+
//_T("		    front_changed[0] = frontUrls[side];")+
//_T("		    back_changed[0] = backUrls[side];")+
//_T("		    left_changed[0] = leftUrls[side];")+
//_T("		    right_changed[0] = rightUrls[side];")+
//_T("		    top_changed[0] = topUrls[side];")+
//_T("		    bottom_changed[0] = bottomUrls[side];")+
//_T("            }")+
//_T("        }"));
Transform24.addChild(&Script52);

TimeSensor& TimeSensor67 =  TimeSensor();
TimeSensor67.setDEF(std::string("Clock"));
TimeSensor67.setCycleInterval(45);
TimeSensor67.setLoop(true);
Transform24.addChild(&TimeSensor67);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(std::string("Clock"));
ROUTE68.setFromField(std::string("fraction_changed"));
ROUTE68.setToNode(std::string("UrlSelector"));
ROUTE68.setToField(std::string("set_fraction"));
Transform24.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(std::string("UrlSelector"));
ROUTE69.setFromField(std::string("front_changed"));
ROUTE69.setToNode(std::string("frontBackgroundTexture"));
ROUTE69.setToField(std::string("url"));
Transform24.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(std::string("UrlSelector"));
ROUTE70.setFromField(std::string("back_changed"));
ROUTE70.setToNode(std::string("backBackgroundTexture"));
ROUTE70.setToField(std::string("url"));
Transform24.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromNode(std::string("UrlSelector"));
ROUTE71.setFromField(std::string("left_changed"));
ROUTE71.setToNode(std::string("leftBackgroundTexture"));
ROUTE71.setToField(std::string("url"));
Transform24.addChild(&ROUTE71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromNode(std::string("UrlSelector"));
ROUTE72.setFromField(std::string("right_changed"));
ROUTE72.setToNode(std::string("rightBackgroundTexture"));
ROUTE72.setToField(std::string("url"));
Transform24.addChild(&ROUTE72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromNode(std::string("UrlSelector"));
ROUTE73.setFromField(std::string("top_changed"));
ROUTE73.setToNode(std::string("topBackgroundTexture"));
ROUTE73.setToField(std::string("url"));
Transform24.addChild(&ROUTE73);

ROUTE& ROUTE74 =  ROUTE();
ROUTE74.setFromNode(std::string("UrlSelector"));
ROUTE74.setFromField(std::string("bottom_changed"));
ROUTE74.setToNode(std::string("bottomBackgroundTexture"));
ROUTE74.setToField(std::string("url"));
Transform24.addChild(&ROUTE74);

ROUTE& ROUTE75 =  ROUTE();
ROUTE75.setFromNode(std::string("UrlSelector"));
ROUTE75.setFromField(std::string("front_changed"));
ROUTE75.setToNode(std::string("frontShader"));
ROUTE75.setToField(std::string("url"));
Transform24.addChild(&ROUTE75);

ROUTE& ROUTE76 =  ROUTE();
ROUTE76.setFromNode(std::string("UrlSelector"));
ROUTE76.setFromField(std::string("back_changed"));
ROUTE76.setToNode(std::string("backShader"));
ROUTE76.setToField(std::string("url"));
Transform24.addChild(&ROUTE76);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromNode(std::string("UrlSelector"));
ROUTE77.setFromField(std::string("left_changed"));
ROUTE77.setToNode(std::string("leftShader"));
ROUTE77.setToField(std::string("url"));
Transform24.addChild(&ROUTE77);

ROUTE& ROUTE78 =  ROUTE();
ROUTE78.setFromNode(std::string("UrlSelector"));
ROUTE78.setFromField(std::string("right_changed"));
ROUTE78.setToNode(std::string("rightShader"));
ROUTE78.setToField(std::string("url"));
Transform24.addChild(&ROUTE78);

ROUTE& ROUTE79 =  ROUTE();
ROUTE79.setFromNode(std::string("UrlSelector"));
ROUTE79.setFromField(std::string("top_changed"));
ROUTE79.setToNode(std::string("topShader"));
ROUTE79.setToField(std::string("url"));
Transform24.addChild(&ROUTE79);

ROUTE& ROUTE80 =  ROUTE();
ROUTE80.setFromNode(std::string("UrlSelector"));
ROUTE80.setFromField(std::string("bottom_changed"));
ROUTE80.setToNode(std::string("bottomShader"));
ROUTE80.setToField(std::string("url"));
Transform24.addChild(&ROUTE80);

Scene15.addChild(&Transform24);

X3D0.setScene(&Scene15);

//}
