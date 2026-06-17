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
int JoeExample(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("Scripting.x3d"));
head1.addMeta(&meta2);

X3D0.setHead(&head1);

Scene& Scene3 =  Scene();
Script& Script4 =  Script();
Script4.setDEF(std::string("OpenVault"));
field& field5 =  field();
field5.setName(std::string("openVault"));
field5.setType(std::string("SFTime"));
field5.setAccessType(std::string("inputOnly"));
Script4.addChild(&field5);

field& field6 =  field();
field6.setName(std::string("combinationEntered"));
field6.setType(std::string("SFBool"));
field6.setAccessType(std::string("inputOnly"));
Script4.addChild(&field6);

field& field7 =  field();
field7.setName(std::string("vaultUnlocked"));
field7.setType(std::string("SFTime"));
field7.setAccessType(std::string("outputOnly"));
Script4.addChild(&field7);

field& field8 =  field();
field8.setName(std::string("unlocked"));
field8.setType(std::string("SFBool"));
field8.setValue(std::string("false"));
field8.setAccessType(std::string("initializeOnly"));
Script4.addChild(&field8);


//Script4.setSourceCode(std::string("ecmascript:")+
//_T("      function combinationEntered (value) {")+
//_T("        unlocked = value;")+
//_T("      }")+
//_T("      function openVault(value) {")+
//_T("      if (unlocked) vaultUnlocked = value;")+
//_T("      }"));
Scene3.addChild(&Script4);

Shape& Shape9 =  Shape();
Appearance& Appearance10 =  Appearance();
Material& Material11 =  Material();
Material11.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance10.addChild(&Material11);

Shape9.addChild(&Appearance10);

Sphere& Sphere12 =  Sphere();
Shape9.setGeometry(&Sphere12);

Scene3.addChild(&Shape9);

Sound& Sound13 =  Sound();
Sound13.setMaxBack(1000);
Sound13.setMaxFront(1000);
Sound13.setMinBack(1000);
Sound13.setMinFront(1000);
AudioClip& AudioClip14 =  AudioClip();
AudioClip14.setDEF(std::string("Click"));
AudioClip14.setStopTime(1);
AudioClip14.setDescription(std::string("clicking sound"));
AudioClip14.setUrl((std::string[]){"../resources/chandubabamusic1.wav"}, 1);
Sound13.setSource(AudioClip14);

Scene3.addChild(&Sound13);

TouchSensor& TouchSensor15 =  TouchSensor();
TouchSensor15.setDEF(std::string("TS"));
Scene3.addChild(&TouchSensor15);

ROUTE& ROUTE16 =  ROUTE();
ROUTE16.setFromNode(std::string("TS"));
ROUTE16.setFromField(std::string("isOver"));
ROUTE16.setToNode(std::string("OpenVault"));
ROUTE16.setToField(std::string("combinationEntered"));
Scene3.addChild(&ROUTE16);

ROUTE& ROUTE17 =  ROUTE();
ROUTE17.setFromNode(std::string("TS"));
ROUTE17.setFromField(std::string("touchTime"));
ROUTE17.setToNode(std::string("OpenVault"));
ROUTE17.setToField(std::string("openVault"));
Scene3.addChild(&ROUTE17);

ROUTE& ROUTE18 =  ROUTE();
ROUTE18.setFromNode(std::string("OpenVault"));
ROUTE18.setFromField(std::string("vaultUnlocked"));
ROUTE18.setToNode(std::string("Click"));
ROUTE18.setToField(std::string("startTime"));
Scene3.addChild(&ROUTE18);

X3D0.setScene(&Scene3);

}
