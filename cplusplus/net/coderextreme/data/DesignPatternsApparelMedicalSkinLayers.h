#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void DesignPatternsApparelMedicalSkinLayers(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(std::string("HAnim"));
component2.setLevel(2);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(std::string("title"));
meta3.setContent(std::string("DesignPatternsApparelMedicalSkinLayers.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("description"));
meta4.setContent(std::string("Design patterns for skin and apparel using HAnim2 standard in X3D4"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("creator"));
meta5.setContent(std::string("Don Brutzman"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("creator"));
meta6.setContent(std::string("Joe D. Williams"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("creator"));
meta7.setContent(std::string("Dick Puk"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("created"));
meta8.setContent(std::string("23 December 2022"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("modified"));
meta9.setContent(std::string("2 July 2023"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("reference"));
meta10.setContent(std::string("DesignPatternsApparelVariations.txt"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("reference"));
meta11.setContent(std::string("HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("reference"));
meta12.setContent(std::string("HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("reference"));
meta13.setContent(std::string("X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("warning"));
meta14.setContent(std::string("Under development. This template example does not produce renderable HAnim models."));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("identifier"));
meta15.setContent(std::string("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(std::string("generator"));
meta16.setContent(std::string("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(std::string("license"));
meta17.setContent(std::string("../license.html"));
head1.addMeta(&meta17);

X3D0.setHead(&head1);

Scene& Scene18 =  Scene();
WorldInfo& WorldInfo19 =  WorldInfo();
WorldInfo19.setTitle(std::string("HAnimHumanoid skin design patterns for apparel, medical"));
Scene18.addChild(&WorldInfo19);

Background& Background20 =  Background();
Background20.setSkyColor(new float[]{0.0,0.6,0.6}, 3);
Scene18.addChild(&Background20);

Group& Group21 =  Group();
Group21.setDEF(std::string("MultipleHumanoids"));
MetadataString& MetadataString22 =  MetadataString();
MetadataString22.setContainerField("metadata");
MetadataString22.X3DNode::setName(std::string("HAnimArchitecture"));
MetadataString22.X3DNode::setReference(std::string("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"));
MetadataString22.setValue(new std::string[]{"E.4 Multiple humanoids per file"}, 1);
Group21.setMetadata(MetadataString22);

//==============================
HAnimHumanoid& HAnimHumanoid23 =  HAnimHumanoid();
HAnimHumanoid23.X3DNode::setName(std::string("SimpleSkeleton"));
HAnimHumanoid23.setDEF(std::string("a_SimpleSkeleton"));
HAnimHumanoid23.setVersion(std::string("2.0"));
HAnimJoint& HAnimJoint24 =  HAnimJoint();
HAnimJoint24.X3DNode::setName(std::string("humanoid_root"));
HAnimJoint24.setContainerField("skeleton");
HAnimSegment& HAnimSegment25 =  HAnimSegment();
HAnimSegment25.X3DNode::setName(std::string("sacrum"));
Shape& Shape26 =  Shape();
Shape26.setDEF(std::string("JointVisualization"));
HAnimSegment25.addChild(&Shape26);

Shape& Shape27 =  Shape();
Shape27.setDEF(std::string("SegmentVisualization"));
HAnimSegment25.addChild(&Shape27);

HAnimSite& HAnimSite28 =  HAnimSite();
HAnimSite28.X3DNode::setName(std::string("feature01_tip"));
HAnimSite28.setDEF(std::string("a_feature01_tip"));
Shape& Shape29 =  Shape();
Shape29.setDEF(std::string("SiteVisualization"));
HAnimSite28.addChild(&Shape29);

HAnimSegment25.addChild(&HAnimSite28);

HAnimJoint24.addChildren(&HAnimSegment25);

HAnimHumanoid23.setSkeleton(&HAnimJoint24);

Group21.addChild(&HAnimHumanoid23);

//==============================
HAnimHumanoid& HAnimHumanoid30 =  HAnimHumanoid();
HAnimHumanoid30.X3DNode::setName(std::string("SimpleSkeletonMesh"));
HAnimHumanoid30.setDEF(std::string("b_SimpleSkeletonMesh"));
HAnimHumanoid30.setVersion(std::string("2.0"));
HAnimJoint& HAnimJoint31 =  HAnimJoint();
HAnimJoint31.X3DNode::setName(std::string("humanoid_root"));
HAnimJoint31.setContainerField("skeleton");
HAnimSegment& HAnimSegment32 =  HAnimSegment();
HAnimSegment32.X3DNode::setName(std::string("sacrum"));
Shape& Shape33 =  Shape();
IndexedFaceSet& IndexedFaceSet34 =  IndexedFaceSet();
IndexedFaceSet34.setDEF(std::string("SegmentBoneMesh"));
Shape33.setGeometry(&IndexedFaceSet34);

HAnimSegment32.addChild(&Shape33);

HAnimJoint31.addChildren(&HAnimSegment32);

HAnimHumanoid30.setSkeleton(&HAnimJoint31);

Group21.addChild(&HAnimHumanoid30);

//==============================
HAnimHumanoid& HAnimHumanoid35 =  HAnimHumanoid();
HAnimHumanoid35.X3DNode::setName(std::string("SkinIndexedGeometry"));
HAnimHumanoid35.setDEF(std::string("c_SkinIndexedGeometry"));
HAnimHumanoid35.setVersion(std::string("2.0"));
HAnimJoint& HAnimJoint36 =  HAnimJoint();
HAnimJoint36.X3DNode::setName(std::string("humanoid_root"));
HAnimJoint36.setContainerField("skeleton");
HAnimSegment& HAnimSegment37 =  HAnimSegment();
HAnimSegment37.X3DNode::setName(std::string("sacrum"));
HAnimJoint36.addChildren(&HAnimSegment37);

HAnimHumanoid35.setSkeleton(&HAnimJoint36);

IndexedFaceSet& IndexedFaceSet38 =  IndexedFaceSet();
IndexedFaceSet38.setDEF(std::string("SkinMeshIFS"));
IndexedFaceSet38.setContainerField("skin");
HAnimHumanoid35.setSkin(IndexedFaceSet38);

Group21.addChild(&HAnimHumanoid35);

//==============================
HAnimHumanoid& HAnimHumanoid39 =  HAnimHumanoid();
HAnimHumanoid39.X3DNode::setName(std::string("SkinShapeIndexedGeometry"));
HAnimHumanoid39.setDEF(std::string("d_SkinShapeIndexedGeometry"));
HAnimHumanoid39.setVersion(std::string("2.0"));
HAnimJoint& HAnimJoint40 =  HAnimJoint();
HAnimJoint40.X3DNode::setName(std::string("humanoid_root"));
HAnimJoint40.setContainerField("skeleton");
HAnimSegment& HAnimSegment41 =  HAnimSegment();
HAnimSegment41.X3DNode::setName(std::string("sacrum"));
HAnimJoint40.addChildren(&HAnimSegment41);

HAnimHumanoid39.setSkeleton(&HAnimJoint40);

Shape& Shape42 =  Shape();
Shape42.setContainerField("skin");
IndexedFaceSet& IndexedFaceSet43 =  IndexedFaceSet();
IndexedFaceSet43.setUSE(std::string("SkinMeshIFS"));
Shape42.setGeometry(&IndexedFaceSet43);

HAnimHumanoid39.setSkin(&Shape42);

Group21.addChild(&HAnimHumanoid39);

//==============================
HAnimHumanoid& HAnimHumanoid44 =  HAnimHumanoid();
HAnimHumanoid44.X3DNode::setName(std::string("SkinSwitchShapeIndexedGeometry"));
HAnimHumanoid44.setDEF(std::string("e_SkinSwitchShapeIndexedGeometry"));
HAnimHumanoid44.setVersion(std::string("2.0"));
HAnimJoint& HAnimJoint45 =  HAnimJoint();
HAnimJoint45.X3DNode::setName(std::string("humanoid_root"));
HAnimJoint45.setContainerField("skeleton");
HAnimSegment& HAnimSegment46 =  HAnimSegment();
HAnimSegment46.X3DNode::setName(std::string("sacrum"));
HAnimJoint45.addChildren(&HAnimSegment46);

HAnimHumanoid44.setSkeleton(&HAnimJoint45);

//TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>
Shape& Shape47 =  Shape();
Shape47.setContainerField("skin");
IndexedFaceSet& IndexedFaceSet48 =  IndexedFaceSet();
IndexedFaceSet48.setDEF(std::string("IndexedSkinMeshIFS"));
Coordinate& Coordinate49 =  Coordinate();
Coordinate49.setDEF(std::string("SkinMeshCoordinate"));
IndexedFaceSet48.setCoord(&Coordinate49);

Shape47.setGeometry(&IndexedFaceSet48);

HAnimHumanoid44.setSkin(&Shape47);

Group21.addChild(&HAnimHumanoid44);

//similarly for LOD
//==============================
HAnimHumanoid& HAnimHumanoid50 =  HAnimHumanoid();
HAnimHumanoid50.X3DNode::setName(std::string("SynthesizedSkinShapeIndexedTwoPartGeometry"));
HAnimHumanoid50.setDEF(std::string("f_SynthesizedSkinShapeIndexedTwoPartGeometry"));
HAnimHumanoid50.setVersion(std::string("2.0"));
HAnimJoint& HAnimJoint51 =  HAnimJoint();
HAnimJoint51.X3DNode::setName(std::string("humanoid_root"));
HAnimJoint51.setContainerField("skeleton");
HAnimSegment& HAnimSegment52 =  HAnimSegment();
HAnimSegment52.X3DNode::setName(std::string("sacrum"));
HAnimJoint51.addChildren(&HAnimSegment52);

HAnimHumanoid50.setSkeleton(&HAnimJoint51);

Shape& Shape53 =  Shape();
Shape53.setContainerField("skin");
IndexedFaceSet& IndexedFaceSet54 =  IndexedFaceSet();
IndexedFaceSet54.setDEF(std::string("TwoPartIndexedSkinMesh"));
Coordinate& Coordinate55 =  Coordinate();
Coordinate55.setDEF(std::string("TwoPartSkinMesh"));
IndexedFaceSet54.setCoord(&Coordinate55);

Shape53.setGeometry(&IndexedFaceSet54);

HAnimHumanoid50.setSkin(&Shape53);

Group21.addChild(&HAnimHumanoid50);

//==============================
HAnimHumanoid& HAnimHumanoid56 =  HAnimHumanoid();
HAnimHumanoid56.X3DNode::setName(std::string("ApparelSkinIndexedGeometryMultipleShapes"));
HAnimHumanoid56.setDEF(std::string("g_ApparelSkinIndexedGeometryMultipleShapes"));
HAnimHumanoid56.setVersion(std::string("2.0"));
HAnimJoint& HAnimJoint57 =  HAnimJoint();
HAnimJoint57.X3DNode::setName(std::string("humanoid_root"));
HAnimJoint57.setContainerField("skeleton");
HAnimSegment& HAnimSegment58 =  HAnimSegment();
HAnimSegment58.X3DNode::setName(std::string("sacrum"));
HAnimJoint57.addChildren(&HAnimSegment58);

HAnimHumanoid56.setSkeleton(&HAnimJoint57);

Shape& Shape59 =  Shape();
Shape59.setContainerField("skin");
HAnimHumanoid56.setSkin(&Shape59);

//allow multiple Shape nodes with containerField='apparel', one for each layer of clothing
//TODO proposed for X3D4.1 <Shape containerField='apparel'/>
Group21.addChild(&HAnimHumanoid56);

//==============================
HAnimHumanoid& HAnimHumanoid60 =  HAnimHumanoid();
HAnimHumanoid60.X3DNode::setName(std::string("AnatomySkinIndexedGeometryMultipleShapes"));
HAnimHumanoid60.setDEF(std::string("h_AnatomySkinIndexedGeometryMultipleShapes"));
HAnimHumanoid60.setVersion(std::string("2.0"));
HAnimJoint& HAnimJoint61 =  HAnimJoint();
HAnimJoint61.X3DNode::setName(std::string("humanoid_root"));
HAnimJoint61.setContainerField("skeleton");
HAnimSegment& HAnimSegment62 =  HAnimSegment();
HAnimSegment62.X3DNode::setName(std::string("sacrum"));
HAnimJoint61.addChildren(&HAnimSegment62);

HAnimHumanoid60.setSkeleton(&HAnimJoint61);

//allow multiple Shape nodes with containerField='skin', one for each layer of skin
Shape& Shape63 =  Shape();
Shape63.setContainerField("skin");
HAnimHumanoid60.setSkin(&Shape63);

Group21.addChild(&HAnimHumanoid60);

//==============================
Scene18.addChild(&Group21);

Viewpoint& Viewpoint64 =  Viewpoint();
Viewpoint64.setDEF(std::string("ViewHelpText"));
Viewpoint64.setDescription(std::string("Select text to see website"));
Viewpoint64.setPosition(new float[]{0.0,0.0,12.0});
Scene18.addChild(&Viewpoint64);

//Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip
Anchor& Anchor65 =  Anchor();
Anchor65.setDescription(std::string("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches"));
Anchor65.setParameter(new std::string[]{"target=blank"}, 1);
Anchor65.setUrl(new std::string[]{"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"}, 1);
Shape& Shape66 =  Shape();
//TODO adjust Text string and Box size, then set Material transparency='1'
Text& Text67 =  Text();
Text67.setString(new std::string[]{"DesignPatternsApparelMedicalSkinLayers.x3d", "explores potential apparel approaches"}, 2);
CFontStyle& FontStyle68 =  CFontStyle();
FontStyle68.setContainerField("fontStyle");
FontStyle68.setFamily(new std::string[]{"SANS"}, 1);
FontStyle68.setJustify(new std::string[]{"MIDDLE", "MIDDLE"}, 2);
FontStyle68.setSize(0.6);
FontStyle68.setStyle(std::string("BOLD"));
Text67.setFontStyle(&FontStyle68);

Shape66.setGeometry(&Text67);

Appearance& Appearance69 =  Appearance();
Appearance69.setContainerField("appearance");
Material& Material70 =  Material();
Material70.setContainerField("material");
Material70.setDiffuseColor(new float[]{0.9,0.9,0.9});
Appearance69.addChild(&Material70);

Shape66.addChild(&Appearance69);

Anchor65.addChild(&Shape66);

Shape& Shape71 =  Shape();
//Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.
Box& Box72 =  Box();
Box72.setSize(new float[]{11.0,2.0,0.001});
Shape71.setGeometry(&Box72);

Appearance& Appearance73 =  Appearance();
Appearance73.setContainerField("appearance");
Material& Material74 =  Material();
Material74.setContainerField("material");
Material74.setTransparency(1);
Appearance73.addChild(&Material74);

Shape71.addChild(&Appearance73);

Anchor65.addChild(&Shape71);

Scene18.addChild(&Anchor65);

X3D0.setScene(&Scene18);

//}
