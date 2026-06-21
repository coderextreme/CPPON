#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void jumpcut_loadurl(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("jumpcut_loadurl.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("reference"));
meta3.setContent(std::string("http://www.nist.gov/vrml.html"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("reference"));
meta4.setContent(std::string("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("creator"));
meta5.setContent(std::string("http://www.itl.nist.gov/div897/ctg/vrml/members.html"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("disclaimer"));
meta6.setContent(std::string("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("info"));
meta7.setContent(std::string("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("translator"));
meta8.setContent(std::string("Michael Kass NIST, Don Brutzman NPS"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("translated"));
meta9.setContent(std::string("21 January 2001"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("modified"));
meta10.setContent(std::string("20 October 2019"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("description"));
meta11.setContent(std::string("Test jumpcut Viewpoint transition using Script loadUrl method. A NavigationInfo type of ANY is NOT included in the NavigationInfo node field in this world. Consequently, a Script node with a call to the \"loadURL\" method, with a url corresponding to the MFString \"Top_View\" (the name of a Viewpoint in this world) should create a \"jump cut\" transition of views when the Box geometry in this world is indicated by the pointing device. As a result, indicating the Box geometry should result in a Viewpoint transition to the top view of the Box geometry."));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("identifier"));
meta12.setContent(std::string("https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("generator"));
meta13.setContent(std::string("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("generator"));
meta14.setContent(std::string("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("license"));
meta15.setContent(std::string("../../license.html"));
head1.addMeta(&meta15);

X3D0.setHead(&head1);

Scene& Scene16 =  Scene();
WorldInfo& WorldInfo17 =  WorldInfo();
WorldInfo17.setTitle(std::string("jumpcut_loadurl.x3d"));
Scene16.addChild(&WorldInfo17);

Background& Background18 =  Background();
Background18.setGroundAngle(new float[]{1.57}, 1);
Background18.setGroundColor(new float[]{0.0,0.5,0.0,0.0,0.5,0.0}, 6);
Background18.setSkyColor(new float[]{0.0,0.0,1.0}, 3);
Scene16.addChild(&Background18);

NavigationInfo& NavigationInfo19 =  NavigationInfo();
NavigationInfo19.setType(new std::string[]{"EXAMINE", "WALK", "FLY", "ANY"}, 4);
Scene16.addChild(&NavigationInfo19);

Viewpoint& Viewpoint20 =  Viewpoint();
Viewpoint20.setDEF(std::string("Front_View"));
Viewpoint20.setDescription(std::string("Front View"));
Scene16.addChild(&Viewpoint20);

Viewpoint& Viewpoint21 =  Viewpoint();
Viewpoint21.setDEF(std::string("Top_View"));
Viewpoint21.setDescription(std::string("Top View"));
Viewpoint21.setOrientation(new float[]{1.0,0.0,0.0,-1.57});
Viewpoint21.setPosition(new float[]{0.0,10.0,0.0});
Scene16.addChild(&Viewpoint21);

TouchSensor& TouchSensor22 =  TouchSensor();
TouchSensor22.setDEF(std::string("STARTER"));
TouchSensor22.setDescription(std::string("touch to activate"));
Scene16.addChild(&TouchSensor22);

Transform& Transform23 =  Transform();
Transform23.setDEF(std::string("ROOT"));
Shape& Shape24 =  Shape();
Appearance& Appearance25 =  Appearance();
Appearance25.setContainerField("appearance");
Material& Material26 =  Material();
Material26.setContainerField("material");
Appearance25.addChild(&Material26);

Shape24.addChild(&Appearance25);

Box& Box27 =  Box();
Shape24.setGeometry(&Box27);

Transform23.addChild(&Shape24);

Scene16.addChild(&Transform23);

Script& Script28 =  Script();
Script28.setDEF(std::string("MYSCRIPT"));
Script28.setUrl(new std::string[]{"jumpcut_loadurl.js", "https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.js"}, 2);
field& field29 =  field();
field29.setName(std::string("myParameter"));
field29.setAccessType(std::string("initializeOnly"));
field29.setType(std::string("MFString"));
field29.setValue(std::string("\"Top_View\""));
Script28.addChild(&field29);

field& field30 =  field();
field30.setName(std::string("myUrl"));
field30.setAccessType(std::string("initializeOnly"));
field30.setType(std::string("MFString"));
field30.setValue(std::string("\"jumpcut_loadurl.x3d#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d#Top_View\" \"jumpcut_loadurl.wrl#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.wrl#Top_View\""));
Script28.addChild(&field30);

field& field31 =  field();
field31.setName(std::string("trigger_event"));
field31.setAccessType(std::string("inputOnly"));
field31.setType(std::string("SFBool"));
Script28.addChild(&field31);

Scene16.addChild(&Script28);

ROUTE& ROUTE32 =  ROUTE();
ROUTE32.setFromField(std::string("isActive"));
ROUTE32.setFromNode(std::string("STARTER"));
ROUTE32.setToField(std::string("trigger_event"));
ROUTE32.setToNode(std::string("MYSCRIPT"));
Scene16.addChild(&ROUTE32);

X3D0.setScene(&Scene16);

//}
