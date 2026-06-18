#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void CameraPrototypes(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("CameraPrototypes.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("Don Brutzman and Jeff Weekley"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("created"));
meta5.setContent(std::string("16 March 2009"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("modified"));
meta6.setContent(std::string("25 October 2016"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("TODO"));
meta7.setContent(std::string("Schematron rules, backed up by initialize() checks"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("reference"));
meta8.setContent(std::string("BeyondViewpointCameraNodesWeb3D2009.pdf"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("reference"));
meta9.setContent(std::string("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("subject"));
meta10.setContent(std::string("Camera nodes for Viewpoint navigation control"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("reference"));
meta11.setContent(std::string("CameraExamples.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("identifier"));
meta12.setContent(std::string("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("reference"));
meta13.setContent(std::string("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("generator"));
meta14.setContent(std::string("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("license"));
meta15.setContent(std::string("../license.html"));
head1.addMeta(&meta15);

X3D0.setHead(&head1);

Scene& Scene16 =  Scene();
//=============== Camera ==============
ProtoDeclare& ProtoDeclare17 =  ProtoDeclare();
ProtoDeclare17.setName(std::string("Camera"));
ProtoDeclare17.setAppinfo(std::string("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images."));
ProtoInterface& ProtoInterface18 =  ProtoInterface();
//Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields
field& field19 =  field();
field19.setName(std::string("description"));
field19.setAccessType(std::string("inputOutput"));
field19.setAppinfo(std::string("Text description to be displayed for this Camera"));
field19.setType(std::string("SFString"));
ProtoInterface18.addChild(&field19);

field& field20 =  field();
field20.setName(std::string("position"));
field20.setAccessType(std::string("inputOutput"));
field20.setAppinfo(std::string("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"));
field20.setType(std::string("SFVec3f"));
field20.setValue(std::string("0 0 10"));
ProtoInterface18.addChild(&field20);

field& field21 =  field();
field21.setName(std::string("orientation"));
field21.setAccessType(std::string("inputOutput"));
field21.setAppinfo(std::string("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"));
field21.setType(std::string("SFRotation"));
field21.setValue(std::string("0 0 1 0"));
ProtoInterface18.addChild(&field21);

field& field22 =  field();
field22.setName(std::string("fieldOfView"));
field22.setAccessType(std::string("inputOutput"));
field22.setAppinfo(std::string("pi/4"));
field22.setType(std::string("SFFloat"));
field22.setValue(std::string("0.7854"));
ProtoInterface18.addChild(&field22);

field& field23 =  field();
field23.setName(std::string("set_fraction"));
field23.setAccessType(std::string("inputOnly"));
field23.setAppinfo(std::string("input fraction drives interpolators"));
field23.setType(std::string("SFFloat"));
ProtoInterface18.addChild(&field23);

field& field24 =  field();
field24.setName(std::string("set_bind"));
field24.setAccessType(std::string("inputOnly"));
field24.setAppinfo(std::string("input event binds or unbinds this Camera"));
field24.setType(std::string("SFBool"));
ProtoInterface18.addChild(&field24);

field& field25 =  field();
field25.setName(std::string("bindTime"));
field25.setAccessType(std::string("outputOnly"));
field25.setAppinfo(std::string("output event indicates when this Camera is bound"));
field25.setType(std::string("SFTime"));
ProtoInterface18.addChild(&field25);

field& field26 =  field();
field26.setName(std::string("isBound"));
field26.setAccessType(std::string("outputOnly"));
field26.setAppinfo(std::string("output event indicates whether this Camera is bound or unbound"));
field26.setType(std::string("SFBool"));
ProtoInterface18.addChild(&field26);

field& field27 =  field();
field27.setName(std::string("nearClipPlane"));
field27.setAccessType(std::string("inputOutput"));
field27.setAppinfo(std::string("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]"));
field27.setType(std::string("SFFloat"));
field27.setValue(std::string("0.25"));
ProtoInterface18.addChild(&field27);

field& field28 =  field();
field28.setName(std::string("farClipPlane"));
field28.setAccessType(std::string("inputOutput"));
field28.setAppinfo(std::string("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit"));
field28.setType(std::string("SFFloat"));
field28.setValue(std::string("0"));
ProtoInterface18.addChild(&field28);

field& field29 =  field();
field29.setName(std::string("shots"));
field29.setAccessType(std::string("inputOutput"));
field29.setAppinfo(std::string("Array of CameraShot nodes which in turn contain CameraMovement nodes"));
field29.setType(std::string("MFNode"));
//initialization nodes (if any) go here
ProtoInterface18.addChild(&field29);

field& field30 =  field();
field30.setName(std::string("headlight"));
field30.setAccessType(std::string("inputOutput"));
field30.setAppinfo(std::string("Whether camera headlight is on or off"));
field30.setType(std::string("SFBool"));
field30.setValue(std::string("true"));
ProtoInterface18.addChild(&field30);

field& field31 =  field();
field31.setName(std::string("headlightColor"));
field31.setAccessType(std::string("inputOutput"));
field31.setAppinfo(std::string("Camera headlight color"));
field31.setType(std::string("SFColor"));
field31.setValue(std::string("1 1 1"));
ProtoInterface18.addChild(&field31);

field& field32 =  field();
field32.setName(std::string("headlightIntensity"));
field32.setAccessType(std::string("inputOutput"));
field32.setAppinfo(std::string("Camera headlight intensity"));
field32.setType(std::string("SFFloat"));
field32.setValue(std::string("1"));
ProtoInterface18.addChild(&field32);

field& field33 =  field();
field33.setName(std::string("filterColor"));
field33.setAccessType(std::string("inputOutput"));
field33.setAppinfo(std::string("Camera filter color that modifies virtual lens capture"));
field33.setType(std::string("SFColor"));
field33.setValue(std::string("1 1 1"));
ProtoInterface18.addChild(&field33);

field& field34 =  field();
field34.setName(std::string("filterTransparency"));
field34.setAccessType(std::string("inputOutput"));
field34.setAppinfo(std::string("Camera filter transparency that modifies virtual lens capture"));
field34.setType(std::string("SFFloat"));
field34.setValue(std::string("1"));
ProtoInterface18.addChild(&field34);

field& field35 =  field();
field35.setName(std::string("upVector"));
field35.setAccessType(std::string("inputOutput"));
field35.setAppinfo(std::string("upVector changes modify camera orientation (and possibly vice versa)"));
field35.setType(std::string("SFVec3f"));
field35.setValue(std::string("0 1 0"));
ProtoInterface18.addChild(&field35);

field& field36 =  field();
field36.setName(std::string("fStop"));
field36.setAccessType(std::string("inputOutput"));
field36.setAppinfo(std::string("Focal length divided effective aperture diameter indicating width of focal plane"));
field36.setType(std::string("SFFloat"));
field36.setValue(std::string("5.6"));
ProtoInterface18.addChild(&field36);

field& field37 =  field();
field37.setName(std::string("focusDistance"));
field37.setAccessType(std::string("inputOutput"));
field37.setAppinfo(std::string("Distance to focal plane of sharpest focus"));
field37.setType(std::string("SFFloat"));
field37.setValue(std::string("10"));
ProtoInterface18.addChild(&field37);

field& field38 =  field();
field38.setName(std::string("isActive"));
field38.setAccessType(std::string("outputOnly"));
field38.setAppinfo(std::string("Mark start/stop with true/false output respectively useful to trigger external animations"));
field38.setType(std::string("SFBool"));
ProtoInterface18.addChild(&field38);

field& field39 =  field();
field39.setName(std::string("totalDuration"));
field39.setAccessType(std::string("outputOnly"));
field39.setAppinfo(std::string("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"));
field39.setType(std::string("SFTime"));
ProtoInterface18.addChild(&field39);

field& field40 =  field();
field40.setName(std::string("offlineRender"));
field40.setAccessType(std::string("inputOutput"));
field40.setAppinfo(std::string("OfflineRender node"));
field40.setType(std::string("SFNode"));
//initialization node (if any) goes here
ProtoInterface18.addChild(&field40);

field& field41 =  field();
field41.setName(std::string("traceEnabled"));
field41.setAccessType(std::string("initializeOnly"));
field41.setAppinfo(std::string("enable console output to trace script computations and prototype progress"));
field41.setType(std::string("SFBool"));
field41.setValue(std::string("false"));
ProtoInterface18.addChild(&field41);

ProtoDeclare17.addChild(&ProtoInterface18);

ProtoBody& ProtoBody42 =  ProtoBody();
Viewpoint& Viewpoint43 =  Viewpoint();
Viewpoint43.setDEF(std::string("CameraViewpoint"));
IS& IS44 =  IS();
Connect& connect45 =  Connect();
connect45.setNodeField(std::string("description"));
connect45.setProtoField(std::string("description"));
IS44.addChild(&connect45);

Connect& connect46 =  Connect();
connect46.setNodeField(std::string("position"));
connect46.setProtoField(std::string("position"));
IS44.addChild(&connect46);

Connect& connect47 =  Connect();
connect47.setNodeField(std::string("orientation"));
connect47.setProtoField(std::string("orientation"));
IS44.addChild(&connect47);

Connect& connect48 =  Connect();
connect48.setNodeField(std::string("fieldOfView"));
connect48.setProtoField(std::string("fieldOfView"));
IS44.addChild(&connect48);

Connect& connect49 =  Connect();
connect49.setNodeField(std::string("set_bind"));
connect49.setProtoField(std::string("set_bind"));
IS44.addChild(&connect49);

Connect& connect50 =  Connect();
connect50.setNodeField(std::string("bindTime"));
connect50.setProtoField(std::string("bindTime"));
IS44.addChild(&connect50);

Connect& connect51 =  Connect();
connect51.setNodeField(std::string("isBound"));
connect51.setProtoField(std::string("isBound"));
IS44.addChild(&connect51);

Viewpoint43.addChild(&IS44);

ProtoBody42.addChild(&Viewpoint43);

//NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation
NavigationInfo& NavigationInfo52 =  NavigationInfo();
NavigationInfo52.setDEF(std::string("CameraNavInfo"));
NavigationInfo52.setType(new std::string[]{"EXAMINE", "FLY", "ANY"}, 3);
IS& IS53 =  IS();
Connect& connect54 =  Connect();
connect54.setNodeField(std::string("set_bind"));
connect54.setProtoField(std::string("set_bind"));
IS53.addChild(&connect54);

Connect& connect55 =  Connect();
connect55.setNodeField(std::string("headlight"));
connect55.setProtoField(std::string("headlight"));
IS53.addChild(&connect55);

Connect& connect56 =  Connect();
connect56.setNodeField(std::string("visibilityLimit"));
connect56.setProtoField(std::string("farClipPlane"));
IS53.addChild(&connect56);

//No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing.
NavigationInfo52.addChild(&IS53);

ProtoBody42.addChild(&NavigationInfo52);

//this DirectionalLight replaces NavigationInfo headlight in order to add color capability
DirectionalLight& DirectionalLight57 =  DirectionalLight();
DirectionalLight57.setDEF(std::string("CameraDirectionalLight"));
DirectionalLight57.setGlobal(true);
//TODO confirm other default field values match NavigationInfo spec
IS& IS58 =  IS();
Connect& connect59 =  Connect();
connect59.setNodeField(std::string("on"));
connect59.setProtoField(std::string("headlight"));
IS58.addChild(&connect59);

Connect& connect60 =  Connect();
connect60.setNodeField(std::string("color"));
connect60.setProtoField(std::string("headlightColor"));
IS58.addChild(&connect60);

Connect& connect61 =  Connect();
connect61.setNodeField(std::string("intensity"));
connect61.setProtoField(std::string("headlightIntensity"));
IS58.addChild(&connect61);

DirectionalLight57.addChild(&IS58);

ProtoBody42.addChild(&DirectionalLight57);

PositionInterpolator& PositionInterpolator62 =  PositionInterpolator();
PositionInterpolator62.setDEF(std::string("CameraPositionInterpolator"));
PositionInterpolator62.setKey(new float[]{0.0,1.0}, 2);
PositionInterpolator62.setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0}, 6);
IS& IS63 =  IS();
Connect& connect64 =  Connect();
connect64.setNodeField(std::string("set_fraction"));
connect64.setProtoField(std::string("set_fraction"));
IS63.addChild(&connect64);

PositionInterpolator62.addChild(&IS63);

ProtoBody42.addChild(&PositionInterpolator62);

OrientationInterpolator& OrientationInterpolator65 =  OrientationInterpolator();
OrientationInterpolator65.setDEF(std::string("CameraOrientationInterpolator"));
OrientationInterpolator65.setKey(new float[]{0.0,1.0}, 2);
OrientationInterpolator65.setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0}, 8);
IS& IS66 =  IS();
Connect& connect67 =  Connect();
connect67.setNodeField(std::string("set_fraction"));
connect67.setProtoField(std::string("set_fraction"));
IS66.addChild(&connect67);

OrientationInterpolator65.addChild(&IS66);

ProtoBody42.addChild(&OrientationInterpolator65);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromField(std::string("value_changed"));
ROUTE68.setFromNode(std::string("CameraPositionInterpolator"));
ROUTE68.setToField(std::string("position"));
ROUTE68.setToNode(std::string("CameraViewpoint"));
ProtoBody42.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromField(std::string("value_changed"));
ROUTE69.setFromNode(std::string("CameraOrientationInterpolator"));
ROUTE69.setToField(std::string("orientation"));
ROUTE69.setToNode(std::string("CameraViewpoint"));
ProtoBody42.addChild(&ROUTE69);

Script& Script70 =  Script();
Script70.setDEF(std::string("CameraScript"));
Script70.setDirectOutput(true);
Script70.setMustEvaluate(true);
//binding is controlled externally, all camera operations proceed the same regardless of whether bound or not
field& field71 =  field();
field71.setName(std::string("description"));
field71.setAccessType(std::string("inputOutput"));
field71.setAppinfo(std::string("Text description to be displayed for this Camera"));
field71.setType(std::string("SFString"));
Script70.addChild(&field71);

field& field72 =  field();
field72.setName(std::string("position"));
field72.setAccessType(std::string("inputOutput"));
field72.setAppinfo(std::string("Camera position in local transformation frame"));
field72.setType(std::string("SFVec3f"));
Script70.addChild(&field72);

field& field73 =  field();
field73.setName(std::string("orientation"));
field73.setAccessType(std::string("inputOutput"));
field73.setAppinfo(std::string("Camera rotation in local transformation frame"));
field73.setType(std::string("SFRotation"));
Script70.addChild(&field73);

field& field74 =  field();
field74.setName(std::string("set_fraction"));
field74.setAccessType(std::string("inputOnly"));
field74.setAppinfo(std::string("input fraction drives interpolators"));
field74.setType(std::string("SFFloat"));
Script70.addChild(&field74);

field& field75 =  field();
field75.setName(std::string("set_bind"));
field75.setAccessType(std::string("inputOnly"));
field75.setAppinfo(std::string("input event binds or unbinds this Camera"));
field75.setType(std::string("SFBool"));
Script70.addChild(&field75);

field& field76 =  field();
field76.setName(std::string("fieldOfView"));
field76.setAccessType(std::string("inputOutput"));
field76.setAppinfo(std::string("pi/4"));
field76.setType(std::string("SFFloat"));
Script70.addChild(&field76);

field& field77 =  field();
field77.setName(std::string("nearClipPlane"));
field77.setAccessType(std::string("inputOutput"));
field77.setAppinfo(std::string("Vector distance to near clipping plane"));
field77.setType(std::string("SFFloat"));
Script70.addChild(&field77);

field& field78 =  field();
field78.setName(std::string("farClipPlane"));
field78.setAccessType(std::string("inputOutput"));
field78.setAppinfo(std::string("Vector distance to far clipping plane"));
field78.setType(std::string("SFFloat"));
Script70.addChild(&field78);

field& field79 =  field();
field79.setName(std::string("shots"));
field79.setAccessType(std::string("inputOutput"));
field79.setAppinfo(std::string("Array of CameraShot nodes which in turn contain CameraMovement nodes"));
field79.setType(std::string("MFNode"));
//initialization nodes (if any) go here
Script70.addChild(&field79);

field& field80 =  field();
field80.setName(std::string("filterColor"));
field80.setAccessType(std::string("inputOutput"));
field80.setAppinfo(std::string("Camera filter color that modifies virtual lens capture"));
field80.setType(std::string("SFColor"));
Script70.addChild(&field80);

field& field81 =  field();
field81.setName(std::string("filterTransparency"));
field81.setAccessType(std::string("inputOutput"));
field81.setAppinfo(std::string("Camera filter transparency that modifies virtual lens capture"));
field81.setType(std::string("SFFloat"));
Script70.addChild(&field81);

field& field82 =  field();
field82.setName(std::string("upVector"));
field82.setAccessType(std::string("inputOutput"));
field82.setAppinfo(std::string("upVector changes modify camera orientation (and possibly vice versa)"));
field82.setType(std::string("SFVec3f"));
Script70.addChild(&field82);

field& field83 =  field();
field83.setName(std::string("fStop"));
field83.setAccessType(std::string("inputOutput"));
field83.setAppinfo(std::string("Focal length divided effective aperture diameter indicating width of focal plane"));
field83.setType(std::string("SFFloat"));
Script70.addChild(&field83);

field& field84 =  field();
field84.setName(std::string("focusDistance"));
field84.setAccessType(std::string("inputOutput"));
field84.setAppinfo(std::string("Distance to focal plane of sharpest focus"));
field84.setType(std::string("SFFloat"));
Script70.addChild(&field84);

field& field85 =  field();
field85.setName(std::string("isActive"));
field85.setAccessType(std::string("outputOnly"));
field85.setAppinfo(std::string("Mark start/stop with true/false output respectively useful to trigger external animations"));
field85.setType(std::string("SFBool"));
Script70.addChild(&field85);

field& field86 =  field();
field86.setName(std::string("totalDuration"));
field86.setAccessType(std::string("outputOnly"));
field86.setAppinfo(std::string("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"));
field86.setType(std::string("SFTime"));
Script70.addChild(&field86);

field& field87 =  field();
field87.setName(std::string("offlineRender"));
field87.setAccessType(std::string("inputOutput"));
field87.setAppinfo(std::string("OfflineRender node"));
field87.setType(std::string("SFNode"));
//initialization node (if any) goes here
Script70.addChild(&field87);

field& field88 =  field();
field88.setName(std::string("ViewpointNode"));
field88.setAccessType(std::string("initializeOnly"));
field88.setAppinfo(std::string("node reference to permit getting setting fields from within Script"));
field88.setType(std::string("SFNode"));
Viewpoint& Viewpoint89 =  Viewpoint();
Viewpoint89.setUSE(std::string("CameraViewpoint"));
field88.addChild(&Viewpoint89);

Script70.addChild(&field88);

field& field90 =  field();
field90.setName(std::string("NavInfoNode"));
field90.setAccessType(std::string("initializeOnly"));
field90.setAppinfo(std::string("node reference to permit getting setting fields from within Script"));
field90.setType(std::string("SFNode"));
NavigationInfo& NavigationInfo91 =  NavigationInfo();
NavigationInfo91.setUSE(std::string("CameraNavInfo"));
field90.addChild(&NavigationInfo91);

Script70.addChild(&field90);

field& field92 =  field();
field92.setName(std::string("CameraPI"));
field92.setAccessType(std::string("initializeOnly"));
field92.setAppinfo(std::string("node reference to permit getting setting fields from within Script"));
field92.setType(std::string("SFNode"));
PositionInterpolator& PositionInterpolator93 =  PositionInterpolator();
PositionInterpolator93.setUSE(std::string("CameraPositionInterpolator"));
field92.addChild(&PositionInterpolator93);

Script70.addChild(&field92);

field& field94 =  field();
field94.setName(std::string("CameraOI"));
field94.setAccessType(std::string("initializeOnly"));
field94.setAppinfo(std::string("node reference to permit getting setting fields from within Script"));
field94.setType(std::string("SFNode"));
OrientationInterpolator& OrientationInterpolator95 =  OrientationInterpolator();
OrientationInterpolator95.setUSE(std::string("CameraOrientationInterpolator"));
field94.addChild(&OrientationInterpolator95);

Script70.addChild(&field94);

field& field96 =  field();
field96.setName(std::string("key"));
field96.setAccessType(std::string("inputOutput"));
field96.setAppinfo(std::string("key array for interpolators"));
field96.setType(std::string("MFFloat"));
Script70.addChild(&field96);

field& field97 =  field();
field97.setName(std::string("keyValuePosition"));
field97.setAccessType(std::string("inputOutput"));
field97.setAppinfo(std::string("keyValue array for PositionInterpolator"));
field97.setType(std::string("MFVec3f"));
Script70.addChild(&field97);

field& field98 =  field();
field98.setName(std::string("keyValueOrientation"));
field98.setAccessType(std::string("inputOutput"));
field98.setAppinfo(std::string("keyValue array for OrientationInterpolator"));
field98.setType(std::string("MFRotation"));
Script70.addChild(&field98);

field& field99 =  field();
field99.setName(std::string("animated"));
field99.setAccessType(std::string("inputOutput"));
field99.setAppinfo(std::string("whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events"));
field99.setType(std::string("SFBool"));
field99.setValue(std::string("false"));
Script70.addChild(&field99);

field& field100 =  field();
field100.setName(std::string("initialized"));
field100.setAccessType(std::string("initializeOnly"));
field100.setAppinfo(std::string("perform checkShots() function once immediately after initialization"));
field100.setType(std::string("SFBool"));
field100.setValue(std::string("false"));
Script70.addChild(&field100);

field& field101 =  field();
field101.setName(std::string("shotCount"));
field101.setAccessType(std::string("initializeOnly"));
field101.setAppinfo(std::string("how many CameraShot nodes are contained in shots array"));
field101.setType(std::string("SFInt32"));
field101.setValue(std::string("0"));
Script70.addChild(&field101);

field& field102 =  field();
field102.setName(std::string("movesCount"));
field102.setAccessType(std::string("initializeOnly"));
field102.setAppinfo(std::string("how many CameraMove nodes are contained in moves array"));
field102.setType(std::string("SFInt32"));
field102.setValue(std::string("0"));
Script70.addChild(&field102);

field& field103 =  field();
field103.setName(std::string("frameCount"));
field103.setAccessType(std::string("initializeOnly"));
field103.setAppinfo(std::string("how many frames were created in current loop"));
field103.setType(std::string("SFFloat"));
field103.setValue(std::string("0"));
Script70.addChild(&field103);

field& field104 =  field();
field104.setName(std::string("startTime"));
field104.setAccessType(std::string("initializeOnly"));
field104.setAppinfo(std::string("holding variable"));
field104.setType(std::string("SFTime"));
field104.setValue(std::string("0"));
Script70.addChild(&field104);

field& field105 =  field();
field105.setName(std::string("priorTraceTime"));
field105.setAccessType(std::string("initializeOnly"));
field105.setAppinfo(std::string("holding variable"));
field105.setType(std::string("SFTime"));
field105.setValue(std::string("0"));
Script70.addChild(&field105);

field& field106 =  field();
field106.setName(std::string("traceEnabled"));
field106.setAccessType(std::string("initializeOnly"));
field106.setAppinfo(std::string("enable console output to trace script computations and prototype progress"));
field106.setType(std::string("SFBool"));
Script70.addChild(&field106);

IS& IS107 =  IS();
Connect& connect108 =  Connect();
connect108.setNodeField(std::string("description"));
connect108.setProtoField(std::string("description"));
IS107.addChild(&connect108);

Connect& connect109 =  Connect();
connect109.setNodeField(std::string("position"));
connect109.setProtoField(std::string("position"));
IS107.addChild(&connect109);

Connect& connect110 =  Connect();
connect110.setNodeField(std::string("orientation"));
connect110.setProtoField(std::string("orientation"));
IS107.addChild(&connect110);

Connect& connect111 =  Connect();
connect111.setNodeField(std::string("set_fraction"));
connect111.setProtoField(std::string("set_fraction"));
IS107.addChild(&connect111);

Connect& connect112 =  Connect();
connect112.setNodeField(std::string("set_bind"));
connect112.setProtoField(std::string("set_bind"));
IS107.addChild(&connect112);

Connect& connect113 =  Connect();
connect113.setNodeField(std::string("fieldOfView"));
connect113.setProtoField(std::string("fieldOfView"));
IS107.addChild(&connect113);

Connect& connect114 =  Connect();
connect114.setNodeField(std::string("nearClipPlane"));
connect114.setProtoField(std::string("nearClipPlane"));
IS107.addChild(&connect114);

Connect& connect115 =  Connect();
connect115.setNodeField(std::string("farClipPlane"));
connect115.setProtoField(std::string("farClipPlane"));
IS107.addChild(&connect115);

Connect& connect116 =  Connect();
connect116.setNodeField(std::string("shots"));
connect116.setProtoField(std::string("shots"));
IS107.addChild(&connect116);

Connect& connect117 =  Connect();
connect117.setNodeField(std::string("filterColor"));
connect117.setProtoField(std::string("filterColor"));
IS107.addChild(&connect117);

Connect& connect118 =  Connect();
connect118.setNodeField(std::string("filterTransparency"));
connect118.setProtoField(std::string("filterTransparency"));
IS107.addChild(&connect118);

Connect& connect119 =  Connect();
connect119.setNodeField(std::string("upVector"));
connect119.setProtoField(std::string("upVector"));
IS107.addChild(&connect119);

Connect& connect120 =  Connect();
connect120.setNodeField(std::string("fStop"));
connect120.setProtoField(std::string("fStop"));
IS107.addChild(&connect120);

Connect& connect121 =  Connect();
connect121.setNodeField(std::string("focusDistance"));
connect121.setProtoField(std::string("focusDistance"));
IS107.addChild(&connect121);

Connect& connect122 =  Connect();
connect122.setNodeField(std::string("isActive"));
connect122.setProtoField(std::string("isActive"));
IS107.addChild(&connect122);

Connect& connect123 =  Connect();
connect123.setNodeField(std::string("totalDuration"));
connect123.setProtoField(std::string("totalDuration"));
IS107.addChild(&connect123);

Connect& connect124 =  Connect();
connect124.setNodeField(std::string("offlineRender"));
connect124.setProtoField(std::string("offlineRender"));
IS107.addChild(&connect124);

Connect& connect125 =  Connect();
connect125.setNodeField(std::string("traceEnabled"));
connect125.setProtoField(std::string("traceEnabled"));
IS107.addChild(&connect125);

Script70.addChild(&IS107);


//Script70.setSourceCode(std::string("ecmascript:")+
//_T("function initialize () // CameraScript")+
//_T("{")+
//_T("//  tracePrint ('initialize start...');")+
//_T("    NavInfoNode.avatarSize[0]   = nearClipPlane;")+
//_T("    // remaining setups deferred to invocation of checkShots() method")+
//_T("    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization")+
//_T("    alwaysPrint ('initialize complete');")+
//_T("}")+
//_T("function checkShots (eventValue)")+
//_T("{")+
//_T("    tracePrint ('checkShots() method should only occur after initialize() methods in all other Scripts are complete');")+
//_T("    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes")+
//_T("    totalDuration= 0;")+
//_T("    shotCount  = shots.length;")+
//_T("    movesCount = 0;")+
//_T("    for (i = 0; i < shotCount; i++) // shots index")+
//_T("    {")+
//_T("       tracePrint ('shots[' + i + '].moves.length=' + shots[i].moves.length);")+
//_T("       movesCount   += shots[i].moves.length;")+
//_T("       totalDuration = totalDuration + shots[i].shotDuration;")+
//_T("       if (shots[i].moves.length == 0)")+
//_T("       {")+
//_T("          alwaysPrint ('warning: CameraShot[' + i + '][' + shots[i].description + '] has no contained CameraMove nodes');")+
//_T("       }")+
//_T("    }")+
//_T("    // size checks before proceeding")+
//_T("    if (shotCount == 0)")+
//_T("    {")+
//_T("       alwaysPrint ('warning: no CameraShot nodes found for the shots, nothing to do!');")+
//_T("       return;")+
//_T("    }")+
//_T("    else if (movesCount == 0)")+
//_T("    {")+
//_T("       alwaysPrint ('warning: no CameraMove nodes found for the shots, nothing to do!');")+
//_T("       return;")+
//_T("    }")+
//_T("    else if (totalDuration == 0)")+
//_T("    {")+
//_T("       alwaysPrint ('warning: totalDuration = 0 seconds, nothing to do!');")+
//_T("       return;")+
//_T("    }")+
//_T("    tracePrint ('number of contained CameraShot nodes=' + shotCount);")+
//_T("    tracePrint ('number of contained CameraMove nodes=' + movesCount);")+
//_T("    tracePrint ('totalDuration=' + totalDuration + ' seconds for all shots and moves');")+
//_T("    // compute interpolators")+
//_T("    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation")+
//_T("    for (i = 0; i < shotCount; i++) // shots index")+
//_T("    {")+
//_T("        if (i==0) // initial entries")+
//_T("        {")+
//_T("           key[0]                   = 0.0; // no previous move")+
//_T("           keyValuePosition[0]      = shots[i].initialPosition;")+
//_T("           keyValueOrientation[0]   = shots[i].initialOrientation;")+
//_T("        }")+
//_T("        else     // new shot repositions, reorients camera as clean break from preceding shot/move")+
//_T("        {")+
//_T("           key[k+1]                 = key[k]; // start from end from previous move")+
//_T("           keyValuePosition[k+1]    = shots[i].initialPosition;")+
//_T("           keyValueOrientation[k+1] = shots[i].initialOrientation;")+
//_T("           k++;")+
//_T("        }")+
//_T("        tracePrint (shots[i].description);")+
//_T("        tracePrint ('shots[i].moves.length=' + shots[i].moves.length);")+
//_T("        for (j = 0; j < shots[i].moves.length; j++) // moves index")+
//_T("        {")+
//_T("            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime")+
//_T("            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime")+
//_T("            //  tracePrint ('durationFloat=' + durationFloat);")+
//_T("            key[k+1]               = key[k] + (durationFloat / totalDuration);")+
//_T("            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;")+
//_T("            if (!animated)")+
//_T("            {")+
//_T("                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;")+
//_T("            }")+
//_T("            else")+
//_T("            {")+
//_T("                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)")+
//_T("                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions")+
//_T("                // test if difference vector is zero, if so maintain previous rotation")+
//_T("                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();")+
//_T("                if (shotVector.length() >= 0)")+
//_T("                {")+
//_T("                    // default view direction is along -Z axis")+
//_T("                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);")+
//_T("                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;")+
//_T("                }")+
//_T("                else // note (k > 0)")+
//_T("                {")+
//_T("                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change")+
//_T("                }")+
//_T("                tracePrint ('shots[' + i + '].moves[' + j + '].goalAimPoint=' + shots[i].moves[j].goalAimPoint.toString());")+
//_T("                tracePrint ('        ViewpointNode.position=' + ViewpointNode.position.toString());")+
//_T("                tracePrint ('          shotVector     delta=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());")+
//_T("                tracePrint ('          shotVector normalize=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());")+
//_T("                tracePrint ('               goalOrientation=' + shots[i].moves[j].goalOrientation.toString());")+
//_T("                tracePrint ('      keyValueOrientation[k+1]=' + keyValueOrientation[k+1].toString() + '\\n');")+
//_T("            }")+
//_T("            k++; // update index to match latest key, keyValuePosition, keyValueOrientation")+
//_T("            // check animated parameter:  set true if any of moves are tracking moves")+
//_T("            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true")+
//_T("         // tracePrint ('shots[' + i + '].moves[' + j + '].tracking=' + shots[i].moves[j].tracking + ', animated=' + animated);")+
//_T("            // intermediate trace")+
//_T("            tracePrint ('                key=' + key);")+
//_T("            tracePrint ('   keyValuePosition=' + keyValuePosition);")+
//_T("            tracePrint ('keyValueOrientation=' + keyValueOrientation);")+
//_T("            tracePrint ('- ' + shots[i].moves[j].description);")+
//_T("        }")+
//_T("    }")+
//_T("    tracePrint ('                key=' + key);")+
//_T("    tracePrint ('   keyValuePosition=' + keyValuePosition);")+
//_T("    tracePrint ('keyValueOrientation=' + keyValueOrientation);")+
//_T("    if (key.length != keyValuePosition.length)")+
//_T("    {")+
//_T("      alwaysPrint ('warning: internal error during array construction, ' +")+
//_T("                  'key.length=' + key.length + ' must equal ' +")+
//_T("                  'keyValuePosition.length=' + keyValuePosition.length);")+
//_T("    }")+
//_T("    if (key.length != keyValueOrientation.length)")+
//_T("    {")+
//_T("      alwaysPrint ('warning: internal error during array construction, ' +")+
//_T("                  'key.length=' + key.length + ' must equal ' +")+
//_T("                  'keyValueOrientation.length=' + keyValueOrientation.length);")+
//_T("    }")+
//_T("    if (key.length != (shotCount + movesCount))")+
//_T("    {")+
//_T("      alwaysPrint ('warning: internal error during array construction, ' +")+
//_T("                  'key.length=' + key.length + ' must equal ' +")+
//_T("                  '(shotCount + movesCount)=' + (shotCount + movesCount));")+
//_T("    }")+
//_T("    tracePrint ('           animated=' + animated);")+
//_T("    // set node values")+
//_T("    CameraPI.key      = key;")+
//_T("    CameraOI.key      = key;")+
//_T("    CameraPI.keyValue = keyValuePosition;")+
//_T("    CameraOI.keyValue = keyValueOrientation;")+
//_T("    if (!animated) // output results")+
//_T("    {")+
//_T("        tracePrint ('<PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');")+
//_T("        tracePrint ('<OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');")+
//_T("    }")+
//_T("    tracePrint ('checkShots() complete');")+
//_T("}")+
//_T("function stripBrackets (fieldArray)")+
//_T("{")+
//_T("    // some browsers add brackets to array output strings, this function strips them")+
//_T("    outputString = '';")+
//_T("    for (i = 0; i < fieldArray.length; i++)")+
//_T("    {")+
//_T("       outputString += fieldArray[i].toString();")+
//_T("       if (i < fieldArray.length - 1) outputString += ' ';")+
//_T("    }")+
//_T("    return outputString;")+
//_T("}")+
//_T("function set_fraction (eventValue, timestamp) // input event received for inputOnly field")+
//_T("{")+
//_T("   // traceEnabled = false;  // for testing purposes")+
//_T("   // if Camera is being animated, immediately recompute interpolator settings")+
//_T("   if (animated) checkShots (true);")+
//_T("   // trace progress on console with reduced output frequency")+
//_T("   if (frameCount == 0)")+
//_T("   {")+
//_T("      alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);")+
//_T("      startTime      = timestamp;")+
//_T("      priorTraceTime = timestamp;")+
//_T("      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());")+
//_T("      if (animated) // output results")+
//_T("      {")+
//_T("        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());")+
//_T("        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');")+
//_T("        tracePrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');")+
//_T("      }")+
//_T("   }")+
//_T("   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval")+
//_T("   {")+
//_T("      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());")+
//_T("      priorTraceTime = timestamp;")+
//_T("      if (animated) // output results")+
//_T("      {")+
//_T("        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());")+
//_T("        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');")+
//_T("        alwaysPrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');")+
//_T("      }")+
//_T("   }")+
//_T("   if (eventValue == 0)")+
//_T("   {")+
//_T("      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored")+
//_T("      frameCount++;")+
//_T("   }")+
//_T("   else if (eventValue == 1)")+
//_T("   {")+
//_T("      alwaysPrint ('shotClock=' + (timestamp - startTime) + ', frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());")+
//_T("      if (animated) // output results")+
//_T("      {")+
//_T("        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());")+
//_T("      }")+
//_T("      alwaysPrint ('Animation loop complete.');")+
//_T("      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally")+
//_T("   }")+
//_T("   else")+
//_T("   {")+
//_T("      frameCount++;")+
//_T("   }")+
//_T("}")+
//_T("function set_bind (eventValue) // input event received for inputOnly field")+
//_T("{")+
//_T("   // need to ensure CameraShot nodes are properly initialized")+
//_T("   if (initialized == false)")+
//_T("   {")+
//_T("      checkShots (true);")+
//_T("      initialized = true;")+
//_T("   }")+
//_T("   if (eventValue)")+
//_T("   {")+
//_T("       tracePrint ('Camera has been bound');")+
//_T("   }")+
//_T("   else")+
//_T("   {")+
//_T("       tracePrint ('Camera has been unbound');")+
//_T("   }")+
//_T("}")+
//_T("function set_description (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    description = eventValue;")+
//_T("}")+
//_T("function set_position (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    position = eventValue;")+
//_T("}")+
//_T("function set_orientation (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    orientation = eventValue;")+
//_T("}")+
//_T("function set_fieldOfView (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    fieldOfView = eventValue;")+
//_T("}")+
//_T("function set_nearClipPlane (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    nearClipPlane = eventValue;")+
//_T("}")+
//_T("function set_farClipPlane (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    farClipPlane = eventValue;")+
//_T("}")+
//_T("function set_shots (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    shots = eventValue;")+
//_T("}")+
//_T("function set_filterColor (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    filterColor = eventValue;")+
//_T("}")+
//_T("function set_filterTransparency (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    filterTransparency = eventValue;")+
//_T("}")+
//_T("function set_upVector (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    upVector = eventValue;")+
//_T("}")+
//_T("function set_fStop (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    fStop = eventValue;")+
//_T("}")+
//_T("function set_focusDistance (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    focusDistance = eventValue;")+
//_T("}")+
//_T("function set_offlineRender (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    offlineRender = eventValue;")+
//_T("}")+
//_T("function set_key (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    key = eventValue;")+
//_T("}")+
//_T("function set_keyValuePosition (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    keyValuePosition = eventValue;")+
//_T("}")+
//_T("function set_keyValueOrientation (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    keyValueOrientation = eventValue;")+
//_T("}")+
//_T("function set_animated (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    animated = eventValue;")+
//_T("}")+
//_T("function tracePrint (outputValue)")+
//_T("{")+
//_T("	if (traceEnabled) alwaysPrint (outputValue);")+
//_T("}")+
//_T("function alwaysPrint (outputValue)")+
//_T("{")+
//_T("    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies")+
//_T("    var outputString = outputValue.toString(); // utility function according to spec")+
//_T("    if (outputString == null) outputString = outputValue; // direct cast")+
//_T("    if  (description.length > 0)")+
//_T("         Browser.print ('[Camera: ' + description + '] ' + outputString + '\\n');")+
//_T("    else")+
//_T("         Browser.print ('[Camera] ' + outputString + '\\n');")+
//_T("}"));
ProtoBody42.addChild(&Script70);

ROUTE& ROUTE126 =  ROUTE();
ROUTE126.setFromField(std::string("position"));
ROUTE126.setFromNode(std::string("CameraScript"));
ROUTE126.setToField(std::string("position"));
ROUTE126.setToNode(std::string("CameraViewpoint"));
ProtoBody42.addChild(&ROUTE126);

ROUTE& ROUTE127 =  ROUTE();
ROUTE127.setFromField(std::string("orientation"));
ROUTE127.setFromNode(std::string("CameraScript"));
ROUTE127.setToField(std::string("orientation"));
ROUTE127.setToNode(std::string("CameraViewpoint"));
ProtoBody42.addChild(&ROUTE127);

ROUTE& ROUTE128 =  ROUTE();
ROUTE128.setFromField(std::string("isActive"));
ROUTE128.setFromNode(std::string("CameraScript"));
ROUTE128.setToField(std::string("set_bind"));
ROUTE128.setToNode(std::string("CameraViewpoint"));
ProtoBody42.addChild(&ROUTE128);

ROUTE& ROUTE129 =  ROUTE();
ROUTE129.setFromField(std::string("isActive"));
ROUTE129.setFromNode(std::string("CameraScript"));
ROUTE129.setToField(std::string("set_bind"));
ROUTE129.setToNode(std::string("CameraNavInfo"));
ProtoBody42.addChild(&ROUTE129);

ROUTE& ROUTE130 =  ROUTE();
ROUTE130.setFromField(std::string("isActive"));
ROUTE130.setFromNode(std::string("CameraScript"));
ROUTE130.setToField(std::string("on"));
ROUTE130.setToNode(std::string("CameraDirectionalLight"));
ProtoBody42.addChild(&ROUTE130);

ProtoDeclare17.addChild(&ProtoBody42);

Scene16.addChild(&ProtoDeclare17);

//=============== CameraShot ==============
ProtoDeclare& ProtoDeclare131 =  ProtoDeclare();
ProtoDeclare131.setName(std::string("CameraShot"));
ProtoDeclare131.setAppinfo(std::string("CameraShot collects a specific set of CameraMovement animations that make up an individual shot."));
ProtoInterface& ProtoInterface132 =  ProtoInterface();
field& field133 =  field();
field133.setName(std::string("description"));
field133.setAccessType(std::string("inputOutput"));
field133.setAppinfo(std::string("Text description to be displayed for this CameraShot"));
field133.setType(std::string("SFString"));
ProtoInterface132.addChild(&field133);

field& field134 =  field();
field134.setName(std::string("enabled"));
field134.setAccessType(std::string("inputOutput"));
field134.setAppinfo(std::string("Whether this CameraShot can be activated"));
field134.setType(std::string("SFBool"));
field134.setValue(std::string("true"));
ProtoInterface132.addChild(&field134);

field& field135 =  field();
field135.setName(std::string("moves"));
field135.setAccessType(std::string("inputOutput"));
field135.setAppinfo(std::string("Set of CameraMovement nodes"));
field135.setType(std::string("MFNode"));
//initializing CameraMovement nodes are inserted here by scene author using ProtoInstance
ProtoInterface132.addChild(&field135);

field& field136 =  field();
field136.setName(std::string("initialPosition"));
field136.setAccessType(std::string("inputOutput"));
field136.setAppinfo(std::string("Setup to reinitialize camera position for this shot"));
field136.setType(std::string("SFVec3f"));
field136.setValue(std::string("0 0 10"));
ProtoInterface132.addChild(&field136);

field& field137 =  field();
field137.setName(std::string("initialOrientation"));
field137.setAccessType(std::string("inputOutput"));
field137.setAppinfo(std::string("Setup to reinitialize camera rotation for this shot"));
field137.setType(std::string("SFRotation"));
field137.setValue(std::string("0 0 1 0"));
ProtoInterface132.addChild(&field137);

field& field138 =  field();
field138.setName(std::string("initialAimPoint"));
field138.setAccessType(std::string("inputOutput"));
field138.setAppinfo(std::string("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"));
field138.setType(std::string("SFVec3f"));
field138.setValue(std::string("0 0 0"));
ProtoInterface132.addChild(&field138);

field& field139 =  field();
field139.setName(std::string("initialFieldOfView"));
field139.setAccessType(std::string("inputOutput"));
field139.setAppinfo(std::string("pi/4"));
field139.setType(std::string("SFFloat"));
field139.setValue(std::string("0.7854"));
ProtoInterface132.addChild(&field139);

field& field140 =  field();
field140.setName(std::string("initialFStop"));
field140.setAccessType(std::string("inputOutput"));
field140.setAppinfo(std::string("Focal length divided effective aperture diameter indicating width of focal plane"));
field140.setType(std::string("SFFloat"));
field140.setValue(std::string("5.6"));
ProtoInterface132.addChild(&field140);

field& field141 =  field();
field141.setName(std::string("initialFocusDistance"));
field141.setAccessType(std::string("inputOutput"));
field141.setAppinfo(std::string("Distance to focal plane of sharpest focus"));
field141.setType(std::string("SFFloat"));
field141.setValue(std::string("10"));
ProtoInterface132.addChild(&field141);

field& field142 =  field();
field142.setName(std::string("shotDuration"));
field142.setAccessType(std::string("outputOnly"));
field142.setAppinfo(std::string("Subtotal duration of contained CameraMovement move durations"));
field142.setType(std::string("SFTime"));
ProtoInterface132.addChild(&field142);

field& field143 =  field();
field143.setName(std::string("isActive"));
field143.setAccessType(std::string("outputOnly"));
field143.setAppinfo(std::string("Mark start/stop with true/false output respectively useful to trigger external animations"));
field143.setType(std::string("SFBool"));
ProtoInterface132.addChild(&field143);

field& field144 =  field();
field144.setName(std::string("traceEnabled"));
field144.setAccessType(std::string("initializeOnly"));
field144.setAppinfo(std::string("enable console output to trace script computations and prototype progress"));
field144.setType(std::string("SFBool"));
field144.setValue(std::string("false"));
ProtoInterface132.addChild(&field144);

ProtoDeclare131.addChild(&ProtoInterface132);

ProtoBody& ProtoBody145 =  ProtoBody();
Script& Script146 =  Script();
Script146.setDEF(std::string("CameraShotScript"));
Script146.setDirectOutput(true);
Script146.setMustEvaluate(true);
field& field147 =  field();
field147.setName(std::string("description"));
field147.setAccessType(std::string("inputOutput"));
field147.setAppinfo(std::string("Text description to be displayed for this CameraShot"));
field147.setType(std::string("SFString"));
Script146.addChild(&field147);

field& field148 =  field();
field148.setName(std::string("enabled"));
field148.setAccessType(std::string("inputOutput"));
field148.setAppinfo(std::string("Whether this CameraShot can be activated"));
field148.setType(std::string("SFBool"));
Script146.addChild(&field148);

field& field149 =  field();
field149.setName(std::string("moves"));
field149.setAccessType(std::string("inputOutput"));
field149.setAppinfo(std::string("Set of CameraMovement nodes"));
field149.setType(std::string("MFNode"));
//initialization nodes (if any) go here
Script146.addChild(&field149);

field& field150 =  field();
field150.setName(std::string("initialPosition"));
field150.setAccessType(std::string("inputOutput"));
field150.setAppinfo(std::string("Setup to reinitialize camera position for this shot"));
field150.setType(std::string("SFVec3f"));
Script146.addChild(&field150);

field& field151 =  field();
field151.setName(std::string("initialOrientation"));
field151.setAccessType(std::string("inputOutput"));
field151.setAppinfo(std::string("Setup to reinitialize camera rotation for this shot"));
field151.setType(std::string("SFRotation"));
Script146.addChild(&field151);

field& field152 =  field();
field152.setName(std::string("initialAimPoint"));
field152.setAccessType(std::string("inputOutput"));
field152.setAppinfo(std::string("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"));
field152.setType(std::string("SFVec3f"));
Script146.addChild(&field152);

field& field153 =  field();
field153.setName(std::string("initialFieldOfView"));
field153.setAccessType(std::string("inputOutput"));
field153.setAppinfo(std::string("pi/4"));
field153.setType(std::string("SFFloat"));
Script146.addChild(&field153);

field& field154 =  field();
field154.setName(std::string("initialFStop"));
field154.setAccessType(std::string("inputOutput"));
field154.setAppinfo(std::string("Focal length divided effective aperture diameter indicating width of focal plane"));
field154.setType(std::string("SFFloat"));
Script146.addChild(&field154);

field& field155 =  field();
field155.setName(std::string("initialFocusDistance"));
field155.setAccessType(std::string("inputOutput"));
field155.setAppinfo(std::string("Distance to focal plane of sharpest focus"));
field155.setType(std::string("SFFloat"));
Script146.addChild(&field155);

field& field156 =  field();
field156.setName(std::string("shotDuration"));
field156.setAccessType(std::string("outputOnly"));
field156.setAppinfo(std::string("Subtotal duration of contained CameraMovement move durations"));
field156.setType(std::string("SFTime"));
Script146.addChild(&field156);

field& field157 =  field();
field157.setName(std::string("isActive"));
field157.setAccessType(std::string("outputOnly"));
field157.setAppinfo(std::string("Mark start/stop with true/false output respectively useful to trigger external animations"));
field157.setType(std::string("SFBool"));
Script146.addChild(&field157);

field& field158 =  field();
field158.setName(std::string("traceEnabled"));
field158.setAccessType(std::string("initializeOnly"));
field158.setAppinfo(std::string("enable console output to trace script computations and prototype progress"));
field158.setType(std::string("SFBool"));
Script146.addChild(&field158);

field& field159 =  field();
field159.setName(std::string("key"));
field159.setAccessType(std::string("inputOutput"));
field159.setAppinfo(std::string("key array for interpolators"));
field159.setType(std::string("MFFloat"));
Script146.addChild(&field159);

field& field160 =  field();
field160.setName(std::string("keyValuePosition"));
field160.setAccessType(std::string("inputOutput"));
field160.setAppinfo(std::string("keyValue array for PositionInterpolator"));
field160.setType(std::string("MFVec3f"));
Script146.addChild(&field160);

field& field161 =  field();
field161.setName(std::string("keyValueOrientation"));
field161.setAccessType(std::string("inputOutput"));
field161.setAppinfo(std::string("keyValue array for OrientationInterpolator"));
field161.setType(std::string("MFRotation"));
Script146.addChild(&field161);

IS& IS162 =  IS();
Connect& connect163 =  Connect();
connect163.setNodeField(std::string("description"));
connect163.setProtoField(std::string("description"));
IS162.addChild(&connect163);

Connect& connect164 =  Connect();
connect164.setNodeField(std::string("enabled"));
connect164.setProtoField(std::string("enabled"));
IS162.addChild(&connect164);

Connect& connect165 =  Connect();
connect165.setNodeField(std::string("moves"));
connect165.setProtoField(std::string("moves"));
IS162.addChild(&connect165);

Connect& connect166 =  Connect();
connect166.setNodeField(std::string("initialPosition"));
connect166.setProtoField(std::string("initialPosition"));
IS162.addChild(&connect166);

Connect& connect167 =  Connect();
connect167.setNodeField(std::string("initialOrientation"));
connect167.setProtoField(std::string("initialOrientation"));
IS162.addChild(&connect167);

Connect& connect168 =  Connect();
connect168.setNodeField(std::string("initialAimPoint"));
connect168.setProtoField(std::string("initialAimPoint"));
IS162.addChild(&connect168);

Connect& connect169 =  Connect();
connect169.setNodeField(std::string("initialFieldOfView"));
connect169.setProtoField(std::string("initialFieldOfView"));
IS162.addChild(&connect169);

Connect& connect170 =  Connect();
connect170.setNodeField(std::string("initialFStop"));
connect170.setProtoField(std::string("initialFStop"));
IS162.addChild(&connect170);

Connect& connect171 =  Connect();
connect171.setNodeField(std::string("initialFocusDistance"));
connect171.setProtoField(std::string("initialFocusDistance"));
IS162.addChild(&connect171);

Connect& connect172 =  Connect();
connect172.setNodeField(std::string("shotDuration"));
connect172.setProtoField(std::string("shotDuration"));
IS162.addChild(&connect172);

Connect& connect173 =  Connect();
connect173.setNodeField(std::string("isActive"));
connect173.setProtoField(std::string("isActive"));
IS162.addChild(&connect173);

Connect& connect174 =  Connect();
connect174.setNodeField(std::string("traceEnabled"));
connect174.setProtoField(std::string("traceEnabled"));
IS162.addChild(&connect174);

Script146.addChild(&IS162);


//Script146.setSourceCode(std::string("ecmascript:")+
//_T("function initialize () // CameraShotScript")+
//_T("{")+
//_T("//  tracePrint ('initialize start...');")+
//_T("    // compute shotDuration by summing durations from contained CameraMovement nodes")+
//_T("    shotDuration = 0;")+
//_T("    for (i = 0; i < moves.length; i++)")+
//_T("    {")+
//_T("        shotDuration = shotDuration + moves[i].duration;")+
//_T("    }")+
//_T("    alwaysPrint ('number of contained CameraMove nodes=' + moves.length + ', shotDuration=' + shotDuration + ' seconds');")+
//_T("//  tracePrint ('... initialize() complete');")+
//_T("}")+
//_T("function set_description (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    description = eventValue;")+
//_T("}")+
//_T("function set_enabled (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    enabled = eventValue;")+
//_T("}")+
//_T("function set_moves (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    moves = eventValue;")+
//_T("}")+
//_T("function set_initialPosition (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    initialPosition = eventValue;")+
//_T("}")+
//_T("function set_initialOrientation (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    initialOrientation = eventValue;")+
//_T("}")+
//_T("function set_initialAimPoint (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    initialAimPoint = eventValue;")+
//_T("}")+
//_T("function set_initialFieldOfView (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    initialFieldOfView = eventValue;")+
//_T("}")+
//_T("function set_initialFStop (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    initialFStop = eventValue;")+
//_T("}")+
//_T("function set_initialFocusDistance (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    initialFocusDistance = eventValue;")+
//_T("}")+
//_T("function set_key (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    key = eventValue;")+
//_T("}")+
//_T("function set_keyValuePosition (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    keyValuePosition = eventValue;")+
//_T("}")+
//_T("function set_keyValueOrientation (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    keyValueOrientation = eventValue;")+
//_T("}")+
//_T("// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive")+
//_T("function tracePrint (outputValue)")+
//_T("{")+
//_T("	if (traceEnabled) alwaysPrint (outputValue);")+
//_T("}")+
//_T("function alwaysPrint (outputValue)")+
//_T("{")+
//_T("	// try to ensure outputValue is converted to string despite browser idiosyncracies")+
//_T("    var outputString = outputValue.toString(); // utility function according to spec")+
//_T("    if (outputString == null) outputString = outputValue; // direct cast")+
//_T("    if  (description.length > 0)")+
//_T("         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\\n');")+
//_T("    else")+
//_T("         Browser.print ('[CameraShot] ' + outputString + '\\n');")+
//_T("}"));
ProtoBody145.addChild(&Script146);

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare131.addChild(&ProtoBody145);

Scene16.addChild(&ProtoDeclare131);

//=============== CameraMovement ==============
ProtoDeclare& ProtoDeclare175 =  ProtoDeclare();
ProtoDeclare175.setName(std::string("CameraMovement"));
ProtoDeclare175.setAppinfo(std::string("CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView."));
ProtoInterface& ProtoInterface176 =  ProtoInterface();
field& field177 =  field();
field177.setName(std::string("description"));
field177.setAccessType(std::string("inputOutput"));
field177.setAppinfo(std::string("Text description to be displayed for this CameraMovement"));
field177.setType(std::string("SFString"));
ProtoInterface176.addChild(&field177);

field& field178 =  field();
field178.setName(std::string("enabled"));
field178.setAccessType(std::string("inputOutput"));
field178.setAppinfo(std::string("Whether this CameraMovement can be activated"));
field178.setType(std::string("SFBool"));
field178.setValue(std::string("true"));
ProtoInterface176.addChild(&field178);

field& field179 =  field();
field179.setName(std::string("duration"));
field179.setAccessType(std::string("inputOutput"));
field179.setAppinfo(std::string("Duration in seconds for this move"));
field179.setType(std::string("SFFloat"));
field179.setValue(std::string("0"));
ProtoInterface176.addChild(&field179);

field& field180 =  field();
field180.setName(std::string("goalPosition"));
field180.setAccessType(std::string("inputOutput"));
field180.setAppinfo(std::string("Goal camera position for this move"));
field180.setType(std::string("SFVec3f"));
field180.setValue(std::string("0 0 10"));
ProtoInterface176.addChild(&field180);

field& field181 =  field();
field181.setName(std::string("goalOrientation"));
field181.setAccessType(std::string("inputOutput"));
field181.setAppinfo(std::string("Goal camera rotation for this move"));
field181.setType(std::string("SFRotation"));
field181.setValue(std::string("0 0 1 0"));
ProtoInterface176.addChild(&field181);

field& field182 =  field();
field182.setName(std::string("tracking"));
field182.setAccessType(std::string("inputOutput"));
field182.setAppinfo(std::string("Whether or not camera direction is tracking towards the aimPoint"));
field182.setType(std::string("SFBool"));
field182.setValue(std::string("false"));
ProtoInterface176.addChild(&field182);

field& field183 =  field();
field183.setName(std::string("goalAimPoint"));
field183.setAccessType(std::string("inputOutput"));
field183.setAppinfo(std::string("Goal aimPoint for this move, ignored if tracking=false"));
field183.setType(std::string("SFVec3f"));
field183.setValue(std::string("0 0 0"));
ProtoInterface176.addChild(&field183);

field& field184 =  field();
field184.setName(std::string("goalFieldOfView"));
field184.setAccessType(std::string("inputOutput"));
field184.setAppinfo(std::string("Goal fieldOfView for this move"));
field184.setType(std::string("SFFloat"));
field184.setValue(std::string("0.7854"));
ProtoInterface176.addChild(&field184);

field& field185 =  field();
field185.setName(std::string("goalFStop"));
field185.setAccessType(std::string("inputOutput"));
field185.setAppinfo(std::string("Focal length divided effective aperture diameter indicating width of focal plane"));
field185.setType(std::string("SFFloat"));
field185.setValue(std::string("5.6"));
ProtoInterface176.addChild(&field185);

field& field186 =  field();
field186.setName(std::string("goalFocusDistance"));
field186.setAccessType(std::string("inputOutput"));
field186.setAppinfo(std::string("Distance to focal plane of sharpest focus"));
field186.setType(std::string("SFFloat"));
field186.setValue(std::string("10"));
ProtoInterface176.addChild(&field186);

field& field187 =  field();
field187.setName(std::string("isActive"));
field187.setAccessType(std::string("outputOnly"));
field187.setAppinfo(std::string("Mark start/stop with true/false output respectively useful to trigger external animations"));
field187.setType(std::string("SFBool"));
ProtoInterface176.addChild(&field187);

field& field188 =  field();
field188.setName(std::string("traceEnabled"));
field188.setAccessType(std::string("initializeOnly"));
field188.setAppinfo(std::string("enable console output to trace script computations and prototype progress"));
field188.setType(std::string("SFBool"));
field188.setValue(std::string("false"));
ProtoInterface176.addChild(&field188);

ProtoDeclare175.addChild(&ProtoInterface176);

ProtoBody& ProtoBody189 =  ProtoBody();
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
//Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events
Script& Script190 =  Script();
Script190.setDEF(std::string("CameraMovementScript"));
Script190.setDirectOutput(true);
Script190.setMustEvaluate(true);
field& field191 =  field();
field191.setName(std::string("description"));
field191.setAccessType(std::string("inputOutput"));
field191.setAppinfo(std::string("Text description to be displayed for this CameraMovement"));
field191.setType(std::string("SFString"));
Script190.addChild(&field191);

field& field192 =  field();
field192.setName(std::string("enabled"));
field192.setAccessType(std::string("inputOutput"));
field192.setAppinfo(std::string("Whether this CameraMovement can be activated"));
field192.setType(std::string("SFBool"));
Script190.addChild(&field192);

field& field193 =  field();
field193.setName(std::string("duration"));
field193.setAccessType(std::string("inputOutput"));
field193.setAppinfo(std::string("Duration in seconds for this move"));
field193.setType(std::string("SFFloat"));
Script190.addChild(&field193);

field& field194 =  field();
field194.setName(std::string("goalPosition"));
field194.setAccessType(std::string("inputOutput"));
field194.setAppinfo(std::string("Goal camera position for this move"));
field194.setType(std::string("SFVec3f"));
Script190.addChild(&field194);

field& field195 =  field();
field195.setName(std::string("goalOrientation"));
field195.setAccessType(std::string("inputOutput"));
field195.setAppinfo(std::string("Goal camera rotation for this move"));
field195.setType(std::string("SFRotation"));
Script190.addChild(&field195);

field& field196 =  field();
field196.setName(std::string("tracking"));
field196.setAccessType(std::string("inputOutput"));
field196.setAppinfo(std::string("Whether or not camera direction is tracking towards the aimPoint"));
field196.setType(std::string("SFBool"));
Script190.addChild(&field196);

field& field197 =  field();
field197.setName(std::string("goalAimPoint"));
field197.setAccessType(std::string("inputOutput"));
field197.setAppinfo(std::string("Goal aimPoint for this move, ignored if tracking=false"));
field197.setType(std::string("SFVec3f"));
Script190.addChild(&field197);

field& field198 =  field();
field198.setName(std::string("goalFieldOfView"));
field198.setAccessType(std::string("inputOutput"));
field198.setAppinfo(std::string("Goal fieldOfView for this move"));
field198.setType(std::string("SFFloat"));
Script190.addChild(&field198);

field& field199 =  field();
field199.setName(std::string("goalFStop"));
field199.setAccessType(std::string("inputOutput"));
field199.setAppinfo(std::string("Focal length divided effective aperture diameter indicating width of focal plane"));
field199.setType(std::string("SFFloat"));
Script190.addChild(&field199);

field& field200 =  field();
field200.setName(std::string("goalFocusDistance"));
field200.setAccessType(std::string("inputOutput"));
field200.setAppinfo(std::string("Distance to focal plane of sharpest focus"));
field200.setType(std::string("SFFloat"));
Script190.addChild(&field200);

field& field201 =  field();
field201.setName(std::string("isActive"));
field201.setAccessType(std::string("outputOnly"));
field201.setAppinfo(std::string("Mark start/stop with true/false output respectively useful to trigger external animations"));
field201.setType(std::string("SFBool"));
Script190.addChild(&field201);

field& field202 =  field();
field202.setName(std::string("traceEnabled"));
field202.setAccessType(std::string("initializeOnly"));
field202.setAppinfo(std::string("enable console output to trace script computations and prototype progress"));
field202.setType(std::string("SFBool"));
Script190.addChild(&field202);

IS& IS203 =  IS();
Connect& connect204 =  Connect();
connect204.setNodeField(std::string("description"));
connect204.setProtoField(std::string("description"));
IS203.addChild(&connect204);

Connect& connect205 =  Connect();
connect205.setNodeField(std::string("enabled"));
connect205.setProtoField(std::string("enabled"));
IS203.addChild(&connect205);

Connect& connect206 =  Connect();
connect206.setNodeField(std::string("duration"));
connect206.setProtoField(std::string("duration"));
IS203.addChild(&connect206);

Connect& connect207 =  Connect();
connect207.setNodeField(std::string("goalPosition"));
connect207.setProtoField(std::string("goalPosition"));
IS203.addChild(&connect207);

Connect& connect208 =  Connect();
connect208.setNodeField(std::string("goalOrientation"));
connect208.setProtoField(std::string("goalOrientation"));
IS203.addChild(&connect208);

Connect& connect209 =  Connect();
connect209.setNodeField(std::string("tracking"));
connect209.setProtoField(std::string("tracking"));
IS203.addChild(&connect209);

Connect& connect210 =  Connect();
connect210.setNodeField(std::string("goalAimPoint"));
connect210.setProtoField(std::string("goalAimPoint"));
IS203.addChild(&connect210);

Connect& connect211 =  Connect();
connect211.setNodeField(std::string("goalFieldOfView"));
connect211.setProtoField(std::string("goalFieldOfView"));
IS203.addChild(&connect211);

Connect& connect212 =  Connect();
connect212.setNodeField(std::string("goalFStop"));
connect212.setProtoField(std::string("goalFStop"));
IS203.addChild(&connect212);

Connect& connect213 =  Connect();
connect213.setNodeField(std::string("goalFocusDistance"));
connect213.setProtoField(std::string("goalFocusDistance"));
IS203.addChild(&connect213);

Connect& connect214 =  Connect();
connect214.setNodeField(std::string("isActive"));
connect214.setProtoField(std::string("isActive"));
IS203.addChild(&connect214);

Connect& connect215 =  Connect();
connect215.setNodeField(std::string("traceEnabled"));
connect215.setProtoField(std::string("traceEnabled"));
IS203.addChild(&connect215);

Script190.addChild(&IS203);


//Script190.setSourceCode(std::string("ecmascript:")+
//_T("function initialize () // CameraMovementScript")+
//_T("{")+
//_T("//  tracePrint ('initialize start...');")+
//_T("    alwaysPrint ('initialize goalPosition=' + goalPosition.toString() + ', goalOrientation=' + goalOrientation.toString() +")+
//_T("                           ', goalAimPoint=' + goalAimPoint.toString() // + ', tracking=' + tracking.toString()")+
//_T("                           );")+
//_T("    if (duration < 0)")+
//_T("    {")+
//_T("       alwaysPrint ('error: negative duration=' + duration + ', reset to 0 and ignored');")+
//_T("       duration = 0;")+
//_T("    }")+
//_T("    else if (duration == 0)")+
//_T("    {")+
//_T("       alwaysPrint ('warning: duration=0, nothing to do!');")+
//_T("    }")+
//_T("    tracePrint ('... initialize complete');")+
//_T("}")+
//_T("function set_goalAimPoint (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    goalAimPoint_changed = eventValue;")+
//_T("    tracePrint ('goalAimPoint=' + goalAimPoint.toString());")+
//_T("    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator")+
//_T("}")+
//_T("function set_description (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    description = eventValue;")+
//_T("}")+
//_T("function set_enabled (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    enabled = eventValue;")+
//_T("}")+
//_T("function set_duration (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    duration = eventValue;")+
//_T("}")+
//_T("function set_goalPosition (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    goalPosition = eventValue;")+
//_T("}")+
//_T("function set_goalOrientation (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    goalOrientation = eventValue;")+
//_T("}")+
//_T("function set_tracking (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    tracking = eventValue;")+
//_T("}")+
//_T("function set_goalFieldOfView (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    goalFieldOfView = eventValue;")+
//_T("}")+
//_T("function set_goalFStop (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    goalFStop = eventValue;")+
//_T("}")+
//_T("function set_goalFocusDistance (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    goalFocusDistance = eventValue;")+
//_T("}")+
//_T("// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive")+
//_T("function tracePrint (outputValue)")+
//_T("{")+
//_T("	if (traceEnabled) alwaysPrint (outputValue);")+
//_T("}")+
//_T("function alwaysPrint (outputValue)")+
//_T("{")+
//_T("	// try to ensure outputValue is converted to string despite browser idiosyncracies")+
//_T("    var outputString = outputValue.toString(); // utility function according to spec")+
//_T("    if (outputString == null) outputString = outputValue; // direct cast")+
//_T("    if  (description.length > 0)")+
//_T("         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\\n');")+
//_T("    else")+
//_T("         Browser.print ('[CameraMovement] ' + outputString + '\\n');")+
//_T("}"));
ProtoBody189.addChild(&Script190);

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare175.addChild(&ProtoBody189);

Scene16.addChild(&ProtoDeclare175);

//=============== OfflineRender ==============
ProtoDeclare& ProtoDeclare216 =  ProtoDeclare();
ProtoDeclare216.setName(std::string("OfflineRender"));
ProtoDeclare216.setAppinfo(std::string("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)."));
ProtoInterface& ProtoInterface217 =  ProtoInterface();
//TODO non-photorealistic rendering (NPR) parameters
field& field218 =  field();
field218.setName(std::string("description"));
field218.setAccessType(std::string("inputOutput"));
field218.setAppinfo(std::string("Text description to be displayed for this OfflineRender"));
field218.setType(std::string("SFString"));
ProtoInterface217.addChild(&field218);

field& field219 =  field();
field219.setName(std::string("enabled"));
field219.setAccessType(std::string("inputOutput"));
field219.setAppinfo(std::string("Whether this OfflineRender can be activated"));
field219.setType(std::string("SFBool"));
field219.setValue(std::string("true"));
ProtoInterface217.addChild(&field219);

field& field220 =  field();
field220.setName(std::string("frameRate"));
field220.setAccessType(std::string("inputOutput"));
field220.setAppinfo(std::string("Frames per second recorded for this rendering"));
field220.setType(std::string("SFFloat"));
field220.setValue(std::string("30"));
ProtoInterface217.addChild(&field220);

field& field221 =  field();
field221.setName(std::string("frameSize"));
field221.setAccessType(std::string("inputOutput"));
field221.setAppinfo(std::string("Size of frame in number of pixels width and height"));
field221.setType(std::string("SFVec2f"));
field221.setValue(std::string("640 480"));
ProtoInterface217.addChild(&field221);

field& field222 =  field();
field222.setName(std::string("pixelAspectRatio"));
field222.setAccessType(std::string("inputOutput"));
field222.setAppinfo(std::string("Relative dimensions of pixel height/width typically 1.33 or 1"));
field222.setType(std::string("SFFloat"));
field222.setValue(std::string("1.33"));
ProtoInterface217.addChild(&field222);

field& field223 =  field();
field223.setName(std::string("set_startTime"));
field223.setAccessType(std::string("inputOnly"));
field223.setAppinfo(std::string("Begin render operation"));
field223.setType(std::string("SFTime"));
ProtoInterface217.addChild(&field223);

field& field224 =  field();
field224.setName(std::string("progress"));
field224.setAccessType(std::string("outputOnly"));
field224.setAppinfo(std::string("Progress performing render operation (0..1)"));
field224.setType(std::string("SFFloat"));
ProtoInterface217.addChild(&field224);

field& field225 =  field();
field225.setName(std::string("renderCompleteTime"));
field225.setAccessType(std::string("outputOnly"));
field225.setAppinfo(std::string("Render operation complete"));
field225.setType(std::string("SFTime"));
ProtoInterface217.addChild(&field225);

field& field226 =  field();
field226.setName(std::string("movieFormat"));
field226.setAccessType(std::string("initializeOnly"));
field226.setAppinfo(std::string("Format of rendered output movie (mpeg mp4 etc.), use first supported format"));
field226.setType(std::string("MFString"));
field226.setValue(std::string("\"mpeg\""));
ProtoInterface217.addChild(&field226);

field& field227 =  field();
field227.setName(std::string("imageFormat"));
field227.setAccessType(std::string("initializeOnly"));
field227.setAppinfo(std::string("Format of rendered output images (png jpeg gif tiff etc.) use first supported format"));
field227.setType(std::string("MFString"));
field227.setValue(std::string("\"png\""));
ProtoInterface217.addChild(&field227);

field& field228 =  field();
field228.setName(std::string("traceEnabled"));
field228.setAccessType(std::string("initializeOnly"));
field228.setAppinfo(std::string("enable console output to trace script computations and prototype progress"));
field228.setType(std::string("SFBool"));
field228.setValue(std::string("false"));
ProtoInterface217.addChild(&field228);

ProtoDeclare216.addChild(&ProtoInterface217);

ProtoBody& ProtoBody229 =  ProtoBody();
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
Script& Script230 =  Script();
Script230.setDEF(std::string("OfflineRenderScript"));
Script230.setMustEvaluate(true);
field& field231 =  field();
field231.setName(std::string("description"));
field231.setAccessType(std::string("inputOutput"));
field231.setAppinfo(std::string("Text description to be displayed for this OfflineRender"));
field231.setType(std::string("SFString"));
Script230.addChild(&field231);

field& field232 =  field();
field232.setName(std::string("enabled"));
field232.setAccessType(std::string("inputOutput"));
field232.setAppinfo(std::string("Whether this OfflineRender can be activated"));
field232.setType(std::string("SFBool"));
Script230.addChild(&field232);

field& field233 =  field();
field233.setName(std::string("frameRate"));
field233.setAccessType(std::string("inputOutput"));
field233.setAppinfo(std::string("Frames per second recorded for this rendering"));
field233.setType(std::string("SFFloat"));
Script230.addChild(&field233);

field& field234 =  field();
field234.setName(std::string("frameSize"));
field234.setAccessType(std::string("inputOutput"));
field234.setAppinfo(std::string("Size of frame in number of pixels width and height"));
field234.setType(std::string("SFVec2f"));
Script230.addChild(&field234);

field& field235 =  field();
field235.setName(std::string("pixelAspectRatio"));
field235.setAccessType(std::string("inputOutput"));
field235.setAppinfo(std::string("Relative dimensions of pixel height/width typically 1.33 or 1"));
field235.setType(std::string("SFFloat"));
Script230.addChild(&field235);

field& field236 =  field();
field236.setName(std::string("set_startTime"));
field236.setAccessType(std::string("inputOnly"));
field236.setAppinfo(std::string("Begin render operation"));
field236.setType(std::string("SFTime"));
Script230.addChild(&field236);

field& field237 =  field();
field237.setName(std::string("progress"));
field237.setAccessType(std::string("outputOnly"));
field237.setAppinfo(std::string("Progress performing render operation (0..1)"));
field237.setType(std::string("SFFloat"));
Script230.addChild(&field237);

field& field238 =  field();
field238.setName(std::string("renderCompleteTime"));
field238.setAccessType(std::string("outputOnly"));
field238.setAppinfo(std::string("Render operation complete"));
field238.setType(std::string("SFTime"));
Script230.addChild(&field238);

field& field239 =  field();
field239.setName(std::string("movieFormat"));
field239.setAccessType(std::string("initializeOnly"));
field239.setAppinfo(std::string("Format of rendered output movie (mpeg mp4 etc.)"));
field239.setType(std::string("MFString"));
Script230.addChild(&field239);

field& field240 =  field();
field240.setName(std::string("imageFormat"));
field240.setAccessType(std::string("initializeOnly"));
field240.setAppinfo(std::string("Format of rendered output images (png jpeg gif tiff etc.)"));
field240.setType(std::string("MFString"));
Script230.addChild(&field240);

field& field241 =  field();
field241.setName(std::string("traceEnabled"));
field241.setAccessType(std::string("initializeOnly"));
field241.setAppinfo(std::string("enable console output to trace script computations and prototype progress"));
field241.setType(std::string("SFBool"));
Script230.addChild(&field241);

IS& IS242 =  IS();
Connect& connect243 =  Connect();
connect243.setNodeField(std::string("description"));
connect243.setProtoField(std::string("description"));
IS242.addChild(&connect243);

Connect& connect244 =  Connect();
connect244.setNodeField(std::string("enabled"));
connect244.setProtoField(std::string("enabled"));
IS242.addChild(&connect244);

Connect& connect245 =  Connect();
connect245.setNodeField(std::string("frameRate"));
connect245.setProtoField(std::string("frameRate"));
IS242.addChild(&connect245);

Connect& connect246 =  Connect();
connect246.setNodeField(std::string("frameSize"));
connect246.setProtoField(std::string("frameSize"));
IS242.addChild(&connect246);

Connect& connect247 =  Connect();
connect247.setNodeField(std::string("pixelAspectRatio"));
connect247.setProtoField(std::string("pixelAspectRatio"));
IS242.addChild(&connect247);

Connect& connect248 =  Connect();
connect248.setNodeField(std::string("set_startTime"));
connect248.setProtoField(std::string("set_startTime"));
IS242.addChild(&connect248);

Connect& connect249 =  Connect();
connect249.setNodeField(std::string("progress"));
connect249.setProtoField(std::string("progress"));
IS242.addChild(&connect249);

Connect& connect250 =  Connect();
connect250.setNodeField(std::string("renderCompleteTime"));
connect250.setProtoField(std::string("renderCompleteTime"));
IS242.addChild(&connect250);

Connect& connect251 =  Connect();
connect251.setNodeField(std::string("movieFormat"));
connect251.setProtoField(std::string("movieFormat"));
IS242.addChild(&connect251);

Connect& connect252 =  Connect();
connect252.setNodeField(std::string("imageFormat"));
connect252.setProtoField(std::string("imageFormat"));
IS242.addChild(&connect252);

Connect& connect253 =  Connect();
connect253.setNodeField(std::string("traceEnabled"));
connect253.setProtoField(std::string("traceEnabled"));
IS242.addChild(&connect253);

Script230.addChild(&IS242);


//Script230.setSourceCode(std::string("ecmascript:")+
//_T("function initialize () // OfflineRenderScript")+
//_T("{")+
//_T("//  tracePrint ('initialize start...');")+
//_T("    tracePrint ('... initialize complete');")+
//_T("}")+
//_T("function set_description (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    description = eventValue;")+
//_T("}")+
//_T("function set_enabled (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    enabled = eventValue;")+
//_T("}")+
//_T("function set_frameRate (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    frameRate = eventValue;")+
//_T("}")+
//_T("function set_frameSize (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    frameSize = eventValue;")+
//_T("}")+
//_T("function set_pixelAspectRatio (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    pixelAspectRatio = eventValue;")+
//_T("}")+
//_T("function set_startTime (eventValue) // input event received for inputOnly field")+
//_T("{")+
//_T("   // do something with input eventValue;")+
//_T("}")+
//_T("function tracePrint (outputValue)")+
//_T("{")+
//_T("	if (traceEnabled) alwaysPrint (outputValue);")+
//_T("}")+
//_T("function alwaysPrint (outputValue)")+
//_T("{")+
//_T("	// try to ensure outputValue is converted to string despite browser idiosyncracies")+
//_T("    var outputString = outputValue.toString(); // utility function according to spec")+
//_T("    if (outputString == null) outputString = outputValue; // direct cast")+
//_T("    if  (description.length > 0)")+
//_T("         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\\n');")+
//_T("    else")+
//_T("         Browser.print ('[OfflineRender] ' + outputString + '\\n');")+
//_T("}"));
ProtoBody229.addChild(&Script230);

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare216.addChild(&ProtoBody229);

Scene16.addChild(&ProtoDeclare216);

//=============== Launch Prototype Example ==============
Background& Background254 =  Background();
Background254.setSkyColor(new float[]{0.282353,0.380392,0.470588}, 3);
Scene16.addChild(&Background254);

Anchor& Anchor255 =  Anchor();
Anchor255.setDescription(std::string("launch CameraExample scene"));
Anchor255.setUrl(new std::string[]{"CameraExamples.x3d", "https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d", "CameraExamples.wrl", "https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"}, 4);
Transform& Transform256 =  Transform();
Shape& Shape257 =  Shape();
Text& Text258 =  Text();
Text258.setString(new std::string[]{"CameraPrototypes.x3d", "defines multiple prototype nodes", "Click on this text to see", "CameraExamples.x3d scene"}, 4);
CFontStyle& FontStyle259 =  CFontStyle();
FontStyle259.setContainerField("fontStyle");
FontStyle259.setJustify(new std::string[]{"MIDDLE", "MIDDLE"}, 2);
Text258.setFontStyle(&FontStyle259);

Shape257.setGeometry(&Text258);

Appearance& Appearance260 =  Appearance();
Appearance260.setContainerField("appearance");
Material& Material261 =  Material();
Material261.setContainerField("material");
Material261.setDiffuseColor(new float[]{1.0,1.0,0.2});
Appearance260.addChild(&Material261);

Shape257.addChild(&Appearance260);

Transform256.addChild(&Shape257);

Anchor255.addChild(&Transform256);

Scene16.addChild(&Anchor255);

X3D0.setScene(&Scene16);

}
