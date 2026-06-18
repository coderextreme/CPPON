#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void ViewFrustumPrototype(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("ViewFrustumPrototype.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("Don Brutzman"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("translated"));
meta5.setContent(std::string("16 August 2008"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("modified"));
meta6.setContent(std::string("20 October 2019"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("reference"));
meta7.setContent(std::string("ViewFrustumExample.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("drawing"));
meta8.setContent(std::string("ViewFrustumComputation.png"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("Image"));
meta9.setContent(std::string("ViewFrustumOverheadView.png"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("Image"));
meta10.setContent(std::string("ViewFrustumObliqueView.png"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("subject"));
meta11.setContent(std::string("view culling frustum"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("identifier"));
meta12.setContent(std::string("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("generator"));
meta13.setContent(std::string("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("license"));
meta14.setContent(std::string("../license.html"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
WorldInfo& WorldInfo16 =  WorldInfo();
WorldInfo16.setTitle(std::string("ViewFrustumPrototype.x3d"));
Scene15.addChild(&WorldInfo16);

ProtoDeclare& ProtoDeclare17 =  ProtoDeclare();
ProtoDeclare17.setName(std::string("ViewFrustum"));
ProtoDeclare17.setAppinfo(std::string("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes"));
ProtoInterface& ProtoInterface18 =  ProtoInterface();
field& field19 =  field();
field19.setName(std::string("ViewpointNode"));
field19.setAccessType(std::string("initializeOnly"));
field19.setAppinfo(std::string("required: insert Viewpoint DEF or USE node for view of interest"));
field19.setType(std::string("SFNode"));
//NULL node, ProtoInstance must provide
ProtoInterface18.addChild(&field19);

field& field20 =  field();
field20.setName(std::string("NavigationInfoNode"));
field20.setAccessType(std::string("initializeOnly"));
field20.setAppinfo(std::string("required: insert NavigationInfo DEF or USE node of interest"));
field20.setType(std::string("SFNode"));
//NULL node, ProtoInstance must provide
ProtoInterface18.addChild(&field20);

field& field21 =  field();
field21.setName(std::string("visible"));
field21.setAccessType(std::string("inputOutput"));
field21.setAppinfo(std::string("whether or not frustum geometry is rendered"));
field21.setType(std::string("SFBool"));
field21.setValue(std::string("true"));
ProtoInterface18.addChild(&field21);

field& field22 =  field();
field22.setName(std::string("lineColor"));
field22.setAccessType(std::string("inputOutput"));
field22.setAppinfo(std::string("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"));
field22.setType(std::string("SFColor"));
field22.setValue(std::string("0.9 0.9 0.9"));
ProtoInterface18.addChild(&field22);

field& field23 =  field();
field23.setName(std::string("frustumColor"));
field23.setAccessType(std::string("inputOutput"));
field23.setAppinfo(std::string("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"));
field23.setType(std::string("SFColor"));
field23.setValue(std::string("0.8 0.8 0.8"));
ProtoInterface18.addChild(&field23);

field& field24 =  field();
field24.setName(std::string("transparency"));
field24.setAccessType(std::string("inputOutput"));
field24.setAppinfo(std::string("transparency of ViewFrustum hull geometry, default value 0.5"));
field24.setType(std::string("SFFloat"));
field24.setValue(std::string("0.5"));
ProtoInterface18.addChild(&field24);

field& field25 =  field();
field25.setName(std::string("aspectRatio"));
field25.setAccessType(std::string("inputOutput"));
field25.setAppinfo(std::string("assumed ratio height/width, default value 0.75"));
field25.setType(std::string("SFFloat"));
field25.setValue(std::string("0.75"));
ProtoInterface18.addChild(&field25);

field& field26 =  field();
field26.setName(std::string("trace"));
field26.setAccessType(std::string("initializeOnly"));
field26.setAppinfo(std::string("debug support, default false"));
field26.setType(std::string("SFBool"));
field26.setValue(std::string("false"));
ProtoInterface18.addChild(&field26);

ProtoDeclare17.addChild(&ProtoInterface18);

ProtoBody& ProtoBody27 =  ProtoBody();
Switch& Switch28 =  Switch();
Switch28.setDEF(std::string("VisibilitySwitch"));
Switch28.setWhichChoice(-1);
Transform& Transform29 =  Transform();
Transform29.setDEF(std::string("PositionTransform"));
Transform29.setRotation(new float[]{0.0,1.0,0.0,3.14159});
Transform& Transform30 =  Transform();
Transform30.setDEF(std::string("OrientationTransform"));
Shape& Shape31 =  Shape();
IndexedLineSet& IndexedLineSet32 =  IndexedLineSet();
IndexedLineSet32.setDEF(std::string("FrustumLines"));
IndexedLineSet32.setCoordIndex(new int32_t[]{0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1}, 24);
Coordinate& Coordinate33 =  Coordinate();
Coordinate33.setDEF(std::string("FrustumCoordinate"));
Coordinate33.setPoint(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 24);
IndexedLineSet32.setCoord(&Coordinate33);

Shape31.setGeometry(&IndexedLineSet32);

Appearance& Appearance34 =  Appearance();
Appearance34.setContainerField("appearance");
Material& Material35 =  Material();
Material35.setContainerField("material");
IS& IS36 =  IS();
Connect& connect37 =  Connect();
connect37.setNodeField(std::string("emissiveColor"));
connect37.setProtoField(std::string("lineColor"));
IS36.addChild(&connect37);

Material35.addChild(&IS36);

Appearance34.addChild(&Material35);

Shape31.addChild(&Appearance34);

Transform30.addChild(&Shape31);

Shape& Shape38 =  Shape();
Extrusion& Extrusion39 =  Extrusion();
Extrusion39.setDEF(std::string("FrustumExtrusion"));
Shape38.setGeometry(&Extrusion39);

Appearance& Appearance40 =  Appearance();
Appearance40.setContainerField("appearance");
Appearance40.setDEF(std::string("FrustumAppearance"));
Material& Material41 =  Material();
Material41.setContainerField("material");
IS& IS42 =  IS();
Connect& connect43 =  Connect();
connect43.setNodeField(std::string("diffuseColor"));
connect43.setProtoField(std::string("frustumColor"));
IS42.addChild(&connect43);

Connect& connect44 =  Connect();
connect44.setNodeField(std::string("transparency"));
connect44.setProtoField(std::string("transparency"));
IS42.addChild(&connect44);

Material41.addChild(&IS42);

Appearance40.addChild(&Material41);

Shape38.addChild(&Appearance40);

Transform30.addChild(&Shape38);

Shape& Shape45 =  Shape();
Sphere& Sphere46 =  Sphere();
Sphere46.setRadius(0.08);
Shape45.setGeometry(&Sphere46);

Appearance& Appearance47 =  Appearance();
Appearance47.setContainerField("appearance");
Appearance47.setUSE(std::string("FrustumAppearance"));
Shape45.addChild(&Appearance47);

Transform30.addChild(&Shape45);

Transform29.addChild(&Transform30);

Switch28.addChild(&Transform29);

ProtoBody27.addChild(&Switch28);

Script& Script48 =  Script();
Script48.setDEF(std::string("GeometryComputationScript"));
Script48.setDirectOutput(true);
Script48.setUrl(new std::string[]{"ViewFrustumPrototypeScript.js"}, 1);
field& field49 =  field();
field49.setName(std::string("visible"));
field49.setAccessType(std::string("inputOutput"));
field49.setAppinfo(std::string("Whether or not frustum geometry is rendered"));
field49.setType(std::string("SFBool"));
Script48.addChild(&field49);

field& field50 =  field();
field50.setName(std::string("visibilitySwitchSelection"));
field50.setAccessType(std::string("outputOnly"));
field50.setAppinfo(std::string("Adjust Switch selection to make geometry visible or not"));
field50.setType(std::string("SFInt32"));
Script48.addChild(&field50);

field& field51 =  field();
field51.setName(std::string("ViewpointNode"));
field51.setAccessType(std::string("initializeOnly"));
field51.setType(std::string("SFNode"));
//initialization node (if any) goes here
Script48.addChild(&field51);

field& field52 =  field();
field52.setName(std::string("NavigationInfoNode"));
field52.setAccessType(std::string("initializeOnly"));
field52.setType(std::string("SFNode"));
//initialization node (if any) goes here
Script48.addChild(&field52);

field& field53 =  field();
field53.setName(std::string("FrustumCoordinate"));
field53.setAccessType(std::string("initializeOnly"));
field53.setType(std::string("SFNode"));
Coordinate& Coordinate54 =  Coordinate();
Coordinate54.setUSE(std::string("FrustumCoordinate"));
field53.addChild(Coordinate54);

Script48.addChild(&field53);

field& field55 =  field();
field55.setName(std::string("FrustumExtrusion"));
field55.setAccessType(std::string("initializeOnly"));
field55.setType(std::string("SFNode"));
Extrusion& Extrusion56 =  Extrusion();
Extrusion56.setUSE(std::string("FrustumExtrusion"));
field55.addChild(&Extrusion56);

Script48.addChild(&field55);

field& field57 =  field();
field57.setName(std::string("recompute"));
field57.setAccessType(std::string("inputOnly"));
field57.setType(std::string("SFBool"));
Script48.addChild(&field57);

field& field58 =  field();
field58.setName(std::string("aspectRatio"));
field58.setAccessType(std::string("inputOutput"));
field58.setAppinfo(std::string("assumed ratio height/width"));
field58.setType(std::string("SFFloat"));
Script48.addChild(&field58);

field& field59 =  field();
field59.setName(std::string("position_changed"));
field59.setAccessType(std::string("outputOnly"));
field59.setType(std::string("SFVec3f"));
Script48.addChild(&field59);

field& field60 =  field();
field60.setName(std::string("orientation_changed"));
field60.setAccessType(std::string("outputOnly"));
field60.setType(std::string("SFRotation"));
Script48.addChild(&field60);

field& field61 =  field();
field61.setName(std::string("spine_changed"));
field61.setAccessType(std::string("outputOnly"));
field61.setType(std::string("MFVec3f"));
Script48.addChild(&field61);

field& field62 =  field();
field62.setName(std::string("scale_changed"));
field62.setAccessType(std::string("outputOnly"));
field62.setType(std::string("MFVec2f"));
Script48.addChild(&field62);

field& field63 =  field();
field63.setName(std::string("point_changed"));
field63.setAccessType(std::string("outputOnly"));
field63.setType(std::string("MFVec3f"));
Script48.addChild(&field63);

field& field64 =  field();
field64.setName(std::string("trace"));
field64.setAccessType(std::string("initializeOnly"));
field64.setType(std::string("SFBool"));
Script48.addChild(&field64);

IS& IS65 =  IS();
Connect& connect66 =  Connect();
connect66.setNodeField(std::string("visible"));
connect66.setProtoField(std::string("visible"));
IS65.addChild(&connect66);

Connect& connect67 =  Connect();
connect67.setNodeField(std::string("ViewpointNode"));
connect67.setProtoField(std::string("ViewpointNode"));
IS65.addChild(&connect67);

Connect& connect68 =  Connect();
connect68.setNodeField(std::string("NavigationInfoNode"));
connect68.setProtoField(std::string("NavigationInfoNode"));
IS65.addChild(&connect68);

Connect& connect69 =  Connect();
connect69.setNodeField(std::string("aspectRatio"));
connect69.setProtoField(std::string("aspectRatio"));
IS65.addChild(&connect69);

Connect& connect70 =  Connect();
connect70.setNodeField(std::string("trace"));
connect70.setProtoField(std::string("trace"));
IS65.addChild(&connect70);

Script48.addChild(&IS65);

ProtoBody27.addChild(&Script48);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromField(std::string("visibilitySwitchSelection"));
ROUTE71.setFromNode(std::string("GeometryComputationScript"));
ROUTE71.setToField(std::string("whichChoice"));
ROUTE71.setToNode(std::string("VisibilitySwitch"));
ProtoBody27.addChild(&ROUTE71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromField(std::string("position_changed"));
ROUTE72.setFromNode(std::string("GeometryComputationScript"));
ROUTE72.setToField(std::string("translation"));
ROUTE72.setToNode(std::string("PositionTransform"));
ProtoBody27.addChild(&ROUTE72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromField(std::string("orientation_changed"));
ROUTE73.setFromNode(std::string("GeometryComputationScript"));
ROUTE73.setToField(std::string("rotation"));
ROUTE73.setToNode(std::string("OrientationTransform"));
ProtoBody27.addChild(&ROUTE73);

ROUTE& ROUTE74 =  ROUTE();
ROUTE74.setFromField(std::string("spine_changed"));
ROUTE74.setFromNode(std::string("GeometryComputationScript"));
ROUTE74.setToField(std::string("set_spine"));
ROUTE74.setToNode(std::string("FrustumExtrusion"));
ProtoBody27.addChild(&ROUTE74);

ROUTE& ROUTE75 =  ROUTE();
ROUTE75.setFromField(std::string("scale_changed"));
ROUTE75.setFromNode(std::string("GeometryComputationScript"));
ROUTE75.setToField(std::string("set_scale"));
ROUTE75.setToNode(std::string("FrustumExtrusion"));
ProtoBody27.addChild(&ROUTE75);

ROUTE& ROUTE76 =  ROUTE();
ROUTE76.setFromField(std::string("point_changed"));
ROUTE76.setFromNode(std::string("GeometryComputationScript"));
ROUTE76.setToField(std::string("point"));
ROUTE76.setToNode(std::string("FrustumCoordinate"));
ProtoBody27.addChild(&ROUTE76);

ProtoDeclare17.addChild(&ProtoBody27);

Scene15.addChild(&ProtoDeclare17);

//Example use is in separate scene
Anchor& Anchor77 =  Anchor();
Anchor77.setDescription(std::string("ViewFrustum Example"));
Anchor77.setUrl(new std::string[]{"ViewFrustumExample.x3d"}, 1);
Shape& Shape78 =  Shape();
Appearance& Appearance79 =  Appearance();
Appearance79.setContainerField("appearance");
Material& Material80 =  Material();
Material80.setContainerField("material");
Material80.setDiffuseColor(new float[]{0.8,0.4,0.0});
Appearance79.addChild(&Material80);

Shape78.addChild(&Appearance79);

Text& Text81 =  Text();
Text81.setString(new std::string[]{"ViewFrustumPrototype.x3d", "is a Prototype declaration file.", "For an example scene using the prototype,", "click this text and view", "ViewFrustumExample.x3d"}, 5);
CFontStyle& FontStyle82 =  CFontStyle();
FontStyle82.setContainerField("fontStyle");
FontStyle82.setJustify(new std::string[]{"MIDDLE", "MIDDLE"}, 2);
FontStyle82.setSize(0.8);
Text81.setFontStyle(&FontStyle82);

Shape78.setGeometry(&Text81);

Anchor77.addChild(&Shape78);

Scene15.addChild(&Anchor77);

X3D0.setScene(&Scene15);

}
