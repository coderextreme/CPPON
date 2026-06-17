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
X3D0.setProfile(std::string("Full"));
X3D0.setVersion(std::string("4.1"));
head& head1 =  head();
//<component name='Shape' level='4'></component>
//<component name='DIS' level='2'></component>
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
meta10.setContent(std::string("bumpyx_itesliders.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("description"));
meta11.setContent(std::string("*Bumpy flower with prototype sliders*"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("creator"));
meta12.setContent(std::string("Doug Sanden, Christoph Valentin, John Carlson"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("identifier"));
meta13.setContent(std::string("https://github.com/coderextreme/JSONverse/public/x3d/bumpyx_itesliders.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("generator"));
meta14.setContent(std::string("PSPad, http://www.pspad.com/"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("license"));
meta15.setContent(std::string("license.html"));
head1.addMeta(&meta15);

X3D0.setHead(&head1);

//\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution,
//It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak)
//open for their \"discussion about the teapot\"
Scene& Scene16 =  Scene();
//LayerSet with two layers, navigation happens in layer 1
LayerSet& LayerSet17 =  LayerSet();
LayerSet17.setActiveLayer(1);
LayerSet17.setOrder(new int32_t[]{1,2,3}, 3);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
Layer& Layer18 =  Layer();
Layer18.setPickable(true);
Layer18.setObjectType((std::string[]){"ALL"}, 1);
//basic nodes, which might be present in any scene
NavigationInfo& NavigationInfo19 =  NavigationInfo();
NavigationInfo19.setType((std::string[]){"EXAMINE"}, 1);
NavigationInfo19.setAvatarSize(new float[]{0.25,1.75,0.75}, 3);
Layer18.addChild(&NavigationInfo19);

DirectionalLight& DirectionalLight20 =  DirectionalLight();
DirectionalLight20.setAmbientIntensity(0.2);
DirectionalLight20.setDirection(new float[]{0.0,-1.0,0.0});
Layer18.addChild(&DirectionalLight20);

DirectionalLight& DirectionalLight21 =  DirectionalLight();
DirectionalLight21.setAmbientIntensity(0.2);
DirectionalLight21.setDirection(new float[]{-1.0,-0.1,-1.0});
Layer18.addChild(&DirectionalLight21);

Viewpoint& Viewpoint22 =  Viewpoint();
Viewpoint22.setDescription(std::string("My Overview"));
Viewpoint22.setFieldOfView(1.570796);
Viewpoint22.setPosition(new float[]{0.0,1.75,60.0});
Layer18.addChild(&Viewpoint22);

//this group contains the red/green/blue 3D crosshair
Group& Group23 =  Group();
//Arrow X
Transform& Transform24 =  Transform();
Transform24.setTranslation(new float[]{25.0,0.0,0.0});
Transform24.setRotation(new float[]{0.0,0.0,-1.0,1.57});
Shape& Shape25 =  Shape();
Cylinder& Cylinder26 =  Cylinder();
Cylinder26.setDEF(std::string("Shaft"));
Cylinder26.setRadius(0.35);
Cylinder26.setHeight(50);
Shape25.setGeometry(&Cylinder26);

Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setDEF(std::string("RED"));
Material28.setDiffuseColor(new float[]{1.0,0.0,0.0});
Material28.setEmissiveColor(new float[]{1.0,0.0,0.0});
Appearance27.addChild(&Material28);

Shape25.addChild(&Appearance27);

Transform24.addChild(&Shape25);

Group23.addChild(&Transform24);

Transform& Transform29 =  Transform();
Transform29.setTranslation(new float[]{50.0,0.0,0.0});
Transform29.setRotation(new float[]{0.0,0.0,-1.0,1.57});
Shape& Shape30 =  Shape();
Cone& Cone31 =  Cone();
Cone31.setDEF(std::string("Tip"));
Cone31.setBottomRadius(0.8);
Cone31.setHeight(3);
Shape30.setGeometry(&Cone31);

Appearance& Appearance32 =  Appearance();
Material& Material33 =  Material();
Material33.setUSE(std::string("RED"));
Appearance32.addChild(&Material33);

Shape30.addChild(&Appearance32);

Transform29.addChild(&Shape30);

Group23.addChild(&Transform29);

//Arrow Y
Transform& Transform34 =  Transform();
Transform34.setTranslation(new float[]{0.0,25.0,0.0});
Shape& Shape35 =  Shape();
Cylinder& Cylinder36 =  Cylinder();
Cylinder36.setUSE(std::string("Shaft"));
Shape35.setGeometry(&Cylinder36);

Appearance& Appearance37 =  Appearance();
Material& Material38 =  Material();
Material38.setDEF(std::string("GREEN"));
Material38.setDiffuseColor(new float[]{0.0,1.0,0.0});
Material38.setEmissiveColor(new float[]{0.0,1.0,0.0});
Appearance37.addChild(&Material38);

Shape35.addChild(&Appearance37);

Transform34.addChild(&Shape35);

Group23.addChild(&Transform34);

Transform& Transform39 =  Transform();
Transform39.setTranslation(new float[]{0.0,50.0,0.0});
Shape& Shape40 =  Shape();
Cone& Cone41 =  Cone();
Cone41.setUSE(std::string("Tip"));
Shape40.setGeometry(&Cone41);

Appearance& Appearance42 =  Appearance();
Material& Material43 =  Material();
Material43.setUSE(std::string("GREEN"));
Appearance42.addChild(&Material43);

Shape40.addChild(&Appearance42);

Transform39.addChild(&Shape40);

Group23.addChild(&Transform39);

//Arrow Z
Transform& Transform44 =  Transform();
Transform44.setTranslation(new float[]{0.0,0.0,25.0});
Transform44.setRotation(new float[]{1.0,0.0,0.0,1.57});
Shape& Shape45 =  Shape();
Cylinder& Cylinder46 =  Cylinder();
Cylinder46.setUSE(std::string("Shaft"));
Shape45.setGeometry(&Cylinder46);

Appearance& Appearance47 =  Appearance();
Material& Material48 =  Material();
Material48.setDEF(std::string("BLUE"));
Material48.setDiffuseColor(new float[]{0.0,0.0,1.0});
Material48.setEmissiveColor(new float[]{0.0,0.0,1.0});
Appearance47.addChild(&Material48);

Shape45.addChild(&Appearance47);

Transform44.addChild(&Shape45);

Group23.addChild(&Transform44);

Transform& Transform49 =  Transform();
Transform49.setTranslation(new float[]{0.0,0.0,50.0});
Transform49.setRotation(new float[]{1.0,0.0,0.0,1.57});
Shape& Shape50 =  Shape();
Cone& Cone51 =  Cone();
Cone51.setUSE(std::string("Tip"));
Shape50.setGeometry(&Cone51);

Appearance& Appearance52 =  Appearance();
Material& Material53 =  Material();
Material53.setUSE(std::string("BLUE"));
Appearance52.addChild(&Material53);

Shape50.addChild(&Appearance52);

Transform49.addChild(&Shape50);

Group23.addChild(&Transform49);

Layer18.addChild(&Group23);

//the model that is being reviewed by the users of this scene
Transform& Transform54 =  Transform();
Transform54.setDEF(std::string("FlowerTransform"));
//<Inline DEF=\"Flower\" url='\"bumpyx_ite.x3d\"' />
//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background& Background55 =  Background();
Background55.setBackUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background55.setBottomUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background55.setFrontUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background55.setLeftUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background55.setRightUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background55.setTopUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Transform54.addChild(&Background55);

Transform& Transform56 =  Transform();
Shape& Shape57 =  Shape();
//<Sphere radius='40'></Sphere>
IndexedFaceSet& IndexedFaceSet58 =  IndexedFaceSet();
IndexedFaceSet58.setConvex(false);
IndexedFaceSet58.setDEF(std::string("Orbit"));
Coordinate& Coordinate59 =  Coordinate();
Coordinate59.setDEF(std::string("OrbitCoordinates"));
IndexedFaceSet58.setCoord(&Coordinate59);

Shape57.setGeometry(&IndexedFaceSet58);

Appearance& Appearance60 =  Appearance();
Material& Material61 =  Material();
Material61.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material61.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance60.addChild(&Material61);

ComposedCubeMapTexture& ComposedCubeMapTexture62 =  ComposedCubeMapTexture();
ComposedCubeMapTexture62.setDEF(std::string("texture"));
ImageTexture& ImageTexture63 =  ImageTexture();
ImageTexture63.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture62.setBack(ImageTexture63);

ImageTexture& ImageTexture64 =  ImageTexture();
ImageTexture64.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture62.setBottom(ImageTexture64);

ImageTexture& ImageTexture65 =  ImageTexture();
ImageTexture65.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture62.setFront(ImageTexture65);

ImageTexture& ImageTexture66 =  ImageTexture();
ImageTexture66.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture62.setLeft(ImageTexture66);

ImageTexture& ImageTexture67 =  ImageTexture();
ImageTexture67.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture62.setRight(ImageTexture67);

ImageTexture& ImageTexture68 =  ImageTexture();
ImageTexture68.setUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture62.setTop(ImageTexture68);

Appearance60.addChild(&ComposedCubeMapTexture62);

ComposedShader& ComposedShader69 =  ComposedShader();
ComposedShader69.setDEF(std::string("x_iteShader"));
ComposedShader69.setLanguage(std::string("GLSL"));
field& field70 =  field();
field70.setName(std::string("chromaticDispertion"));
field70.setAccessType(std::string("inputOnly"));
field70.setType(std::string("SFVec3f"));
field70.setValue(std::string("0.98 1 1.033"));
ComposedShader69.addChild(&field70);

field& field71 =  field();
field71.setName(std::string("cube"));
field71.setType(std::string("SFNode"));
field71.setAccessType(std::string("inputOnly"));
ComposedCubeMapTexture& ComposedCubeMapTexture72 =  ComposedCubeMapTexture();
ComposedCubeMapTexture72.setUSE(std::string("texture"));
field71.addChild(&ComposedCubeMapTexture72);

ComposedShader69.addChild(&field71);

field& field73 =  field();
field73.setName(std::string("bias"));
field73.setType(std::string("SFFloat"));
field73.setAccessType(std::string("inputOnly"));
field73.setValue(std::string("0.5"));
ComposedShader69.addChild(&field73);

field& field74 =  field();
field74.setName(std::string("scale"));
field74.setType(std::string("SFFloat"));
field74.setAccessType(std::string("inputOnly"));
field74.setValue(std::string("0.5"));
ComposedShader69.addChild(&field74);

field& field75 =  field();
field75.setName(std::string("power"));
field75.setType(std::string("SFFloat"));
field75.setAccessType(std::string("inputOnly"));
field75.setValue(std::string("2"));
ComposedShader69.addChild(&field75);

field& field76 =  field();
field76.setName(std::string("a"));
field76.setType(std::string("SFFloat"));
field76.setAccessType(std::string("inputOutput"));
field76.setValue(std::string("15"));
ComposedShader69.addChild(&field76);

field& field77 =  field();
field77.setName(std::string("b"));
field77.setType(std::string("SFFloat"));
field77.setAccessType(std::string("inputOutput"));
field77.setValue(std::string("5"));
ComposedShader69.addChild(&field77);

field& field78 =  field();
field78.setName(std::string("c"));
field78.setType(std::string("SFFloat"));
field78.setAccessType(std::string("inputOutput"));
field78.setValue(std::string("5"));
ComposedShader69.addChild(&field78);

field& field79 =  field();
field79.setName(std::string("d"));
field79.setType(std::string("SFFloat"));
field79.setAccessType(std::string("inputOutput"));
field79.setValue(std::string("5"));
ComposedShader69.addChild(&field79);

field& field80 =  field();
field80.setName(std::string("tdelta"));
field80.setType(std::string("SFFloat"));
field80.setAccessType(std::string("inputOutput"));
field80.setValue(std::string("0"));
ComposedShader69.addChild(&field80);

field& field81 =  field();
field81.setName(std::string("pdelta"));
field81.setType(std::string("SFFloat"));
field81.setAccessType(std::string("inputOutput"));
field81.setValue(std::string("0"));
ComposedShader69.addChild(&field81);

ShaderPart& ShaderPart82 =  ShaderPart();
ShaderPart82.setUrl((std::string[]){"../shaders/x_ite_flowers_chromatic.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"}, 2);
ShaderPart82.setType(std::string("VERTEX"));
ComposedShader69.setParts(&ShaderPart82);

ShaderPart& ShaderPart83 =  ShaderPart();
ShaderPart83.setUrl((std::string[]){"../shaders/x_ite.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}, 2);
ShaderPart83.setType(std::string("FRAGMENT"));
ComposedShader69.setParts(&ShaderPart83);

//TO CONVERT TO A SPHERE
//<ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart>
//<ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/xite_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>
Appearance60.addChild(&ComposedShader69);

Shape57.addChild(&Appearance60);

Transform56.addChild(&Shape57);

Transform54.addChild(&Transform56);

Layer18.addChild(&Transform54);

Script& Script84 =  Script();
Script84.setDEF(std::string("OrbitScript"));
field& field85 =  field();
field85.setName(std::string("coordinates"));
field85.setAccessType(std::string("inputOutput"));
field85.setType(std::string("MFVec3f"));
Script84.addChild(&field85);

field& field86 =  field();
field86.setName(std::string("coordIndexes"));
field86.setAccessType(std::string("outputOnly"));
field86.setType(std::string("MFInt32"));
Script84.addChild(&field86);

field& field87 =  field();
field87.setName(std::string("a"));
field87.setType(std::string("SFFloat"));
field87.setAccessType(std::string("inputOutput"));
field87.setValue(std::string("10"));
Script84.addChild(&field87);

field& field88 =  field();
field88.setName(std::string("b"));
field88.setType(std::string("SFFloat"));
field88.setAccessType(std::string("inputOutput"));
field88.setValue(std::string("10"));
Script84.addChild(&field88);

field& field89 =  field();
field89.setName(std::string("c"));
field89.setType(std::string("SFFloat"));
field89.setAccessType(std::string("inputOutput"));
field89.setValue(std::string("2"));
Script84.addChild(&field89);

field& field90 =  field();
field90.setName(std::string("d"));
field90.setType(std::string("SFFloat"));
field90.setAccessType(std::string("inputOutput"));
field90.setValue(std::string("2"));
Script84.addChild(&field90);

field& field91 =  field();
field91.setName(std::string("pdelta"));
field91.setType(std::string("SFFloat"));
field91.setAccessType(std::string("inputOutput"));
field91.setValue(std::string("0"));
Script84.addChild(&field91);

field& field92 =  field();
field92.setName(std::string("tdelta"));
field92.setType(std::string("SFFloat"));
field92.setAccessType(std::string("inputOutput"));
field92.setValue(std::string("0"));
Script84.addChild(&field92);


//Script84.setSourceCode(std::string("ecmascript:")+
//_T("function initialize() {")+
//_T("     var resolution = 300;")+
//_T("     var theta = 0.0;")+
//_T("     var phi = 0.0;")+
//_T("     var delta = (2 * 3.141592653) / (resolution-1);")+
//_T("     var crds = new MFVec3f();")+
//_T("     for ( i = 0; i < resolution; i++) {")+
//_T("     	for ( j = 0; j < resolution; j++) {")+
//_T("		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);")+
//_T("		crds.push(new SFVec3f(")+
//_T("			rho * Math.cos(phi) * Math.cos(theta),")+
//_T("			rho * Math.cos(phi) * Math.sin(theta),")+
//_T("			rho * Math.sin(phi)")+
//_T("		));")+
//_T("		theta += delta;")+
//_T("	}")+
//_T("	phi += delta;")+
//_T("     }")+
//_T("     coordinates = crds;")+
//_T("     var cis = new MFInt32();")+
//_T("     for ( i = 0; i < resolution-1; i++) {")+
//_T("     	for ( j = 0; j < resolution-1; j++) {")+
//_T("	     cis.push(i*resolution+j);")+
//_T("	     cis.push(i*resolution+j+1);")+
//_T("	     cis.push((i+1)*resolution+j+1);")+
//_T("	     cis.push((i+1)*resolution+j);")+
//_T("	     cis.push(-1);")+
//_T("	}")+
//_T("    }")+
//_T("    coordIndexes = cis;")+
//_T("}"));
Layer18.addChild(&Script84);

ROUTE& ROUTE93 =  ROUTE();
ROUTE93.setFromField(std::string("coordIndexes"));
ROUTE93.setFromNode(std::string("OrbitScript"));
ROUTE93.setToField(std::string("set_coordIndex"));
ROUTE93.setToNode(std::string("Orbit"));
Layer18.addChild(&ROUTE93);

ROUTE& ROUTE94 =  ROUTE();
ROUTE94.setFromField(std::string("coordinates"));
ROUTE94.setFromNode(std::string("OrbitScript"));
ROUTE94.setToField(std::string("set_point"));
ROUTE94.setToNode(std::string("OrbitCoordinates"));
Layer18.addChild(&ROUTE94);

LayerSet17.addChild(&Layer18);

LayoutLayer& LayoutLayer95 =  LayoutLayer();
LayoutLayer95.setPickable(true);
LayoutLayer95.setObjectType((std::string[]){"ALL"}, 1);
Layout& Layout96 =  Layout();
Layout96.setAlign((std::string[]){"LEFT", "BOTTOM"}, 2);
Layout96.setOffset(new float[]{-0.2,0.19}, 2);
Layout96.setSize(new float[]{0.4,0.6}, 2);
LayoutLayer95.setLayout(Layout96);

Viewport& Viewport97 =  Viewport();
Viewport97.setClipBoundary(new float[]{0.0,1.0,0.0,1.0}, 4);
LayoutLayer95.setViewport(Viewport97);

Transform& Transform98 =  Transform();
Transform98.setTranslation(new float[]{0.0,0.0,-3.0});
Shape& Shape99 =  Shape();
Appearance& Appearance100 =  Appearance();
Material& Material101 =  Material();
Material101.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material101.setTransparency(0.7);
Appearance100.addChild(&Material101);

Shape99.addChild(&Appearance100);

Box& Box102 =  Box();
Box102.setSize(new float[]{100.0,100.0,0.02});
Shape99.setGeometry(&Box102);

Transform98.addChild(&Shape99);

LayoutLayer95.addChild(&Transform98);

Transform& Transform103 =  Transform();
Transform103.setDEF(std::string("equationTransform"));
Transform& Transform104 =  Transform();
Transform104.setTranslation(new float[]{0.0,0.0,-20.0});
Shape& Shape105 =  Shape();
Text& Text106 =  Text();
Text106.setDEF(std::string("equation"));
Text106.setString((std::string[]){"r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"}, 1);
CFontStyle& FontStyle107 =  CFontStyle();
FontStyle107.setSize(0.09);
Text106.setFontStyle(&FontStyle107);

Shape105.setGeometry(&Text106);

Appearance& Appearance108 =  Appearance();
Material& Material109 =  Material();
Material109.setDiffuseColor(new float[]{1.0,1.0,0.0});
Appearance108.addChild(&Material109);

Shape105.addChild(&Appearance108);

Transform104.addChild(&Shape105);

Transform103.addChild(&Transform104);

LayoutLayer95.addChild(&Transform103);

ProtoDeclare& ProtoDeclare110 =  ProtoDeclare();
ProtoDeclare110.setName(std::string("SliderProto"));
ProtoInterface& ProtoInterface111 =  ProtoInterface();
field& field112 =  field();
field112.setName(std::string("sliderTranslation"));
field112.setAccessType(std::string("inputOutput"));
field112.setType(std::string("SFVec3f"));
field112.setValue(std::string("0 0.7 0"));
ProtoInterface111.addChild(&field112);

field& field113 =  field();
field113.setName(std::string("transformTranslation"));
field113.setAccessType(std::string("inputOutput"));
field113.setType(std::string("SFVec3f"));
field113.setValue(std::string("0 0 0.1"));
ProtoInterface111.addChild(&field113);

field& field114 =  field();
field114.setName(std::string("sensorTranslation"));
field114.setAccessType(std::string("inputOutput"));
field114.setType(std::string("SFVec3f"));
field114.setValue(std::string("0 0 0"));
ProtoInterface111.addChild(&field114);

field& field115 =  field();
field115.setName(std::string("textString"));
field115.setAccessType(std::string("inputOutput"));
field115.setType(std::string("MFString"));
field115.setValue(std::string("\"a=\""));
ProtoInterface111.addChild(&field115);

field& field116 =  field();
field116.setName(std::string("parameterScale"));
field116.setAccessType(std::string("inputOutput"));
field116.setType(std::string("SFFloat"));
field116.setValue(std::string("30"));
ProtoInterface111.addChild(&field116);

field& field117 =  field();
field117.setName(std::string("parameterName"));
field117.setAccessType(std::string("inputOutput"));
field117.setType(std::string("SFString"));
field117.setValue(std::string("a"));
ProtoInterface111.addChild(&field117);

field& field118 =  field();
field118.setName(std::string("petNames"));
field118.setAccessType(std::string("inputOutput"));
field118.setType(std::string("MFString"));
ProtoInterface111.addChild(&field118);

field& field119 =  field();
field119.setName(std::string("shaderNode"));
field119.setAccessType(std::string("inputOutput"));
field119.setType(std::string("SFNode"));
ProtoInterface111.addChild(&field119);

ProtoDeclare110.addChild(&ProtoInterface111);

ProtoBody& ProtoBody120 =  ProtoBody();
Group& Group121 =  Group();
Transform& Transform122 =  Transform();
Transform122.setDEF(std::string("protoSlider"));
Transform122.setTranslation(new float[]{0.0,0.7,0.0});
IS& IS123 =  IS();
Connect& connect124 =  Connect();
connect124.setNodeField(std::string("translation"));
connect124.setProtoField(std::string("sliderTranslation"));
IS123.addChild(&connect124);

Transform122.addChild(&IS123);

Transform& Transform125 =  Transform();
Transform125.setDEF(std::string("protoTransform"));
Transform125.setTranslation(new float[]{0.0,0.0,0.1});
IS& IS126 =  IS();
Connect& connect127 =  Connect();
connect127.setNodeField(std::string("translation"));
connect127.setProtoField(std::string("sensorTranslation"));
IS126.addChild(&connect127);

Transform125.addChild(&IS126);

PlaneSensor& PlaneSensor128 =  PlaneSensor();
PlaneSensor128.setDEF(std::string("protoSensor"));
PlaneSensor128.setDescription(std::string("Grab with mouse to adjust slider"));
PlaneSensor128.setMaxPosition(new float[]{1.0,0.0});
Transform125.addChild(&PlaneSensor128);

Transform& Transform129 =  Transform();
Transform129.setTranslation(new float[]{0.0,0.0,0.0});
TouchSensor& TouchSensor130 =  TouchSensor();
TouchSensor130.setDEF(std::string("protoTS"));
Transform129.addChild(&TouchSensor130);

Transform125.addChild(&Transform129);

Transform& Transform131 =  Transform();
Shape& Shape132 =  Shape();
Text& Text133 =  Text();
Text133.setDEF(std::string("protoText"));
Text133.setString((std::string[]){"a="}, 1);
IS& IS134 =  IS();
Connect& connect135 =  Connect();
connect135.setNodeField(std::string("string"));
connect135.setProtoField(std::string("textString"));
IS134.addChild(&connect135);

Text133.addChild(&IS134);

CFontStyle& FontStyle136 =  CFontStyle();
FontStyle136.setSize(0.23);
Text133.setFontStyle(&FontStyle136);

Shape132.setGeometry(&Text133);

Appearance& Appearance137 =  Appearance();
Material& Material138 =  Material();
Appearance137.addChild(&Material138);

Shape132.addChild(&Appearance137);

Transform131.addChild(&Shape132);

Transform125.addChild(&Transform131);

Transform122.addChild(&Transform125);

Group121.addChild(&Transform122);

Script& Script139 =  Script();
Script139.setUrl((std::string[]){"../javascripts/X3DUser.js", "https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DUser.js"}, 2);
Script139.setDEF(std::string("protoValueTransformerScript"));
Script139.setDirectOutput(true);
Script139.setMustEvaluate(true);
field& field140 =  field();
field140.setName(std::string("protoScale"));
field140.setAccessType(std::string("inputOutput"));
field140.setType(std::string("SFFloat"));
Script139.addChild(&field140);

field& field141 =  field();
field141.setName(std::string("petNames"));
field141.setAccessType(std::string("inputOutput"));
field141.setType(std::string("MFString"));
Script139.addChild(&field141);

field& field142 =  field();
field142.setName(std::string("protoParameterName"));
field142.setAccessType(std::string("inputOutput"));
field142.setType(std::string("SFString"));
Script139.addChild(&field142);

field& field143 =  field();
field143.setName(std::string("shader"));
field143.setAccessType(std::string("inputOutput"));
field143.setType(std::string("SFNode"));
Script139.addChild(&field143);

field& field144 =  field();
field144.setName(std::string("newTranslation"));
field144.setAccessType(std::string("inputOnly"));
field144.setType(std::string("SFVec3f"));
field144.setValue(std::string("1 1 1"));
Script139.addChild(&field144);

field& field145 =  field();
field145.setName(std::string("protoValue_changed"));
field145.setAccessType(std::string("outputOnly"));
field145.setType(std::string("SFFloat"));
field145.setValue(std::string("1"));
Script139.addChild(&field145);

field& field146 =  field();
field146.setName(std::string("protoText_changed"));
field146.setAccessType(std::string("outputOnly"));
field146.setType(std::string("MFString"));
field146.setValue(std::string("\"1.0\""));
Script139.addChild(&field146);

IS& IS147 =  IS();
Connect& connect148 =  Connect();
connect148.setNodeField(std::string("protoScale"));
connect148.setProtoField(std::string("parameterScale"));
IS147.addChild(&connect148);

Connect& connect149 =  Connect();
connect149.setNodeField(std::string("petNames"));
connect149.setProtoField(std::string("petNames"));
IS147.addChild(&connect149);

Connect& connect150 =  Connect();
connect150.setNodeField(std::string("protoParameterName"));
connect150.setProtoField(std::string("parameterName"));
IS147.addChild(&connect150);

Connect& connect151 =  Connect();
connect151.setNodeField(std::string("shader"));
connect151.setProtoField(std::string("shaderNode"));
IS147.addChild(&connect151);

Script139.addChild(&IS147);

Group121.addChild(&Script139);

ROUTE& ROUTE152 =  ROUTE();
ROUTE152.setFromField(std::string("translation_changed"));
ROUTE152.setFromNode(std::string("protoSensor"));
ROUTE152.setToField(std::string("set_translation"));
ROUTE152.setToNode(std::string("protoTransform"));
Group121.addChild(&ROUTE152);

ROUTE& ROUTE153 =  ROUTE();
ROUTE153.setFromField(std::string("translation_changed"));
ROUTE153.setFromNode(std::string("protoSensor"));
ROUTE153.setToField(std::string("newTranslation"));
ROUTE153.setToNode(std::string("protoValueTransformerScript"));
Group121.addChild(&ROUTE153);

ROUTE& ROUTE154 =  ROUTE();
ROUTE154.setFromField(std::string("protoText_changed"));
ROUTE154.setFromNode(std::string("protoValueTransformerScript"));
ROUTE154.setToField(std::string("string"));
ROUTE154.setToNode(std::string("protoText"));
Group121.addChild(&ROUTE154);

ProtoBody120.addChild(&Group121);

ProtoDeclare110.addChild(&ProtoBody120);

LayoutLayer95.addChild(&ProtoDeclare110);

ProtoInstance& ProtoInstance155 =  ProtoInstance();
ProtoInstance155.setName(std::string("SliderProto"));
ProtoInstance155.setDEF(std::string("aPI"));
fieldValue& fieldValue156 =  fieldValue();
fieldValue156.setName(std::string("sliderTranslation"));
fieldValue156.setValue(std::string("0 0.7 0"));
ProtoInstance155.addChild(&fieldValue156);

fieldValue& fieldValue157 =  fieldValue();
fieldValue157.setName(std::string("transformTranslation"));
fieldValue157.setValue(std::string("0 0 0.1"));
ProtoInstance155.addChild(&fieldValue157);

fieldValue& fieldValue158 =  fieldValue();
fieldValue158.setName(std::string("sensorTranslation"));
fieldValue158.setValue(std::string("0 0 0"));
ProtoInstance155.addChild(&fieldValue158);

fieldValue& fieldValue159 =  fieldValue();
fieldValue159.setName(std::string("textString"));
fieldValue159.setValue(std::string("\"a=\""));
ProtoInstance155.addChild(&fieldValue159);

fieldValue& fieldValue160 =  fieldValue();
fieldValue160.setName(std::string("parameterScale"));
fieldValue160.setValue(std::string("30"));
ProtoInstance155.addChild(&fieldValue160);

fieldValue& fieldValue161 =  fieldValue();
fieldValue161.setName(std::string("parameterName"));
fieldValue161.setValue(std::string("a"));
ProtoInstance155.addChild(&fieldValue161);

fieldValue& fieldValue162 =  fieldValue();
fieldValue162.setName(std::string("petNames"));
fieldValue162.setValue(std::string("\"yottzumm\" \"group1-petname\""));
ProtoInstance155.addChild(&fieldValue162);

fieldValue& fieldValue163 =  fieldValue();
fieldValue163.setName(std::string("shaderNode"));
ComposedShader& ComposedShader164 =  ComposedShader();
ComposedShader164.setUSE(std::string("x_iteShader"));
fieldValue163.addChild(&ComposedShader164);

ProtoInstance155.addChild(&fieldValue163);

LayoutLayer95.addChild(&ProtoInstance155);

ProtoInstance& ProtoInstance165 =  ProtoInstance();
ProtoInstance165.setName(std::string("SliderProto"));
ProtoInstance165.setDEF(std::string("bPI"));
fieldValue& fieldValue166 =  fieldValue();
fieldValue166.setName(std::string("sliderTranslation"));
fieldValue166.setValue(std::string("0 0.4 0"));
ProtoInstance165.addChild(&fieldValue166);

fieldValue& fieldValue167 =  fieldValue();
fieldValue167.setName(std::string("transformTranslation"));
fieldValue167.setValue(std::string("0 0 0.1"));
ProtoInstance165.addChild(&fieldValue167);

fieldValue& fieldValue168 =  fieldValue();
fieldValue168.setName(std::string("sensorTranslation"));
fieldValue168.setValue(std::string("0 0 0"));
ProtoInstance165.addChild(&fieldValue168);

fieldValue& fieldValue169 =  fieldValue();
fieldValue169.setName(std::string("textString"));
fieldValue169.setValue(std::string("\"b=\""));
ProtoInstance165.addChild(&fieldValue169);

fieldValue& fieldValue170 =  fieldValue();
fieldValue170.setName(std::string("parameterScale"));
fieldValue170.setValue(std::string("30"));
ProtoInstance165.addChild(&fieldValue170);

fieldValue& fieldValue171 =  fieldValue();
fieldValue171.setName(std::string("parameterName"));
fieldValue171.setValue(std::string("b"));
ProtoInstance165.addChild(&fieldValue171);

fieldValue& fieldValue172 =  fieldValue();
fieldValue172.setName(std::string("petNames"));
fieldValue172.setValue(std::string("\"yottzumm\" \"group1-petname\""));
ProtoInstance165.addChild(&fieldValue172);

fieldValue& fieldValue173 =  fieldValue();
fieldValue173.setName(std::string("shaderNode"));
ComposedShader& ComposedShader174 =  ComposedShader();
ComposedShader174.setUSE(std::string("x_iteShader"));
fieldValue173.addChild(&ComposedShader174);

ProtoInstance165.addChild(&fieldValue173);

LayoutLayer95.addChild(&ProtoInstance165);

ProtoInstance& ProtoInstance175 =  ProtoInstance();
ProtoInstance175.setName(std::string("SliderProto"));
ProtoInstance175.setDEF(std::string("cPI"));
fieldValue& fieldValue176 =  fieldValue();
fieldValue176.setName(std::string("sliderTranslation"));
fieldValue176.setValue(std::string("0 0.1 0"));
ProtoInstance175.addChild(&fieldValue176);

fieldValue& fieldValue177 =  fieldValue();
fieldValue177.setName(std::string("transformTranslation"));
fieldValue177.setValue(std::string("0 0 0.1"));
ProtoInstance175.addChild(&fieldValue177);

fieldValue& fieldValue178 =  fieldValue();
fieldValue178.setName(std::string("sensorTranslation"));
fieldValue178.setValue(std::string("0 0 0"));
ProtoInstance175.addChild(&fieldValue178);

fieldValue& fieldValue179 =  fieldValue();
fieldValue179.setName(std::string("textString"));
fieldValue179.setValue(std::string("\"c=\""));
ProtoInstance175.addChild(&fieldValue179);

fieldValue& fieldValue180 =  fieldValue();
fieldValue180.setName(std::string("parameterScale"));
fieldValue180.setValue(std::string("20"));
ProtoInstance175.addChild(&fieldValue180);

fieldValue& fieldValue181 =  fieldValue();
fieldValue181.setName(std::string("parameterName"));
fieldValue181.setValue(std::string("c"));
ProtoInstance175.addChild(&fieldValue181);

fieldValue& fieldValue182 =  fieldValue();
fieldValue182.setName(std::string("petNames"));
fieldValue182.setValue(std::string("\"yottzumm\" \"yottzumm2\" \"group1-petname\""));
ProtoInstance175.addChild(&fieldValue182);

fieldValue& fieldValue183 =  fieldValue();
fieldValue183.setName(std::string("shaderNode"));
ComposedShader& ComposedShader184 =  ComposedShader();
ComposedShader184.setUSE(std::string("x_iteShader"));
fieldValue183.addChild(&ComposedShader184);

ProtoInstance175.addChild(&fieldValue183);

LayoutLayer95.addChild(&ProtoInstance175);

ProtoInstance& ProtoInstance185 =  ProtoInstance();
ProtoInstance185.setName(std::string("SliderProto"));
ProtoInstance185.setDEF(std::string("dPI"));
fieldValue& fieldValue186 =  fieldValue();
fieldValue186.setName(std::string("sliderTranslation"));
fieldValue186.setValue(std::string("0 -0.2 0"));
ProtoInstance185.addChild(&fieldValue186);

fieldValue& fieldValue187 =  fieldValue();
fieldValue187.setName(std::string("transformTranslation"));
fieldValue187.setValue(std::string("0 0 0.1"));
ProtoInstance185.addChild(&fieldValue187);

fieldValue& fieldValue188 =  fieldValue();
fieldValue188.setName(std::string("sensorTranslation"));
fieldValue188.setValue(std::string("0 0 0"));
ProtoInstance185.addChild(&fieldValue188);

fieldValue& fieldValue189 =  fieldValue();
fieldValue189.setName(std::string("textString"));
fieldValue189.setValue(std::string("\"d=\""));
ProtoInstance185.addChild(&fieldValue189);

fieldValue& fieldValue190 =  fieldValue();
fieldValue190.setName(std::string("parameterScale"));
fieldValue190.setValue(std::string("20"));
ProtoInstance185.addChild(&fieldValue190);

fieldValue& fieldValue191 =  fieldValue();
fieldValue191.setName(std::string("parameterName"));
fieldValue191.setValue(std::string("d"));
ProtoInstance185.addChild(&fieldValue191);

fieldValue& fieldValue192 =  fieldValue();
fieldValue192.setName(std::string("petNames"));
fieldValue192.setValue(std::string("\"yottzumm\" \"yottzumm2\" \"group1-petname\""));
ProtoInstance185.addChild(&fieldValue192);

fieldValue& fieldValue193 =  fieldValue();
fieldValue193.setName(std::string("shaderNode"));
ComposedShader& ComposedShader194 =  ComposedShader();
ComposedShader194.setUSE(std::string("x_iteShader"));
fieldValue193.addChild(&ComposedShader194);

ProtoInstance185.addChild(&fieldValue193);

LayoutLayer95.addChild(&ProtoInstance185);

ProtoInstance& ProtoInstance195 =  ProtoInstance();
ProtoInstance195.setName(std::string("SliderProto"));
ProtoInstance195.setDEF(std::string("tdeltaPI"));
fieldValue& fieldValue196 =  fieldValue();
fieldValue196.setName(std::string("sliderTranslation"));
fieldValue196.setValue(std::string("0 -0.5 0"));
ProtoInstance195.addChild(&fieldValue196);

fieldValue& fieldValue197 =  fieldValue();
fieldValue197.setName(std::string("transformTranslation"));
fieldValue197.setValue(std::string("0 0 0.1"));
ProtoInstance195.addChild(&fieldValue197);

fieldValue& fieldValue198 =  fieldValue();
fieldValue198.setName(std::string("sensorTranslation"));
fieldValue198.setValue(std::string("0 0 0"));
ProtoInstance195.addChild(&fieldValue198);

fieldValue& fieldValue199 =  fieldValue();
fieldValue199.setName(std::string("textString"));
fieldValue199.setValue(std::string("\"tdelta=\""));
ProtoInstance195.addChild(&fieldValue199);

fieldValue& fieldValue200 =  fieldValue();
fieldValue200.setName(std::string("parameterScale"));
fieldValue200.setValue(std::string("6.28"));
ProtoInstance195.addChild(&fieldValue200);

fieldValue& fieldValue201 =  fieldValue();
fieldValue201.setName(std::string("parameterName"));
fieldValue201.setValue(std::string("tdelta"));
ProtoInstance195.addChild(&fieldValue201);

fieldValue& fieldValue202 =  fieldValue();
fieldValue202.setName(std::string("petNames"));
fieldValue202.setValue(std::string("\"yottzumm2\" \"group1-petname\""));
ProtoInstance195.addChild(&fieldValue202);

fieldValue& fieldValue203 =  fieldValue();
fieldValue203.setName(std::string("shaderNode"));
ComposedShader& ComposedShader204 =  ComposedShader();
ComposedShader204.setUSE(std::string("x_iteShader"));
fieldValue203.addChild(&ComposedShader204);

ProtoInstance195.addChild(&fieldValue203);

LayoutLayer95.addChild(&ProtoInstance195);

ProtoInstance& ProtoInstance205 =  ProtoInstance();
ProtoInstance205.setName(std::string("SliderProto"));
ProtoInstance205.setDEF(std::string("pdeltaPI"));
fieldValue& fieldValue206 =  fieldValue();
fieldValue206.setName(std::string("sliderTranslation"));
fieldValue206.setValue(std::string("0 -0.8 0"));
ProtoInstance205.addChild(&fieldValue206);

fieldValue& fieldValue207 =  fieldValue();
fieldValue207.setName(std::string("transformTranslation"));
fieldValue207.setValue(std::string("0 0 0.1"));
ProtoInstance205.addChild(&fieldValue207);

fieldValue& fieldValue208 =  fieldValue();
fieldValue208.setName(std::string("sensorTranslation"));
fieldValue208.setValue(std::string("0 0 0"));
ProtoInstance205.addChild(&fieldValue208);

fieldValue& fieldValue209 =  fieldValue();
fieldValue209.setName(std::string("textString"));
fieldValue209.setValue(std::string("\"pdelta=\""));
ProtoInstance205.addChild(&fieldValue209);

fieldValue& fieldValue210 =  fieldValue();
fieldValue210.setName(std::string("parameterScale"));
fieldValue210.setValue(std::string("6.28"));
ProtoInstance205.addChild(&fieldValue210);

fieldValue& fieldValue211 =  fieldValue();
fieldValue211.setName(std::string("parameterName"));
fieldValue211.setValue(std::string("pdelta"));
ProtoInstance205.addChild(&fieldValue211);

fieldValue& fieldValue212 =  fieldValue();
fieldValue212.setName(std::string("petNames"));
fieldValue212.setValue(std::string("\"yottzumm2\" \"group1-petname\""));
ProtoInstance205.addChild(&fieldValue212);

fieldValue& fieldValue213 =  fieldValue();
fieldValue213.setName(std::string("shaderNode"));
ComposedShader& ComposedShader214 =  ComposedShader();
ComposedShader214.setUSE(std::string("x_iteShader"));
fieldValue213.addChild(&ComposedShader214);

ProtoInstance205.addChild(&fieldValue213);

LayoutLayer95.addChild(&ProtoInstance205);

LayerSet17.addChild(&LayoutLayer95);

Layer& Layer215 =  Layer();
Layer215.setPickable(true);
Layer215.setObjectType((std::string[]){"ALL"}, 1);
Viewpoint& Viewpoint216 =  Viewpoint();
Viewpoint216.setDescription(std::string("My Humanoids"));
Viewpoint216.setFieldOfView(1.570796);
Viewpoint216.setPosition(new float[]{0.0,1.75,80.0});
Layer215.addChild(&Viewpoint216);

Script& Script217 =  Script();
Script217.setUrl((std::string[]){"../javascripts/X3DAvatar.js", "https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DAvatar.js"}, 2);
Script217.setDEF(std::string("HumanoidScript"));
Script217.setDirectOutput(true);
Script217.setMustEvaluate(true);
Layer215.addChild(&Script217);

Group& Group218 =  Group();
Group218.setDEF(std::string("humanoidGroup"));
Group& Group219 =  Group();
Group218.addChild(&Group219);

Layer215.addChild(&Group218);

LayerSet17.addChild(&Layer215);

Scene16.addChild(&LayerSet17);

X3D0.setScene(&Scene16);

//}
