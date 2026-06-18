#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void text3shapes(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("creator"));
meta2.setContent(std::string("John W Carlson"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("created"));
meta3.setContent(std::string("December 13 2015"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("title"));
meta4.setContent(std::string("text3shapes.x3d"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("identifier"));
meta5.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/text3shapes.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("description"));
meta6.setContent(std::string("3 text shapes"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("generator"));
meta7.setContent(std::string("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
Transform& Transform9 =  Transform();
Shape& Shape10 =  Shape();
Text& Text11 =  Text();
Text11.setString(new std::string[]{"Node\"\"\""}, 1);
CFontStyle& FontStyle12 =  CFontStyle();
FontStyle12.setContainerField("fontStyle");
Text11.setFontStyle(&FontStyle12);

Shape10.setGeometry(&Text11);

Appearance& Appearance13 =  Appearance();
Appearance13.setContainerField("appearance");
Material& Material14 =  Material();
Material14.setContainerField("material");
Appearance13.addChild(&Material14);

Shape10.addChild(&Appearance13);

Transform9.addChild(&Shape10);

Shape& Shape15 =  Shape();
Text& Text16 =  Text();
Text16.setString(new std::string[]{"Node2", "\\\\\\\\\\\\Node2"}, 2);
CFontStyle& FontStyle17 =  CFontStyle();
FontStyle17.setContainerField("fontStyle");
Text16.setFontStyle(&FontStyle17);

Shape15.setGeometry(&Text16);

Appearance& Appearance18 =  Appearance();
Appearance18.setContainerField("appearance");
Material& Material19 =  Material();
Material19.setContainerField("material");
Appearance18.addChild(&Material19);

Shape15.addChild(&Appearance18);

Transform9.addChild(&Shape15);

Shape& Shape20 =  Shape();
Text& Text21 =  Text();
Text21.setString(new std::string[]{"Node3 \\\\\\\\ \\\\ Node3\"\"\""}, 1);
CFontStyle& FontStyle22 =  CFontStyle();
FontStyle22.setContainerField("fontStyle");
Text21.setFontStyle(&FontStyle22);

Shape20.setGeometry(&Text21);

Appearance& Appearance23 =  Appearance();
Appearance23.setContainerField("appearance");
Material& Material24 =  Material();
Material24.setContainerField("material");
Appearance23.addChild(&Material24);

Shape20.addChild(&Appearance23);

Transform9.addChild(&Shape20);

Script& Script25 =  Script();
field& field26 =  field();
field26.setName(std::string("frontUrls"));
field26.setType(std::string("MFString"));
field26.setAccessType(std::string("initializeOnly"));
field26.setValue(std::string("\"rnl_front.png\" \"uffizi_front.png\""));
Script25.addChild(&field26);


//Script25.setSourceCode(std::string("ecmascript:")+
//_T("			    var me = '\"1\" \"\"2\" \"\\n3\"';"));
Transform9.addChild(&Script25);

Scene8.addChild(&Transform9);

X3D0.setScene(&Scene8);

}
