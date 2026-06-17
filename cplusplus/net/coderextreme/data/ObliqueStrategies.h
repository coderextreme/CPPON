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
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("ObliqueStrategies.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("Text scripting and animation example using Oblique Strategies card set by Brian Eno."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("Don Brutzman, John Kelly, Ben Cheng"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("created"));
meta5.setContent(std::string("3 November 2013"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("modified"));
meta6.setContent(std::string("10 November 2019"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("reference"));
meta7.setContent(std::string("oblique.html"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("reference"));
meta8.setContent(std::string("ObliqueStrategies.txt"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("reference"));
meta9.setContent(std::string("ObliqueStrategiesScript.js"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("reference"));
meta10.setContent(std::string("http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("reference"));
meta11.setContent(std::string("http://www.eno-web.co.uk/obliques.html"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("reference"));
meta12.setContent(std::string("http://gothpunk.com/haiku-intro.html"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("reference"));
meta13.setContent(std::string("http://www.rtqe.net/ObliqueStrategies/OSintro.html"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("reference"));
meta14.setContent(std::string("https://en.wikipedia.org/wiki/Oblique_Strategies"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("subject"));
meta15.setContent(std::string("Brian Eno, Oblique Strategies"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(std::string("Image"));
meta16.setContent(std::string("images/ObliqueStrategiesEntryScreen.png"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(std::string("Sound"));
meta17.setContent(std::string("http://translate.google.com/translate_tts?tl=en&q=hello%20X3D"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(std::string("Sound"));
meta18.setContent(std::string("translate_tts_HelloX3D.mp3"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(std::string("Sound"));
meta19.setContent(std::string("translate_tts_HelloX3D.wav"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(std::string("TODO"));
meta20.setContent(std::string("multiliingual translation parameter"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(std::string("reference"));
meta21.setContent(std::string("http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(std::string("reference"));
meta22.setContent(std::string("http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(std::string("warning"));
meta23.setContent(std::string("under development, scene Sound/AudioClip triggering (or retrieved file format) not working"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(std::string("warning"));
meta24.setContent(std::string("TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];"));
head1.addMeta(&meta24);

meta& meta25 =  meta();
meta25.setName(std::string("reference"));
meta25.setContent(std::string("https://gist.github.com/alotaiba/1728771"));
head1.addMeta(&meta25);

meta& meta26 =  meta();
meta26.setName(std::string("reference"));
meta26.setContent(std::string("https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api"));
head1.addMeta(&meta26);

meta& meta27 =  meta();
meta27.setName(std::string("Sound"));
meta27.setContent(std::string("https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4"));
head1.addMeta(&meta27);

meta& meta28 =  meta();
meta28.setName(std::string("Sound"));
meta28.setContent(std::string("translate_tts_HelloX3D4.mp3"));
head1.addMeta(&meta28);

meta& meta29 =  meta();
meta29.setName(std::string("reference"));
meta29.setContent(std::string("https://cloud.google.com/translate/docs/basic/translating-text"));
head1.addMeta(&meta29);

meta& meta30 =  meta();
meta30.setName(std::string("identifier"));
meta30.setContent(std::string("https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d"));
head1.addMeta(&meta30);

meta& meta31 =  meta();
meta31.setName(std::string("generator"));
meta31.setContent(std::string("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta31);

meta& meta32 =  meta();
meta32.setName(std::string("license"));
meta32.setContent(std::string("../license.html"));
head1.addMeta(&meta32);

X3D0.setHead(&head1);

Scene& Scene33 =  Scene();
WorldInfo& WorldInfo34 =  WorldInfo();
WorldInfo34.setTitle(std::string("ObliqueStrategies.x3d"));
Scene33.addChild(&WorldInfo34);

NavigationInfo& NavigationInfo35 =  NavigationInfo();
NavigationInfo35.setType((std::string[]){"NONE"}, 1);
Scene33.addChild(&NavigationInfo35);

Background& Background36 =  Background();
Background36.setSkyColor(new float[]{0.419608,0.427451,1.0}, 3);
Scene33.addChild(&Background36);

Transform& Transform37 =  Transform();
Transform37.setScale(new float[]{0.4,0.4,0.4});
Transform37.setTranslation(new float[]{0.0,1.0,0.0});
TouchSensor& TouchSensor38 =  TouchSensor();
TouchSensor38.setDEF(std::string("RandomTextClickedSensor"));
TouchSensor38.setDescription(std::string("Select to see a new strategy"));
Transform37.addChild(&TouchSensor38);

Shape& Shape39 =  Shape();
Text& Text40 =  Text();
Text40.setString((std::string[]){"Oblique Strategies", "(Over One Hundred Worthwhile Dilemmas)", "by Brian Eno and Peter Schmidt"}, 3);
CFontStyle& FontStyle41 =  CFontStyle();
FontStyle41.setDEF(std::string("MessageFont"));
FontStyle41.setFamily((std::string[]){"SANS"}, 1);
FontStyle41.setJustify((std::string[]){"MIDDLE", "MIDDLE"}, 2);
FontStyle41.setStyle(std::string("BOLD"));
Text40.setFontStyle(&FontStyle41);

Shape39.setGeometry(&Text40);

Appearance& Appearance42 =  Appearance();
Material& Material43 =  Material();
Material43.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance42.addChild(&Material43);

Shape39.addChild(&Appearance42);

Transform37.addChild(&Shape39);

Transform& Transform44 =  Transform();
Transform44.setScale(new float[]{10.0,3.0,1.0});
Shape& Shape45 =  Shape();
Shape45.setDEF(std::string("HeadlineClickSurface"));
IndexedFaceSet& IndexedFaceSet46 =  IndexedFaceSet();
IndexedFaceSet46.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet46.setSolid(false);
Coordinate& Coordinate47 =  Coordinate();
Coordinate47.setPoint(new float[]{1.0,1.0,0.0,1.0,-1.0,0.0,-1.0,-1.0,0.0,-1.0,1.0,0.0}, 12);
IndexedFaceSet46.setCoord(&Coordinate47);

Shape45.setGeometry(&IndexedFaceSet46);

Appearance& Appearance48 =  Appearance();
Material& Material49 =  Material();
Material49.setAmbientIntensity(0.245763);
Material49.setDiffuseColor(new float[]{0.34773,0.090909,0.005289});
Material49.setShininess(0.07);
Material49.setSpecularColor(new float[]{0.336735,0.051091,0.051091});
Material49.setTransparency(0.8);
Appearance48.addChild(&Material49);

Shape45.addChild(&Appearance48);

Transform44.addChild(&Shape45);

Transform37.addChild(&Transform44);

Scene33.addChild(&Transform37);

Script& Script50 =  Script();
Script50.setDEF(std::string("TextScript"));
Script50.setUrl((std::string[]){"ObliqueStrategiesScript.js", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"}, 2);
//initialize() method includes unit test to printAllStrategies() to console
//TODO insert field definitions here (index string_changed previous next random) and then animate!
field& field51 =  field();
field51.setName(std::string("index"));
field51.setAccessType(std::string("initializeOnly"));
field51.setAppinfo(std::string("index for active strategy card, -1 means no selection"));
field51.setType(std::string("SFInt32"));
field51.setValue(std::string("0"));
Script50.addChild(&field51);

field& field52 =  field();
field52.setName(std::string("string_changed"));
field52.setAccessType(std::string("outputOnly"));
field52.setAppinfo(std::string("latest strategy card value"));
field52.setType(std::string("MFString"));
Script50.addChild(&field52);

field& field53 =  field();
field53.setName(std::string("textToSpeechUrl"));
field53.setAccessType(std::string("outputOnly"));
field53.setAppinfo(std::string("\"url to invoke Google Translate\""));
field53.setType(std::string("MFString"));
Script50.addChild(&field53);

field& field54 =  field();
field54.setName(std::string("newCardTime"));
field54.setAccessType(std::string("outputOnly"));
field54.setAppinfo(std::string("activate Sound node"));
field54.setType(std::string("SFTime"));
Script50.addChild(&field54);

field& field55 =  field();
field55.setName(std::string("selectPreviousCard"));
field55.setAccessType(std::string("inputOnly"));
field55.setType(std::string("SFBool"));
Script50.addChild(&field55);

field& field56 =  field();
field56.setName(std::string("selectNextCard"));
field56.setAccessType(std::string("inputOnly"));
field56.setType(std::string("SFBool"));
Script50.addChild(&field56);

field& field57 =  field();
field57.setName(std::string("selectRandomCard"));
field57.setAccessType(std::string("inputOnly"));
field57.setType(std::string("SFBool"));
Script50.addChild(&field57);

field& field58 =  field();
field58.setName(std::string("traceEnabled"));
field58.setAccessType(std::string("initializeOnly"));
field58.setAppinfo(std::string("controls console tracing"));
field58.setType(std::string("SFBool"));
field58.setValue(std::string("true"));
Script50.addChild(&field58);

Scene33.addChild(&Script50);

Transform& Transform59 =  Transform();
Transform59.setDEF(std::string("CardTransform"));
Transform59.setScale(new float[]{0.4,0.4,0.4});
Transform59.setTranslation(new float[]{0.0,-1.5,0.0});
Shape& Shape60 =  Shape();
Text& Text61 =  Text();
Text61.setDEF(std::string("CardText"));
CFontStyle& FontStyle62 =  CFontStyle();
FontStyle62.setFamily((std::string[]){"SANS"}, 1);
FontStyle62.setJustify((std::string[]){"MIDDLE", "MIDDLE"}, 2);
FontStyle62.setStyle(std::string("BOLD"));
Text61.setFontStyle(&FontStyle62);

Shape60.setGeometry(&Text61);

Appearance& Appearance63 =  Appearance();
Material& Material64 =  Material();
Material64.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance63.addChild(&Material64);

Shape60.addChild(&Appearance63);

Transform59.addChild(&Shape60);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromField(std::string("string_changed"));
ROUTE65.setFromNode(std::string("TextScript"));
ROUTE65.setToField(std::string("string"));
ROUTE65.setToNode(std::string("CardText"));
Transform59.addChild(&ROUTE65);

Sound& Sound66 =  Sound();
Sound66.setDEF(std::string("CardSoundSpatialization"));
Sound66.setMaxBack(100);
Sound66.setMaxFront(100);
Sound66.setMinBack(20);
Sound66.setMinFront(20);
//Make sure the sound source AudioClip is audible at the user location
//Not all X3D players seem to use the .mp3
//&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players
//%20 is space character used in uri/url encoding
AudioClip& AudioClip67 =  AudioClip();
AudioClip67.setDEF(std::string("TextToSpeechAudioClip"));
AudioClip67.setDescription(std::string("sends strategy text google translate"));
AudioClip67.setUrl((std::string[]){"http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium", "translate_tts_mp3FileFormatNotSupported.wav", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"}, 3);
Sound66.setSource(AudioClip67);

Transform59.addChild(&Sound66);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromField(std::string("textToSpeechUrl"));
ROUTE68.setFromNode(std::string("TextScript"));
ROUTE68.setToField(std::string("url"));
ROUTE68.setToNode(std::string("TextToSpeechAudioClip"));
Transform59.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromField(std::string("newCardTime"));
ROUTE69.setFromNode(std::string("TextScript"));
ROUTE69.setToField(std::string("startTime"));
ROUTE69.setToNode(std::string("TextToSpeechAudioClip"));
Transform59.addChild(&ROUTE69);

Scene33.addChild(&Transform59);

Transform& Transform70 =  Transform();
Transform70.setScale(new float[]{0.4,0.4,0.4});
Transform70.setTranslation(new float[]{-3.2,2.5,0.0});
TouchSensor& TouchSensor71 =  TouchSensor();
TouchSensor71.setDEF(std::string("PreviousTextClickedSensor"));
TouchSensor71.setDescription(std::string("Select to see previous strategy"));
Transform70.addChild(&TouchSensor71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromField(std::string("isActive"));
ROUTE72.setFromNode(std::string("PreviousTextClickedSensor"));
ROUTE72.setToField(std::string("selectPreviousCard"));
ROUTE72.setToNode(std::string("TextScript"));
Transform70.addChild(&ROUTE72);

Shape& Shape73 =  Shape();
Text& Text74 =  Text();
Text74.setString((std::string[]){"previous"}, 1);
CFontStyle& FontStyle75 =  CFontStyle();
FontStyle75.setUSE(std::string("MessageFont"));
Text74.setFontStyle(&FontStyle75);

Shape73.setGeometry(&Text74);

Appearance& Appearance76 =  Appearance();
Appearance76.setDEF(std::string("InterfaceAppearance"));
Material& Material77 =  Material();
Material77.setDiffuseColor(new float[]{1.0,0.0,0.6});
Appearance76.addChild(&Material77);

Shape73.addChild(&Appearance76);

Transform70.addChild(&Shape73);

Transform& Transform78 =  Transform();
Transform78.setScale(new float[]{2.0,0.6,1.0});
Shape& Shape79 =  Shape();
Shape79.setDEF(std::string("TransparentClickSurface"));
//support Selectable Text with a scalable IFS
IndexedFaceSet& IndexedFaceSet80 =  IndexedFaceSet();
IndexedFaceSet80.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet80.setSolid(false);
Coordinate& Coordinate81 =  Coordinate();
Coordinate81.setPoint(new float[]{1.0,1.0,0.0,1.0,-1.0,0.0,-1.0,-1.0,0.0,-1.0,1.0,0.0}, 12);
IndexedFaceSet80.setCoord(&Coordinate81);

Shape79.setGeometry(&IndexedFaceSet80);

Appearance& Appearance82 =  Appearance();
Material& Material83 =  Material();
Material83.setTransparency(1);
Appearance82.addChild(&Material83);

Shape79.addChild(&Appearance82);

Transform78.addChild(&Shape79);

Transform70.addChild(&Transform78);

Scene33.addChild(&Transform70);

Transform& Transform84 =  Transform();
Transform84.setScale(new float[]{0.4,0.4,0.4});
Transform84.setTranslation(new float[]{3.5,2.5,0.0});
TouchSensor& TouchSensor85 =  TouchSensor();
TouchSensor85.setDEF(std::string("NextTextClickedSensor"));
TouchSensor85.setDescription(std::string("Select to see next strategy"));
Transform84.addChild(&TouchSensor85);

ROUTE& ROUTE86 =  ROUTE();
ROUTE86.setFromField(std::string("isActive"));
ROUTE86.setFromNode(std::string("NextTextClickedSensor"));
ROUTE86.setToField(std::string("selectNextCard"));
ROUTE86.setToNode(std::string("TextScript"));
Transform84.addChild(&ROUTE86);

Shape& Shape87 =  Shape();
Text& Text88 =  Text();
Text88.setString((std::string[]){"next"}, 1);
CFontStyle& FontStyle89 =  CFontStyle();
FontStyle89.setUSE(std::string("MessageFont"));
Text88.setFontStyle(&FontStyle89);

Shape87.setGeometry(&Text88);

Appearance& Appearance90 =  Appearance();
Appearance90.setUSE(std::string("InterfaceAppearance"));
Shape87.addChild(&Appearance90);

Transform84.addChild(&Shape87);

Transform& Transform91 =  Transform();
Transform91.setScale(new float[]{1.2,0.6,1.0});
Shape& Shape92 =  Shape();
Shape92.setUSE(std::string("TransparentClickSurface"));
Transform91.addChild(&Shape92);

Transform84.addChild(&Transform91);

Scene33.addChild(&Transform84);

Transform& Transform93 =  Transform();
Transform93.setScale(new float[]{0.4,0.4,0.4});
Transform93.setTranslation(new float[]{-3.3,-0.5,0.0});
TouchSensor& TouchSensor94 =  TouchSensor();
TouchSensor94.setUSE(std::string("RandomTextClickedSensor"));
Transform93.addChild(&TouchSensor94);

ROUTE& ROUTE95 =  ROUTE();
ROUTE95.setFromField(std::string("isActive"));
ROUTE95.setFromNode(std::string("RandomTextClickedSensor"));
ROUTE95.setToField(std::string("selectRandomCard"));
ROUTE95.setToNode(std::string("TextScript"));
Transform93.addChild(&ROUTE95);

Shape& Shape96 =  Shape();
Text& Text97 =  Text();
Text97.setString((std::string[]){"random"}, 1);
CFontStyle& FontStyle98 =  CFontStyle();
FontStyle98.setUSE(std::string("MessageFont"));
Text97.setFontStyle(&FontStyle98);

Shape96.setGeometry(&Text97);

Appearance& Appearance99 =  Appearance();
Appearance99.setUSE(std::string("InterfaceAppearance"));
Shape96.addChild(&Appearance99);

Transform93.addChild(&Shape96);

Transform& Transform100 =  Transform();
Transform100.setScale(new float[]{1.8,0.6,1.0});
Shape& Shape101 =  Shape();
Shape101.setUSE(std::string("TransparentClickSurface"));
Transform100.addChild(&Shape101);

Transform93.addChild(&Transform100);

Scene33.addChild(&Transform93);

Transform& Transform102 =  Transform();
Transform102.setScale(new float[]{0.4,0.4,0.4});
Transform102.setTranslation(new float[]{3.3,-0.5,0.0});
Anchor& Anchor103 =  Anchor();
Anchor103.setDEF(std::string("TextToSpeechAnchor"));
Anchor103.setDescription(std::string("text to speech in browser"));
Anchor103.setParameter((std::string[]){"target=_blank"}, 1);
Anchor103.setUrl((std::string[]){"http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"}, 1);
ROUTE& ROUTE104 =  ROUTE();
ROUTE104.setFromField(std::string("textToSpeechUrl"));
ROUTE104.setFromNode(std::string("TextScript"));
ROUTE104.setToField(std::string("url"));
ROUTE104.setToNode(std::string("TextToSpeechAnchor"));
Anchor103.addChild(&ROUTE104);

Shape& Shape105 =  Shape();
Text& Text106 =  Text();
Text106.setString((std::string[]){"speech"}, 1);
CFontStyle& FontStyle107 =  CFontStyle();
FontStyle107.setUSE(std::string("MessageFont"));
Text106.setFontStyle(&FontStyle107);

Shape105.setGeometry(&Text106);

Appearance& Appearance108 =  Appearance();
Appearance108.setUSE(std::string("InterfaceAppearance"));
Shape105.addChild(&Appearance108);

Anchor103.addChild(&Shape105);

Transform& Transform109 =  Transform();
Transform109.setScale(new float[]{1.8,0.6,1.0});
Shape& Shape110 =  Shape();
Shape110.setUSE(std::string("TransparentClickSurface"));
Transform109.addChild(&Shape110);

Anchor103.addChild(&Transform109);

Transform102.addChild(&Anchor103);

Scene33.addChild(&Transform102);

X3D0.setScene(&Scene33);

//}
