#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void bumpyfreewrljsonverse(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Full"));
X3D0.setVersion(std::string("4.1"));
head& head1 =  head();
//<component name='Shape' level='4'></component>
//Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces https://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L
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

component& component10 =  component();
component10.setName(std::string("DIS"));
component10.setLevel(2);
head1.addChild(&component10);

meta& meta11 =  meta();
meta11.setName(std::string("title"));
meta11.setContent(std::string("bumpyfreewrljsonverse.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("description"));
meta12.setContent(std::string("*enter description here, short-sentence summaries preferred*"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("creator"));
meta13.setContent(std::string("Doug Sanden, Christoph Valentin, John Carlson"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("translator"));
meta14.setContent(std::string("*if manually translating VRML-to-X3D, enter name of person translating here*"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("created"));
meta15.setContent(std::string("*enter date of initial version here*"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(std::string("translated"));
meta16.setContent(std::string("*enter date of translation here*"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(std::string("modified"));
meta17.setContent(std::string("*enter date of latest revision here*"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(std::string("version"));
meta18.setContent(std::string("*enter version here, if any*"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(std::string("reference"));
meta19.setContent(std::string("*enter reference citation or relative/online url here*"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(std::string("reference"));
meta20.setContent(std::string("*enter additional url/bibliographic reference information here*"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(std::string("requires"));
meta21.setContent(std::string("*enter reference resource here if required to support function, delivery, or coherence of content*"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(std::string("rights"));
meta22.setContent(std::string("*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(std::string("drawing"));
meta23.setContent(std::string("*enter drawing filename/url here*"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(std::string("MovingImage"));
meta24.setContent(std::string("*enter movie filename/url here*"));
head1.addMeta(&meta24);

meta& meta25 =  meta();
meta25.setName(std::string("photo"));
meta25.setContent(std::string("*enter photo filename/url here*"));
head1.addMeta(&meta25);

meta& meta26 =  meta();
meta26.setName(std::string("subject"));
meta26.setContent(std::string("*enter subject keywords here*"));
head1.addMeta(&meta26);

meta& meta27 =  meta();
meta27.setName(std::string("accessRights"));
meta27.setContent(std::string("*enter permission statements or url here*"));
head1.addMeta(&meta27);

meta& meta28 =  meta();
meta28.setName(std::string("identifier"));
meta28.setContent(std::string("*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*"));
head1.addMeta(&meta28);

meta& meta29 =  meta();
meta29.setName(std::string("generator"));
meta29.setContent(std::string("PSPad, http://www.pspad.com/"));
head1.addMeta(&meta29);

meta& meta30 =  meta();
meta30.setName(std::string("license"));
meta30.setContent(std::string("license.html"));
head1.addMeta(&meta30);

X3D0.setHead(&head1);

//\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution,
//It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak)
//open for their \"discussion about the teapot\"
Scene& Scene31 =  Scene();
//basic nodes, which might be present in any scene
NavigationInfo& NavigationInfo32 =  NavigationInfo();
NavigationInfo32.setType(new std::string[]{"EXAMINE"}, 1);
NavigationInfo32.setAvatarSize(new float[]{0.25,1.75,0.75}, 3);
Scene31.addChild(&NavigationInfo32);

DirectionalLight& DirectionalLight33 =  DirectionalLight();
DirectionalLight33.setAmbientIntensity(0.2);
DirectionalLight33.setDirection(new float[]{0.0,-1.0,0.0});
Scene31.addChild(&DirectionalLight33);

DirectionalLight& DirectionalLight34 =  DirectionalLight();
DirectionalLight34.setAmbientIntensity(0.2);
DirectionalLight34.setDirection(new float[]{-1.0,-0.1,-1.0});
Scene31.addChild(&DirectionalLight34);

Viewpoint& Viewpoint35 =  Viewpoint();
Viewpoint35.setDescription(std::string("My Overview"));
Viewpoint35.setFieldOfView(1.570796);
Viewpoint35.setPosition(new float[]{0.0,1.75,60.0});
Scene31.addChild(&Viewpoint35);

//LayerSet with two layers, navigation happens in layer 1
LayerSet& LayerSet36 =  LayerSet();
LayerSet36.setActiveLayer(1);
LayerSet36.setOrder(new int32_t[]{1,2}, 2);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
//the second layer contains the sliders that are moved with the user's display
//like a HUD (heads up display)
Layer& Layer37 =  Layer();
Layer37.setPickable(true);
Layer37.setObjectType(new std::string[]{"ALL"}, 1);
//this group contains the red/green/blue 3D crosshair
Group& Group38 =  Group();
//Arrow X
Transform& Transform39 =  Transform();
Transform39.setTranslation(new float[]{25.0,0.0,0.0});
Transform39.setRotation(new float[]{0.0,0.0,-1.0,1.57});
Shape& Shape40 =  Shape();
Cylinder& Cylinder41 =  Cylinder();
Cylinder41.setDEF(std::string("Shaft"));
Cylinder41.setRadius(0.35);
Cylinder41.setHeight(50);
Shape40.setGeometry(&Cylinder41);

Appearance& Appearance42 =  Appearance();
Appearance42.setContainerField("appearance");
Material& Material43 =  Material();
Material43.setContainerField("material");
Material43.setDEF(std::string("RED"));
Material43.setDiffuseColor(new float[]{1.0,0.0,0.0});
Material43.setEmissiveColor(new float[]{1.0,0.0,0.0});
Appearance42.addChild(&Material43);

Shape40.addChild(&Appearance42);

Transform39.addChild(&Shape40);

Group38.addChild(&Transform39);

Transform& Transform44 =  Transform();
Transform44.setTranslation(new float[]{50.0,0.0,0.0});
Transform44.setRotation(new float[]{0.0,0.0,-1.0,1.57});
Shape& Shape45 =  Shape();
Cone& Cone46 =  Cone();
Cone46.setDEF(std::string("Tip"));
Cone46.setBottomRadius(0.8);
Cone46.setHeight(3);
Shape45.setGeometry(&Cone46);

Appearance& Appearance47 =  Appearance();
Appearance47.setContainerField("appearance");
Material& Material48 =  Material();
Material48.setContainerField("material");
Material48.setUSE(std::string("RED"));
Appearance47.addChild(&Material48);

Shape45.addChild(&Appearance47);

Transform44.addChild(&Shape45);

Group38.addChild(&Transform44);

//Arrow Y
Transform& Transform49 =  Transform();
Transform49.setTranslation(new float[]{0.0,25.0,0.0});
Shape& Shape50 =  Shape();
Cylinder& Cylinder51 =  Cylinder();
Cylinder51.setUSE(std::string("Shaft"));
Shape50.setGeometry(&Cylinder51);

Appearance& Appearance52 =  Appearance();
Appearance52.setContainerField("appearance");
Material& Material53 =  Material();
Material53.setContainerField("material");
Material53.setDEF(std::string("GREEN"));
Material53.setDiffuseColor(new float[]{0.0,1.0,0.0});
Material53.setEmissiveColor(new float[]{0.0,1.0,0.0});
Appearance52.addChild(&Material53);

Shape50.addChild(&Appearance52);

Transform49.addChild(&Shape50);

Group38.addChild(&Transform49);

Transform& Transform54 =  Transform();
Transform54.setTranslation(new float[]{0.0,50.0,0.0});
Shape& Shape55 =  Shape();
Cone& Cone56 =  Cone();
Cone56.setUSE(std::string("Tip"));
Shape55.setGeometry(&Cone56);

Appearance& Appearance57 =  Appearance();
Appearance57.setContainerField("appearance");
Material& Material58 =  Material();
Material58.setContainerField("material");
Material58.setUSE(std::string("GREEN"));
Appearance57.addChild(&Material58);

Shape55.addChild(&Appearance57);

Transform54.addChild(&Shape55);

Group38.addChild(&Transform54);

//Arrow Z
Transform& Transform59 =  Transform();
Transform59.setTranslation(new float[]{0.0,0.0,25.0});
Transform59.setRotation(new float[]{1.0,0.0,0.0,1.57});
Shape& Shape60 =  Shape();
Cylinder& Cylinder61 =  Cylinder();
Cylinder61.setUSE(std::string("Shaft"));
Shape60.setGeometry(&Cylinder61);

Appearance& Appearance62 =  Appearance();
Appearance62.setContainerField("appearance");
Material& Material63 =  Material();
Material63.setContainerField("material");
Material63.setDEF(std::string("BLUE"));
Material63.setDiffuseColor(new float[]{0.0,0.0,1.0});
Material63.setEmissiveColor(new float[]{0.0,0.0,1.0});
Appearance62.addChild(&Material63);

Shape60.addChild(&Appearance62);

Transform59.addChild(&Shape60);

Group38.addChild(&Transform59);

Transform& Transform64 =  Transform();
Transform64.setTranslation(new float[]{0.0,0.0,50.0});
Transform64.setRotation(new float[]{1.0,0.0,0.0,1.57});
Shape& Shape65 =  Shape();
Cone& Cone66 =  Cone();
Cone66.setUSE(std::string("Tip"));
Shape65.setGeometry(&Cone66);

Appearance& Appearance67 =  Appearance();
Appearance67.setContainerField("appearance");
Material& Material68 =  Material();
Material68.setContainerField("material");
Material68.setUSE(std::string("BLUE"));
Appearance67.addChild(&Material68);

Shape65.addChild(&Appearance67);

Transform64.addChild(&Shape65);

Group38.addChild(&Transform64);

Layer37.addChild(&Group38);

//the model that is being reviewed by the users of this scene
Transform& Transform69 =  Transform();
Transform69.setDEF(std::string("FlowerTransform"));
//<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />
//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background& Background70 =  Background();
Background70.setBackUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background70.setBottomUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background70.setFrontUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background70.setLeftUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background70.setRightUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background70.setTopUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Transform69.addChild(&Background70);

Transform& Transform71 =  Transform();
Shape& Shape72 =  Shape();
//<Sphere radius='40'></Sphere>
IndexedFaceSet& IndexedFaceSet73 =  IndexedFaceSet();
IndexedFaceSet73.setConvex(false);
IndexedFaceSet73.setDEF(std::string("Orbit"));
Coordinate& Coordinate74 =  Coordinate();
Coordinate74.setDEF(std::string("OrbitCoordinates"));
IndexedFaceSet73.setCoord(&Coordinate74);

Shape72.setGeometry(&IndexedFaceSet73);

Appearance& Appearance75 =  Appearance();
Appearance75.setContainerField("appearance");
Material& Material76 =  Material();
Material76.setContainerField("material");
Material76.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material76.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance75.addChild(&Material76);

ComposedCubeMapTexture& ComposedCubeMapTexture77 =  ComposedCubeMapTexture();
ComposedCubeMapTexture77.setContainerField("texture");
ComposedCubeMapTexture77.setDEF(std::string("texture"));
ImageTexture& ImageTexture78 =  ImageTexture();
ImageTexture78.setContainerField("backTexture");
ImageTexture78.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture77.setBack(ImageTexture78);

ImageTexture& ImageTexture79 =  ImageTexture();
ImageTexture79.setContainerField("bottomTexture");
ImageTexture79.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture77.setBottom(ImageTexture79);

ImageTexture& ImageTexture80 =  ImageTexture();
ImageTexture80.setContainerField("frontTexture");
ImageTexture80.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture77.setFront(ImageTexture80);

ImageTexture& ImageTexture81 =  ImageTexture();
ImageTexture81.setContainerField("leftTexture");
ImageTexture81.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture77.setLeft(ImageTexture81);

ImageTexture& ImageTexture82 =  ImageTexture();
ImageTexture82.setContainerField("rightTexture");
ImageTexture82.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture77.setRight(ImageTexture82);

ImageTexture& ImageTexture83 =  ImageTexture();
ImageTexture83.setContainerField("topTexture");
ImageTexture83.setUrl(new std::string[]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture77.setTop(ImageTexture83);

Appearance75.addChild(&ComposedCubeMapTexture77);

ComposedShader& ComposedShader84 =  ComposedShader();
ComposedShader84.setDEF(std::string("freewrlShader"));
ComposedShader84.setLanguage(std::string("GLSL"));
field& field85 =  field();
field85.setName(std::string("chromaticDispertion"));
field85.setAccessType(std::string("inputOnly"));
field85.setType(std::string("SFVec3f"));
field85.setValue(std::string("0.98 1 1.033"));
ComposedShader84.addChild(&field85);

field& field86 =  field();
field86.setName(std::string("fw_textureCoordGenType"));
field86.setAccessType(std::string("inputOnly"));
field86.setType(std::string("SFInt32"));
field86.setValue(std::string("0"));
ComposedShader84.addChild(&field86);

field& field87 =  field();
field87.setName(std::string("bias"));
field87.setType(std::string("SFFloat"));
field87.setAccessType(std::string("inputOnly"));
field87.setValue(std::string("0.5"));
ComposedShader84.addChild(&field87);

field& field88 =  field();
field88.setName(std::string("scale"));
field88.setType(std::string("SFFloat"));
field88.setAccessType(std::string("inputOnly"));
field88.setValue(std::string("0.5"));
ComposedShader84.addChild(&field88);

field& field89 =  field();
field89.setName(std::string("power"));
field89.setType(std::string("SFFloat"));
field89.setAccessType(std::string("inputOnly"));
field89.setValue(std::string("2"));
ComposedShader84.addChild(&field89);

field& field90 =  field();
field90.setName(std::string("a"));
field90.setType(std::string("SFFloat"));
field90.setAccessType(std::string("inputOutput"));
field90.setValue(std::string("15"));
ComposedShader84.addChild(&field90);

field& field91 =  field();
field91.setName(std::string("b"));
field91.setType(std::string("SFFloat"));
field91.setAccessType(std::string("inputOutput"));
field91.setValue(std::string("5"));
ComposedShader84.addChild(&field91);

field& field92 =  field();
field92.setName(std::string("c"));
field92.setType(std::string("SFFloat"));
field92.setAccessType(std::string("inputOutput"));
field92.setValue(std::string("5"));
ComposedShader84.addChild(&field92);

field& field93 =  field();
field93.setName(std::string("d"));
field93.setType(std::string("SFFloat"));
field93.setAccessType(std::string("inputOutput"));
field93.setValue(std::string("5"));
ComposedShader84.addChild(&field93);

field& field94 =  field();
field94.setName(std::string("tdelta"));
field94.setType(std::string("SFFloat"));
field94.setAccessType(std::string("inputOutput"));
field94.setValue(std::string("0"));
ComposedShader84.addChild(&field94);

field& field95 =  field();
field95.setName(std::string("pdelta"));
field95.setType(std::string("SFFloat"));
field95.setAccessType(std::string("inputOutput"));
field95.setValue(std::string("0"));
ComposedShader84.addChild(&field95);

ShaderPart& ShaderPart96 =  ShaderPart();
ShaderPart96.setUrl(new std::string[]{"../shaders/freewrl_flowers_chromatic.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"}, 2);
ShaderPart96.setType(std::string("VERTEX"));
ComposedShader84.setParts(&ShaderPart96);

ShaderPart& ShaderPart97 =  ShaderPart();
ShaderPart97.setUrl(new std::string[]{"../shaders/freewrl.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"}, 2);
ShaderPart97.setType(std::string("FRAGMENT"));
ComposedShader84.setParts(&ShaderPart97);

//TO CONVERT TO A SPHERE
//<ShaderPart url='\"../shaders/freewrl.vs\"'></ShaderPart>
//<ShaderPart url='\"../shaders/freewrl_bubbles.fs\"' type='FRAGMENT'></ShaderPart>
Appearance75.addChild(&ComposedShader84);

Shape72.addChild(&Appearance75);

Transform71.addChild(&Shape72);

Transform69.addChild(&Transform71);

Layer37.addChild(&Transform69);

Script& Script98 =  Script();
Script98.setDEF(std::string("OrbitScript"));
field& field99 =  field();
field99.setName(std::string("coordinates"));
field99.setAccessType(std::string("inputOutput"));
field99.setType(std::string("MFVec3f"));
Script98.addChild(&field99);

field& field100 =  field();
field100.setName(std::string("coordIndexes"));
field100.setAccessType(std::string("outputOnly"));
field100.setType(std::string("MFInt32"));
Script98.addChild(&field100);

field& field101 =  field();
field101.setName(std::string("a"));
field101.setType(std::string("SFFloat"));
field101.setAccessType(std::string("inputOutput"));
field101.setValue(std::string("10"));
Script98.addChild(&field101);

field& field102 =  field();
field102.setName(std::string("b"));
field102.setType(std::string("SFFloat"));
field102.setAccessType(std::string("inputOutput"));
field102.setValue(std::string("10"));
Script98.addChild(&field102);

field& field103 =  field();
field103.setName(std::string("c"));
field103.setType(std::string("SFFloat"));
field103.setAccessType(std::string("inputOutput"));
field103.setValue(std::string("2"));
Script98.addChild(&field103);

field& field104 =  field();
field104.setName(std::string("d"));
field104.setType(std::string("SFFloat"));
field104.setAccessType(std::string("inputOutput"));
field104.setValue(std::string("2"));
Script98.addChild(&field104);

field& field105 =  field();
field105.setName(std::string("pdelta"));
field105.setType(std::string("SFFloat"));
field105.setAccessType(std::string("inputOutput"));
field105.setValue(std::string("0"));
Script98.addChild(&field105);

field& field106 =  field();
field106.setName(std::string("tdelta"));
field106.setType(std::string("SFFloat"));
field106.setAccessType(std::string("inputOutput"));
field106.setValue(std::string("0"));
Script98.addChild(&field106);


//Script98.setSourceCode(std::string("ecmascript:")+
//_T("function initialize() {")+
//_T("     var resolution = 100;")+
//_T("     var theta = 0.0;")+
//_T("     var phi = 0.0;")+
//_T("     var delta = (2 * 3.141592653) / (resolution-1);")+
//_T("     var crds = new MFVec3f();")+
//_T("     var vecCount = 0;")+
//_T("     for ( i = 0; i < resolution; i++) {")+
//_T("     	for ( j = 0; j < resolution; j++) {")+
//_T("		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);")+
//_T("		crds[vecCount] = new SFVec3f(")+
//_T("			rho * Math.cos(phi) * Math.cos(theta),")+
//_T("			rho * Math.cos(phi) * Math.sin(theta),")+
//_T("			rho * Math.sin(phi)")+
//_T("		);")+
//_T("		vecCount++;")+
//_T("		theta += delta;")+
//_T("	}")+
//_T("	phi += delta;")+
//_T("     }")+
//_T("     coordinates = crds;")+
//_T("     // coordinates = new MFVec3f(...crds);")+
//_T("     var cis = new MFInt32();")+
//_T("     var intCount = 0;")+
//_T("     for ( i = 0; i < resolution-1; i++) {")+
//_T("     	for ( j = 0; j < resolution-1; j++) {")+
//_T("	     cis[intCount++] = i*resolution+j;")+
//_T("	     cis[intCount++] = i*resolution+j+1;")+
//_T("	     cis[intCount++] = (i+1)*resolution+j+1;")+
//_T("	     cis[intCount++] = (i+1)*resolution+j;")+
//_T("	     cis[intCount++] = -1;")+
//_T("	}")+
//_T("    }")+
//_T("    coordIndexes = cis;")+
//_T("    // coordIndexes = new MFInt32(...cis);")+
//_T("}"));
Layer37.addChild(&Script98);

ROUTE& ROUTE107 =  ROUTE();
ROUTE107.setFromField(std::string("coordIndexes"));
ROUTE107.setFromNode(std::string("OrbitScript"));
ROUTE107.setToField(std::string("set_coordIndex"));
ROUTE107.setToNode(std::string("Orbit"));
Layer37.addChild(&ROUTE107);

ROUTE& ROUTE108 =  ROUTE();
ROUTE108.setFromField(std::string("coordinates"));
ROUTE108.setFromNode(std::string("OrbitScript"));
ROUTE108.setToField(std::string("set_point"));
ROUTE108.setToNode(std::string("OrbitCoordinates"));
Layer37.addChild(&ROUTE108);

//DIS multiuser facilities
DISEntityManager& DISEntityManager109 =  DISEntityManager();
DISEntityManager109.setDEF(std::string("EntityManager"));
DISEntityTypeMapping& DISEntityTypeMapping110 =  DISEntityTypeMapping();
DISEntityTypeMapping110.setCategory(77);
DISEntityTypeMapping110.setSpecific(1);
DISEntityTypeMapping110.setUrl(new std::string[]{"../data/Gramps8Final.x3d", "https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"}, 2);
DISEntityManager109.setMapping(&DISEntityTypeMapping110);

DISEntityTypeMapping& DISEntityTypeMapping111 =  DISEntityTypeMapping();
DISEntityTypeMapping111.setCategory(77);
DISEntityTypeMapping111.setSpecific(2);
DISEntityTypeMapping111.setUrl(new std::string[]{"../data/Leif8Final.x3d", "https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"}, 2);
DISEntityManager109.setMapping(&DISEntityTypeMapping111);

DISEntityTypeMapping& DISEntityTypeMapping112 =  DISEntityTypeMapping();
DISEntityTypeMapping112.setCategory(77);
DISEntityTypeMapping112.setSpecific(3);
DISEntityTypeMapping112.setUrl(new std::string[]{"../data/Lily8Final.x3d", "https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"}, 2);
DISEntityManager109.setMapping(&DISEntityTypeMapping112);

DISEntityTypeMapping& DISEntityTypeMapping113 =  DISEntityTypeMapping();
DISEntityTypeMapping113.setCategory(77);
DISEntityTypeMapping113.setSpecific(4);
DISEntityTypeMapping113.setUrl(new std::string[]{"../data/Tufani8Final.x3d", "https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"}, 2);
DISEntityManager109.setMapping(&DISEntityTypeMapping113);

Layer37.addChild(&DISEntityManager109);

Collision& Collision114 =  Collision();
Collision114.setEnabled(false);
Group& Group115 =  Group();
Group115.setDEF(std::string("AvatarHolder"));
Collision114.addChildren(&Group115);

Layer37.addChild(&Collision114);

ROUTE& ROUTE116 =  ROUTE();
ROUTE116.setFromField(std::string("addedEntities"));
ROUTE116.setFromNode(std::string("EntityManager"));
ROUTE116.setToField(std::string("addChildren"));
ROUTE116.setToNode(std::string("AvatarHolder"));
Layer37.addChild(&ROUTE116);

ROUTE& ROUTE117 =  ROUTE();
ROUTE117.setFromField(std::string("removedEntities"));
ROUTE117.setFromNode(std::string("EntityManager"));
ROUTE117.setToField(std::string("removeChildren"));
ROUTE117.setToNode(std::string("AvatarHolder"));
Layer37.addChild(&ROUTE117);

LayerSet36.addChild(&Layer37);

LayoutLayer& LayoutLayer118 =  LayoutLayer();
LayoutLayer118.setPickable(true);
LayoutLayer118.setObjectType(new std::string[]{"ALL"}, 1);
//positioning the LayoutLayer
//clipping the LayoutLayer
//the content (children) of the LayoutLayer
//first, the slider for scaling the model
Transform& Transform119 =  Transform();
Transform119.setTranslation(new float[]{0.0,0.0,-3.0});
Shape& Shape120 =  Shape();
Appearance& Appearance121 =  Appearance();
Appearance121.setContainerField("appearance");
Material& Material122 =  Material();
Material122.setContainerField("material");
Material122.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material122.setTransparency(0.7);
Appearance121.addChild(&Material122);

Shape120.addChild(&Appearance121);

Box& Box123 =  Box();
Box123.setSize(new float[]{100.0,100.0,0.02});
Shape120.setGeometry(&Box123);

Transform119.addChild(&Shape120);

LayoutLayer118.addChild(&Transform119);

Transform& Transform124 =  Transform();
Transform124.setDEF(std::string("equationTransform"));
Transform& Transform125 =  Transform();
Transform125.setTranslation(new float[]{0.0,0.0,-20.0});
Shape& Shape126 =  Shape();
Text& Text127 =  Text();
Text127.setDEF(std::string("equation"));
Text127.setString(new std::string[]{"r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"}, 1);
CFontStyle& FontStyle128 =  CFontStyle();
FontStyle128.setContainerField("fontStyle");
FontStyle128.setSize(0.09);
Text127.setFontStyle(&FontStyle128);

Shape126.setGeometry(&Text127);

Appearance& Appearance129 =  Appearance();
Appearance129.setContainerField("appearance");
Material& Material130 =  Material();
Material130.setContainerField("material");
Material130.setDiffuseColor(new float[]{1.0,1.0,0.0});
Appearance129.addChild(&Material130);

Shape126.addChild(&Appearance129);

Transform125.addChild(&Shape126);

Transform124.addChild(&Transform125);

LayoutLayer118.addChild(&Transform124);

ProtoDeclare& ProtoDeclare131 =  ProtoDeclare();
ProtoDeclare131.setName(std::string("SliderProto"));
ProtoInterface& ProtoInterface132 =  ProtoInterface();
field& field133 =  field();
field133.setName(std::string("sliderTranslation"));
field133.setAccessType(std::string("inputOutput"));
field133.setType(std::string("SFVec3f"));
field133.setValue(std::string("0 0.7 0"));
ProtoInterface132.addChild(&field133);

field& field134 =  field();
field134.setName(std::string("transformTranslation"));
field134.setAccessType(std::string("inputOutput"));
field134.setType(std::string("SFVec3f"));
field134.setValue(std::string("0 0 0.1"));
ProtoInterface132.addChild(&field134);

field& field135 =  field();
field135.setName(std::string("sensorTranslation"));
field135.setAccessType(std::string("inputOutput"));
field135.setType(std::string("SFVec3f"));
field135.setValue(std::string("0 0 0"));
ProtoInterface132.addChild(&field135);

field& field136 =  field();
field136.setName(std::string("textString"));
field136.setAccessType(std::string("inputOutput"));
field136.setType(std::string("MFString"));
field136.setValue(std::string("\"a=\""));
ProtoInterface132.addChild(&field136);

field& field137 =  field();
field137.setName(std::string("parameterScale"));
field137.setAccessType(std::string("inputOutput"));
field137.setType(std::string("SFFloat"));
field137.setValue(std::string("30"));
ProtoInterface132.addChild(&field137);

field& field138 =  field();
field138.setName(std::string("parameterName"));
field138.setAccessType(std::string("inputOutput"));
field138.setType(std::string("SFString"));
field138.setValue(std::string("a"));
ProtoInterface132.addChild(&field138);

field& field139 =  field();
field139.setName(std::string("shaderNode"));
field139.setAccessType(std::string("inputOutput"));
field139.setType(std::string("SFNode"));
ProtoInterface132.addChild(&field139);

ProtoDeclare131.addChild(&ProtoInterface132);

ProtoBody& ProtoBody140 =  ProtoBody();
Group& Group141 =  Group();
Transform& Transform142 =  Transform();
Transform142.setDEF(std::string("protoSlider"));
Transform142.setTranslation(new float[]{0.0,0.7,0.0});
IS& IS143 =  IS();
Connect& connect144 =  Connect();
connect144.setNodeField(std::string("translation"));
connect144.setProtoField(std::string("sliderTranslation"));
IS143.addChild(&connect144);

Transform142.addChild(&IS143);

Transform& Transform145 =  Transform();
Transform145.setDEF(std::string("protoTransform"));
Transform145.setTranslation(new float[]{0.0,0.0,0.1});
IS& IS146 =  IS();
Connect& connect147 =  Connect();
connect147.setNodeField(std::string("translation"));
connect147.setProtoField(std::string("sensorTranslation"));
IS146.addChild(&connect147);

Transform145.addChild(&IS146);

PlaneSensor& PlaneSensor148 =  PlaneSensor();
PlaneSensor148.setDEF(std::string("protoSensor"));
PlaneSensor148.setMaxPosition(new float[]{1.0,0.0});
Transform145.addChild(&PlaneSensor148);

Transform& Transform149 =  Transform();
Transform149.setTranslation(new float[]{0.0,0.0,0.0});
TouchSensor& TouchSensor150 =  TouchSensor();
TouchSensor150.setDEF(std::string("protoTS"));
Transform149.addChild(&TouchSensor150);

Transform145.addChild(&Transform149);

Transform& Transform151 =  Transform();
Shape& Shape152 =  Shape();
Text& Text153 =  Text();
Text153.setDEF(std::string("protoText"));
Text153.setString(new std::string[]{"a="}, 1);
IS& IS154 =  IS();
Connect& connect155 =  Connect();
connect155.setNodeField(std::string("string"));
connect155.setProtoField(std::string("textString"));
IS154.addChild(&connect155);

Text153.addChild(&IS154);

CFontStyle& FontStyle156 =  CFontStyle();
FontStyle156.setContainerField("fontStyle");
FontStyle156.setSize(0.23);
Text153.setFontStyle(&FontStyle156);

Shape152.setGeometry(&Text153);

Appearance& Appearance157 =  Appearance();
Appearance157.setContainerField("appearance");
Material& Material158 =  Material();
Material158.setContainerField("material");
Appearance157.addChild(&Material158);

Shape152.addChild(&Appearance157);

Transform151.addChild(&Shape152);

Transform145.addChild(&Transform151);

Transform142.addChild(&Transform145);

Group141.addChild(&Transform142);

Script& Script159 =  Script();
Script159.setDEF(std::string("protoValueTransformerScript"));
Script159.setDirectOutput(true);
Script159.setMustEvaluate(true);
field& field160 =  field();
field160.setName(std::string("protoScale"));
field160.setAccessType(std::string("inputOutput"));
field160.setType(std::string("SFFloat"));
field160.setValue(std::string("30"));
Script159.addChild(&field160);

field& field161 =  field();
field161.setName(std::string("protoParameterName"));
field161.setAccessType(std::string("inputOutput"));
field161.setType(std::string("SFString"));
field161.setValue(std::string("a"));
Script159.addChild(&field161);

field& field162 =  field();
field162.setName(std::string("shader"));
field162.setAccessType(std::string("inputOutput"));
field162.setType(std::string("SFNode"));
Script159.addChild(&field162);

field& field163 =  field();
field163.setName(std::string("newTranslation"));
field163.setAccessType(std::string("inputOnly"));
field163.setType(std::string("SFVec3f"));
field163.setValue(std::string("1 1 1"));
Script159.addChild(&field163);

field& field164 =  field();
field164.setName(std::string("protoValue_changed"));
field164.setAccessType(std::string("outputOnly"));
field164.setType(std::string("SFFloat"));
field164.setValue(std::string("1"));
Script159.addChild(&field164);

field& field165 =  field();
field165.setName(std::string("protoText_changed"));
field165.setAccessType(std::string("outputOnly"));
field165.setType(std::string("MFString"));
field165.setValue(std::string("\"1.0\""));
Script159.addChild(&field165);

IS& IS166 =  IS();
Connect& connect167 =  Connect();
connect167.setNodeField(std::string("protoScale"));
connect167.setProtoField(std::string("parameterScale"));
IS166.addChild(&connect167);

Connect& connect168 =  Connect();
connect168.setNodeField(std::string("protoParameterName"));
connect168.setProtoField(std::string("parameterName"));
IS166.addChild(&connect168);

Connect& connect169 =  Connect();
connect169.setNodeField(std::string("shader"));
connect169.setProtoField(std::string("shaderNode"));
IS166.addChild(&connect169);

Script159.addChild(&IS166);


//Script159.setSourceCode(std::string("ecmascript:")+
//_T("const newTranslation = function(Value) {")+
//_T("	'use strict';")+
//_T("	protoValue_changed = Value.x * protoScale;")+
//_T("	protoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));")+
//_T("        var orientation = Value.x;")+
//_T("        var ps = Browser.currentScene.getNamedNode(\"protoSensor\");")+
//_T("        var t = Browser.currentScene.getNamedNode(\"protoTransform\");")+
//_T("        var txt = Browser.currentScene.getNamedNode(\"protoText\");")+
//_T("        if (shader) {")+
//_T("            shader.getField(protoParameterName).setValue(orientation * protoScale);")+
//_T("        }")+
//_T("        if (txt) {")+
//_T("            var stringField = txt.getField(\"string\");")+
//_T("            var label = protoParameterName;")+
//_T("            stringField.setValue(new MFString(label+\"=\"+(orientation * protoScale).toFixed(2)));")+
//_T("        }")+
//_T("        if (ps) {")+
//_T("            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);")+
//_T("        }")+
//_T("        if (t) {")+
//_T("            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);")+
//_T("        }")+
//_T("}"));
Group141.addChild(&Script159);

ROUTE& ROUTE170 =  ROUTE();
ROUTE170.setFromField(std::string("translation_changed"));
ROUTE170.setFromNode(std::string("protoSensor"));
ROUTE170.setToField(std::string("set_translation"));
ROUTE170.setToNode(std::string("protoTransform"));
Group141.addChild(&ROUTE170);

ROUTE& ROUTE171 =  ROUTE();
ROUTE171.setFromField(std::string("translation_changed"));
ROUTE171.setFromNode(std::string("protoSensor"));
ROUTE171.setToField(std::string("newTranslation"));
ROUTE171.setToNode(std::string("protoValueTransformerScript"));
Group141.addChild(&ROUTE171);

ROUTE& ROUTE172 =  ROUTE();
ROUTE172.setFromField(std::string("protoText_changed"));
ROUTE172.setFromNode(std::string("protoValueTransformerScript"));
ROUTE172.setToField(std::string("string"));
ROUTE172.setToNode(std::string("protoText"));
Group141.addChild(&ROUTE172);

ProtoBody140.addChild(&Group141);

ProtoDeclare131.addChild(&ProtoBody140);

LayoutLayer118.addChild(&ProtoDeclare131);

ProtoInstance& ProtoInstance173 =  ProtoInstance();
ProtoInstance173.setName(std::string("SliderProto"));
ProtoInstance173.setDEF(std::string("aPI"));
fieldValue& fieldValue174 =  fieldValue();
fieldValue174.setName(std::string("sliderTranslation"));
fieldValue174.setValue(std::string("0 0.7 0"));
ProtoInstance173.addChild(&fieldValue174);

fieldValue& fieldValue175 =  fieldValue();
fieldValue175.setName(std::string("transformTranslation"));
fieldValue175.setValue(std::string("0 0 0.1"));
ProtoInstance173.addChild(&fieldValue175);

fieldValue& fieldValue176 =  fieldValue();
fieldValue176.setName(std::string("sensorTranslation"));
fieldValue176.setValue(std::string("0 0 0"));
ProtoInstance173.addChild(&fieldValue176);

fieldValue& fieldValue177 =  fieldValue();
fieldValue177.setName(std::string("textString"));
fieldValue177.setValue(std::string("\"a=\""));
ProtoInstance173.addChild(&fieldValue177);

fieldValue& fieldValue178 =  fieldValue();
fieldValue178.setName(std::string("parameterScale"));
fieldValue178.setValue(std::string("30"));
ProtoInstance173.addChild(&fieldValue178);

fieldValue& fieldValue179 =  fieldValue();
fieldValue179.setName(std::string("parameterName"));
fieldValue179.setValue(std::string("a"));
ProtoInstance173.addChild(&fieldValue179);

fieldValue& fieldValue180 =  fieldValue();
fieldValue180.setName(std::string("shaderNode"));
ComposedShader& ComposedShader181 =  ComposedShader();
ComposedShader181.setUSE(std::string("freewrlShader"));
fieldValue180.addChild(&ComposedShader181);

ProtoInstance173.addChild(&fieldValue180);

LayoutLayer118.addChild(&ProtoInstance173);

ProtoInstance& ProtoInstance182 =  ProtoInstance();
ProtoInstance182.setName(std::string("SliderProto"));
ProtoInstance182.setDEF(std::string("bPI"));
fieldValue& fieldValue183 =  fieldValue();
fieldValue183.setName(std::string("sliderTranslation"));
fieldValue183.setValue(std::string("0 0.4 0"));
ProtoInstance182.addChild(&fieldValue183);

fieldValue& fieldValue184 =  fieldValue();
fieldValue184.setName(std::string("transformTranslation"));
fieldValue184.setValue(std::string("0 0 0.1"));
ProtoInstance182.addChild(&fieldValue184);

fieldValue& fieldValue185 =  fieldValue();
fieldValue185.setName(std::string("sensorTranslation"));
fieldValue185.setValue(std::string("0 0 0"));
ProtoInstance182.addChild(&fieldValue185);

fieldValue& fieldValue186 =  fieldValue();
fieldValue186.setName(std::string("textString"));
fieldValue186.setValue(std::string("\"b=\""));
ProtoInstance182.addChild(&fieldValue186);

fieldValue& fieldValue187 =  fieldValue();
fieldValue187.setName(std::string("parameterScale"));
fieldValue187.setValue(std::string("30"));
ProtoInstance182.addChild(&fieldValue187);

fieldValue& fieldValue188 =  fieldValue();
fieldValue188.setName(std::string("parameterName"));
fieldValue188.setValue(std::string("b"));
ProtoInstance182.addChild(&fieldValue188);

fieldValue& fieldValue189 =  fieldValue();
fieldValue189.setName(std::string("shaderNode"));
ComposedShader& ComposedShader190 =  ComposedShader();
ComposedShader190.setUSE(std::string("freewrlShader"));
fieldValue189.addChild(&ComposedShader190);

ProtoInstance182.addChild(&fieldValue189);

LayoutLayer118.addChild(&ProtoInstance182);

ProtoInstance& ProtoInstance191 =  ProtoInstance();
ProtoInstance191.setName(std::string("SliderProto"));
ProtoInstance191.setDEF(std::string("cPI"));
fieldValue& fieldValue192 =  fieldValue();
fieldValue192.setName(std::string("sliderTranslation"));
fieldValue192.setValue(std::string("0 0.1 0"));
ProtoInstance191.addChild(&fieldValue192);

fieldValue& fieldValue193 =  fieldValue();
fieldValue193.setName(std::string("transformTranslation"));
fieldValue193.setValue(std::string("0 0 0.1"));
ProtoInstance191.addChild(&fieldValue193);

fieldValue& fieldValue194 =  fieldValue();
fieldValue194.setName(std::string("sensorTranslation"));
fieldValue194.setValue(std::string("0 0 0"));
ProtoInstance191.addChild(&fieldValue194);

fieldValue& fieldValue195 =  fieldValue();
fieldValue195.setName(std::string("textString"));
fieldValue195.setValue(std::string("\"c=\""));
ProtoInstance191.addChild(&fieldValue195);

fieldValue& fieldValue196 =  fieldValue();
fieldValue196.setName(std::string("parameterScale"));
fieldValue196.setValue(std::string("20"));
ProtoInstance191.addChild(&fieldValue196);

fieldValue& fieldValue197 =  fieldValue();
fieldValue197.setName(std::string("parameterName"));
fieldValue197.setValue(std::string("c"));
ProtoInstance191.addChild(&fieldValue197);

fieldValue& fieldValue198 =  fieldValue();
fieldValue198.setName(std::string("shaderNode"));
ComposedShader& ComposedShader199 =  ComposedShader();
ComposedShader199.setUSE(std::string("freewrlShader"));
fieldValue198.addChild(&ComposedShader199);

ProtoInstance191.addChild(&fieldValue198);

LayoutLayer118.addChild(&ProtoInstance191);

ProtoInstance& ProtoInstance200 =  ProtoInstance();
ProtoInstance200.setName(std::string("SliderProto"));
ProtoInstance200.setDEF(std::string("dPI"));
fieldValue& fieldValue201 =  fieldValue();
fieldValue201.setName(std::string("sliderTranslation"));
fieldValue201.setValue(std::string("0 -0.2 0"));
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
fieldValue204.setName(std::string("textString"));
fieldValue204.setValue(std::string("\"d=\""));
ProtoInstance200.addChild(&fieldValue204);

fieldValue& fieldValue205 =  fieldValue();
fieldValue205.setName(std::string("parameterScale"));
fieldValue205.setValue(std::string("20"));
ProtoInstance200.addChild(&fieldValue205);

fieldValue& fieldValue206 =  fieldValue();
fieldValue206.setName(std::string("parameterName"));
fieldValue206.setValue(std::string("d"));
ProtoInstance200.addChild(&fieldValue206);

fieldValue& fieldValue207 =  fieldValue();
fieldValue207.setName(std::string("shaderNode"));
ComposedShader& ComposedShader208 =  ComposedShader();
ComposedShader208.setUSE(std::string("freewrlShader"));
fieldValue207.addChild(&ComposedShader208);

ProtoInstance200.addChild(&fieldValue207);

LayoutLayer118.addChild(&ProtoInstance200);

ProtoInstance& ProtoInstance209 =  ProtoInstance();
ProtoInstance209.setName(std::string("SliderProto"));
ProtoInstance209.setDEF(std::string("tdeltaPI"));
fieldValue& fieldValue210 =  fieldValue();
fieldValue210.setName(std::string("sliderTranslation"));
fieldValue210.setValue(std::string("0 -0.5 0"));
ProtoInstance209.addChild(&fieldValue210);

fieldValue& fieldValue211 =  fieldValue();
fieldValue211.setName(std::string("transformTranslation"));
fieldValue211.setValue(std::string("0 0 0.1"));
ProtoInstance209.addChild(&fieldValue211);

fieldValue& fieldValue212 =  fieldValue();
fieldValue212.setName(std::string("sensorTranslation"));
fieldValue212.setValue(std::string("0 0 0"));
ProtoInstance209.addChild(&fieldValue212);

fieldValue& fieldValue213 =  fieldValue();
fieldValue213.setName(std::string("textString"));
fieldValue213.setValue(std::string("\"tdelta=\""));
ProtoInstance209.addChild(&fieldValue213);

fieldValue& fieldValue214 =  fieldValue();
fieldValue214.setName(std::string("parameterScale"));
fieldValue214.setValue(std::string("6.28"));
ProtoInstance209.addChild(&fieldValue214);

fieldValue& fieldValue215 =  fieldValue();
fieldValue215.setName(std::string("parameterName"));
fieldValue215.setValue(std::string("tdelta"));
ProtoInstance209.addChild(&fieldValue215);

fieldValue& fieldValue216 =  fieldValue();
fieldValue216.setName(std::string("shaderNode"));
ComposedShader& ComposedShader217 =  ComposedShader();
ComposedShader217.setUSE(std::string("freewrlShader"));
fieldValue216.addChild(&ComposedShader217);

ProtoInstance209.addChild(&fieldValue216);

LayoutLayer118.addChild(&ProtoInstance209);

ProtoInstance& ProtoInstance218 =  ProtoInstance();
ProtoInstance218.setName(std::string("SliderProto"));
ProtoInstance218.setDEF(std::string("pdeltaPI"));
fieldValue& fieldValue219 =  fieldValue();
fieldValue219.setName(std::string("sliderTranslation"));
fieldValue219.setValue(std::string("0 -0.8 0"));
ProtoInstance218.addChild(&fieldValue219);

fieldValue& fieldValue220 =  fieldValue();
fieldValue220.setName(std::string("transformTranslation"));
fieldValue220.setValue(std::string("0 0 0.1"));
ProtoInstance218.addChild(&fieldValue220);

fieldValue& fieldValue221 =  fieldValue();
fieldValue221.setName(std::string("sensorTranslation"));
fieldValue221.setValue(std::string("0 0 0"));
ProtoInstance218.addChild(&fieldValue221);

fieldValue& fieldValue222 =  fieldValue();
fieldValue222.setName(std::string("textString"));
fieldValue222.setValue(std::string("\"pdelta=\""));
ProtoInstance218.addChild(&fieldValue222);

fieldValue& fieldValue223 =  fieldValue();
fieldValue223.setName(std::string("parameterScale"));
fieldValue223.setValue(std::string("6.28"));
ProtoInstance218.addChild(&fieldValue223);

fieldValue& fieldValue224 =  fieldValue();
fieldValue224.setName(std::string("parameterName"));
fieldValue224.setValue(std::string("pdelta"));
ProtoInstance218.addChild(&fieldValue224);

fieldValue& fieldValue225 =  fieldValue();
fieldValue225.setName(std::string("shaderNode"));
ComposedShader& ComposedShader226 =  ComposedShader();
ComposedShader226.setUSE(std::string("freewrlShader"));
fieldValue225.addChild(&ComposedShader226);

ProtoInstance218.addChild(&fieldValue225);

LayoutLayer118.addChild(&ProtoInstance218);

Layout& Layout227 =  Layout();
Layout227.setContainerField("layout");
Layout227.setAlign(new std::string[]{"LEFT", "BOTTOM"}, 2);
Layout227.setOffset(new float[]{-0.2,0.19}, 2);
Layout227.setOffsetUnits(new std::string[]{"WORLD", "WORLD"}, 2);
Layout227.setScaleMode(new std::string[]{"NONE", "NONE"}, 2);
Layout227.setSize(new float[]{0.4,0.6}, 2);
Layout227.setSizeUnits(new std::string[]{"WORLD", "WORLD"}, 2);
LayoutLayer118.setLayout(Layout227);

Viewport& Viewport228 =  Viewport();
Viewport228.setContainerField("viewport");
Viewport228.setClipBoundary(new float[]{0.0,1.0,0.0,1.0}, 4);
LayoutLayer118.setViewport(Viewport228);

LayerSet36.addChild(&LayoutLayer118);

Scene31.addChild(&LayerSet36);

X3D0.setScene(&Scene31);

//}
