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
#include <string>
#include "X3DLib.h"
int HelloWorldMinimal(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
//All head/meta tags are optional, WorldInfo is also optional
//Text node not supported by X3D Interchange profile, use Immersive profile or Text component level 1
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("HelloWorldMinimal.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("Hello World minimal example scene."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("Don Brutzman"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("created"));
meta5.setContent(std::string("19 January 2020"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("modified"));
meta6.setContent(std::string("24 January 2020"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("reference"));
meta7.setContent(std::string("https://helloworldcollection.de"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("reference"));
meta8.setContent(std::string("https://en.wiktionary.org/wiki/Hello_World"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("reference"));
meta9.setContent(std::string("https://en.wikipedia.org/wiki/%22Hello,%20World!%22_program"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("reference"));
meta10.setContent(std::string("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("reference"));
meta11.setContent(std::string("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world#X3D_(Extensible_3D)"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("reference"));
meta12.setContent(std::string("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("reference"));
meta13.setContent(std::string("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimalIndex.html"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("identifier"));
meta14.setContent(std::string("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimal.x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("generator"));
meta15.setContent(std::string("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(std::string("license"));
meta16.setContent(std::string("../license.html"));
head1.addMeta(&meta16);

X3D0.setHead(&head1);

Scene& Scene17 =  Scene();
WorldInfo& WorldInfo18 =  WorldInfo();
WorldInfo18.setTitle(std::string("HelloWorldMinimal.x3d"));
Scene17.addChild(&WorldInfo18);

Shape& Shape19 =  Shape();
Text& Text20 =  Text();
Text20.setString((std::string[]){"hello, world"}, 1);
Shape19.setGeometry(&Text20);

Scene17.addChild(&Shape19);

X3D0.setScene(&Scene17);

}
