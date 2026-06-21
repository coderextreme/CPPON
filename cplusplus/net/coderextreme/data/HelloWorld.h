#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void HelloWorld(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
//Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("HelloWorld.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("Simple X3D model example: Hello World!"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("created"));
meta4.setContent(std::string("30 October 2000"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("modified"));
meta5.setContent(std::string("20 October 2019"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("creator"));
meta6.setContent(std::string("Don Brutzman"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("Image"));
meta7.setContent(std::string("HelloWorld.tall.png"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("reference"));
meta8.setContent(std::string("https://en.wikipedia.org/wiki/Hello_world"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("reference"));
meta9.setContent(std::string("https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("reference"));
meta10.setContent(std::string("https://en.wikipedia.org/wiki/\"Hello,_World!\"_program"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("reference"));
meta11.setContent(std::string("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("reference"));
meta12.setContent(std::string("https://www.HelloWorldExample.net"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("reference"));
meta13.setContent(std::string("https://www.web3d.org"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("reference"));
meta14.setContent(std::string("https://www.web3d.org/realtime-3d/news/internationalization-x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("reference"));
meta15.setContent(std::string("https://www.web3d.org/x3d/content/examples/HelloWorld.x3d"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(std::string("reference"));
meta16.setContent(std::string("https://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(std::string("identifier"));
meta17.setContent(std::string("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(std::string("license"));
meta18.setContent(std::string("https://www.web3d.org/x3d/content/examples/license.html"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(std::string("generator"));
meta19.setContent(std::string("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(std::string("reference"));
meta20.setContent(std::string("HelloWorld.wrl"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(std::string("reference"));
meta21.setContent(std::string("HelloWorld.x3dv"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(std::string("reference"));
meta22.setContent(std::string("HelloWorld.x3db"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(std::string("reference"));
meta23.setContent(std::string("HelloWorld.xhtml"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(std::string("reference"));
meta24.setContent(std::string("HelloWorld.json"));
head1.addMeta(&meta24);

X3D0.setHead(&head1);

Scene& Scene25 =  Scene();
//Example scene to illustrate X3D nodes and fields (XML elements and attributes)
WorldInfo& WorldInfo26 =  WorldInfo();
WorldInfo26.setInfo(new std::string[]{"Example scene to illustrate a simple X3D model"}, 1);
WorldInfo26.setTitle(std::string("Hello World!"));
Scene25.addChild(&WorldInfo26);

Group& Group27 =  Group();
Viewpoint& Viewpoint28 =  Viewpoint();
Viewpoint28.setDEF(std::string("ViewUpClose"));
Viewpoint28.setCenterOfRotation(new float[]{0.0,-1.0,0.0});
Viewpoint28.setDescription(std::string("Hello world!"));
Viewpoint28.setPosition(new float[]{0.0,-1.0,7.0});
Group27.addChild(&Viewpoint28);

Transform& Transform29 =  Transform();
Transform29.setRotation(new float[]{0.0,1.0,0.0,3.0});
Shape& Shape30 =  Shape();
Sphere& Sphere31 =  Sphere();
Shape30.setGeometry(&Sphere31);

Appearance& Appearance32 =  Appearance();
Appearance32.setContainerField("appearance");
Material& Material33 =  Material();
Material33.setContainerField("material");
Material33.setDEF(std::string("MaterialLightBlue"));
Material33.setDiffuseColor(new float[]{0.1,0.5,1.0});
Appearance32.addChild(&Material33);

ImageTexture& ImageTexture34 =  ImageTexture();
ImageTexture34.setContainerField("texture");
ImageTexture34.setDEF(std::string("ImageCloudlessEarth"));
ImageTexture34.setUrl(new std::string[]{"earth-topo.png", "earth-topo.jpg", "earth-topo-small.gif", "https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png", "https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg", "https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"}, 6);
Appearance32.addChild(&ImageTexture34);

Shape30.addChild(&Appearance32);

Transform29.addChild(&Shape30);

Group27.addChild(&Transform29);

Transform& Transform35 =  Transform();
Transform35.setTranslation(new float[]{0.0,-2.0,0.0});
Shape& Shape36 =  Shape();
Text& Text37 =  Text();
Text37.setDEF(std::string("TextMessage"));
Text37.setString(new std::string[]{"Hello", "world!"}, 2);
CFontStyle& FontStyle38 =  CFontStyle();
FontStyle38.setContainerField("fontStyle");
FontStyle38.setJustify(new std::string[]{"MIDDLE", "MIDDLE"}, 2);
Text37.setFontStyle(&FontStyle38);

Shape36.setGeometry(&Text37);

Appearance& Appearance39 =  Appearance();
Appearance39.setContainerField("appearance");
Material& Material40 =  Material();
Material40.setContainerField("material");
Material40.setUSE(std::string("MaterialLightBlue"));
Appearance39.addChild(&Material40);

Shape36.addChild(&Appearance39);

Transform35.addChild(&Shape36);

Group27.addChild(&Transform35);

Scene25.addChild(&Group27);

X3D0.setScene(&Scene25);

//}
