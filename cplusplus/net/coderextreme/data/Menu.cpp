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
int Menu(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("Menu.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("X3D scene with a Switch of Inlines controlled by a menu"));
head1.addMeta(&meta3);

X3D0.setHead(&head1);

Scene& Scene4 =  Scene();
//Viewpoint and any other scene setup
Viewpoint& Viewpoint5 =  Viewpoint();
Viewpoint5.setPosition(new float[]{0.0,20.0,110.0});
Scene4.addChild(&Viewpoint5);

//Menu prototype declaration
ProtoDeclare& ProtoDeclare6 =  ProtoDeclare();
ProtoDeclare6.setName(std::string("Menu"));
ProtoInterface& ProtoInterface7 =  ProtoInterface();
field& field8 =  field();
field8.setName(std::string("menuItems"));
field8.setType(std::string("MFString"));
field8.setAccessType(std::string("initializeOnly"));
ProtoInterface7.addChild(&field8);

ProtoDeclare6.addChild(&ProtoInterface7);

ProtoBody& ProtoBody9 =  ProtoBody();
Group& Group10 =  Group();
Transform& Transform11 =  Transform();
Transform11.setDEF(std::string("TextMenuTransform"));
Transform11.setTranslation(new float[]{48.0,27.0,0.0});
TouchSensor& TouchSensor12 =  TouchSensor();
TouchSensor12.setDEF(std::string("MenuTouchSensor"));
Transform11.addChild(&TouchSensor12);

Shape& Shape13 =  Shape();
Appearance& Appearance14 =  Appearance();
Material& Material15 =  Material();
Material15.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance14.addChild(&Material15);

Shape13.addChild(&Appearance14);

Text& Text16 =  Text();
Text16.setDEF(std::string("MenuText"));
IS& IS17 =  IS();
Connect& connect18 =  Connect();
connect18.setNodeField(std::string("string"));
connect18.setProtoField(std::string("menuItems"));
IS17.addChild(&connect18);

Text16.addChild(&IS17);

CFontStyle& FontStyle19 =  CFontStyle();
FontStyle19.setSize(2.4);
FontStyle19.setSpacing(1.2);
FontStyle19.setJustify((std::string[]){"MIDDLE", "MIDDLE"}, 2);
Text16.setFontStyle(&FontStyle19);

Shape13.setGeometry(&Text16);

Transform11.addChild(&Shape13);

Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Material22.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance21.addChild(&Material22);

Shape20.addChild(&Appearance21);

IndexedFaceSet& IndexedFaceSet23 =  IndexedFaceSet();
IndexedFaceSet23.setDEF(std::string("Backing"));
IndexedFaceSet23.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate24 =  Coordinate();
Coordinate24.setPoint(new float[]{25.0,36.0,-0.01,-25.0,36.0,-0.01,-25.0,-51.0,-0.01,25.0,-51.0,-0.01}, 12);
IndexedFaceSet23.setCoord(&Coordinate24);

Shape20.setGeometry(&IndexedFaceSet23);

Transform11.addChild(&Shape20);

Group10.addChild(&Transform11);

Switch& Switch25 =  Switch();
Switch25.setDEF(std::string("SceneSwitcher"));
Switch25.setWhichChoice(0);
Inline& Inline26 =  Inline();
Inline26.setDEF(std::string("OPTION1"));
Inline26.setUrl((std::string[]){"../resources/JinInnerBrowRaiser.x3d", "JinInnerBrowRaiser.x3d"}, 2);
Switch25.addChild(&Inline26);

Inline& Inline27 =  Inline();
Inline27.setDEF(std::string("OPTION2"));
Inline27.setUrl((std::string[]){"../resources/JinOuterBrowRaiser.x3d", "JinOuterBrowRaiser.x3d"}, 2);
Switch25.addChild(&Inline27);

Inline& Inline28 =  Inline();
Inline28.setDEF(std::string("OPTION3"));
Inline28.setUrl((std::string[]){"../resources/JinBrowLowerer.x3d", "JinBrowLowerer.x3d"}, 2);
Switch25.addChild(&Inline28);

Inline& Inline29 =  Inline();
Inline29.setDEF(std::string("OPTION4"));
Inline29.setUrl((std::string[]){"../resources/JinUpperLidRaiser.x3d", "JinUpperLidRaiser.x3d"}, 2);
Switch25.addChild(&Inline29);

Inline& Inline30 =  Inline();
Inline30.setDEF(std::string("OPTION5"));
Inline30.setUrl((std::string[]){"../resources/JinCheekRaiser.x3d", "JinCheekRaiser.x3d"}, 2);
Switch25.addChild(&Inline30);

Inline& Inline31 =  Inline();
Inline31.setDEF(std::string("OPTION6"));
Inline31.setUrl((std::string[]){"../resources/JinLidTightener.x3d", "JinLidTightener.x3d"}, 2);
Switch25.addChild(&Inline31);

Inline& Inline32 =  Inline();
Inline32.setDEF(std::string("OPTION7"));
Inline32.setUrl((std::string[]){"../resources/JinNoseWrinkler.x3d", "JinNoseWrinkler.x3d"}, 2);
Switch25.addChild(&Inline32);

Inline& Inline33 =  Inline();
Inline33.setDEF(std::string("OPTION8"));
Inline33.setUrl((std::string[]){"../resources/JinUpperLipRaiser.x3d", "JinUpperLipRaiser.x3d"}, 2);
Switch25.addChild(&Inline33);

Inline& Inline34 =  Inline();
Inline34.setDEF(std::string("OPTION9"));
Inline34.setUrl((std::string[]){"../resources/JinNasolabialDeepener.x3d", "JinNasolabialDeepener.x3d"}, 2);
Switch25.addChild(&Inline34);

Inline& Inline35 =  Inline();
Inline35.setDEF(std::string("OPTION10"));
Inline35.setUrl((std::string[]){"../resources/JinLipCornerPuller.x3d", "JinLipCornerPuller.x3d"}, 2);
Switch25.addChild(&Inline35);

Inline& Inline36 =  Inline();
Inline36.setDEF(std::string("OPTION11"));
Inline36.setUrl((std::string[]){"../resources/JinCheekPuffer.x3d", "JinCheekPuffer.x3d"}, 2);
Switch25.addChild(&Inline36);

Inline& Inline37 =  Inline();
Inline37.setDEF(std::string("OPTION12"));
Inline37.setUrl((std::string[]){"../resources/JinDimpler.x3d", "JinDimpler.x3d"}, 2);
Switch25.addChild(&Inline37);

Inline& Inline38 =  Inline();
Inline38.setDEF(std::string("OPTION13"));
Inline38.setUrl((std::string[]){"../resources/JinLipCornerDepressor.x3d", "JinLipCornerDepressor.x3d"}, 2);
Switch25.addChild(&Inline38);

Inline& Inline39 =  Inline();
Inline39.setDEF(std::string("OPTION14"));
Inline39.setUrl((std::string[]){"../resources/JinLowerLipDepressor.x3d", "JinLowerLipDepressor.x3d"}, 2);
Switch25.addChild(&Inline39);

Inline& Inline40 =  Inline();
Inline40.setDEF(std::string("OPTION15"));
Inline40.setUrl((std::string[]){"../resources/JinChinRaiser.x3d", "JinChinRaiser.x3d"}, 2);
Switch25.addChild(&Inline40);

Inline& Inline41 =  Inline();
Inline41.setDEF(std::string("OPTION16"));
Inline41.setUrl((std::string[]){"../resources/JinLipPuckerer.x3d", "JinLipPuckerer.x3d"}, 2);
Switch25.addChild(&Inline41);

Inline& Inline42 =  Inline();
Inline42.setDEF(std::string("OPTION17"));
Inline42.setUrl((std::string[]){"../resources/JinLipStretcher.x3d", "JinLipStretcher.x3d"}, 2);
Switch25.addChild(&Inline42);

Inline& Inline43 =  Inline();
Inline43.setDEF(std::string("OPTION18"));
Inline43.setUrl((std::string[]){"../resources/JinLipFunneler.x3d", "JinLipFunneler.x3d"}, 2);
Switch25.addChild(&Inline43);

Inline& Inline44 =  Inline();
Inline44.setDEF(std::string("OPTION19"));
Inline44.setUrl((std::string[]){"../resources/JinLipTightener.x3d", "JinLipTightener.x3d"}, 2);
Switch25.addChild(&Inline44);

Inline& Inline45 =  Inline();
Inline45.setDEF(std::string("OPTION20"));
Inline45.setUrl((std::string[]){"../resources/JinLipPressor.x3d", "JinLipPressor.x3d"}, 2);
Switch25.addChild(&Inline45);

Inline& Inline46 =  Inline();
Inline46.setDEF(std::string("OPTION21"));
Inline46.setUrl((std::string[]){"../resources/JinLipsPart.x3d", "JinLipsPart.x3d"}, 2);
Switch25.addChild(&Inline46);

Inline& Inline47 =  Inline();
Inline47.setDEF(std::string("OPTION22"));
Inline47.setUrl((std::string[]){"../resources/JinJawDrop.x3d", "JinJawDrop.x3d"}, 2);
Switch25.addChild(&Inline47);

Inline& Inline48 =  Inline();
Inline48.setDEF(std::string("OPTION23"));
Inline48.setUrl((std::string[]){"../resources/JinMouthStretch.x3d", "JinMouthStretch.x3d"}, 2);
Switch25.addChild(&Inline48);

Inline& Inline49 =  Inline();
Inline49.setDEF(std::string("OPTION24"));
Inline49.setUrl((std::string[]){"../resources/JinLipSuck.x3d", "JinLipSuck.x3d"}, 2);
Switch25.addChild(&Inline49);

Inline& Inline50 =  Inline();
Inline50.setDEF(std::string("OPTION25"));
Inline50.setUrl((std::string[]){"../resources/JinLidDroop.x3d", "JinLidDroop.x3d"}, 2);
Switch25.addChild(&Inline50);

Inline& Inline51 =  Inline();
Inline51.setDEF(std::string("OPTION26"));
Inline51.setUrl((std::string[]){"../resources/JinSlit.x3d", "JinSlit.x3d"}, 2);
Switch25.addChild(&Inline51);

Inline& Inline52 =  Inline();
Inline52.setDEF(std::string("OPTION27"));
Inline52.setUrl((std::string[]){"../resources/JinEyesClosed.x3d", "JinEyesClosed.x3d"}, 2);
Switch25.addChild(&Inline52);

Inline& Inline53 =  Inline();
Inline53.setDEF(std::string("OPTION28"));
Inline53.setUrl((std::string[]){"../resources/JinSquint.x3d", "JinSquint.x3d"}, 2);
Switch25.addChild(&Inline53);

Inline& Inline54 =  Inline();
Inline54.setDEF(std::string("OPTION29"));
Inline54.setUrl((std::string[]){"../resources/JinBlink.x3d", "JinBlink.x3d"}, 2);
Switch25.addChild(&Inline54);

Inline& Inline55 =  Inline();
Inline55.setDEF(std::string("OPTION30"));
Inline55.setUrl((std::string[]){"../resources/JinWink.x3d", "JinWink.x3d"}, 2);
Switch25.addChild(&Inline55);

Group10.addChild(&Switch25);

//Script to handle selection logic
Script& Script56 =  Script();
Script56.setDEF(std::string("MenuScript"));
field& field57 =  field();
field57.setName(std::string("menuItems"));
field57.setType(std::string("MFString"));
field57.setAccessType(std::string("initializeOnly"));
Script56.addChild(&field57);

field& field58 =  field();
field58.setName(std::string("selection"));
field58.setType(std::string("SFInt32"));
field58.setAccessType(std::string("outputOnly"));
Script56.addChild(&field58);

field& field59 =  field();
field59.setName(std::string("touchPoint"));
field59.setType(std::string("SFVec3f"));
field59.setAccessType(std::string("inputOnly"));
Script56.addChild(&field59);

field& field60 =  field();
field60.setName(std::string("spacing"));
field60.setType(std::string("SFFloat"));
field60.setAccessType(std::string("initializeOnly"));
field60.setValue(std::string("1.2"));
Script56.addChild(&field60);

field& field61 =  field();
field61.setName(std::string("size"));
field61.setType(std::string("SFFloat"));
field61.setAccessType(std::string("initializeOnly"));
field61.setValue(std::string("2.4"));
Script56.addChild(&field61);

field& field62 =  field();
field62.setName(std::string("menuCenterY"));
field62.setType(std::string("SFFloat"));
field62.setAccessType(std::string("initializeOnly"));
Script56.addChild(&field62);

field& field63 =  field();
field63.setName(std::string("itemHeight"));
field63.setType(std::string("SFFloat"));
field63.setAccessType(std::string("initializeOnly"));
Script56.addChild(&field63);

IS& IS64 =  IS();
Connect& connect65 =  Connect();
connect65.setNodeField(std::string("menuItems"));
connect65.setProtoField(std::string("menuItems"));
IS64.addChild(&connect65);

Script56.addChild(&IS64);


//Script56.setSourceCode(std::string("ecmascript:")+
//_T("        function initialize() {")+
//_T("          selection = 0;")+
//_T("          var spacingBetweenGlyphs = size * spacing - size; // Spacing calculation")+
//_T("          var menuHeight = (size + spacingBetweenGlyphs) * menuItems.length;")+
//_T("          menuCenterY = menuHeight / 2;")+
//_T("          itemHeight = menuHeight / menuItems.length;")+
//_T("        }")+
//_T("        function touchPoint(value) {")+
//_T("          Browser.print(\"Hit \"+value+\" \"+selection+\"")+
//_T("\");")+
//_T("          var index = Math.floor((menuCenterY - value.y) / itemHeight - 0.5);")+
//_T("          selection = index - 2;")+
//_T("          if (selection >= 0 && selection < menuItems.length) {")+
//_T("            Browser.print(\"Selected \"+value+\" \"+selection+\" \"+menuItems[selection]+\"")+
//_T("\");")+
//_T("          }")+
//_T("        }"));
Group10.addChild(&Script56);

//ROUTEs to connect everything
ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(std::string("MenuTouchSensor"));
ROUTE66.setFromField(std::string("hitPoint_changed"));
ROUTE66.setToNode(std::string("MenuScript"));
ROUTE66.setToField(std::string("touchPoint"));
Group10.addChild(&ROUTE66);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(std::string("MenuScript"));
ROUTE67.setFromField(std::string("selection"));
ROUTE67.setToNode(std::string("SceneSwitcher"));
ROUTE67.setToField(std::string("whichChoice"));
Group10.addChild(&ROUTE67);

ProtoBody9.addChild(&Group10);

ProtoDeclare6.addChild(&ProtoBody9);

Scene4.addChild(&ProtoDeclare6);

ProtoInstance& ProtoInstance68 =  ProtoInstance();
ProtoInstance68.setName(std::string("Menu"));
ProtoInstance68.setDEF(std::string("MainMenu"));
fieldValue& fieldValue69 =  fieldValue();
fieldValue69.setName(std::string("menuItems"));
fieldValue69.setValue(std::string("\"JinInnerBrowRaiser.x3d\" \"JinOuterBrowRaiser.x3d\" \"JinBrowLowerer.x3d\" \"JinUpperLidRaiser.x3d\" \"JinCheekRaiser.x3d\" \"JinLidTightener.x3d\" \"JinNoseWrinkler.x3d\" \"JinUpperLipRaiser.x3d\" \"JinNasolabialDeepener.x3d\" \"JinLipCornerPuller.x3d\" \"JinCheekPuffer.x3d\" \"JinDimpler.x3d\" \"JinLipCornerDepressor.x3d\" \"JinLowerLipDepressor.x3d\" \"JinChinRaiser.x3d\" \"JinLipPuckerer.x3d\" \"JinLipStretcher.x3d\" \"JinLipFunneler.x3d\" \"JinLipTightener.x3d\" \"JinLipPressor.x3d\" \"JinLipsPart.x3d\" \"JinJawDrop.x3d\" \"JinMouthStretch.x3d\" \"JinLipSuck.x3d\" \"JinLidDroop.x3d\" \"JinSlit.x3d\" \"JinEyesClosed.x3d\" \"JinSquint.x3d\" \"JinBlink.x3d\" \"JinWink.x3d\""));
ProtoInstance68.addChild(&fieldValue69);

Scene4.addChild(&ProtoInstance68);

X3D0.setScene(&Scene4);

}
