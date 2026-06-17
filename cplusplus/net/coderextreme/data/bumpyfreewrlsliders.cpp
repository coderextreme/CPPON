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
int bumpyfreewrlsliders(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Full"));
X3D0.setVersion(std::string("4.1"));
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

component& component11 =  component();
component11.setName(std::string("DIS"));
component11.setLevel(2);
head1.addChild(&component11);

meta& meta12 =  meta();
meta12.setName(std::string("title"));
meta12.setContent(std::string("bumpyfreewrlsliders.x3d"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("description"));
meta13.setContent(std::string("Bumpy Orbitals with Sliders for FreeWRL"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("creator"));
meta14.setContent(std::string("Doug Sanden, Christoph Valentin, John Carlson"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("identifier"));
meta15.setContent(std::string("https:/coderextreme.net/X3DJSONLD/src/main/data/bumpyfreewrlsliders.x3d"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(std::string("license"));
meta16.setContent(std::string("license.html"));
head1.addMeta(&meta16);

X3D0.setHead(&head1);

Scene& Scene17 =  Scene();
//LayerSet with two layers, navigation happens in layer 1
LayerSet& LayerSet18 =  LayerSet();
LayerSet18.setActiveLayer(1);
LayerSet18.setOrder(new int32_t[]{1,2}, 2);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
//the second layer contains the sliders that are moved with the user's display
//like a HUD (heads up display)
Layer& Layer19 =  Layer();
Layer19.setPickable(True);
Layer19.setObjectType((std::string[]){"ALL"}, 1);
//basic nodes, which might be present in any scene
NavigationInfo& NavigationInfo20 =  NavigationInfo();
NavigationInfo20.setType((std::string[]){"EXAMINE", "FLY", "LOOKAT", "ANY"}, 4);
NavigationInfo20.setAvatarSize(new float[]{0.25,1.75,0.75}, 3);
Layer19.addChild(&NavigationInfo20);

DirectionalLight& DirectionalLight21 =  DirectionalLight();
DirectionalLight21.setAmbientIntensity(0.2);
DirectionalLight21.setDirection(new float[]{0,-1,0});
Layer19.addChild(&DirectionalLight21);

DirectionalLight& DirectionalLight22 =  DirectionalLight();
DirectionalLight22.setAmbientIntensity(0.2);
DirectionalLight22.setDirection(new float[]{-1,-0.1,-1});
Layer19.addChild(&DirectionalLight22);

Viewpoint& Viewpoint23 =  Viewpoint();
Viewpoint23.setDescription(std::string("My Overview"));
Viewpoint23.setFieldOfView(1.570796);
Viewpoint23.setPosition(new float[]{0,1.75,60});
Layer19.addChild(&Viewpoint23);

//this group contains the red/green/blue 3D crosshair
Group& Group24 =  Group();
//Arrow X
Transform& Transform25 =  Transform();
Transform25.setTranslation(new float[]{25,0,0});
Transform25.setRotation(new float[]{0,0,-1,1.57});
Shape& Shape26 =  Shape();
Cylinder& Cylinder27 =  Cylinder();
Cylinder27.setDEF(std::string("Shaft"));
Cylinder27.setRadius(0.35);
Cylinder27.setHeight(50);
Shape26.setGeometry(&Cylinder27);

Appearance& Appearance28 =  Appearance();
Material& Material29 =  Material();
Material29.setDEF(std::string("RED"));
Material29.setDiffuseColor(new float[]{1,0,0});
Material29.setEmissiveColor(new float[]{1,0,0});
Appearance28.addChild(&Material29);

Shape26.addChild(&Appearance28);

Transform25.addChild(&Shape26);

Group24.addChild(&Transform25);

Transform& Transform30 =  Transform();
Transform30.setTranslation(new float[]{50,0,0});
Transform30.setRotation(new float[]{0,0,-1,1.57});
Shape& Shape31 =  Shape();
Cone& Cone32 =  Cone();
Cone32.setDEF(std::string("Tip"));
Cone32.setBottomRadius(0.8);
Cone32.setHeight(3);
Shape31.setGeometry(&Cone32);

Appearance& Appearance33 =  Appearance();
Material& Material34 =  Material();
Material34.setUSE(std::string("RED"));
Appearance33.addChild(&Material34);

Shape31.addChild(&Appearance33);

Transform30.addChild(&Shape31);

Group24.addChild(&Transform30);

//Arrow Y
Transform& Transform35 =  Transform();
Transform35.setTranslation(new float[]{0,25,0});
Shape& Shape36 =  Shape();
Cylinder& Cylinder37 =  Cylinder();
Cylinder37.setUSE(std::string("Shaft"));
Shape36.setGeometry(&Cylinder37);

Appearance& Appearance38 =  Appearance();
Material& Material39 =  Material();
Material39.setDEF(std::string("GREEN"));
Material39.setDiffuseColor(new float[]{0,1,0});
Material39.setEmissiveColor(new float[]{0,1,0});
Appearance38.addChild(&Material39);

Shape36.addChild(&Appearance38);

Transform35.addChild(&Shape36);

Group24.addChild(&Transform35);

Transform& Transform40 =  Transform();
Transform40.setTranslation(new float[]{0,50,0});
Shape& Shape41 =  Shape();
Cone& Cone42 =  Cone();
Cone42.setUSE(std::string("Tip"));
Shape41.setGeometry(&Cone42);

Appearance& Appearance43 =  Appearance();
Material& Material44 =  Material();
Material44.setUSE(std::string("GREEN"));
Appearance43.addChild(&Material44);

Shape41.addChild(&Appearance43);

Transform40.addChild(&Shape41);

Group24.addChild(&Transform40);

//Arrow Z
Transform& Transform45 =  Transform();
Transform45.setTranslation(new float[]{0,0,25});
Transform45.setRotation(new float[]{1,0,0,1.57});
Shape& Shape46 =  Shape();
Cylinder& Cylinder47 =  Cylinder();
Cylinder47.setUSE(std::string("Shaft"));
Shape46.setGeometry(&Cylinder47);

Appearance& Appearance48 =  Appearance();
Material& Material49 =  Material();
Material49.setDEF(std::string("BLUE"));
Material49.setDiffuseColor(new float[]{0,0,1});
Material49.setEmissiveColor(new float[]{0,0,1});
Appearance48.addChild(&Material49);

Shape46.addChild(&Appearance48);

Transform45.addChild(&Shape46);

Group24.addChild(&Transform45);

Transform& Transform50 =  Transform();
Transform50.setTranslation(new float[]{0,0,50});
Transform50.setRotation(new float[]{1,0,0,1.57});
Shape& Shape51 =  Shape();
Cone& Cone52 =  Cone();
Cone52.setUSE(std::string("Tip"));
Shape51.setGeometry(&Cone52);

Appearance& Appearance53 =  Appearance();
Material& Material54 =  Material();
Material54.setUSE(std::string("BLUE"));
Appearance53.addChild(&Material54);

Shape51.addChild(&Appearance53);

Transform50.addChild(&Shape51);

Group24.addChild(&Transform50);

Layer19.addChild(&Group24);

//the model that is being reviewed by the users of this scene
Transform& Transform55 =  Transform();
Transform55.setDEF(std::string("FlowerTransform"));
//<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />
//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background& Background56 =  Background();
Background56.setBackUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background56.setBottomUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background56.setFrontUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background56.setLeftUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background56.setRightUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background56.setTopUrl((std::string[]){"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Transform55.addChild(&Background56);

Transform& Transform57 =  Transform();
Shape& Shape58 =  Shape();
Sphere& Sphere59 =  Sphere();
Sphere59.setRadius(5);
Shape58.setGeometry(&Sphere59);

//<IndexedFaceSet convex=\"false\" DEF=\"Orbit\" creaseAngle=\"0\">
//<Coordinate DEF=\"OrbitCoordinates\"/>
//</IndexedFaceSet>
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
ComposedShader69.setDEF(std::string("freewrlShader"));
ComposedShader69.setLanguage(std::string("GLSL"));
field& field70 =  field();
field70.setName(std::string("fw_textureCoordGenType"));
field70.setAccessType(std::string("inputOutput"));
field70.setType(std::string("SFInt32"));
field70.setValue(std::string("0"));
ComposedShader69.addChild(&field70);

field& field71 =  field();
field71.setName(std::string("chromaticDispertion"));
field71.setAccessType(std::string("initializeOnly"));
field71.setType(std::string("SFVec3f"));
field71.setValue(std::string("0.98 1 1.033"));
ComposedShader69.addChild(&field71);

field& field72 =  field();
field72.setName(std::string("bias"));
field72.setType(std::string("SFFloat"));
field72.setAccessType(std::string("inputOutput"));
field72.setValue(std::string("0.5"));
ComposedShader69.addChild(&field72);

field& field73 =  field();
field73.setName(std::string("scale"));
field73.setType(std::string("SFFloat"));
field73.setAccessType(std::string("inputOutput"));
field73.setValue(std::string("0.5"));
ComposedShader69.addChild(&field73);

field& field74 =  field();
field74.setName(std::string("power"));
field74.setType(std::string("SFFloat"));
field74.setAccessType(std::string("inputOutput"));
field74.setValue(std::string("2"));
ComposedShader69.addChild(&field74);

field& field75 =  field();
field75.setName(std::string("a"));
field75.setType(std::string("SFFloat"));
field75.setAccessType(std::string("inputOutput"));
field75.setValue(std::string("15"));
ComposedShader69.addChild(&field75);

field& field76 =  field();
field76.setName(std::string("b"));
field76.setType(std::string("SFFloat"));
field76.setAccessType(std::string("inputOutput"));
field76.setValue(std::string("5"));
ComposedShader69.addChild(&field76);

field& field77 =  field();
field77.setName(std::string("c"));
field77.setType(std::string("SFFloat"));
field77.setAccessType(std::string("inputOutput"));
field77.setValue(std::string("20"));
ComposedShader69.addChild(&field77);

field& field78 =  field();
field78.setName(std::string("d"));
field78.setType(std::string("SFFloat"));
field78.setAccessType(std::string("inputOutput"));
field78.setValue(std::string("20"));
ComposedShader69.addChild(&field78);

field& field79 =  field();
field79.setName(std::string("tdelta"));
field79.setType(std::string("SFFloat"));
field79.setAccessType(std::string("inputOutput"));
field79.setValue(std::string("0"));
ComposedShader69.addChild(&field79);

field& field80 =  field();
field80.setName(std::string("pdelta"));
field80.setType(std::string("SFFloat"));
field80.setAccessType(std::string("inputOutput"));
field80.setValue(std::string("0"));
ComposedShader69.addChild(&field80);

//<field name='cube' type='SFNode' accessType=\"inputOutput\">
//<ComposedCubeMapTexture USE=\"texture\"/>
//</field>
ShaderPart& ShaderPart81 =  ShaderPart();
ShaderPart81.setType(std::string("VERTEX"));
IS& IS82 =  IS();
Connect& connect83 =  Connect();
connect83.setNodeField(std::string("url"));
connect83.setProtoField(std::string("vertex"));
IS82.addChild(&connect83);

ShaderPart81.addChild(&IS82);

ComposedShader69.setParts(&ShaderPart81);

ShaderPart& ShaderPart84 =  ShaderPart();
ShaderPart84.setType(std::string("FRAGMENT"));
IS& IS85 =  IS();
Connect& connect86 =  Connect();
connect86.setNodeField(std::string("url"));
connect86.setProtoField(std::string("fragment"));
IS85.addChild(&connect86);

ShaderPart84.addChild(&IS85);

ComposedShader69.setParts(&ShaderPart84);

Appearance60.addChild(&ComposedShader69);

//<ComposedShader DEF=\"freewrlShader\" language=\"GLSL\">
//<field name='fw_textureCoordGenType' accessType='inputOutput' type='SFInt32' value='0'></field>
//<field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field>
//<field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field>
//<field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field>
//<field name='power' type='SFFloat' accessType='inputOutput' value='2'></field>
//<field name='a' type='SFFloat' accessType='inputOutput' value='15'></field>
//<field name='b' type='SFFloat' accessType='inputOutput' value='5'></field>
//<field name='c' type='SFFloat' accessType='inputOutput' value='20'></field>
//<field name='d' type='SFFloat' accessType='inputOutput' value='20'></field>
//<field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field>
//<field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field>
//<ShaderPart type='VERTEX'>
//<IS>
//<connect nodeField=\"url\" protoField=\"vertex\"/>
//</IS>
//</ShaderPart>
//<ShaderPart type='FRAGMENT'>
//<IS>
//<connect nodeField=\"url\" protoField=\"fragment\"/>
//</IS>
//</ShaderPart>
//</ComposedShader>
Shape58.addChild(&Appearance60);

Transform57.addChild(&Shape58);

Transform55.addChild(&Transform57);

Layer19.addChild(&Transform55);

//<Script DEF=\"OrbitScript\">
//<field accessType=\"inputOutput\" name=\"coordinates\" type=\"MFVec3f\"/>
//<field accessType=\"outputOnly\" name=\"coordIndexes\" type=\"MFInt32\"/>
//<field name='a' type='SFFloat' accessType='inputOutput' value='10'></field>
//<field name='b' type='SFFloat' accessType='inputOutput' value='10'></field>
//<field name='c' type='SFFloat' accessType='inputOutput' value='2'></field>
//<field name='d' type='SFFloat' accessType='inputOutput' value='2'></field>
//<field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field>
//<field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field>
//<![CDATA[ecmascript: function initialize() { var resolution = 300; var theta = 0.0; var phi = 0.0; var delta = (2 * 3.141592653) / (resolution-1); var crds = new MFVec3f(); for ( i = 0; i < resolution; i++) { for ( j = 0; j < resolution; j++) { var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta); crds.push(new SFVec3f( rho * Math.cos(phi) * Math.cos(theta), rho * Math.cos(phi) * Math.sin(theta), rho * Math.sin(phi) )); theta += delta; } phi += delta; } coordinates = crds; var cis = new MFInt32(); for ( i = 0; i < resolution-1; i++) { for ( j = 0; j < resolution-1; j++) { cis.push(i*resolution+j); cis.push(i*resolution+j+1); cis.push((i+1)*resolution+j+1); cis.push((i+1)*resolution+j); cis.push(-1); } } coordIndexes = cis; } ]]></Script>
//<ROUTE fromField=\"coordIndexes\" fromNode=\"OrbitScript\" toField=\"set_coordIndex\" toNode=\"Orbit\"/>
//<ROUTE fromField=\"coordinates\" fromNode=\"OrbitScript\" toField=\"set_point\" toNode=\"OrbitCoordinates\"/>
//DIS multiuser facilities
DISEntityManager& DISEntityManager87 =  DISEntityManager();
DISEntityManager87.setDEF(std::string("EntityManager"));
DISEntityTypeMapping& DISEntityTypeMapping88 =  DISEntityTypeMapping();
DISEntityTypeMapping88.setCategory(77);
DISEntityTypeMapping88.setSpecific(1);
DISEntityTypeMapping88.setUrl((std::string[]){"../data/Leif8Final.x3d", "https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"}, 2);
DISEntityManager87.setMapping(&DISEntityTypeMapping88);

DISEntityTypeMapping& DISEntityTypeMapping89 =  DISEntityTypeMapping();
DISEntityTypeMapping89.setCategory(77);
DISEntityTypeMapping89.setSpecific(2);
DISEntityTypeMapping89.setUrl((std::string[]){"../data/Lily8Final.x3d", "https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"}, 2);
DISEntityManager87.setMapping(&DISEntityTypeMapping89);

DISEntityTypeMapping& DISEntityTypeMapping90 =  DISEntityTypeMapping();
DISEntityTypeMapping90.setCategory(77);
DISEntityTypeMapping90.setSpecific(3);
DISEntityTypeMapping90.setUrl((std::string[]){"../data/Tufani8Final.x3d", "https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"}, 2);
DISEntityManager87.setMapping(&DISEntityTypeMapping90);

DISEntityTypeMapping& DISEntityTypeMapping91 =  DISEntityTypeMapping();
DISEntityTypeMapping91.setCategory(77);
DISEntityTypeMapping91.setSpecific(4);
DISEntityTypeMapping91.setUrl((std::string[]){"../data/Gramps8Final.x3d", "https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"}, 2);
DISEntityManager87.setMapping(&DISEntityTypeMapping91);

Layer19.addChild(&DISEntityManager87);

Collision& Collision92 =  Collision();
Group& Group93 =  Group();
Group93.setDEF(std::string("AvatarHolder"));
Collision92.addChildren(&Group93);

Layer19.addChild(&Collision92);

ROUTE& ROUTE94 =  ROUTE();
ROUTE94.setFromField(std::string("addedEntities"));
ROUTE94.setFromNode(std::string("EntityManager"));
ROUTE94.setToField(std::string("addChildren"));
ROUTE94.setToNode(std::string("AvatarHolder"));
Layer19.addChild(&ROUTE94);

ROUTE& ROUTE95 =  ROUTE();
ROUTE95.setFromField(std::string("removedEntities"));
ROUTE95.setFromNode(std::string("EntityManager"));
ROUTE95.setToField(std::string("removeChildren"));
ROUTE95.setToNode(std::string("AvatarHolder"));
Layer19.addChild(&ROUTE95);

LayerSet18.addChild(&Layer19);

LayoutLayer& LayoutLayer96 =  LayoutLayer();
LayoutLayer96.setPickable(True);
LayoutLayer96.setObjectType((std::string[]){"ALL"}, 1);
//positioning the LayoutLayer
//clipping the LayoutLayer
//the content (children) of the LayoutLayer
//first, the slider for scaling the model
Transform& Transform97 =  Transform();
Transform97.setTranslation(new float[]{0,0,-3});
Shape& Shape98 =  Shape();
Appearance& Appearance99 =  Appearance();
Material& Material100 =  Material();
Material100.setDiffuseColor(new float[]{0.1,0.1,0.1});
Material100.setTransparency(1);
Appearance99.addChild(&Material100);

Shape98.addChild(&Appearance99);

Box& Box101 =  Box();
Box101.setSize(new float[]{100,100,0.02});
Shape98.setGeometry(&Box101);

Transform97.addChild(&Shape98);

LayoutLayer96.addChild(&Transform97);

Transform& Transform102 =  Transform();
Transform102.setDEF(std::string("equationTransform"));
Transform& Transform103 =  Transform();
Transform103.setTranslation(new float[]{0,0,-20});
Shape& Shape104 =  Shape();
Text& Text105 =  Text();
Text105.setDEF(std::string("equation"));
Text105.setString((std::string[]){"r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"}, 1);
CFontStyle& FontStyle106 =  CFontStyle();
FontStyle106.setSize(0.09);
Text105.setFontStyle(&FontStyle106);

Shape104.setGeometry(&Text105);

Appearance& Appearance107 =  Appearance();
Material& Material108 =  Material();
Material108.setDiffuseColor(new float[]{0,1,1});
Appearance107.addChild(&Material108);

Shape104.addChild(&Appearance107);

Transform103.addChild(&Shape104);

Transform102.addChild(&Transform103);

LayoutLayer96.addChild(&Transform102);

ProtoDeclare& ProtoDeclare109 =  ProtoDeclare();
ProtoDeclare109.setName(std::string("SliderProto"));
ProtoInterface& ProtoInterface110 =  ProtoInterface();
field& field111 =  field();
field111.setName(std::string("sliderTranslation"));
field111.setAccessType(std::string("inputOutput"));
field111.setType(std::string("SFVec3f"));
field111.setValue(std::string("0 0.7 0"));
ProtoInterface110.addChild(&field111);

field& field112 =  field();
field112.setName(std::string("transformTranslation"));
field112.setAccessType(std::string("inputOutput"));
field112.setType(std::string("SFVec3f"));
field112.setValue(std::string("0 0 0.1"));
ProtoInterface110.addChild(&field112);

field& field113 =  field();
field113.setName(std::string("sensorTranslation"));
field113.setAccessType(std::string("inputOutput"));
field113.setType(std::string("SFVec3f"));
field113.setValue(std::string("0 0 0"));
ProtoInterface110.addChild(&field113);

field& field114 =  field();
field114.setName(std::string("numberTranslation"));
field114.setAccessType(std::string("inputOutput"));
field114.setType(std::string("SFVec3f"));
field114.setValue(std::string("0.2 0 0"));
ProtoInterface110.addChild(&field114);

field& field115 =  field();
field115.setName(std::string("textString"));
field115.setAccessType(std::string("inputOutput"));
field115.setType(std::string("MFString"));
field115.setValue(std::string("\"a=\""));
ProtoInterface110.addChild(&field115);

field& field116 =  field();
field116.setName(std::string("parameterName"));
field116.setAccessType(std::string("inputOutput"));
field116.setType(std::string("SFString"));
field116.setValue(std::string("a"));
ProtoInterface110.addChild(&field116);

field& field117 =  field();
field117.setName(std::string("parameterScale"));
field117.setAccessType(std::string("inputOutput"));
field117.setType(std::string("SFFloat"));
field117.setValue(std::string("30"));
ProtoInterface110.addChild(&field117);

field& field118 =  field();
field118.setName(std::string("shaderNode"));
field118.setAccessType(std::string("inputOutput"));
field118.setType(std::string("SFNode"));
ProtoInterface110.addChild(&field118);

ProtoDeclare109.addChild(&ProtoInterface110);

ProtoBody& ProtoBody119 =  ProtoBody();
Group& Group120 =  Group();
Transform& Transform121 =  Transform();
Transform121.setDEF(std::string("protoSlider"));
Transform121.setTranslation(new float[]{0,0.7,0});
IS& IS122 =  IS();
Connect& connect123 =  Connect();
connect123.setNodeField(std::string("translation"));
connect123.setProtoField(std::string("sliderTranslation"));
IS122.addChild(&connect123);

Transform121.addChild(&IS122);

Transform& Transform124 =  Transform();
Transform124.setDEF(std::string("protoTransform"));
Transform124.setTranslation(new float[]{0,0,0.1});
IS& IS125 =  IS();
Connect& connect126 =  Connect();
connect126.setNodeField(std::string("translation"));
connect126.setProtoField(std::string("sensorTranslation"));
IS125.addChild(&connect126);

Transform124.addChild(&IS125);

PlaneSensor& PlaneSensor127 =  PlaneSensor();
PlaneSensor127.setDEF(std::string("protoSensor"));
PlaneSensor127.setMaxPosition(new float[]{2,0});
Transform124.addChild(&PlaneSensor127);

Transform& Transform128 =  Transform();
Transform128.setTranslation(new float[]{0,0,0});
TouchSensor& TouchSensor129 =  TouchSensor();
TouchSensor129.setDEF(std::string("protoTS"));
Transform128.addChild(&TouchSensor129);

Transform124.addChild(&Transform128);

Transform& Transform130 =  Transform();
Shape& Shape131 =  Shape();
Text& Text132 =  Text();
Text132.setDEF(std::string("protoText"));
Text132.setString((std::string[]){"a="}, 1);
IS& IS133 =  IS();
Connect& connect134 =  Connect();
connect134.setNodeField(std::string("string"));
connect134.setProtoField(std::string("textString"));
IS133.addChild(&connect134);

Text132.addChild(&IS133);

CFontStyle& FontStyle135 =  CFontStyle();
FontStyle135.setSize(0.2);
Text132.setFontStyle(&FontStyle135);

Shape131.setGeometry(&Text132);

Appearance& Appearance136 =  Appearance();
Material& Material137 =  Material();
Material137.setDiffuseColor(new float[]{1,1,1});
Appearance136.addChild(&Material137);

Shape131.addChild(&Appearance136);

Transform130.addChild(&Shape131);

Transform& Transform138 =  Transform();
IS& IS139 =  IS();
Connect& connect140 =  Connect();
connect140.setNodeField(std::string("translation"));
connect140.setProtoField(std::string("numberTranslation"));
IS139.addChild(&connect140);

Transform138.addChild(&IS139);

Shape& Shape141 =  Shape();
Text& Text142 =  Text();
Text142.setDEF(std::string("protoNumber"));
Text142.setString((std::string[]){"0"}, 1);
CFontStyle& FontStyle143 =  CFontStyle();
FontStyle143.setSize(0.2);
Text142.setFontStyle(&FontStyle143);

Shape141.setGeometry(&Text142);

Appearance& Appearance144 =  Appearance();
Material& Material145 =  Material();
Material145.setDiffuseColor(new float[]{1,1,1});
Appearance144.addChild(&Material145);

Shape141.addChild(&Appearance144);

Transform138.addChild(&Shape141);

Transform130.addChild(&Transform138);

Transform124.addChild(&Transform130);

Transform121.addChild(&Transform124);

Group120.addChild(&Transform121);

Script& Script146 =  Script();
Script146.setDEF(std::string("protoValueTransformerScript"));
Script146.setDirectOutput(True);
Script146.setMustEvaluate(True);
field& field147 =  field();
field147.setName(std::string("protoScale"));
field147.setAccessType(std::string("inputOutput"));
field147.setType(std::string("SFFloat"));
field147.setValue(std::string("30"));
Script146.addChild(&field147);

field& field148 =  field();
field148.setName(std::string("shader"));
field148.setAccessType(std::string("inputOutput"));
field148.setType(std::string("SFNode"));
Script146.addChild(&field148);

field& field149 =  field();
field149.setName(std::string("newTranslation"));
field149.setAccessType(std::string("inputOutput"));
field149.setType(std::string("SFVec3f"));
field149.setValue(std::string("1 1 1"));
Script146.addChild(&field149);

field& field150 =  field();
field150.setName(std::string("protoValue_changed"));
field150.setAccessType(std::string("inputOutput"));
field150.setType(std::string("SFFloat"));
field150.setValue(std::string("1"));
Script146.addChild(&field150);

field& field151 =  field();
field151.setName(std::string("protoNumber_changed"));
field151.setAccessType(std::string("inputOutput"));
field151.setType(std::string("MFString"));
field151.setValue(std::string("\"0.0\""));
Script146.addChild(&field151);

field& field152 =  field();
field152.setName(std::string("protoParameterName"));
field152.setAccessType(std::string("inputOutput"));
field152.setType(std::string("SFString"));
field152.setValue(std::string("a"));
Script146.addChild(&field152);

IS& IS153 =  IS();
Connect& connect154 =  Connect();
connect154.setNodeField(std::string("protoScale"));
connect154.setProtoField(std::string("parameterScale"));
IS153.addChild(&connect154);

Connect& connect155 =  Connect();
connect155.setNodeField(std::string("protoParameterName"));
connect155.setProtoField(std::string("parameterName"));
IS153.addChild(&connect155);

Connect& connect156 =  Connect();
connect156.setNodeField(std::string("shader"));
connect156.setProtoField(std::string("shaderNode"));
IS153.addChild(&connect156);

Script146.addChild(&IS153);


Script146.setSourceCode(std::string("ecmascript:")+
_T("	const newTranslation = function(Value) {")+
_T("	    protoValue_changed = Value[0] * protoScale;")+
_T("	    protoNumber_changed = new MFString(protoValue_changed.toFixed(2).toString());")+
_T("	    Browser.println(\"In newTranslation:\");")+
_T("	    Browser.println(shader);")+
_T("	    Browser.println(Value[0]);")+
_T("	    Browser.println(Value.x);")+
_T("	    Browser.println(protoScale);")+
_T("	    Browser.println(Value[0] * protoScale);")+
_T("	    Browser.println(protoParameterName);")+
_T("					// shader[protoParameterName] = Value[0] * protoScale;")+
_T("	};"));
Group120.addChild(&Script146);

ROUTE& ROUTE157 =  ROUTE();
ROUTE157.setFromField(std::string("translation_changed"));
ROUTE157.setFromNode(std::string("protoSensor"));
ROUTE157.setToField(std::string("set_translation"));
ROUTE157.setToNode(std::string("protoTransform"));
Group120.addChild(&ROUTE157);

ROUTE& ROUTE158 =  ROUTE();
ROUTE158.setFromField(std::string("translation_changed"));
ROUTE158.setFromNode(std::string("protoSensor"));
ROUTE158.setToField(std::string("newTranslation"));
ROUTE158.setToNode(std::string("protoValueTransformerScript"));
Group120.addChild(&ROUTE158);

ROUTE& ROUTE159 =  ROUTE();
ROUTE159.setFromField(std::string("protoNumber_changed"));
ROUTE159.setFromNode(std::string("protoValueTransformerScript"));
ROUTE159.setToField(std::string("string"));
ROUTE159.setToNode(std::string("protoNumber"));
Group120.addChild(&ROUTE159);

ProtoBody119.addChild(&Group120);

ProtoDeclare109.addChild(&ProtoBody119);

LayoutLayer96.addChild(&ProtoDeclare109);

ProtoInstance& ProtoInstance160 =  ProtoInstance();
ProtoInstance160.setName(std::string("SliderProto"));
ProtoInstance160.setDEF(std::string("aPI"));
fieldValue& fieldValue161 =  fieldValue();
fieldValue161.setName(std::string("sliderTranslation"));
fieldValue161.setValue(std::string("0 0.7 0"));
ProtoInstance160.addChild(&fieldValue161);

fieldValue& fieldValue162 =  fieldValue();
fieldValue162.setName(std::string("transformTranslation"));
fieldValue162.setValue(std::string("0 0 0.1"));
ProtoInstance160.addChild(&fieldValue162);

fieldValue& fieldValue163 =  fieldValue();
fieldValue163.setName(std::string("sensorTranslation"));
fieldValue163.setValue(std::string("0 0 0"));
ProtoInstance160.addChild(&fieldValue163);

fieldValue& fieldValue164 =  fieldValue();
fieldValue164.setName(std::string("numberTranslation"));
fieldValue164.setValue(std::string("0.3 0 0"));
ProtoInstance160.addChild(&fieldValue164);

fieldValue& fieldValue165 =  fieldValue();
fieldValue165.setName(std::string("textString"));
fieldValue165.setValue(std::string("\"a=\""));
ProtoInstance160.addChild(&fieldValue165);

fieldValue& fieldValue166 =  fieldValue();
fieldValue166.setName(std::string("parameterName"));
fieldValue166.setValue(std::string("a"));
ProtoInstance160.addChild(&fieldValue166);

fieldValue& fieldValue167 =  fieldValue();
fieldValue167.setName(std::string("parameterScale"));
fieldValue167.setValue(std::string("30"));
ProtoInstance160.addChild(&fieldValue167);

fieldValue& fieldValue168 =  fieldValue();
fieldValue168.setName(std::string("shaderNode"));
ComposedShader& ComposedShader169 =  ComposedShader();
ComposedShader169.setUSE(std::string("freewrlShader"));
fieldValue168.addChild(&ComposedShader169);

ProtoInstance160.addChild(&fieldValue168);

LayoutLayer96.addChild(&ProtoInstance160);

ProtoInstance& ProtoInstance170 =  ProtoInstance();
ProtoInstance170.setName(std::string("SliderProto"));
ProtoInstance170.setDEF(std::string("bPI"));
fieldValue& fieldValue171 =  fieldValue();
fieldValue171.setName(std::string("sliderTranslation"));
fieldValue171.setValue(std::string("0 0.4 0"));
ProtoInstance170.addChild(&fieldValue171);

fieldValue& fieldValue172 =  fieldValue();
fieldValue172.setName(std::string("transformTranslation"));
fieldValue172.setValue(std::string("0 0 0.1"));
ProtoInstance170.addChild(&fieldValue172);

fieldValue& fieldValue173 =  fieldValue();
fieldValue173.setName(std::string("sensorTranslation"));
fieldValue173.setValue(std::string("0 0 0"));
ProtoInstance170.addChild(&fieldValue173);

fieldValue& fieldValue174 =  fieldValue();
fieldValue174.setName(std::string("numberTranslation"));
fieldValue174.setValue(std::string("0.3 0 0"));
ProtoInstance170.addChild(&fieldValue174);

fieldValue& fieldValue175 =  fieldValue();
fieldValue175.setName(std::string("textString"));
fieldValue175.setValue(std::string("\"b=\""));
ProtoInstance170.addChild(&fieldValue175);

fieldValue& fieldValue176 =  fieldValue();
fieldValue176.setName(std::string("parameterName"));
fieldValue176.setValue(std::string("b"));
ProtoInstance170.addChild(&fieldValue176);

fieldValue& fieldValue177 =  fieldValue();
fieldValue177.setName(std::string("parameterScale"));
fieldValue177.setValue(std::string("30"));
ProtoInstance170.addChild(&fieldValue177);

fieldValue& fieldValue178 =  fieldValue();
fieldValue178.setName(std::string("shaderNode"));
ComposedShader& ComposedShader179 =  ComposedShader();
ComposedShader179.setUSE(std::string("freewrlShader"));
fieldValue178.addChild(&ComposedShader179);

ProtoInstance170.addChild(&fieldValue178);

LayoutLayer96.addChild(&ProtoInstance170);

ProtoInstance& ProtoInstance180 =  ProtoInstance();
ProtoInstance180.setName(std::string("SliderProto"));
ProtoInstance180.setDEF(std::string("cPI"));
fieldValue& fieldValue181 =  fieldValue();
fieldValue181.setName(std::string("sliderTranslation"));
fieldValue181.setValue(std::string("0 0.1 0"));
ProtoInstance180.addChild(&fieldValue181);

fieldValue& fieldValue182 =  fieldValue();
fieldValue182.setName(std::string("transformTranslation"));
fieldValue182.setValue(std::string("0 0 0.1"));
ProtoInstance180.addChild(&fieldValue182);

fieldValue& fieldValue183 =  fieldValue();
fieldValue183.setName(std::string("sensorTranslation"));
fieldValue183.setValue(std::string("0 0 0"));
ProtoInstance180.addChild(&fieldValue183);

fieldValue& fieldValue184 =  fieldValue();
fieldValue184.setName(std::string("numberTranslation"));
fieldValue184.setValue(std::string("0.3 0 0"));
ProtoInstance180.addChild(&fieldValue184);

fieldValue& fieldValue185 =  fieldValue();
fieldValue185.setName(std::string("textString"));
fieldValue185.setValue(std::string("\"c=\""));
ProtoInstance180.addChild(&fieldValue185);

fieldValue& fieldValue186 =  fieldValue();
fieldValue186.setName(std::string("parameterName"));
fieldValue186.setValue(std::string("c"));
ProtoInstance180.addChild(&fieldValue186);

fieldValue& fieldValue187 =  fieldValue();
fieldValue187.setName(std::string("parameterScale"));
fieldValue187.setValue(std::string("20"));
ProtoInstance180.addChild(&fieldValue187);

fieldValue& fieldValue188 =  fieldValue();
fieldValue188.setName(std::string("shaderNode"));
ComposedShader& ComposedShader189 =  ComposedShader();
ComposedShader189.setUSE(std::string("freewrlShader"));
fieldValue188.addChild(&ComposedShader189);

ProtoInstance180.addChild(&fieldValue188);

LayoutLayer96.addChild(&ProtoInstance180);

ProtoInstance& ProtoInstance190 =  ProtoInstance();
ProtoInstance190.setName(std::string("SliderProto"));
ProtoInstance190.setDEF(std::string("dPI"));
fieldValue& fieldValue191 =  fieldValue();
fieldValue191.setName(std::string("sliderTranslation"));
fieldValue191.setValue(std::string("0 -0.2 0"));
ProtoInstance190.addChild(&fieldValue191);

fieldValue& fieldValue192 =  fieldValue();
fieldValue192.setName(std::string("transformTranslation"));
fieldValue192.setValue(std::string("0 0 0.1"));
ProtoInstance190.addChild(&fieldValue192);

fieldValue& fieldValue193 =  fieldValue();
fieldValue193.setName(std::string("sensorTranslation"));
fieldValue193.setValue(std::string("0 0 0"));
ProtoInstance190.addChild(&fieldValue193);

fieldValue& fieldValue194 =  fieldValue();
fieldValue194.setName(std::string("numberTranslation"));
fieldValue194.setValue(std::string("0.3 0 0"));
ProtoInstance190.addChild(&fieldValue194);

fieldValue& fieldValue195 =  fieldValue();
fieldValue195.setName(std::string("textString"));
fieldValue195.setValue(std::string("\"d=\""));
ProtoInstance190.addChild(&fieldValue195);

fieldValue& fieldValue196 =  fieldValue();
fieldValue196.setName(std::string("parameterName"));
fieldValue196.setValue(std::string("d"));
ProtoInstance190.addChild(&fieldValue196);

fieldValue& fieldValue197 =  fieldValue();
fieldValue197.setName(std::string("parameterScale"));
fieldValue197.setValue(std::string("20"));
ProtoInstance190.addChild(&fieldValue197);

fieldValue& fieldValue198 =  fieldValue();
fieldValue198.setName(std::string("shaderNode"));
ComposedShader& ComposedShader199 =  ComposedShader();
ComposedShader199.setUSE(std::string("freewrlShader"));
fieldValue198.addChild(&ComposedShader199);

ProtoInstance190.addChild(&fieldValue198);

LayoutLayer96.addChild(&ProtoInstance190);

ProtoInstance& ProtoInstance200 =  ProtoInstance();
ProtoInstance200.setName(std::string("SliderProto"));
ProtoInstance200.setDEF(std::string("tdeltaPI"));
fieldValue& fieldValue201 =  fieldValue();
fieldValue201.setName(std::string("sliderTranslation"));
fieldValue201.setValue(std::string("0 -0.5 0"));
ProtoInstance200.addChild(&fieldValue201);

fieldValue& fieldValue202 =  fieldValue();
fieldValue202.setName(std::string("transformTranslation"));
fieldValue202.setValue(std::string("0 0 0.1"));
ProtoInstance200.addChild(&fieldValue202);

fieldValue& fieldValue203 =  fieldValue();
fieldValue203.setName(std::string("sensorTranslation"));
fieldValue203.setValue(std::string("0 0 0"));
ProtoInstance200.addChild(&fieldValue203);

fieldValue& fieldValue204 =  fieldValue();
fieldValue204.setName(std::string("numberTranslation"));
fieldValue204.setValue(std::string("0.8 0 0"));
ProtoInstance200.addChild(&fieldValue204);

fieldValue& fieldValue205 =  fieldValue();
fieldValue205.setName(std::string("textString"));
fieldValue205.setValue(std::string("\"tdelta=\""));
ProtoInstance200.addChild(&fieldValue205);

fieldValue& fieldValue206 =  fieldValue();
fieldValue206.setName(std::string("parameterName"));
fieldValue206.setValue(std::string("tdelta"));
ProtoInstance200.addChild(&fieldValue206);

fieldValue& fieldValue207 =  fieldValue();
fieldValue207.setName(std::string("parameterScale"));
fieldValue207.setValue(std::string("6.28"));
ProtoInstance200.addChild(&fieldValue207);

fieldValue& fieldValue208 =  fieldValue();
fieldValue208.setName(std::string("shaderNode"));
ComposedShader& ComposedShader209 =  ComposedShader();
ComposedShader209.setUSE(std::string("freewrlShader"));
fieldValue208.addChild(&ComposedShader209);

ProtoInstance200.addChild(&fieldValue208);

LayoutLayer96.addChild(&ProtoInstance200);

ProtoInstance& ProtoInstance210 =  ProtoInstance();
ProtoInstance210.setName(std::string("SliderProto"));
ProtoInstance210.setDEF(std::string("pdeltaPI"));
fieldValue& fieldValue211 =  fieldValue();
fieldValue211.setName(std::string("sliderTranslation"));
fieldValue211.setValue(std::string("0 -0.8 0"));
ProtoInstance210.addChild(&fieldValue211);

fieldValue& fieldValue212 =  fieldValue();
fieldValue212.setName(std::string("transformTranslation"));
fieldValue212.setValue(std::string("0 0 0.1"));
ProtoInstance210.addChild(&fieldValue212);

fieldValue& fieldValue213 =  fieldValue();
fieldValue213.setName(std::string("sensorTranslation"));
fieldValue213.setValue(std::string("0 0 0"));
ProtoInstance210.addChild(&fieldValue213);

fieldValue& fieldValue214 =  fieldValue();
fieldValue214.setName(std::string("numberTranslation"));
fieldValue214.setValue(std::string("0.8 0 0"));
ProtoInstance210.addChild(&fieldValue214);

fieldValue& fieldValue215 =  fieldValue();
fieldValue215.setName(std::string("textString"));
fieldValue215.setValue(std::string("\"pdelta=\""));
ProtoInstance210.addChild(&fieldValue215);

fieldValue& fieldValue216 =  fieldValue();
fieldValue216.setName(std::string("parameterName"));
fieldValue216.setValue(std::string("pdelta"));
ProtoInstance210.addChild(&fieldValue216);

fieldValue& fieldValue217 =  fieldValue();
fieldValue217.setName(std::string("parameterScale"));
fieldValue217.setValue(std::string("6.28"));
ProtoInstance210.addChild(&fieldValue217);

fieldValue& fieldValue218 =  fieldValue();
fieldValue218.setName(std::string("shaderNode"));
ComposedShader& ComposedShader219 =  ComposedShader();
ComposedShader219.setUSE(std::string("freewrlShader"));
fieldValue218.addChild(&ComposedShader219);

ProtoInstance210.addChild(&fieldValue218);

LayoutLayer96.addChild(&ProtoInstance210);

Layout& Layout220 =  Layout();
Layout220.setAlign((std::string[]){"LEFT", "BOTTOM"}, 2);
Layout220.setOffset(new float[]{-0.5,0}, 2);
LayoutLayer96.setLayout(Layout220);

Viewport& Viewport221 =  Viewport();
LayoutLayer96.setViewport(Viewport221);

LayerSet18.addChild(&LayoutLayer96);

Scene17.addChild(&LayerSet18);

X3D0.setScene(&Scene17);

}
