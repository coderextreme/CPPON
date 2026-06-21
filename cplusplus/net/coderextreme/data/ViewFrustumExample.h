#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void ViewFrustumExample(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("ViewFrustumExample.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype."));
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
meta7.setContent(std::string("ViewFrustumPrototype.x3d"));
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
meta11.setName(std::string("Image"));
meta11.setContent(std::string("ViewpointCalculator.png"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("Image"));
meta12.setContent(std::string("ViewpointCalculatorComposed.png"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("subject"));
meta13.setContent(std::string("view culling frustum"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("identifier"));
meta14.setContent(std::string("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d"));
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
WorldInfo18.setTitle(std::string("ViewFrustumExample.x3d"));
Scene17.addChild(&WorldInfo18);

Viewpoint& Viewpoint19 =  Viewpoint();
Viewpoint19.setDescription(std::string("ViewFrustum from above, looking down"));
Viewpoint19.setOrientation(new float[]{1.0,0.0,0.0,-1.57});
Viewpoint19.setPosition(new float[]{0.0,40.0,0.0});
Scene17.addChild(&Viewpoint19);

Viewpoint& Viewpoint20 =  Viewpoint();
Viewpoint20.setDescription(std::string("ViewFrustum from point of view"));
Scene17.addChild(&Viewpoint20);

Viewpoint& Viewpoint21 =  Viewpoint();
Viewpoint21.setDescription(std::string("ViewFrustum behind point of view"));
Viewpoint21.setPosition(new float[]{0.0,0.0,15.0});
Scene17.addChild(&Viewpoint21);

Viewpoint& Viewpoint22 =  Viewpoint();
Viewpoint22.setDescription(std::string("ViewFrustum oblique side view"));
Viewpoint22.setOrientation(new float[]{0.8005,0.5926,0.0898,-0.3743});
Viewpoint22.setPosition(new float[]{-5.0,5.0,20.0});
Scene17.addChild(&Viewpoint22);

NavigationInfo& NavigationInfo23 =  NavigationInfo();
NavigationInfo23.setType(new std::string[]{"EXAMINE", "FLY", "ANY"}, 3);
Scene17.addChild(&NavigationInfo23);

ExternProtoDeclare& ExternProtoDeclare24 =  ExternProtoDeclare();
ExternProtoDeclare24.setName(std::string("ViewFrustum"));
ExternProtoDeclare24.setAppinfo(std::string("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes"));
ExternProtoDeclare24.setUrl(new std::string[]{"ViewFrustumPrototype.x3d#ViewFrustum"}, 1);
field& field25 =  field();
field25.setName(std::string("ViewpointNode"));
field25.setAccessType(std::string("initializeOnly"));
field25.setAppinfo(std::string("required: insert Viewpoint DEF or USE node for view of interest"));
field25.setType(std::string("SFNode"));
ExternProtoDeclare24.addChild(&field25);

field& field26 =  field();
field26.setName(std::string("NavigationInfoNode"));
field26.setAccessType(std::string("initializeOnly"));
field26.setAppinfo(std::string("required: insert NavigationInfo DEF or USE node of interest"));
field26.setType(std::string("SFNode"));
ExternProtoDeclare24.addChild(&field26);

field& field27 =  field();
field27.setName(std::string("visible"));
field27.setAccessType(std::string("inputOutput"));
field27.setAppinfo(std::string("whether or not frustum geometry is rendered"));
field27.setType(std::string("SFBool"));
ExternProtoDeclare24.addChild(&field27);

field& field28 =  field();
field28.setName(std::string("lineColor"));
field28.setAccessType(std::string("inputOutput"));
field28.setAppinfo(std::string("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"));
field28.setType(std::string("SFColor"));
ExternProtoDeclare24.addChild(&field28);

field& field29 =  field();
field29.setName(std::string("frustumColor"));
field29.setAccessType(std::string("inputOutput"));
field29.setAppinfo(std::string("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"));
field29.setType(std::string("SFColor"));
ExternProtoDeclare24.addChild(&field29);

field& field30 =  field();
field30.setName(std::string("transparency"));
field30.setAccessType(std::string("inputOutput"));
field30.setAppinfo(std::string("transparency of ViewFrustum hull geometry, default value 0.5"));
field30.setType(std::string("SFFloat"));
ExternProtoDeclare24.addChild(&field30);

field& field31 =  field();
field31.setName(std::string("aspectRatio"));
field31.setAccessType(std::string("inputOutput"));
field31.setAppinfo(std::string("assumed ratio height/width, default value 0.75"));
field31.setType(std::string("SFFloat"));
ExternProtoDeclare24.addChild(&field31);

field& field32 =  field();
field32.setName(std::string("trace"));
field32.setAccessType(std::string("initializeOnly"));
field32.setAppinfo(std::string("debug support, default false"));
field32.setType(std::string("SFBool"));
ExternProtoDeclare24.addChild(&field32);

Scene17.addChild(&ExternProtoDeclare24);

//Example use
ProtoInstance& ProtoInstance33 =  ProtoInstance();
ProtoInstance33.setName(std::string("ViewFrustum"));
fieldValue& fieldValue34 =  fieldValue();
fieldValue34.setName(std::string("ViewpointNode"));
//prefer empty description to prevent entry in player's ViewpointList
Viewpoint& Viewpoint35 =  Viewpoint();
Viewpoint35.setDescription(std::string("ViewFrustum ViewpointNode"));
fieldValue34.addChild(&Viewpoint35);

ProtoInstance33.addChild(&fieldValue34);

fieldValue& fieldValue36 =  fieldValue();
fieldValue36.setName(std::string("NavigationInfoNode"));
NavigationInfo& NavigationInfo37 =  NavigationInfo();
NavigationInfo37.setVisibilityLimit(15);
fieldValue36.addChild(&NavigationInfo37);

ProtoInstance33.addChild(&fieldValue36);

fieldValue& fieldValue38 =  fieldValue();
fieldValue38.setName(std::string("visible"));
fieldValue38.setValue(std::string("true"));
ProtoInstance33.addChild(&fieldValue38);

fieldValue& fieldValue39 =  fieldValue();
fieldValue39.setName(std::string("lineColor"));
fieldValue39.setValue(std::string("0.9 0.9 0.9"));
ProtoInstance33.addChild(&fieldValue39);

fieldValue& fieldValue40 =  fieldValue();
fieldValue40.setName(std::string("frustumColor"));
fieldValue40.setValue(std::string("0.8 0.8 0.8"));
ProtoInstance33.addChild(&fieldValue40);

fieldValue& fieldValue41 =  fieldValue();
fieldValue41.setName(std::string("transparency"));
fieldValue41.setValue(std::string("0.75"));
ProtoInstance33.addChild(&fieldValue41);

fieldValue& fieldValue42 =  fieldValue();
fieldValue42.setName(std::string("trace"));
fieldValue42.setValue(std::string("true"));
ProtoInstance33.addChild(&fieldValue42);

Scene17.addChild(&ProtoInstance33);

//Visualization assists
Inline& Inline43 =  Inline();
Inline43.setDEF(std::string("GridXZ"));
Inline43.setUrl(new std::string[]{"GridXZ_20x20Fixed.x3d"}, 1);
Scene17.addChild(&Inline43);

Transform& Transform44 =  Transform();
Transform44.setScale(new float[]{5.0,5.0,5.0});
Inline& Inline45 =  Inline();
Inline45.setDEF(std::string("CoordinateAxes"));
Inline45.setUrl(new std::string[]{"CoordinateAxes.x3d"}, 1);
Transform44.addChild(&Inline45);

Scene17.addChild(&Transform44);

X3D0.setScene(&Scene17);

//}
