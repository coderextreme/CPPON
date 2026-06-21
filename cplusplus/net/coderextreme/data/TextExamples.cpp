#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("TextExamples.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("Show different escape-character text examples for embedded quotation marks."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("Don Brutzman"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("created"));
meta5.setContent(std::string("7 April 2001"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("modified"));
meta6.setContent(std::string("26 April 2016"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("warning"));
meta7.setContent(std::string("Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control."));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("warning"));
meta8.setContent(std::string("Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations."));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("identifier"));
meta9.setContent(std::string("https://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("generator"));
meta10.setContent(std::string("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("license"));
meta11.setContent(std::string("../license.html"));
head1.addMeta(&meta11);

X3D0.setHead(&head1);

Scene& Scene12 =  Scene();
Transform& Transform13 =  Transform();
Transform13.setTranslation(new float[]{0.0,2.0,0.0});
Shape& Shape14 =  Shape();
Text& Text15 =  Text();
Text15.setString(new std::string[]{"Compare special character escaping"}, 1);
CFontStyle& FontStyle16 =  CFontStyle();
FontStyle16.setContainerField("fontStyle");
FontStyle16.setDEF(std::string("testFontStyle"));
FontStyle16.setJustify(new std::string[]{"MIDDLE", "MIDDLE"}, 2);
FontStyle16.setSize(0.8);
Text15.setFontStyle(&FontStyle16);

Shape14.setGeometry(&Text15);

Appearance& Appearance17 =  Appearance();
Appearance17.setContainerField("appearance");
Appearance17.setDEF(std::string("LightBlueAppearance"));
Material& Material18 =  Material();
Material18.setContainerField("material");
Material18.setDiffuseColor(new float[]{0.1,0.7,0.7});
Appearance17.addChild(&Material18);

Shape14.addChild(&Appearance17);

Transform13.addChild(&Shape14);

Scene12.addChild(&Transform13);

Transform& Transform19 =  Transform();
Transform19.setTranslation(new float[]{-3.0,0.0,0.0});
Shape& Shape20 =  Shape();
Text& Text21 =  Text();
Text21.setString(new std::string[]{"I don't think so", "he said \"Hi\""}, 2);
CFontStyle& FontStyle22 =  CFontStyle();
FontStyle22.setContainerField("fontStyle");
FontStyle22.setUSE(std::string("testFontStyle"));
Text21.setFontStyle(&FontStyle22);

Shape20.setGeometry(&Text21);

Appearance& Appearance23 =  Appearance();
Appearance23.setContainerField("appearance");
Appearance23.setUSE(std::string("LightBlueAppearance"));
Shape20.addChild(&Appearance23);

Transform19.addChild(&Shape20);

Scene12.addChild(&Transform19);

Transform& Transform24 =  Transform();
Transform24.setTranslation(new float[]{3.0,0.0,0.0});
Shape& Shape25 =  Shape();
Text& Text26 =  Text();
Text26.setString(new std::string[]{"I don't think so", "he said \"Hi\""}, 2);
CFontStyle& FontStyle27 =  CFontStyle();
FontStyle27.setContainerField("fontStyle");
FontStyle27.setUSE(std::string("testFontStyle"));
Text26.setFontStyle(&FontStyle27);

Shape25.setGeometry(&Text26);

Appearance& Appearance28 =  Appearance();
Appearance28.setContainerField("appearance");
Appearance28.setUSE(std::string("LightBlueAppearance"));
Shape25.addChild(&Appearance28);

Transform24.addChild(&Shape25);

Scene12.addChild(&Transform24);

X3D0.setScene(&Scene12);

}
