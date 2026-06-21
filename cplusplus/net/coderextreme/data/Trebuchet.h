#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void Trebuchet(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("Trebuchet.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("Working model of a 14th century Trebuchet Catapult."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("LT Joe Roth"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("created"));
meta5.setContent(std::string("20 June 2001"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("modified"));
meta6.setContent(std::string("20 October 2019"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("version"));
meta7.setContent(std::string("7.8"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("identifier"));
meta8.setContent(std::string("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("reference"));
meta9.setContent(std::string("http://trebuchet.com"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("reference"));
meta10.setContent(std::string("http://members.home.net/dimona"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("subject"));
meta11.setContent(std::string("trebuchet catapult Monty Python"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("reference"));
meta12.setContent(std::string("Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under \"Fair Use\" clause of the DMCA"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("reference"));
meta13.setContent(std::string("https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("reference"));
meta14.setContent(std::string("http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("generator"));
meta15.setContent(std::string("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(std::string("license"));
meta16.setContent(std::string("../license.html"));
head1.addMeta(&meta16);

X3D0.setHead(&head1);

Scene& Scene17 =  Scene();
WorldInfo& WorldInfo18 =  WorldInfo();
WorldInfo18.setTitle(std::string("Trebuchet.x3d"));
Scene17.addChild(&WorldInfo18);

Background& Background19 =  Background();
Background19.setBackUrl(new std::string[]{"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg"}, 1);
Background19.setBottomUrl(new std::string[]{"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg"}, 1);
Background19.setFrontUrl(new std::string[]{"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg"}, 1);
Background19.setGroundAngle(new float[]{1.309,1.570796}, 2);
Background19.setGroundColor(new float[]{0.1,0.1,0.0,0.4,0.25,0.2,0.6,0.6,0.6}, 9);
Background19.setLeftUrl(new std::string[]{"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg"}, 1);
Background19.setRightUrl(new std::string[]{"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg"}, 1);
Background19.setSkyAngle(new float[]{1.309,1.57079}, 2);
Background19.setSkyColor(new float[]{0.0,0.2,0.7,0.0,0.5,1.0,1.0,1.0,1.0}, 9);
Background19.setTopUrl(new std::string[]{"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg"}, 1);
Scene17.addChild(&Background19);

Sound& Sound20 =  Sound();
Sound20.setMaxBack(1000);
Sound20.setMaxFront(1000);
AudioClip& AudioClip21 =  AudioClip();
AudioClip21.setContainerField("source");
AudioClip21.setDEF(std::string("HolyGrail"));
AudioClip21.setDescription(std::string("HolyGrail"));
AudioClip21.setLoop(true);
AudioClip21.setUrl(new std::string[]{"holygral.mp3", "http://www.nps.navy.mil/code32/vrml/holygral.mp3"}, 2);
Sound20.setSource(AudioClip21);

Scene17.addChild(&Sound20);

Shape& Shape22 =  Shape();
Box& Box23 =  Box();
Box23.setSize(new float[]{10000.0,1.0,10000.0});
Shape22.setGeometry(&Box23);

Appearance& Appearance24 =  Appearance();
Appearance24.setContainerField("appearance");
ImageTexture& ImageTexture25 =  ImageTexture();
ImageTexture25.setContainerField("texture");
ImageTexture25.setUrl(new std::string[]{"grass.jpg", "https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg"}, 2);
Appearance24.addChild(&ImageTexture25);

Shape22.addChild(&Appearance24);

Scene17.addChild(&Shape22);

Transform& Transform26 =  Transform();
Transform26.setRotation(new float[]{0.0,1.0,0.0,1.57});
Transform26.setScale(new float[]{0.5,0.5,0.5});
Transform26.setTranslation(new float[]{10.5,6.5,4.5});
Shape& Shape27 =  Shape();
Appearance& Appearance28 =  Appearance();
Appearance28.setContainerField("appearance");
Appearance28.setDEF(std::string("TextAppearance"));
Material& Material29 =  Material();
Material29.setContainerField("material");
Material29.setDiffuseColor(new float[]{1.0,0.0,0.0});
Material29.setEmissiveColor(new float[]{1.0,1.0,0.0});
Appearance28.addChild(&Material29);

Shape27.addChild(&Appearance28);

Text& Text30 =  Text();
Text30.setString(new std::string[]{"Click Sling to Select Projectile"}, 1);
CFontStyle& FontStyle31 =  CFontStyle();
FontStyle31.setContainerField("fontStyle");
Text30.setFontStyle(&FontStyle31);

Shape27.setGeometry(&Text30);

Transform26.addChild(&Shape27);

Scene17.addChild(&Transform26);

Transform& Transform32 =  Transform();
Transform32.setRotation(new float[]{0.0,1.0,0.0,1.57});
Transform32.setScale(new float[]{0.5,0.5,0.5});
Transform32.setTranslation(new float[]{11.0,5.5,6.0});
Switch& Switch33 =  Switch();
Switch33.setDEF(std::string("Weight"));
Switch33.setWhichChoice(0);
Group& Group34 =  Group();
Shape& Shape35 =  Shape();
Appearance& Appearance36 =  Appearance();
Appearance36.setContainerField("appearance");
Appearance36.setUSE(std::string("TextAppearance"));
Shape35.addChild(&Appearance36);

Text& Text37 =  Text();
Text37.setString(new std::string[]{"Click Here to Change Counter Weight (50 lbs)"}, 1);
Shape35.setGeometry(&Text37);

Group34.addChild(&Shape35);

Switch33.addChild(&Group34);

Group& Group38 =  Group();
Shape& Shape39 =  Shape();
Appearance& Appearance40 =  Appearance();
Appearance40.setContainerField("appearance");
Appearance40.setUSE(std::string("TextAppearance"));
Shape39.addChild(&Appearance40);

Text& Text41 =  Text();
Text41.setString(new std::string[]{"Click Here to Change Counter Weight (500 lbs)"}, 1);
Shape39.setGeometry(&Text41);

Group38.addChild(&Shape39);

Switch33.addChild(&Group38);

Group& Group42 =  Group();
Shape& Shape43 =  Shape();
Appearance& Appearance44 =  Appearance();
Appearance44.setContainerField("appearance");
Appearance44.setUSE(std::string("TextAppearance"));
Shape43.addChild(&Appearance44);

Text& Text45 =  Text();
Text45.setString(new std::string[]{"Click Here to Change Counter Weight (1000 lbs)"}, 1);
Shape43.setGeometry(&Text45);

Group42.addChild(&Shape43);

Switch33.addChild(&Group42);

Group& Group46 =  Group();
Shape& Shape47 =  Shape();
Appearance& Appearance48 =  Appearance();
Appearance48.setContainerField("appearance");
Appearance48.setUSE(std::string("TextAppearance"));
Shape47.addChild(&Appearance48);

Text& Text49 =  Text();
Text49.setString(new std::string[]{"Click Here to Change Counter Weight (10000 lbs)"}, 1);
Shape47.setGeometry(&Text49);

Group46.addChild(&Shape47);

Switch33.addChild(&Group46);

Transform32.addChild(&Switch33);

TouchSensor& TouchSensor50 =  TouchSensor();
TouchSensor50.setDEF(std::string("weightselector"));
TouchSensor50.setDescription(std::string("weight selector"));
Transform32.addChild(&TouchSensor50);

Transform& Transform51 =  Transform();
Transform51.setTranslation(new float[]{8.0,0.0,0.0});
Shape& Shape52 =  Shape();
Box& Box53 =  Box();
Box53.setSize(new float[]{20.0,1.0,1.0});
Shape52.setGeometry(&Box53);

Appearance& Appearance54 =  Appearance();
Appearance54.setContainerField("appearance");
Material& Material55 =  Material();
Material55.setContainerField("material");
Material55.setTransparency(1);
Appearance54.addChild(&Material55);

Shape52.addChild(&Appearance54);

Transform51.addChild(&Shape52);

Transform32.addChild(&Transform51);

Scene17.addChild(&Transform32);

Transform& Transform56 =  Transform();
Transform56.setRotation(new float[]{0.0,1.0,0.0,1.57});
Transform56.setTranslation(new float[]{10.0,0.5,4.5});
Transform& Transform57 =  Transform();
Transform57.setDEF(std::string("launch"));
Transform57.setTranslation(new float[]{0.0,2.0,5.0});
Billboard& Billboard58 =  Billboard();
Shape& Shape59 =  Shape();
Appearance& Appearance60 =  Appearance();
Appearance60.setContainerField("appearance");
Material& Material61 =  Material();
Material61.setContainerField("material");
Material61.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance60.addChild(&Material61);

Shape59.addChild(&Appearance60);

Text& Text62 =  Text();
Text62.setString(new std::string[]{"LAUNCH"}, 1);
CFontStyle& FontStyle63 =  CFontStyle();
FontStyle63.setContainerField("fontStyle");
Text62.setFontStyle(&FontStyle63);

Shape59.setGeometry(&Text62);

Billboard58.addChild(&Shape59);

Transform& Transform64 =  Transform();
Transform64.setTranslation(new float[]{2.0,0.3,0.0});
Shape& Shape65 =  Shape();
Box& Box66 =  Box();
Box66.setSize(new float[]{5.0,1.0,1.0});
Shape65.setGeometry(&Box66);

Appearance& Appearance67 =  Appearance();
Appearance67.setContainerField("appearance");
Material& Material68 =  Material();
Material68.setContainerField("material");
Material68.setTransparency(1);
Appearance67.addChild(&Material68);

Shape65.addChild(&Appearance67);

Transform64.addChild(&Shape65);

Billboard58.addChild(&Transform64);

Switch& Switch69 =  Switch();
Switch69.setDEF(std::string("PigdogMonk"));
Switch69.setWhichChoice(-1);
Group& Group70 =  Group();
Sound& Sound71 =  Sound();
Sound71.setMaxBack(1000);
Sound71.setMaxFront(1000);
AudioClip& AudioClip72 =  AudioClip();
AudioClip72.setContainerField("source");
AudioClip72.setDEF(std::string("PigDogSound"));
AudioClip72.setDescription(std::string("PigDogSound"));
AudioClip72.setUrl(new std::string[]{"pigdog.wav", "http://www.nps.navy.mil/code32/vrml/pigdog.wav"}, 2);
Sound71.setSource(AudioClip72);

Group70.addChild(&Sound71);

Switch69.addChild(&Group70);

Group& Group73 =  Group();
Sound& Sound74 =  Sound();
Sound74.setMaxBack(1000);
Sound74.setMaxFront(1000);
AudioClip& AudioClip75 =  AudioClip();
AudioClip75.setContainerField("source");
AudioClip75.setDEF(std::string("MonkSound"));
AudioClip75.setDescription(std::string("MonkSound"));
AudioClip75.setUrl(new std::string[]{"monks.wav", "http://www.nps.navy.mil/code32/vrml/monks.wav"}, 2);
Sound74.setSource(AudioClip75);

Group73.addChild(&Sound74);

Switch69.addChild(&Group73);

Billboard58.addChild(&Switch69);

Transform57.addChild(&Billboard58);

TouchSensor& TouchSensor76 =  TouchSensor();
TouchSensor76.setDEF(std::string("Launch"));
TouchSensor76.setDescription(std::string("launch!"));
Transform57.addChild(&TouchSensor76);

Transform56.addChild(&Transform57);

Transform& Transform77 =  Transform();
Switch& Switch78 =  Switch();
Switch78.setDEF(std::string("projectilename"));
Switch78.setWhichChoice(0);
Group& Group79 =  Group();
Shape& Shape80 =  Shape();
Appearance& Appearance81 =  Appearance();
Appearance81.setContainerField("appearance");
Appearance81.setUSE(std::string("TextAppearance"));
Shape80.addChild(&Appearance81);

Text& Text82 =  Text();
Text82.setString(new std::string[]{"Bowling Ball (10 lbs)"}, 1);
CFontStyle& FontStyle83 =  CFontStyle();
FontStyle83.setContainerField("fontStyle");
FontStyle83.setSize(0.5);
Text82.setFontStyle(&FontStyle83);

Shape80.setGeometry(&Text82);

Group79.addChild(&Shape80);

Sound& Sound84 =  Sound();
Sound84.setMaxBack(1000);
Sound84.setMaxFront(1000);
Sound84.setPriority(1);
AudioClip& AudioClip85 =  AudioClip();
AudioClip85.setContainerField("source");
AudioClip85.setDEF(std::string("HolyHandGrenadeSound"));
AudioClip85.setDescription(std::string("HolyHandGrenadeSound"));
AudioClip85.setUrl(new std::string[]{"grenade.wav", "http://www.nps.navy.mil/code32/vrml/grenade.wav"}, 2);
Sound84.setSource(AudioClip85);

Group79.addChild(&Sound84);

Switch78.addChild(&Group79);

Group& Group86 =  Group();
Shape& Shape87 =  Shape();
Appearance& Appearance88 =  Appearance();
Appearance88.setContainerField("appearance");
Appearance88.setUSE(std::string("TextAppearance"));
Shape87.addChild(&Appearance88);

Text& Text89 =  Text();
Text89.setString(new std::string[]{"Cow (1000 lbs)"}, 1);
CFontStyle& FontStyle90 =  CFontStyle();
FontStyle90.setContainerField("fontStyle");
FontStyle90.setSize(0.5);
Text89.setFontStyle(&FontStyle90);

Shape87.setGeometry(&Text89);

Group86.addChild(&Shape87);

Sound& Sound91 =  Sound();
Sound91.setMaxBack(1000);
Sound91.setMaxFront(1000);
AudioClip& AudioClip92 =  AudioClip();
AudioClip92.setContainerField("source");
AudioClip92.setDEF(std::string("CowSound"));
AudioClip92.setDescription(std::string("CowSound"));
AudioClip92.setUrl(new std::string[]{"lavache.wav", "http://www.nps.navy.mil/code32/vrml/lavache.wav"}, 2);
Sound91.setSource(AudioClip92);

Group86.addChild(&Sound91);

Switch78.addChild(&Group86);

Group& Group93 =  Group();
Shape& Shape94 =  Shape();
Appearance& Appearance95 =  Appearance();
Appearance95.setContainerField("appearance");
Appearance95.setUSE(std::string("TextAppearance"));
Shape94.addChild(&Appearance95);

Text& Text96 =  Text();
Text96.setString(new std::string[]{"Chicken (5 lbs)"}, 1);
CFontStyle& FontStyle97 =  CFontStyle();
FontStyle97.setContainerField("fontStyle");
FontStyle97.setSize(0.5);
Text96.setFontStyle(&FontStyle97);

Shape94.setGeometry(&Text96);

Group93.addChild(&Shape94);

Sound& Sound98 =  Sound();
Sound98.setMaxBack(1000);
Sound98.setMaxFront(1000);
Sound98.setPriority(1);
AudioClip& AudioClip99 =  AudioClip();
AudioClip99.setContainerField("source");
AudioClip99.setDEF(std::string("HamsterSound"));
AudioClip99.setDescription(std::string("HamsterSound"));
AudioClip99.setUrl(new std::string[]{"hamster.wav", "http://www.nps.navy.mil/code32/vrml/hamster.wav"}, 2);
Sound98.setSource(AudioClip99);

Group93.addChild(&Sound98);

Switch78.addChild(&Group93);

Transform77.addChild(&Switch78);

Transform56.addChild(&Transform77);

Scene17.addChild(&Transform56);

Transform& Transform100 =  Transform();
Transform100.setRotation(new float[]{0.0,1.0,0.0,-1.67});
Transform& Transform101 =  Transform();
Transform101.setDEF(std::string("aft"));
Transform101.setTranslation(new float[]{5.0,5.0,15.0});
Transform& Transform102 =  Transform();
Transform102.setTranslation(new float[]{-2.5,-4.5,-2.0});
Transform& Transform103 =  Transform();
Transform103.setUSE(std::string("launch"));
Transform102.addChild(&Transform103);

Transform101.addChild(&Transform102);

Transform100.addChild(&Transform101);

Scene17.addChild(&Transform100);

Transform& Transform104 =  Transform();
Transform104.setTranslation(new float[]{0.0,3.0,0.0});
Shape& Shape105 =  Shape();
Shape105.setDEF(std::string("plank"));
Box& Box106 =  Box();
Box106.setSize(new float[]{25.0,1.0,1.0});
Shape105.setGeometry(&Box106);

Appearance& Appearance107 =  Appearance();
Appearance107.setContainerField("appearance");
Appearance107.setDEF(std::string("wood"));
ImageTexture& ImageTexture108 =  ImageTexture();
ImageTexture108.setContainerField("texture");
ImageTexture108.setDEF(std::string("woodTexture"));
ImageTexture108.setUrl(new std::string[]{"wood.gif", "https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif"}, 2);
Appearance107.addChild(&ImageTexture108);

Shape105.addChild(&Appearance107);

Transform104.addChild(&Shape105);

Transform& Transform109 =  Transform();
Transform109.setDEF(std::string("angledsupport"));
Transform109.setRotation(new float[]{0.0,0.0,1.0,1.0});
Transform109.setTranslation(new float[]{-5.0,10.0,0.0});
Shape& Shape110 =  Shape();
Shape110.setUSE(std::string("plank"));
Transform109.addChild(&Shape110);

Transform104.addChild(&Transform109);

Transform& Transform111 =  Transform();
Transform111.setDEF(std::string("angledsupport2"));
Transform111.setRotation(new float[]{0.0,0.0,1.0,-1.0});
Transform111.setTranslation(new float[]{5.0,10.0,0.0});
Shape& Shape112 =  Shape();
Shape112.setUSE(std::string("plank"));
Transform111.addChild(&Shape112);

Transform104.addChild(&Transform111);

Transform& Transform113 =  Transform();
Transform113.setDEF(std::string("verticalsupport"));
Transform113.setRotation(new float[]{0.0,0.0,1.0,1.57});
Transform113.setScale(new float[]{0.9,1.0,1.0});
Transform113.setTranslation(new float[]{0.0,11.0,0.0});
Shape& Shape114 =  Shape();
Shape114.setUSE(std::string("plank"));
Transform113.addChild(&Shape114);

//Main Verticle Support
Transform104.addChild(&Transform113);

Transform& Transform115 =  Transform();
Transform115.setDEF(std::string("horizontalsupport"));
Transform115.setScale(new float[]{0.4,1.0,1.0});
Transform115.setTranslation(new float[]{0.0,10.0,0.0});
Shape& Shape116 =  Shape();
Shape116.setUSE(std::string("plank"));
Transform115.addChild(&Shape116);

Transform104.addChild(&Transform115);

Transform& Transform117 =  Transform();
Transform117.setRotation(new float[]{0.0,0.0,1.0,1.57});
Transform117.setScale(new float[]{0.6,1.0,1.0});
Transform117.setTranslation(new float[]{0.0,5.0,10.0});
Transform& Transform118 =  Transform();
Transform118.setRotation(new float[]{0.0,1.0,0.0,0.4});
Shape& Shape119 =  Shape();
Shape119.setUSE(std::string("plank"));
Transform118.addChild(&Shape119);

Transform117.addChild(&Transform118);

Transform104.addChild(&Transform117);

Transform& Transform120 =  Transform();
Transform120.setDEF(std::string("panel"));
Transform120.setTranslation(new float[]{0.0,18.2,-0.3});
Shape& Shape121 =  Shape();
Box& Box122 =  Box();
Box122.setSize(new float[]{5.0,5.0,0.5});
Shape121.setGeometry(&Box122);

Appearance& Appearance123 =  Appearance();
Appearance123.setContainerField("appearance");
Appearance123.setUSE(std::string("wood"));
Shape121.addChild(&Appearance123);

Transform120.addChild(&Shape121);

Transform104.addChild(&Transform120);

Transform& Transform124 =  Transform();
Transform124.setRotation(new float[]{1.0,0.0,0.0,-1.57});
Transform124.setTranslation(new float[]{0.0,0.6,2.5});
Transform& Transform125 =  Transform();
Transform125.setRotation(new float[]{0.0,0.0,1.0,1.57});
Shape& Shape126 =  Shape();
Extrusion& Extrusion127 =  Extrusion();
Extrusion127.setBeginCap(false);
Extrusion127.setCrossSection(new float[]{1.0,-0.38,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,-0.38,-1.0,-1.1,1.0,-1.1,1.0,-0.38}, 24);
Extrusion127.setEndCap(false);
Extrusion127.setSolid(false);
Extrusion127.setSpine(new float[]{0.0,6.0,0.0,0.0,-11.0,0.0}, 6);
Shape126.setGeometry(&Extrusion127);

Appearance& Appearance128 =  Appearance();
Appearance128.setContainerField("appearance");
Appearance128.setUSE(std::string("wood"));
Shape126.addChild(&Appearance128);

Transform125.addChild(&Shape126);

Transform124.addChild(&Transform125);

Transform104.addChild(&Transform124);

Transform& Transform129 =  Transform();
Transform129.setDEF(std::string("flinger"));
Transform129.setCenter(new float[]{7.0,0.0,0.0});
Transform129.setRotation(new float[]{0.0,0.0,1.0,0.82});
Transform129.setScale(new float[]{0.9,1.0,1.0});
Transform129.setTranslation(new float[]{-7.0,18.0,2.5});
Transform& Transform130 =  Transform();
Shape& Shape131 =  Shape();
Box& Box132 =  Box();
Box132.setSize(new float[]{35.0,1.0,1.0});
Shape131.setGeometry(&Box132);

Appearance& Appearance133 =  Appearance();
Appearance133.setContainerField("appearance");
Appearance133.setUSE(std::string("wood"));
Shape131.addChild(&Appearance133);

Transform130.addChild(&Shape131);

Transform& Transform134 =  Transform();
Transform134.setTranslation(new float[]{7.0,0.0,0.0});
Shape& Shape135 =  Shape();
Box& Box136 =  Box();
Box136.setSize(new float[]{8.0,2.0,2.0});
Shape135.setGeometry(&Box136);

Appearance& Appearance137 =  Appearance();
Appearance137.setContainerField("appearance");
Appearance137.setUSE(std::string("wood"));
Shape135.addChild(&Appearance137);

Transform134.addChild(&Shape135);

Transform130.addChild(&Transform134);

Transform129.addChild(&Transform130);

Transform& Transform138 =  Transform();
Transform138.setRotation(new float[]{1.0,0.0,0.0,1.57});
Transform138.setScale(new float[]{0.2,0.2,0.2});
Transform138.setTranslation(new float[]{-15.0,-1.0,0.0});
Shape& Shape139 =  Shape();
Shape139.setDEF(std::string("Torus"));
Appearance& Appearance140 =  Appearance();
Appearance140.setContainerField("appearance");
Material& Material141 =  Material();
Material141.setContainerField("material");
Material141.setSpecularColor(new float[]{1.0,1.0,1.0});
Appearance140.addChild(&Material141);

Shape139.addChild(&Appearance140);

Extrusion& Extrusion142 =  Extrusion();
Extrusion142.setBeginCap(false);
Extrusion142.setConvex(false);
Extrusion142.setCreaseAngle(1.57);
Extrusion142.setCrossSection(new float[]{0.9,0.0,0.81,-0.34,0.63,-0.63,0.34,-0.83,0.0,-0.9,-0.34,-0.81,-0.63,-0.63,-0.81,-0.34,-0.9,0.0,-0.81,0.34,-0.63,0.63,-0.34,0.81,0.0,0.9,0.38,0.81,0.63,0.63,0.81,0.34,0.9,0.0}, 34);
Extrusion142.setEndCap(false);
Extrusion142.setSpine(new float[]{2.0,0.0,0.0,1.85,0.0,0.77,1.41,0.0,1.41,0.77,0.0,1.85,0.0,0.0,2.0,-0.77,0.0,1.85,-1.41,0.0,1.41,-1.85,0.0,0.77,-2.0,0.0,0.0,-1.85,0.0,-0.77,-1.41,0.0,-1.41,-0.77,0.0,-1.85,0.0,0.0,-2.0,0.77,0.0,-1.85,1.41,0.0,-1.41,1.85,0.0,-0.77,2.0,0.0,0.0}, 51);
Shape139.setGeometry(&Extrusion142);

Transform138.addChild(&Shape139);

Transform& Transform143 =  Transform();
Transform143.setTranslation(new float[]{1.0,0.0,2.0});
Shape& Shape144 =  Shape();
Appearance& Appearance145 =  Appearance();
Appearance145.setContainerField("appearance");
Appearance145.setDEF(std::string("rope"));
ImageTexture& ImageTexture146 =  ImageTexture();
ImageTexture146.setContainerField("texture");
ImageTexture146.setUSE(std::string("woodTexture"));
Appearance145.addChild(&ImageTexture146);

Shape144.addChild(&Appearance145);

Sphere& Sphere147 =  Sphere();
Sphere147.setRadius(1.5);
Shape144.setGeometry(&Sphere147);

Transform143.addChild(&Shape144);

//knott
Transform138.addChild(&Transform143);

Transform129.addChild(&Transform138);

//The Unicorn
Transform& Transform148 =  Transform();
Transform148.setRotation(new float[]{0.0,0.0,1.0,1.2});
Transform148.setScale(new float[]{0.2,0.2,0.2});
Transform148.setTranslation(new float[]{-18.3,0.3,0.0});
Shape& Shape149 =  Shape();
Cylinder& Cylinder150 =  Cylinder();
Cylinder150.setHeight(10);
Shape149.setGeometry(&Cylinder150);

Appearance& Appearance151 =  Appearance();
Appearance151.setContainerField("appearance");
Material& Material152 =  Material();
Material152.setContainerField("material");
Material152.setSpecularColor(new float[]{1.0,1.0,1.0});
Appearance151.addChild(&Material152);

Shape149.addChild(&Appearance151);

Transform148.addChild(&Shape149);

Transform& Transform153 =  Transform();
Transform153.setTranslation(new float[]{0.0,-2.5,0.0});
//The Unicorn
Shape& Shape154 =  Shape();
Shape154.setUSE(std::string("Torus"));
Transform153.addChild(&Shape154);

Transform& Transform155 =  Transform();
Transform155.setTranslation(new float[]{-2.0,0.0,0.0});
Shape& Shape156 =  Shape();
Sphere& Sphere157 =  Sphere();
Sphere157.setRadius(1.5);
Shape156.setGeometry(&Sphere157);

Appearance& Appearance158 =  Appearance();
Appearance158.setContainerField("appearance");
Appearance158.setUSE(std::string("rope"));
Shape156.addChild(&Appearance158);

Transform155.addChild(&Shape156);

//Knott
Transform153.addChild(&Transform155);

Transform148.addChild(&Transform153);

Transform& Transform159 =  Transform();
Transform159.setRotation(new float[]{0.0,0.0,1.0,1.2});
Transform159.setTranslation(new float[]{15.0,55.0,-11.0});
Transform& Transform160 =  Transform();
Transform160.setScale(new float[]{5.0,5.0,5.0});
Shape& Shape161 =  Shape();
Appearance& Appearance162 =  Appearance();
Appearance162.setContainerField("appearance");
Appearance162.setUSE(std::string("rope"));
Shape161.addChild(&Appearance162);

Extrusion& Extrusion163 =  Extrusion();
Extrusion163.setBeginCap(false);
Extrusion163.setCreaseAngle(0.76);
Extrusion163.setCrossSection(new float[]{0.1,0.0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0.0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0.0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0.0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0.0}, 34);
Extrusion163.setEndCap(false);
Extrusion163.setSolid(false);
Extrusion163.setSpine(new float[]{-15.2,1.4,2.2,-12.0,-0.8,2.2}, 6);
Shape161.setGeometry(&Extrusion163);

Transform160.addChild(&Shape161);

Transform159.addChild(&Transform160);

Transform148.addChild(&Transform159);

Transform129.addChild(&Transform148);

Transform& Transform164 =  Transform();
Transform164.setRotation(new float[]{1.0,0.0,0.0,-1.7});
Transform164.setTranslation(new float[]{-17.0,-4.5,0.0});
Transform& Transform165 =  Transform();
Transform165.setScale(new float[]{0.2,0.2,0.2});
//Knot
Shape& Shape166 =  Shape();
Shape166.setUSE(std::string("Torus"));
Transform165.addChild(&Shape166);

Transform& Transform167 =  Transform();
Transform167.setTranslation(new float[]{-1.0,0.0,1.7});
Shape& Shape168 =  Shape();
Sphere& Sphere169 =  Sphere();
Sphere169.setRadius(1.5);
Shape168.setGeometry(&Sphere169);

Appearance& Appearance170 =  Appearance();
Appearance170.setContainerField("appearance");
Appearance170.setUSE(std::string("rope"));
Shape168.addChild(&Appearance170);

Transform167.addChild(&Shape168);

Transform165.addChild(&Transform167);

Transform164.addChild(&Transform165);

Transform129.addChild(&Transform164);

Transform& Transform171 =  Transform();
Transform171.setDEF(std::string("RnS"));
Transform& Transform172 =  Transform();
Transform172.setDEF(std::string("ropes"));
Transform& Transform173 =  Transform();
Transform173.setRotation(new float[]{0.0,0.0,1.0,-0.82});
Transform173.setTranslation(new float[]{7.0,-26.0,-2.5});
Shape& Shape174 =  Shape();
Appearance& Appearance175 =  Appearance();
Appearance175.setContainerField("appearance");
Appearance175.setUSE(std::string("rope"));
Shape174.addChild(&Appearance175);

Extrusion& Extrusion176 =  Extrusion();
Extrusion176.setBeginCap(false);
Extrusion176.setCreaseAngle(0.76);
Extrusion176.setCrossSection(new float[]{0.1,0.0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0.0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0.0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0.0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0.0}, 34);
Extrusion176.setEndCap(false);
Extrusion176.setSolid(false);
Extrusion176.setSpine(new float[]{-33.0,0.9,2.5,-18.5,1.9,2.55}, 6);
Shape174.setGeometry(&Extrusion176);

Transform173.addChild(&Shape174);

Shape& Shape177 =  Shape();
Appearance& Appearance178 =  Appearance();
Appearance178.setContainerField("appearance");
Appearance178.setUSE(std::string("rope"));
Shape177.addChild(&Appearance178);

Extrusion& Extrusion179 =  Extrusion();
Extrusion179.setBeginCap(false);
Extrusion179.setCreaseAngle(0.76);
Extrusion179.setCrossSection(new float[]{0.1,0.0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0.0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0.0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0.0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0.0}, 34);
Extrusion179.setEndCap(false);
Extrusion179.setSolid(false);
Extrusion179.setSpine(new float[]{-35.7,-0.8,2.5,-18.8,-0.8,2.55}, 6);
Shape177.setGeometry(&Extrusion179);

Transform173.addChild(&Shape177);

Transform172.addChild(&Transform173);

Transform171.addChild(&Transform172);

Transform& Transform180 =  Transform();
Transform180.setDEF(std::string("sling"));
Transform180.setRotation(new float[]{0.0,0.0,1.0,-0.82});
Transform180.setTranslation(new float[]{-4.0,-15.3,0.0});
Transform& Transform181 =  Transform();
Transform& Transform182 =  Transform();
Transform182.setRotation(new float[]{0.0,1.0,0.0,-1.57});
Transform182.setScale(new float[]{1.0,1.3,1.0});
Transform182.setTranslation(new float[]{0.5,0.0,-1.0});
Transform& Transform183 =  Transform();
Transform183.setRotation(new float[]{0.0,0.0,1.0,1.57});
Transform& Transform184 =  Transform();
Transform184.setScale(new float[]{0.3,0.3,0.3});
Shape& Shape185 =  Shape();
Shape185.setDEF(std::string("halfsling"));
Appearance& Appearance186 =  Appearance();
Appearance186.setContainerField("appearance");
Appearance186.setDEF(std::string("clear"));
Material& Material187 =  Material();
Material187.setContainerField("material");
Material187.setTransparency(0.5);
Appearance186.addChild(&Material187);

Shape185.addChild(&Appearance186);

Extrusion& Extrusion188 =  Extrusion();
Extrusion188.setCrossSection(new float[]{0.0,0.0,0.0,5.0,0.5,7.0,1.0,8.0,2.0,9.0,3.0,11.0,3.5,11.2,4.0,11.0,5.0,9.0,6.0,8.0,6.5,7.0,6.7,5.0,6.7,0.0,0.0,0.0}, 28);
Extrusion188.setSpine(new float[]{0.0,0.0,0.0,0.1,0.0,0.0}, 6);
Shape185.setGeometry(&Extrusion188);

Transform184.addChild(&Shape185);

Transform& Transform189 =  Transform();
Transform189.setScale(new float[]{0.3,0.3,0.3});
Transform189.setTranslation(new float[]{0.0,-3.5,11.5});
Shape& Shape190 =  Shape();
Shape190.setUSE(std::string("Torus"));
Transform189.addChild(&Shape190);

Transform& Transform191 =  Transform();
Transform191.setTranslation(new float[]{0.0,0.0,2.0});
Shape& Shape192 =  Shape();
Appearance& Appearance193 =  Appearance();
Appearance193.setContainerField("appearance");
Appearance193.setUSE(std::string("rope"));
Shape192.addChild(&Appearance193);

Sphere& Sphere194 =  Sphere();
Sphere194.setRadius(1.5);
Shape192.setGeometry(&Sphere194);

Transform191.addChild(&Shape192);

Transform189.addChild(&Transform191);

Transform184.addChild(&Transform189);

Transform183.addChild(&Transform184);

Transform& Transform195 =  Transform();
Transform195.setScale(new float[]{0.3,0.3,0.3});
Transform195.setTranslation(new float[]{2.0,0.0,0.0});
Shape& Shape196 =  Shape();
Shape196.setUSE(std::string("halfsling"));
Transform195.addChild(&Shape196);

Transform& Transform197 =  Transform();
Transform197.setScale(new float[]{0.3,0.3,0.3});
Transform197.setTranslation(new float[]{0.0,-3.5,11.3});
Shape& Shape198 =  Shape();
Shape198.setUSE(std::string("Torus"));
Transform197.addChild(&Shape198);

Transform& Transform199 =  Transform();
Transform199.setTranslation(new float[]{0.0,0.0,2.0});
Shape& Shape200 =  Shape();
Appearance& Appearance201 =  Appearance();
Appearance201.setContainerField("appearance");
Appearance201.setUSE(std::string("rope"));
Shape200.addChild(&Appearance201);

Sphere& Sphere202 =  Sphere();
Sphere202.setRadius(1.5);
Shape200.setGeometry(&Sphere202);

Transform199.addChild(&Shape200);

Transform197.addChild(&Transform199);

Transform195.addChild(&Transform197);

Transform183.addChild(&Transform195);

Transform& Transform203 =  Transform();
Transform203.setTranslation(new float[]{1.0,-1.0,0.0});
Shape& Shape204 =  Shape();
Extrusion& Extrusion205 =  Extrusion();
Extrusion205.setBeginCap(false);
Extrusion205.setCreaseAngle(0.785);
Extrusion205.setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0}, 18);
Extrusion205.setEndCap(false);
Extrusion205.setSolid(false);
Extrusion205.setSpine(new float[]{0.0,-1.0,0.0,0.0,1.0,0.0}, 6);
Shape204.setGeometry(&Extrusion205);

Appearance& Appearance206 =  Appearance();
Appearance206.setContainerField("appearance");
Appearance206.setUSE(std::string("clear"));
Shape204.addChild(&Appearance206);

Transform203.addChild(&Shape204);

Transform183.addChild(&Transform203);

Transform182.addChild(&Transform183);

TouchSensor& TouchSensor207 =  TouchSensor();
TouchSensor207.setDEF(std::string("LauncheeChoice"));
TouchSensor207.setDescription(std::string("launcher choice"));
Transform182.addChild(&TouchSensor207);

Transform181.addChild(&Transform182);

Transform& Transform208 =  Transform();
Transform208.setDEF(std::string("projectiletransform"));
Transform208.setScale(new float[]{0.01,0.01,0.01});
Switch& Switch209 =  Switch();
Switch209.setDEF(std::string("projectile"));
Switch209.setWhichChoice(0);
Group& Group210 =  Group();
Transform& Transform211 =  Transform();
Transform211.setTranslation(new float[]{0.0,0.7,0.0});
Shape& Shape212 =  Shape();
Sphere& Sphere213 =  Sphere();
Sphere213.setRadius(0.7);
Shape212.setGeometry(&Sphere213);

Appearance& Appearance214 =  Appearance();
Appearance214.setContainerField("appearance");
Appearance214.setDEF(std::string("black"));
Material& Material215 =  Material();
Material215.setContainerField("material");
Material215.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material215.setSpecularColor(new float[]{1.0,1.0,1.0});
Appearance214.addChild(&Material215);

Shape212.addChild(&Appearance214);

Transform211.addChild(&Shape212);

Group210.addChild(&Transform211);

Switch209.addChild(&Group210);

Group& Group216 =  Group();
Transform& Transform217 =  Transform();
Inline& Inline218 =  Inline();
Inline218.setUrl(new std::string[]{"cow.wrl", "http://www.uoguelph.ca/~dchiu/cow.wrl"}, 2);
Transform217.addChild(&Inline218);

Group216.addChild(&Transform217);

Switch209.addChild(&Group216);

Group& Group219 =  Group();
Transform& Transform220 =  Transform();
Transform220.setRotation(new float[]{0.0,1.0,0.0,1.57});
Transform220.setScale(new float[]{0.4,0.4,0.4});
Transform220.setTranslation(new float[]{0.0,0.7,0.0});
Inline& Inline221 =  Inline();
Inline221.setUrl(new std::string[]{"vrml_ginger.wrl", "http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl"}, 2);
Transform220.addChild(&Inline221);

Group219.addChild(&Transform220);

Switch209.addChild(&Group219);

Transform208.addChild(&Switch209);

Transform181.addChild(&Transform208);

Transform180.addChild(&Transform181);

Transform171.addChild(&Transform180);

Transform129.addChild(&Transform171);

Transform104.addChild(&Transform129);

Transform& Transform222 =  Transform();
Transform222.setRotation(new float[]{1.0,0.0,0.0,1.57});
Transform222.setTranslation(new float[]{0.0,18.0,2.5});
Shape& Shape223 =  Shape();
Cylinder& Cylinder224 =  Cylinder();
Cylinder224.setHeight(8);
Cylinder224.setRadius(0.4);
Shape223.setGeometry(&Cylinder224);

Appearance& Appearance225 =  Appearance();
Appearance225.setContainerField("appearance");
Material& Material226 =  Material();
Material226.setContainerField("material");
Material226.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material226.setSpecularColor(new float[]{1.0,1.0,1.0});
Appearance225.addChild(&Material226);

Shape223.addChild(&Appearance225);

Transform222.addChild(&Shape223);

//Top Pivot
Transform104.addChild(&Transform222);

Transform& Transform227 =  Transform();
Transform227.setDEF(std::string("verticalweight"));
Transform& Transform228 =  Transform();
Transform228.setTranslation(new float[]{4.0,18.0,1.8});
Shape& Shape229 =  Shape();
Box& Box230 =  Box();
Box230.setSize(new float[]{1.0,10.0,0.5});
Shape229.setGeometry(&Box230);

Appearance& Appearance231 =  Appearance();
Appearance231.setContainerField("appearance");
Appearance231.setUSE(std::string("wood"));
Shape229.addChild(&Appearance231);

Transform228.addChild(&Shape229);

Transform227.addChild(&Transform228);

Transform& Transform232 =  Transform();
Transform232.setTranslation(new float[]{4.0,18.0,3.2});
Shape& Shape233 =  Shape();
Box& Box234 =  Box();
Box234.setSize(new float[]{1.0,10.0,0.5});
Shape233.setGeometry(&Box234);

Appearance& Appearance235 =  Appearance();
Appearance235.setContainerField("appearance");
Appearance235.setUSE(std::string("wood"));
Shape233.addChild(&Appearance235);

Transform232.addChild(&Shape233);

Transform227.addChild(&Transform232);

Transform& Transform236 =  Transform();
Transform236.setTranslation(new float[]{4.0,14.0,2.5});
//CounterWeight
Shape& Shape237 =  Shape();
Cylinder& Cylinder238 =  Cylinder();
Cylinder238.setHeight(4);
Cylinder238.setRadius(1.5);
Shape237.setGeometry(&Cylinder238);

Appearance& Appearance239 =  Appearance();
Appearance239.setContainerField("appearance");
Material& Material240 =  Material();
Material240.setContainerField("material");
Material240.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material240.setSpecularColor(new float[]{1.0,1.0,1.0});
Appearance239.addChild(&Material240);

Shape237.addChild(&Appearance239);

Transform236.addChild(&Shape237);

Transform227.addChild(&Transform236);

Transform& Transform241 =  Transform();
Transform241.setRotation(new float[]{1.0,0.0,0.0,1.57});
Transform241.setTranslation(new float[]{4.0,22.0,2.5});
Shape& Shape242 =  Shape();
Cylinder& Cylinder243 =  Cylinder();
Cylinder243.setHeight(2.5);
Cylinder243.setRadius(0.3);
Shape242.setGeometry(&Cylinder243);

Appearance& Appearance244 =  Appearance();
Appearance244.setContainerField("appearance");
Material& Material245 =  Material();
Material245.setContainerField("material");
Material245.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material245.setSpecularColor(new float[]{1.0,1.0,1.0});
Appearance244.addChild(&Material245);

Shape242.addChild(&Appearance244);

Transform241.addChild(&Shape242);

Transform227.addChild(&Transform241);

Transform104.addChild(&Transform227);

Transform& Transform246 =  Transform();
Transform246.setRotation(new float[]{0.0,0.0,1.0,1.57});
Transform246.setScale(new float[]{0.2,0.2,0.2});
Transform246.setTranslation(new float[]{-11.5,-1.0,2.0});
Transform& Transform247 =  Transform();
Transform247.setDEF(std::string("screw"));
Transform247.setRotation(new float[]{1.0,0.0,0.0,1.57});
Shape& Shape248 =  Shape();
Shape248.setUSE(std::string("Torus"));
Transform247.addChild(&Shape248);

Transform& Transform249 =  Transform();
Transform249.setRotation(new float[]{1.0,0.0,0.0,-1.57});
Transform249.setTranslation(new float[]{0.0,0.0,7.0});
Shape& Shape250 =  Shape();
Cylinder& Cylinder251 =  Cylinder();
Cylinder251.setHeight(10);
Cylinder251.setRadius(0.7);
Shape250.setGeometry(&Cylinder251);

Appearance& Appearance252 =  Appearance();
Appearance252.setContainerField("appearance");
Material& Material253 =  Material();
Material253.setContainerField("material");
Material253.setSpecularColor(new float[]{1.0,1.0,1.0});
Appearance252.addChild(&Material253);

Shape250.addChild(&Appearance252);

Transform249.addChild(&Shape250);

Transform247.addChild(&Transform249);

Transform246.addChild(&Transform247);

Transform& Transform254 =  Transform();
Transform254.setTranslation(new float[]{0.0,0.0,7.0});
Transform& Transform255 =  Transform();
Transform255.setUSE(std::string("screw"));
Transform254.addChild(&Transform255);

Transform246.addChild(&Transform254);

//Release Pin
Transform& Transform256 =  Transform();
Transform256.setDEF(std::string("Pin"));
Transform256.setRotation(new float[]{1.0,0.0,0.0,-1.57});
Transform256.setTranslation(new float[]{0.0,0.0,-3.0});
Transform& Transform257 =  Transform();
Transform257.setUSE(std::string("screw"));
Transform256.addChild(&Transform257);

Transform246.addChild(&Transform256);

Transform104.addChild(&Transform246);

Transform& Transform258 =  Transform();
Transform258.setTranslation(new float[]{0.0,0.0,5.0});
Shape& Shape259 =  Shape();
Shape259.setUSE(std::string("plank"));
Transform258.addChild(&Shape259);

Transform& Transform260 =  Transform();
Transform260.setUSE(std::string("angledsupport"));
Transform258.addChild(&Transform260);

Transform& Transform261 =  Transform();
Transform261.setUSE(std::string("angledsupport2"));
Transform258.addChild(&Transform261);

Transform& Transform262 =  Transform();
Transform262.setUSE(std::string("verticalsupport"));
Transform258.addChild(&Transform262);

Transform& Transform263 =  Transform();
Transform263.setUSE(std::string("horizontalsupport"));
Transform258.addChild(&Transform263);

Transform& Transform264 =  Transform();
Transform264.setRotation(new float[]{0.0,1.0,0.0,1.57});
Transform264.setScale(new float[]{0.6,1.0,1.0});
Transform264.setTranslation(new float[]{0.0,-11.0,-2.5});
Transform& Transform265 =  Transform();
Transform265.setUSE(std::string("horizontalsupport"));
Transform264.addChild(&Transform265);

Transform258.addChild(&Transform264);

Transform& Transform266 =  Transform();
Transform266.setRotation(new float[]{0.0,0.0,1.0,-1.57});
Transform266.setScale(new float[]{0.6,1.0,1.0});
Transform266.setTranslation(new float[]{0.0,5.0,-10.0});
Transform& Transform267 =  Transform();
Transform267.setRotation(new float[]{0.0,1.0,0.0,0.4});
Shape& Shape268 =  Shape();
Shape268.setUSE(std::string("plank"));
Transform267.addChild(&Shape268);

Transform266.addChild(&Transform267);

Transform258.addChild(&Transform266);

Transform& Transform269 =  Transform();
Transform269.setTranslation(new float[]{0.0,0.0,0.6});
Transform& Transform270 =  Transform();
Transform270.setUSE(std::string("panel"));
Transform269.addChild(&Transform270);

Transform258.addChild(&Transform269);

Transform104.addChild(&Transform258);

Transform& Transform271 =  Transform();
Transform271.setTranslation(new float[]{10.0,-1.0,2.5});
Shape& Shape272 =  Shape();
Shape272.setDEF(std::string("Axle"));
Box& Box273 =  Box();
Box273.setSize(new float[]{1.0,1.0,8.0});
Shape272.setGeometry(&Box273);

Appearance& Appearance274 =  Appearance();
Appearance274.setContainerField("appearance");
Appearance274.setUSE(std::string("wood"));
Shape272.addChild(&Appearance274);

Transform271.addChild(&Shape272);

Transform& Transform275 =  Transform();
Transform275.setRotation(new float[]{1.0,0.0,0.0,1.57});
Transform275.setTranslation(new float[]{0.0,0.0,4.5});
Shape& Shape276 =  Shape();
Shape276.setDEF(std::string("wheel"));
Cylinder& Cylinder277 =  Cylinder();
Cylinder277.setRadius(2);
Shape276.setGeometry(&Cylinder277);

Appearance& Appearance278 =  Appearance();
Appearance278.setContainerField("appearance");
Appearance278.setUSE(std::string("wood"));
Shape276.addChild(&Appearance278);

Transform275.addChild(&Shape276);

Shape& Shape279 =  Shape();
Shape279.setDEF(std::string("tracks"));
Sphere& Sphere280 =  Sphere();
Sphere280.setRadius(1.5);
Shape279.setGeometry(&Sphere280);

Appearance& Appearance281 =  Appearance();
Appearance281.setContainerField("appearance");
Appearance281.setUSE(std::string("black"));
Shape279.addChild(&Appearance281);

Transform275.addChild(&Shape279);

Transform& Transform282 =  Transform();
Transform282.setTranslation(new float[]{0.0,0.55,0.0});
Shape& Shape283 =  Shape();
Shape283.setDEF(std::string("hub"));
Sphere& Sphere284 =  Sphere();
Sphere284.setRadius(1.5);
Shape283.setGeometry(&Sphere284);

Appearance& Appearance285 =  Appearance();
Appearance285.setContainerField("appearance");
Appearance285.setUSE(std::string("black"));
Shape283.addChild(&Appearance285);

Transform282.addChild(&Shape283);

Transform275.addChild(&Transform282);

Transform271.addChild(&Transform275);

Transform& Transform286 =  Transform();
Transform286.setRotation(new float[]{1.0,0.0,0.0,1.57});
Transform286.setTranslation(new float[]{0.0,0.0,-4.5});
Shape& Shape287 =  Shape();
Shape287.setUSE(std::string("wheel"));
Transform286.addChild(&Shape287);

Shape& Shape288 =  Shape();
Shape288.setUSE(std::string("tracks"));
Transform286.addChild(&Shape288);

Transform& Transform289 =  Transform();
Transform289.setTranslation(new float[]{0.0,-0.55,0.0});
Shape& Shape290 =  Shape();
Shape290.setUSE(std::string("hub"));
Transform289.addChild(&Shape290);

Transform286.addChild(&Transform289);

Transform271.addChild(&Transform286);

Transform104.addChild(&Transform271);

Transform& Transform291 =  Transform();
Transform291.setTranslation(new float[]{-10.0,-1.0,2.5});
Shape& Shape292 =  Shape();
Shape292.setUSE(std::string("Axle"));
Transform291.addChild(&Shape292);

Transform& Transform293 =  Transform();
Transform293.setRotation(new float[]{1.0,0.0,0.0,1.57});
Transform293.setTranslation(new float[]{0.0,0.0,4.5});
Shape& Shape294 =  Shape();
Shape294.setUSE(std::string("wheel"));
Transform293.addChild(&Shape294);

Shape& Shape295 =  Shape();
Shape295.setUSE(std::string("tracks"));
Transform293.addChild(&Shape295);

Transform& Transform296 =  Transform();
Transform296.setTranslation(new float[]{0.0,0.55,0.0});
Shape& Shape297 =  Shape();
Shape297.setUSE(std::string("hub"));
Transform296.addChild(&Shape297);

Transform293.addChild(&Transform296);

Transform291.addChild(&Transform293);

Transform& Transform298 =  Transform();
Transform298.setRotation(new float[]{1.0,0.0,0.0,1.57});
Transform298.setTranslation(new float[]{0.0,0.0,-4.5});
Shape& Shape299 =  Shape();
Shape299.setUSE(std::string("wheel"));
Transform298.addChild(&Shape299);

Shape& Shape300 =  Shape();
Shape300.setUSE(std::string("tracks"));
Transform298.addChild(&Shape300);

Transform& Transform301 =  Transform();
Transform301.setTranslation(new float[]{0.0,-0.55,0.0});
Shape& Shape302 =  Shape();
Shape302.setUSE(std::string("hub"));
Transform301.addChild(&Shape302);

Transform298.addChild(&Transform301);

Transform291.addChild(&Transform298);

Transform& Transform303 =  Transform();
Transform303.setRotation(new float[]{0.0,1.0,0.0,-0.6});
Transform303.setTranslation(new float[]{0.0,100.0,400.0});
Transform& Transform304 =  Transform();
Transform304.setTranslation(new float[]{1.0,3.0,0.0});
Viewpoint& Viewpoint305 =  Viewpoint();
Viewpoint305.setDescription(std::string("Side"));
Transform304.addChild(&Viewpoint305);

Transform303.addChild(&Transform304);

Transform& Transform306 =  Transform();
Transform306.setUSE(std::string("launch"));
Transform303.addChild(&Transform306);

Transform& Transform307 =  Transform();
TouchSensor& TouchSensor308 =  TouchSensor();
TouchSensor308.setUSE(std::string("LauncheeChoice"));
Transform307.addChild(&TouchSensor308);

Switch& Switch309 =  Switch();
Switch309.setUSE(std::string("projectilename"));
Transform307.addChild(&Switch309);

Transform& Transform310 =  Transform();
Transform310.setTranslation(new float[]{2.5,0.0,0.0});
Shape& Shape311 =  Shape();
Box& Box312 =  Box();
Box312.setSize(new float[]{5.0,0.5,0.5});
Shape311.setGeometry(&Box312);

Appearance& Appearance313 =  Appearance();
Appearance313.setContainerField("appearance");
Material& Material314 =  Material();
Material314.setContainerField("material");
Material314.setTransparency(1);
Appearance313.addChild(&Material314);

Shape311.addChild(&Appearance313);

Transform310.addChild(&Shape311);

Transform307.addChild(&Transform310);

Transform303.addChild(&Transform307);

Transform& Transform315 =  Transform();
Transform315.setScale(new float[]{0.5,0.5,0.5});
Transform315.setTranslation(new float[]{0.0,-1.0,0.0});
TouchSensor& TouchSensor316 =  TouchSensor();
TouchSensor316.setUSE(std::string("weightselector"));
Transform315.addChild(&TouchSensor316);

Switch& Switch317 =  Switch();
Switch317.setUSE(std::string("Weight"));
Transform315.addChild(&Switch317);

Transform& Transform318 =  Transform();
Transform318.setTranslation(new float[]{8.0,0.0,0.0});
Shape& Shape319 =  Shape();
Box& Box320 =  Box();
Box320.setSize(new float[]{17.0,1.0,0.5});
Shape319.setGeometry(&Box320);

Appearance& Appearance321 =  Appearance();
Appearance321.setContainerField("appearance");
Material& Material322 =  Material();
Material322.setContainerField("material");
Material322.setTransparency(1);
Appearance321.addChild(&Material322);

Shape319.addChild(&Appearance321);

Transform318.addChild(&Shape319);

Transform315.addChild(&Transform318);

Transform303.addChild(&Transform315);

Transform291.addChild(&Transform303);

Transform& Transform323 =  Transform();
Transform323.setDEF(std::string("ProjectileTransform"));
Transform323.setTranslation(new float[]{14.25,1.25,0.0});
Switch& Switch324 =  Switch();
Switch324.setUSE(std::string("projectile"));
Transform323.addChild(&Switch324);

Transform& Transform325 =  Transform();
Transform325.setRotation(new float[]{0.0,1.0,0.0,1.57});
Transform325.setTranslation(new float[]{0.0,1.0,0.0});
Viewpoint& Viewpoint326 =  Viewpoint();
Viewpoint326.setDescription(std::string("Projectile Cam"));
Viewpoint326.setPosition(new float[]{0.0,0.0,15.0});
Transform325.addChild(&Viewpoint326);

Transform323.addChild(&Transform325);

Transform291.addChild(&Transform323);

Transform& Transform327 =  Transform();
Transform327.setTranslation(new float[]{20.0,2.0,0.0});
Transform& Transform328 =  Transform();
Transform328.setDEF(std::string("Front"));
Transform328.setRotation(new float[]{0.0,1.0,0.0,1.57});
Viewpoint& Viewpoint329 =  Viewpoint();
Viewpoint329.setDescription(std::string("Fore"));
Transform328.addChild(&Viewpoint329);

Transform327.addChild(&Transform328);

Transform291.addChild(&Transform327);

Transform& Transform330 =  Transform();
Transform330.setTranslation(new float[]{-8.0,4.0,0.0});
Transform& Transform331 =  Transform();
Transform331.setRotation(new float[]{0.0,1.0,0.0,-1.57});
Viewpoint& Viewpoint332 =  Viewpoint();
Viewpoint332.setDescription(std::string("Aft"));
Transform331.addChild(&Viewpoint332);

Transform330.addChild(&Transform331);

Transform291.addChild(&Transform330);

Script& Script333 =  Script();
Script333.setDEF(std::string("WeightScript"));
field& field334 =  field();
field334.setName(std::string("set_boolean"));
field334.setAccessType(std::string("inputOnly"));
field334.setType(std::string("SFBool"));
Script333.addChild(&field334);

field& field335 =  field();
field335.setName(std::string("whichchoice"));
field335.setAccessType(std::string("outputOnly"));
field335.setType(std::string("SFInt32"));
Script333.addChild(&field335);

field& field336 =  field();
field336.setName(std::string("CounterWeight"));
field336.setAccessType(std::string("outputOnly"));
field336.setType(std::string("SFFloat"));
Script333.addChild(&field336);


//Script333.setSourceCode(std::string("ecmascript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	whichchoice =0;")+
//_T("	CounterWeight=100;")+
//_T("}")+
//_T("function set_boolean ( boolean_input, eventTime)")+
//_T("{")+
//_T("	if ( boolean_input== false ) { return; } // ignore the unclick")+
//_T("        whichchoice = whichchoice +1;")+
//_T("	if (whichchoice == 0)CounterWeight=50.00;")+
//_T("	if (whichchoice == 1)CounterWeight=500.00;")+
//_T("	if (whichchoice == 2)CounterWeight=1000.00;")+
//_T("	if (whichchoice == 3)CounterWeight=10000.00;")+
//_T("        if ( whichchoice ==4 ) { whichchoice = 0; CounterWeight=50; }")+
//_T("        Browser.println ('CounterWeight ='+CounterWeight);")+
//_T("}"));
Transform291.addChild(&Script333);

Script& Script337 =  Script();
Script337.setDEF(std::string("LauncheeScript"));
field& field338 =  field();
field338.setName(std::string("set_boolean"));
field338.setAccessType(std::string("inputOnly"));
field338.setType(std::string("SFBool"));
Script337.addChild(&field338);

field& field339 =  field();
field339.setName(std::string("whichchoice"));
field339.setAccessType(std::string("outputOnly"));
field339.setType(std::string("SFInt32"));
Script337.addChild(&field339);

field& field340 =  field();
field340.setName(std::string("ProjectileWeight"));
field340.setAccessType(std::string("outputOnly"));
field340.setType(std::string("SFFloat"));
Script337.addChild(&field340);


//Script337.setSourceCode(std::string("ecmascript:")+
//_T("function set_boolean (boolean_input, eventTime)")+
//_T("{")+
//_T("	if ( boolean_input== false ) { return; } // ignore unclick")+
//_T("        whichchoice = whichchoice +1;")+
//_T("        if (whichchoice == 0)ProjectileWeight=10.00;")+
//_T("        if (whichchoice == 1)ProjectileWeight=1000.00;")+
//_T("	if (whichchoice == 2)ProjectileWeight=5;")+
//_T("	if ( whichchoice ==3 ) { whichchoice = 0; ProjectileWeight=10.00; }")+
//_T("	Browser.println ('Projectile Weight'+ProjectileWeight);")+
//_T("}"));
Transform291.addChild(&Script337);

Script& Script341 =  Script();
Script341.setDEF(std::string("PigdogMonkScript"));
field& field342 =  field();
field342.setName(std::string("set_boolean"));
field342.setAccessType(std::string("inputOnly"));
field342.setType(std::string("SFBool"));
Script341.addChild(&field342);

field& field343 =  field();
field343.setName(std::string("whichchoice"));
field343.setAccessType(std::string("outputOnly"));
field343.setType(std::string("SFInt32"));
Script341.addChild(&field343);


//Script341.setSourceCode(std::string("ecmascript:")+
//_T("function set_boolean (boolean_input, eventTime)")+
//_T("{")+
//_T("	if ( boolean_input== false ) { return; } // ignore unclick")+
//_T("        whichchoice = whichchoice +1;")+
//_T("        if ( whichchoice ==2 )  whichchoice = 0;")+
//_T("}"));
Transform291.addChild(&Script341);

Script& Script344 =  Script();
Script344.setDEF(std::string("Mover"));
field& field345 =  field();
field345.setName(std::string("set_fraction"));
field345.setAccessType(std::string("inputOnly"));
field345.setType(std::string("SFFloat"));
Script344.addChild(&field345);

field& field346 =  field();
field346.setName(std::string("set_MassCounterWeight"));
field346.setAccessType(std::string("inputOnly"));
field346.setType(std::string("SFFloat"));
Script344.addChild(&field346);

field& field347 =  field();
field347.setName(std::string("set_MassProjectileWeight"));
field347.setAccessType(std::string("inputOnly"));
field347.setType(std::string("SFFloat"));
Script344.addChild(&field347);

field& field348 =  field();
field348.setName(std::string("MassCounterWeight"));
field348.setAccessType(std::string("initializeOnly"));
field348.setType(std::string("SFFloat"));
field348.setValue(std::string("1"));
Script344.addChild(&field348);

field& field349 =  field();
field349.setName(std::string("MassProjectileWeight"));
field349.setAccessType(std::string("initializeOnly"));
field349.setType(std::string("SFFloat"));
field349.setValue(std::string("1"));
Script344.addChild(&field349);

field& field350 =  field();
field350.setName(std::string("transparent"));
field350.setAccessType(std::string("outputOnly"));
field350.setType(std::string("SFVec3f"));
Script344.addChild(&field350);

field& field351 =  field();
field351.setName(std::string("value_changed"));
field351.setAccessType(std::string("outputOnly"));
field351.setType(std::string("SFVec3f"));
Script344.addChild(&field351);


//Script344.setSourceCode(std::string("ecmascript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	MassCounterWeight=100;")+
//_T("	MassProjectileWeight=10;")+
//_T("	Browser.println ('MassCounterWeight =' + MassCounterWeight);")+
//_T("	Browser.println ('MassProjectileWeight =' + MassProjectileWeight);")+
//_T("}")+
//_T("function set_MassProjectileWeight (value, timestamp)")+
//_T("{")+
//_T("	MassProjectileWeight = value;")+
//_T("	Browser.println ('new MassProjectileWeight =' + MassProjectileWeight);")+
//_T("}")+
//_T("function set_MassCounterWeight (value2, timestamp)")+
//_T("{")+
//_T("	MassCounterWeight = value2;")+
//_T("	Browser.println ('new MassCounterWeight =' + MassCounterWeight);")+
//_T("}")+
//_T("function set_fraction ( fraction, eventTime )")+
//_T("{")+
//_T("	var TrebuchetHeight=45;")+
//_T("	var Height =25;")+
//_T("      	var x = (2*(MassCounterWeight/MassProjectileWeight)*Height*fraction)-.5*TrebuchetHeight;")+
//_T("	// start at TrebuchetHeight and keep along z axis (z=zero)")+
//_T("	var y =  (MassCounterWeight/MassProjectileWeight)*Height*Math.sin(fraction*3.14);")+
//_T("        var z = 0;")+
//_T("        transparent = new SFVec3f (1,1,1);")+
//_T("     if (y <1.5*TrebuchetHeight  )if (x<TrebuchetHeight)")+
//_T("		{")+
//_T("		x=x-10;")+
//_T("		y=y+1;")+
//_T("		transparent = new SFVec3f(.01, .01, .01);")+
//_T("			}")+
//_T("	value_changed = new SFVec3f (x, y, z);")+
//_T("	Browser.println ('x=' + value_changed[0] + ' y=' + value_changed[1] + ' z=' + value_changed[2]);")+
//_T("}"));
Transform291.addChild(&Script344);

Transform104.addChild(&Transform291);

Scene17.addChild(&Transform104);

TimeSensor& TimeSensor352 =  TimeSensor();
TimeSensor352.setDEF(std::string("clock"));
TimeSensor352.setCycleInterval(10);
Scene17.addChild(&TimeSensor352);

PositionInterpolator& PositionInterpolator353 =  PositionInterpolator();
PositionInterpolator353.setDEF(std::string("verticalweightpath"));
PositionInterpolator353.setKey(new float[]{0.0,0.1,0.2,0.2,0.3,0.9}, 6);
PositionInterpolator353.setKeyValue(new float[]{1.4,1.6,0.0,1.0,-8.0,0.0,-3.5,-12.0,0.0,-3.5,-12.0,0.0,1.2,-8.0,0.0,1.4,1.6,0.0}, 18);
Scene17.addChild(&PositionInterpolator353);

OrientationInterpolator& OrientationInterpolator354 =  OrientationInterpolator();
OrientationInterpolator354.setDEF(std::string("flingerangles"));
OrientationInterpolator354.setKey(new float[]{0.0,0.1,0.2,0.2,0.3,0.9}, 6);
OrientationInterpolator354.setKeyValue(new float[]{0.0,0.0,1.0,0.82,0.0,0.0,1.0,-0.77,0.0,0.0,1.0,-1.57,0.0,0.0,1.0,-1.57,0.0,0.0,1.0,-0.77,0.0,0.0,1.0,0.82}, 24);
Scene17.addChild(&OrientationInterpolator354);

PositionInterpolator& PositionInterpolator355 =  PositionInterpolator();
PositionInterpolator355.setDEF(std::string("pinpath"));
PositionInterpolator355.setKey(new float[]{0.0,0.01,0.95,1.0}, 4);
PositionInterpolator355.setKeyValue(new float[]{0.0,0.0,-3.0,0.0,0.0,-10.0,0.0,0.0,-10.0,0.0,0.0,-3.0}, 12);
Scene17.addChild(&PositionInterpolator355);

OrientationInterpolator& OrientationInterpolator356 =  OrientationInterpolator();
OrientationInterpolator356.setDEF(std::string("RnSAngels"));
OrientationInterpolator356.setKey(new float[]{0.0,0.7,1.0}, 3);
OrientationInterpolator356.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,-3.14,0.0,0.0,1.0,0.0}, 12);
Scene17.addChild(&OrientationInterpolator356);

PositionInterpolator& PositionInterpolator357 =  PositionInterpolator();
PositionInterpolator357.setDEF(std::string("invisiable"));
PositionInterpolator357.setKey(new float[]{0.0,0.2,0.98,0.99}, 4);
PositionInterpolator357.setKeyValue(new float[]{1.0,1.0,1.0,0.01,0.01,0.01,0.01,0.01,0.01,1.0,1.0,1.0}, 12);
Scene17.addChild(&PositionInterpolator357);

ROUTE& ROUTE358 =  ROUTE();
ROUTE358.setFromField(std::string("fraction_changed"));
ROUTE358.setFromNode(std::string("clock"));
ROUTE358.setToField(std::string("set_fraction"));
ROUTE358.setToNode(std::string("invisiable"));
Scene17.addChild(&ROUTE358);

ROUTE& ROUTE359 =  ROUTE();
ROUTE359.setFromField(std::string("value_changed"));
ROUTE359.setFromNode(std::string("invisiable"));
ROUTE359.setToField(std::string("set_scale"));
ROUTE359.setToNode(std::string("projectiletransform"));
Scene17.addChild(&ROUTE359);

ROUTE& ROUTE360 =  ROUTE();
ROUTE360.setFromField(std::string("CounterWeight"));
ROUTE360.setFromNode(std::string("WeightScript"));
ROUTE360.setToField(std::string("set_MassCounterWeight"));
ROUTE360.setToNode(std::string("Mover"));
Scene17.addChild(&ROUTE360);

ROUTE& ROUTE361 =  ROUTE();
ROUTE361.setFromField(std::string("ProjectileWeight"));
ROUTE361.setFromNode(std::string("LauncheeScript"));
ROUTE361.setToField(std::string("set_MassProjectileWeight"));
ROUTE361.setToNode(std::string("Mover"));
Scene17.addChild(&ROUTE361);

ROUTE& ROUTE362 =  ROUTE();
ROUTE362.setFromField(std::string("fraction_changed"));
ROUTE362.setFromNode(std::string("clock"));
ROUTE362.setToField(std::string("set_fraction"));
ROUTE362.setToNode(std::string("Mover"));
Scene17.addChild(&ROUTE362);

ROUTE& ROUTE363 =  ROUTE();
ROUTE363.setFromField(std::string("value_changed"));
ROUTE363.setFromNode(std::string("Mover"));
ROUTE363.setToField(std::string("set_translation"));
ROUTE363.setToNode(std::string("ProjectileTransform"));
Scene17.addChild(&ROUTE363);

ROUTE& ROUTE364 =  ROUTE();
ROUTE364.setFromField(std::string("transparent"));
ROUTE364.setFromNode(std::string("Mover"));
ROUTE364.setToField(std::string("set_scale"));
ROUTE364.setToNode(std::string("ProjectileTransform"));
Scene17.addChild(&ROUTE364);

ROUTE& ROUTE365 =  ROUTE();
ROUTE365.setFromField(std::string("touchTime"));
ROUTE365.setFromNode(std::string("Launch"));
ROUTE365.setToField(std::string("set_startTime"));
ROUTE365.setToNode(std::string("clock"));
Scene17.addChild(&ROUTE365);

ROUTE& ROUTE366 =  ROUTE();
ROUTE366.setFromField(std::string("isActive"));
ROUTE366.setFromNode(std::string("Launch"));
ROUTE366.setToField(std::string("set_boolean"));
ROUTE366.setToNode(std::string("PigdogMonkScript"));
Scene17.addChild(&ROUTE366);

ROUTE& ROUTE367 =  ROUTE();
ROUTE367.setFromField(std::string("touchTime"));
ROUTE367.setFromNode(std::string("Launch"));
ROUTE367.setToField(std::string("set_startTime"));
ROUTE367.setToNode(std::string("PigDogSound"));
Scene17.addChild(&ROUTE367);

ROUTE& ROUTE368 =  ROUTE();
ROUTE368.setFromField(std::string("touchTime"));
ROUTE368.setFromNode(std::string("Launch"));
ROUTE368.setToField(std::string("set_startTime"));
ROUTE368.setToNode(std::string("MonkSound"));
Scene17.addChild(&ROUTE368);

ROUTE& ROUTE369 =  ROUTE();
ROUTE369.setFromField(std::string("whichchoice"));
ROUTE369.setFromNode(std::string("PigdogMonkScript"));
ROUTE369.setToField(std::string("whichChoice"));
ROUTE369.setToNode(std::string("PigdogMonk"));
Scene17.addChild(&ROUTE369);

ROUTE& ROUTE370 =  ROUTE();
ROUTE370.setFromField(std::string("touchTime"));
ROUTE370.setFromNode(std::string("LauncheeChoice"));
ROUTE370.setToField(std::string("set_startTime"));
ROUTE370.setToNode(std::string("HolyHandGrenadeSound"));
Scene17.addChild(&ROUTE370);

ROUTE& ROUTE371 =  ROUTE();
ROUTE371.setFromField(std::string("touchTime"));
ROUTE371.setFromNode(std::string("LauncheeChoice"));
ROUTE371.setToField(std::string("set_startTime"));
ROUTE371.setToNode(std::string("CowSound"));
Scene17.addChild(&ROUTE371);

ROUTE& ROUTE372 =  ROUTE();
ROUTE372.setFromField(std::string("touchTime"));
ROUTE372.setFromNode(std::string("LauncheeChoice"));
ROUTE372.setToField(std::string("set_startTime"));
ROUTE372.setToNode(std::string("HamsterSound"));
Scene17.addChild(&ROUTE372);

ROUTE& ROUTE373 =  ROUTE();
ROUTE373.setFromField(std::string("isActive"));
ROUTE373.setFromNode(std::string("LauncheeChoice"));
ROUTE373.setToField(std::string("set_boolean"));
ROUTE373.setToNode(std::string("LauncheeScript"));
Scene17.addChild(&ROUTE373);

ROUTE& ROUTE374 =  ROUTE();
ROUTE374.setFromField(std::string("whichchoice"));
ROUTE374.setFromNode(std::string("LauncheeScript"));
ROUTE374.setToField(std::string("whichChoice"));
ROUTE374.setToNode(std::string("projectile"));
Scene17.addChild(&ROUTE374);

ROUTE& ROUTE375 =  ROUTE();
ROUTE375.setFromField(std::string("whichchoice"));
ROUTE375.setFromNode(std::string("LauncheeScript"));
ROUTE375.setToField(std::string("whichChoice"));
ROUTE375.setToNode(std::string("projectilename"));
Scene17.addChild(&ROUTE375);

ROUTE& ROUTE376 =  ROUTE();
ROUTE376.setFromField(std::string("isActive"));
ROUTE376.setFromNode(std::string("weightselector"));
ROUTE376.setToField(std::string("set_boolean"));
ROUTE376.setToNode(std::string("WeightScript"));
Scene17.addChild(&ROUTE376);

ROUTE& ROUTE377 =  ROUTE();
ROUTE377.setFromField(std::string("whichchoice"));
ROUTE377.setFromNode(std::string("WeightScript"));
ROUTE377.setToField(std::string("whichChoice"));
ROUTE377.setToNode(std::string("Weight"));
Scene17.addChild(&ROUTE377);

ROUTE& ROUTE378 =  ROUTE();
ROUTE378.setFromField(std::string("fraction_changed"));
ROUTE378.setFromNode(std::string("clock"));
ROUTE378.setToField(std::string("set_fraction"));
ROUTE378.setToNode(std::string("flingerangles"));
Scene17.addChild(&ROUTE378);

ROUTE& ROUTE379 =  ROUTE();
ROUTE379.setFromField(std::string("value_changed"));
ROUTE379.setFromNode(std::string("flingerangles"));
ROUTE379.setToField(std::string("set_rotation"));
ROUTE379.setToNode(std::string("flinger"));
Scene17.addChild(&ROUTE379);

ROUTE& ROUTE380 =  ROUTE();
ROUTE380.setFromField(std::string("fraction_changed"));
ROUTE380.setFromNode(std::string("clock"));
ROUTE380.setToField(std::string("set_fraction"));
ROUTE380.setToNode(std::string("verticalweightpath"));
Scene17.addChild(&ROUTE380);

ROUTE& ROUTE381 =  ROUTE();
ROUTE381.setFromField(std::string("value_changed"));
ROUTE381.setFromNode(std::string("verticalweightpath"));
ROUTE381.setToField(std::string("set_translation"));
ROUTE381.setToNode(std::string("verticalweight"));
Scene17.addChild(&ROUTE381);

ROUTE& ROUTE382 =  ROUTE();
ROUTE382.setFromField(std::string("fraction_changed"));
ROUTE382.setFromNode(std::string("clock"));
ROUTE382.setToField(std::string("set_fraction"));
ROUTE382.setToNode(std::string("pinpath"));
Scene17.addChild(&ROUTE382);

ROUTE& ROUTE383 =  ROUTE();
ROUTE383.setFromField(std::string("value_changed"));
ROUTE383.setFromNode(std::string("pinpath"));
ROUTE383.setToField(std::string("set_translation"));
ROUTE383.setToNode(std::string("Pin"));
Scene17.addChild(&ROUTE383);

X3D0.setScene(&Scene17);

//}
