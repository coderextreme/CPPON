#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void HAnimModelHandRight(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(std::string("HAnim"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(std::string("title"));
meta3.setContent(std::string("HAnimModelHandRight.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("description"));
meta4.setContent(std::string("Right hand using high-fidelity definitions for HAnim version 2.0"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("creator"));
meta5.setContent(std::string("Kwan-Hee YOO, Don Brutzman and Joe Williams"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("created"));
meta6.setContent(std::string("26 January 2015"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("modified"));
meta7.setContent(std::string("23 December 2021"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("TODO"));
meta8.setContent(std::string("fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("Image"));
meta9.setContent(std::string("HAnimModelHandRightSegmentVisualizationError.png"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("error"));
meta10.setContent(std::string("not yet to scale, also relatively flat"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("warning"));
meta11.setContent(std::string("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("info"));
meta12.setContent(std::string("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("reference"));
meta13.setContent(std::string("https://www.web3d.org/working-groups/humanoid-animation-HAnim"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("reference"));
meta14.setContent(std::string("https://www.web3d.org/documents/specifications/19774/V2.0"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("reference"));
meta15.setContent(std::string("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(std::string("reference"));
meta16.setContent(std::string("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(std::string("reference"));
meta17.setContent(std::string("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(std::string("reference"));
meta18.setContent(std::string("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(std::string("subject"));
meta19.setContent(std::string("X3D HAnim humanoid animation"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(std::string("TODO"));
meta20.setContent(std::string("Integrate and confirm Segment/Joint names, Viewpoints."));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(std::string("identifier"));
meta21.setContent(std::string("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(std::string("generator"));
meta22.setContent(std::string("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(std::string("license"));
meta23.setContent(std::string("../license.html"));
head1.addMeta(&meta23);

X3D0.setHead(&head1);

Scene& Scene24 =  Scene();
WorldInfo& WorldInfo25 =  WorldInfo();
WorldInfo25.setTitle(std::string("HAnimModelHandRight.x3d"));
Scene24.addChild(&WorldInfo25);

HAnimHumanoid& HAnimHumanoid26 =  HAnimHumanoid();
HAnimHumanoid26.X3DNode::setName(std::string("Hand_Right"));
HAnimHumanoid26.setDEF(std::string("hanim_Hand_Right"));
HAnimHumanoid26.setLoa(4);
HAnimHumanoid26.setVersion(std::string("2.0"));
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
MetadataSet& MetadataSet27 =  MetadataSet();
MetadataSet27.setContainerField("metadata");
MetadataSet27.X3DNode::setName(std::string("HAnimHumanoid.info"));
MetadataSet27.X3DNode::setReference(std::string("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
MetadataString& MetadataString28 =  MetadataString();
MetadataString28.X3DNode::setName(std::string("authorName"));
MetadataString28.setValue(new std::string[]{"Kwan-Hee YOO, Don Brutzman and Joe Williams"}, 1);
MetadataString28.setContainerField("value");
MetadataSet27.setValue((X3DNode *)&MetadataString28);

HAnimHumanoid26.setMetadata(MetadataSet27);

HAnimJoint& HAnimJoint29 =  HAnimJoint();
HAnimJoint29.X3DNode::setName(std::string("humanoid_root"));
HAnimJoint29.setDEF(std::string("hanim_humanoid_root"));
HAnimJoint29.setContainerField("skeleton");
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model
HAnimJoint& HAnimJoint30 =  HAnimJoint();
HAnimJoint30.X3DNode::setName(std::string("r_radiocarpal"));
HAnimJoint30.setDEF(std::string("hanim_r_radiocarpal"));
HAnimJoint30.setDescription(std::string("connection joint of hand to leg above"));
HAnimSegment& HAnimSegment31 =  HAnimSegment();
HAnimSegment31.X3DNode::setName(std::string("r_carpal"));
HAnimSegment31.setDEF(std::string("hanim_r_carpal"));
Transform& Transform32 =  Transform();
Shape& Shape33 =  Shape();
Shape33.setDEF(std::string("HAnimJointShape"));
Sphere& Sphere34 =  Sphere();
Sphere34.setRadius(0.025);
Shape33.setGeometry(&Sphere34);

Appearance& Appearance35 =  Appearance();
Appearance35.setContainerField("appearance");
Appearance35.setDEF(std::string("HAnimJointAppearanceBlue"));
Material& Material36 =  Material();
Material36.setContainerField("material");
Material36.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance35.addChild(&Material36);

Shape33.addChild(&Appearance35);

Transform32.addChild(&Shape33);

HAnimSegment31.addChild(&Transform32);

Shape& Shape37 =  Shape();
Appearance& Appearance38 =  Appearance();
Appearance38.setContainerField("appearance");
Material& Material39 =  Material();
Material39.setContainerField("material");
Material39.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance38.addChild(&Material39);

Shape37.addChild(&Appearance38);

IndexedLineSet& IndexedLineSet40 =  IndexedLineSet();
IndexedLineSet40.setDEF(std::string("RCToMC12"));
IndexedLineSet40.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate41 =  Coordinate();
Coordinate41.setPoint(new float[]{0.0,0.0,0.0,-0.1,0.1,0.0}, 6);
IndexedLineSet40.setCoord(&Coordinate41);

Shape37.setGeometry(&IndexedLineSet40);

HAnimSegment31.addChild(&Shape37);

Shape& Shape42 =  Shape();
Appearance& Appearance43 =  Appearance();
Appearance43.setContainerField("appearance");
Material& Material44 =  Material();
Material44.setContainerField("material");
Material44.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance43.addChild(&Material44);

Shape42.addChild(&Appearance43);

IndexedLineSet& IndexedLineSet45 =  IndexedLineSet();
IndexedLineSet45.setDEF(std::string("RCToMC3"));
IndexedLineSet45.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate46 =  Coordinate();
Coordinate46.setPoint(new float[]{0.0,0.0,0.0,0.0,0.07,0.0}, 6);
IndexedLineSet45.setCoord(&Coordinate46);

Shape42.setGeometry(&IndexedLineSet45);

HAnimSegment31.addChild(&Shape42);

Shape& Shape47 =  Shape();
Appearance& Appearance48 =  Appearance();
Appearance48.setContainerField("appearance");
Material& Material49 =  Material();
Material49.setContainerField("material");
Material49.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance48.addChild(&Material49);

Shape47.addChild(&Appearance48);

IndexedLineSet& IndexedLineSet50 =  IndexedLineSet();
IndexedLineSet50.setDEF(std::string("RCToMC45"));
IndexedLineSet50.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate51 =  Coordinate();
Coordinate51.setPoint(new float[]{0.0,0.0,0.0,0.1,0.1,0.0}, 6);
IndexedLineSet50.setCoord(&Coordinate51);

Shape47.setGeometry(&IndexedLineSet50);

HAnimSegment31.addChild(&Shape47);

HAnimJoint30.addChildren(&HAnimSegment31);

//MC1
HAnimJoint& HAnimJoint52 =  HAnimJoint();
HAnimJoint52.X3DNode::setName(std::string("r_midcarpal_1"));
HAnimJoint52.setDEF(std::string("hanim_r_midcarpal_1"));
HAnimJoint52.setCenter(new float[]{-0.14,0.09,0.0});
HAnimSegment& HAnimSegment53 =  HAnimSegment();
HAnimSegment53.X3DNode::setName(std::string("r_trapezium"));
HAnimSegment53.setDEF(std::string("hanim_r_trapezium"));
Transform& Transform54 =  Transform();
Transform54.setTranslation(new float[]{-0.14,0.09,0.0});
Shape& Shape55 =  Shape();
Shape55.setDEF(std::string("HAnimNewJointShape"));
Sphere& Sphere56 =  Sphere();
Sphere56.setRadius(0.025);
Shape55.setGeometry(&Sphere56);

Appearance& Appearance57 =  Appearance();
Appearance57.setContainerField("appearance");
Appearance57.setDEF(std::string("HAnimJointAppearanceRed"));
Material& Material58 =  Material();
Material58.setContainerField("material");
Material58.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance57.addChild(&Material58);

Shape55.addChild(&Appearance57);

Transform54.addChild(&Shape55);

HAnimSegment53.addChild(&Transform54);

Shape& Shape59 =  Shape();
Appearance& Appearance60 =  Appearance();
Appearance60.setContainerField("appearance");
Material& Material61 =  Material();
Material61.setContainerField("material");
Material61.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance60.addChild(&Material61);

Shape59.addChild(&Appearance60);

IndexedLineSet& IndexedLineSet62 =  IndexedLineSet();
IndexedLineSet62.setDEF(std::string("MC12toCMC1"));
IndexedLineSet62.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate63 =  Coordinate();
Coordinate63.setPoint(new float[]{-0.1,0.1,0.0,-0.2,0.15,0.0}, 6);
IndexedLineSet62.setCoord(&Coordinate63);

Shape59.setGeometry(&IndexedLineSet62);

HAnimSegment53.addChild(&Shape59);

HAnimJoint52.addChildren(&HAnimSegment53);

//thumb finger
HAnimJoint& HAnimJoint64 =  HAnimJoint();
HAnimJoint64.X3DNode::setName(std::string("r_carpometacarpal_1"));
HAnimJoint64.setDEF(std::string("hanim_r_carpometacarpal_1"));
HAnimJoint64.setCenter(new float[]{-0.2,0.15,0.0});
HAnimSegment& HAnimSegment65 =  HAnimSegment();
HAnimSegment65.X3DNode::setName(std::string("r_metacarpal_1"));
HAnimSegment65.setDEF(std::string("hanim_r_metacarpal_1"));
Transform& Transform66 =  Transform();
Transform66.setTranslation(new float[]{-0.2,0.15,0.0});
Shape& Shape67 =  Shape();
Shape67.setUSE(std::string("HAnimJointShape"));
Transform66.addChild(&Shape67);

HAnimSegment65.addChild(&Transform66);

Shape& Shape68 =  Shape();
Appearance& Appearance69 =  Appearance();
Appearance69.setContainerField("appearance");
Material& Material70 =  Material();
Material70.setContainerField("material");
Material70.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance69.addChild(&Material70);

Shape68.addChild(&Appearance69);

IndexedLineSet& IndexedLineSet71 =  IndexedLineSet();
IndexedLineSet71.setDEF(std::string("CMC1toMCP1xxx"));
IndexedLineSet71.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate72 =  Coordinate();
Coordinate72.setPoint(new float[]{-0.2,0.15,0.0,-0.3,0.3,0.0}, 6);
IndexedLineSet71.setCoord(&Coordinate72);

Shape68.setGeometry(&IndexedLineSet71);

HAnimSegment65.addChild(&Shape68);

HAnimJoint64.addChildren(&HAnimSegment65);

HAnimJoint& HAnimJoint73 =  HAnimJoint();
HAnimJoint73.X3DNode::setName(std::string("r_metacarpophalangeal_1"));
HAnimJoint73.setDEF(std::string("hanim_r_metacarpophalangeal_1"));
HAnimJoint73.setCenter(new float[]{-0.3,0.3,0.0});
HAnimSegment& HAnimSegment74 =  HAnimSegment();
HAnimSegment74.X3DNode::setName(std::string("r_carpal_proximal_phalanx_1"));
HAnimSegment74.setDEF(std::string("hanim_r_carpal_proximal_phalanx_1"));
Transform& Transform75 =  Transform();
Transform75.setTranslation(new float[]{-0.3,0.3,0.0});
Shape& Shape76 =  Shape();
Shape76.setUSE(std::string("HAnimJointShape"));
Transform75.addChild(&Shape76);

HAnimSegment74.addChild(&Transform75);

Shape& Shape77 =  Shape();
Appearance& Appearance78 =  Appearance();
Appearance78.setContainerField("appearance");
Material& Material79 =  Material();
Material79.setContainerField("material");
Material79.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance78.addChild(&Material79);

Shape77.addChild(&Appearance78);

IndexedLineSet& IndexedLineSet80 =  IndexedLineSet();
IndexedLineSet80.setDEF(std::string("MCP11toIP1"));
IndexedLineSet80.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate81 =  Coordinate();
Coordinate81.setPoint(new float[]{-0.3,0.3,0.0,-0.35,0.4,0.0}, 6);
IndexedLineSet80.setCoord(&Coordinate81);

Shape77.setGeometry(&IndexedLineSet80);

HAnimSegment74.addChild(&Shape77);

HAnimJoint73.addChildren(&HAnimSegment74);

HAnimJoint& HAnimJoint82 =  HAnimJoint();
HAnimJoint82.X3DNode::setName(std::string("r_carpal_interphalangeal_1"));
HAnimJoint82.setDEF(std::string("hanim_r_carpal_interphalangeal_1"));
HAnimJoint82.setCenter(new float[]{-0.35,0.4,0.0});
HAnimSegment& HAnimSegment83 =  HAnimSegment();
HAnimSegment83.X3DNode::setName(std::string("r_carpal_distal_phalanx_1"));
HAnimSegment83.setDEF(std::string("hanim_r_carpal_distal_phalanx_1"));
Transform& Transform84 =  Transform();
Transform84.setTranslation(new float[]{-0.35,0.4,0.0});
Shape& Shape85 =  Shape();
Shape85.setUSE(std::string("HAnimJointShape"));
Transform84.addChild(&Shape85);

HAnimSegment83.addChild(&Transform84);

Shape& Shape86 =  Shape();
Appearance& Appearance87 =  Appearance();
Appearance87.setContainerField("appearance");
Material& Material88 =  Material();
Material88.setContainerField("material");
Material88.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance87.addChild(&Material88);

Shape86.addChild(&Appearance87);

IndexedLineSet& IndexedLineSet89 =  IndexedLineSet();
IndexedLineSet89.setDEF(std::string("fingertip_r_carpal_interphalangeal_1"));
IndexedLineSet89.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate90 =  Coordinate();
Coordinate90.setPoint(new float[]{-0.35,0.4,0.0,-0.36,0.45,0.0}, 6);
IndexedLineSet89.setCoord(&Coordinate90);

Shape86.setGeometry(&IndexedLineSet89);

HAnimSegment83.addChild(&Shape86);

HAnimJoint82.addChildren(&HAnimSegment83);

HAnimJoint73.addChildren(&HAnimJoint82);

HAnimJoint64.addChildren(&HAnimJoint73);

HAnimJoint52.addChildren(&HAnimJoint64);

HAnimJoint30.addChildren(&HAnimJoint52);

//MC2
HAnimJoint& HAnimJoint91 =  HAnimJoint();
HAnimJoint91.X3DNode::setName(std::string("r_midcarpal_2"));
HAnimJoint91.setDEF(std::string("hanim_r_midcarpal_2"));
HAnimJoint91.setCenter(new float[]{-0.07,0.07,0.0});
HAnimSegment& HAnimSegment92 =  HAnimSegment();
HAnimSegment92.X3DNode::setName(std::string("r_trapezoid"));
HAnimSegment92.setDEF(std::string("hanim_r_trapezoid"));
Transform& Transform93 =  Transform();
Transform93.setTranslation(new float[]{-0.07,0.07,0.0});
Shape& Shape94 =  Shape();
Shape94.setUSE(std::string("HAnimNewJointShape"));
Transform93.addChild(&Shape94);

HAnimSegment92.addChild(&Transform93);

Shape& Shape95 =  Shape();
Appearance& Appearance96 =  Appearance();
Appearance96.setContainerField("appearance");
Material& Material97 =  Material();
Material97.setContainerField("material");
Material97.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance96.addChild(&Material97);

Shape95.addChild(&Appearance96);

IndexedLineSet& IndexedLineSet98 =  IndexedLineSet();
IndexedLineSet98.setDEF(std::string("MC12toCMC2"));
IndexedLineSet98.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate99 =  Coordinate();
Coordinate99.setPoint(new float[]{-0.1,0.1,0.0,-0.1,0.2,0.0}, 6);
IndexedLineSet98.setCoord(&Coordinate99);

Shape95.setGeometry(&IndexedLineSet98);

HAnimSegment92.addChild(&Shape95);

HAnimJoint91.addChildren(&HAnimSegment92);

//index finger
HAnimJoint& HAnimJoint100 =  HAnimJoint();
HAnimJoint100.X3DNode::setName(std::string("r_carpometacarpal_2"));
HAnimJoint100.setDEF(std::string("hanim_r_carpometacarpal_2"));
HAnimJoint100.setCenter(new float[]{-0.1,0.2,0.0});
HAnimSegment& HAnimSegment101 =  HAnimSegment();
HAnimSegment101.X3DNode::setName(std::string("r_metacarpal_2"));
HAnimSegment101.setDEF(std::string("hanim_r_metacarpal_2"));
Transform& Transform102 =  Transform();
Transform102.setTranslation(new float[]{-0.1,0.2,0.0});
Shape& Shape103 =  Shape();
Shape103.setUSE(std::string("HAnimJointShape"));
Transform102.addChild(&Shape103);

HAnimSegment101.addChild(&Transform102);

Shape& Shape104 =  Shape();
Appearance& Appearance105 =  Appearance();
Appearance105.setContainerField("appearance");
Material& Material106 =  Material();
Material106.setContainerField("material");
Material106.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance105.addChild(&Material106);

Shape104.addChild(&Appearance105);

IndexedLineSet& IndexedLineSet107 =  IndexedLineSet();
IndexedLineSet107.setDEF(std::string("CMC2toMCP2"));
IndexedLineSet107.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate108 =  Coordinate();
Coordinate108.setPoint(new float[]{-0.1,0.2,0.0,-0.15,0.5,0.0}, 6);
IndexedLineSet107.setCoord(&Coordinate108);

Shape104.setGeometry(&IndexedLineSet107);

HAnimSegment101.addChild(&Shape104);

HAnimJoint100.addChildren(&HAnimSegment101);

HAnimJoint& HAnimJoint109 =  HAnimJoint();
HAnimJoint109.X3DNode::setName(std::string("r_metacarpophalangeal_2"));
HAnimJoint109.setDEF(std::string("hanim_r_metacarpophalangeal_2"));
HAnimJoint109.setCenter(new float[]{-0.15,0.5,0.0});
HAnimSegment& HAnimSegment110 =  HAnimSegment();
HAnimSegment110.X3DNode::setName(std::string("r_carpal_proximal_phalanx_2"));
HAnimSegment110.setDEF(std::string("hanim_r_carpal_proximal_phalanx_2"));
Transform& Transform111 =  Transform();
Transform111.setTranslation(new float[]{-0.15,0.5,0.0});
Shape& Shape112 =  Shape();
Shape112.setUSE(std::string("HAnimJointShape"));
Transform111.addChild(&Shape112);

HAnimSegment110.addChild(&Transform111);

Shape& Shape113 =  Shape();
Appearance& Appearance114 =  Appearance();
Appearance114.setContainerField("appearance");
Material& Material115 =  Material();
Material115.setContainerField("material");
Material115.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance114.addChild(&Material115);

Shape113.addChild(&Appearance114);

IndexedLineSet& IndexedLineSet116 =  IndexedLineSet();
IndexedLineSet116.setDEF(std::string("MCP2toPIP2"));
IndexedLineSet116.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate117 =  Coordinate();
Coordinate117.setPoint(new float[]{-0.15,0.5,0.0,-0.2,0.7,0.0}, 6);
IndexedLineSet116.setCoord(&Coordinate117);

Shape113.setGeometry(&IndexedLineSet116);

HAnimSegment110.addChild(&Shape113);

HAnimJoint109.addChildren(&HAnimSegment110);

HAnimJoint& HAnimJoint118 =  HAnimJoint();
HAnimJoint118.X3DNode::setName(std::string("r_carpal_proximal_interphalangeal_2"));
HAnimJoint118.setDEF(std::string("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint118.setCenter(new float[]{-0.2,0.7,0.0});
HAnimSegment& HAnimSegment119 =  HAnimSegment();
HAnimSegment119.X3DNode::setName(std::string("r_carpal_middle_phalanx_2"));
HAnimSegment119.setDEF(std::string("hanim_r_carpal_middle_phalanx_2"));
Transform& Transform120 =  Transform();
Transform120.setTranslation(new float[]{-0.2,0.7,0.0});
Shape& Shape121 =  Shape();
Shape121.setUSE(std::string("HAnimJointShape"));
Transform120.addChild(&Shape121);

HAnimSegment119.addChild(&Transform120);

Shape& Shape122 =  Shape();
Appearance& Appearance123 =  Appearance();
Appearance123.setContainerField("appearance");
Material& Material124 =  Material();
Material124.setContainerField("material");
Material124.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance123.addChild(&Material124);

Shape122.addChild(&Appearance123);

IndexedLineSet& IndexedLineSet125 =  IndexedLineSet();
IndexedLineSet125.setDEF(std::string("PIP2toDIP2"));
IndexedLineSet125.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate126 =  Coordinate();
Coordinate126.setPoint(new float[]{-0.2,0.7,0.0,-0.24,0.87,0.0}, 6);
IndexedLineSet125.setCoord(&Coordinate126);

Shape122.setGeometry(&IndexedLineSet125);

HAnimSegment119.addChild(&Shape122);

HAnimJoint118.addChildren(&HAnimSegment119);

HAnimJoint& HAnimJoint127 =  HAnimJoint();
HAnimJoint127.X3DNode::setName(std::string("r_carpal_distal_interphalangeal_2"));
HAnimJoint127.setDEF(std::string("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint127.setCenter(new float[]{-0.24,0.87,0.0});
HAnimSegment& HAnimSegment128 =  HAnimSegment();
HAnimSegment128.X3DNode::setName(std::string("r_carpal_distal_phalanx_2"));
HAnimSegment128.setDEF(std::string("hanim_r_carpal_distal_phalanx_2"));
Transform& Transform129 =  Transform();
Transform129.setTranslation(new float[]{-0.24,0.87,0.0});
Shape& Shape130 =  Shape();
Shape130.setUSE(std::string("HAnimJointShape"));
Transform129.addChild(&Shape130);

HAnimSegment128.addChild(&Transform129);

Shape& Shape131 =  Shape();
Appearance& Appearance132 =  Appearance();
Appearance132.setContainerField("appearance");
Material& Material133 =  Material();
Material133.setContainerField("material");
Material133.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance132.addChild(&Material133);

Shape131.addChild(&Appearance132);

IndexedLineSet& IndexedLineSet134 =  IndexedLineSet();
IndexedLineSet134.setDEF(std::string("fingertip_r_carpal_distal_interphalangeal_2"));
IndexedLineSet134.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate135 =  Coordinate();
Coordinate135.setPoint(new float[]{-0.24,0.87,0.0,-0.26,0.93,0.0}, 6);
IndexedLineSet134.setCoord(&Coordinate135);

Shape131.setGeometry(&IndexedLineSet134);

HAnimSegment128.addChild(&Shape131);

HAnimJoint127.addChildren(&HAnimSegment128);

HAnimJoint118.addChildren(&HAnimJoint127);

HAnimJoint109.addChildren(&HAnimJoint118);

HAnimJoint100.addChildren(&HAnimJoint109);

HAnimJoint91.addChildren(&HAnimJoint100);

HAnimJoint30.addChildren(&HAnimJoint91);

//MC3
HAnimJoint& HAnimJoint136 =  HAnimJoint();
HAnimJoint136.X3DNode::setName(std::string("r_midcarpal_3"));
HAnimJoint136.setDEF(std::string("hanim_r_midcarpal_3"));
HAnimJoint136.setCenter(new float[]{0.0,0.07,0.0});
HAnimSegment& HAnimSegment137 =  HAnimSegment();
HAnimSegment137.X3DNode::setName(std::string("r_capitate"));
HAnimSegment137.setDEF(std::string("hanim_r_capitate"));
Transform& Transform138 =  Transform();
Transform138.setTranslation(new float[]{0.0,0.07,0.0});
Shape& Shape139 =  Shape();
Shape139.setUSE(std::string("HAnimNewJointShape"));
Transform138.addChild(&Shape139);

HAnimSegment137.addChild(&Transform138);

Shape& Shape140 =  Shape();
Appearance& Appearance141 =  Appearance();
Appearance141.setContainerField("appearance");
Material& Material142 =  Material();
Material142.setContainerField("material");
Material142.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance141.addChild(&Material142);

Shape140.addChild(&Appearance141);

IndexedLineSet& IndexedLineSet143 =  IndexedLineSet();
IndexedLineSet143.setDEF(std::string("MC3toCMC3"));
IndexedLineSet143.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate144 =  Coordinate();
Coordinate144.setPoint(new float[]{0.0,0.07,0.0,0.0,0.2,0.0}, 6);
IndexedLineSet143.setCoord(&Coordinate144);

Shape140.setGeometry(&IndexedLineSet143);

HAnimSegment137.addChild(&Shape140);

HAnimJoint136.addChildren(&HAnimSegment137);

//Middle fingle
HAnimJoint& HAnimJoint145 =  HAnimJoint();
HAnimJoint145.X3DNode::setName(std::string("r_carpometacarpal_3"));
HAnimJoint145.setDEF(std::string("hanim_r_carpometacarpal_3"));
HAnimJoint145.setCenter(new float[]{0.0,0.2,0.0});
HAnimSegment& HAnimSegment146 =  HAnimSegment();
HAnimSegment146.X3DNode::setName(std::string("r_metacarpal_3"));
HAnimSegment146.setDEF(std::string("hanim_r_metacarpal_3"));
Transform& Transform147 =  Transform();
Transform147.setTranslation(new float[]{0.0,0.2,0.0});
Shape& Shape148 =  Shape();
Shape148.setUSE(std::string("HAnimJointShape"));
Transform147.addChild(&Shape148);

HAnimSegment146.addChild(&Transform147);

Shape& Shape149 =  Shape();
Appearance& Appearance150 =  Appearance();
Appearance150.setContainerField("appearance");
Material& Material151 =  Material();
Material151.setContainerField("material");
Material151.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance150.addChild(&Material151);

Shape149.addChild(&Appearance150);

IndexedLineSet& IndexedLineSet152 =  IndexedLineSet();
IndexedLineSet152.setDEF(std::string("CMC3toMCP3"));
IndexedLineSet152.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate153 =  Coordinate();
Coordinate153.setPoint(new float[]{0.0,0.2,0.0,-0.03,0.5,0.0}, 6);
IndexedLineSet152.setCoord(&Coordinate153);

Shape149.setGeometry(&IndexedLineSet152);

HAnimSegment146.addChild(&Shape149);

HAnimJoint145.addChildren(&HAnimSegment146);

HAnimJoint& HAnimJoint154 =  HAnimJoint();
HAnimJoint154.X3DNode::setName(std::string("r_metacarpophalangeal_3"));
HAnimJoint154.setDEF(std::string("hanim_r_metacarpophalangeal_3"));
HAnimJoint154.setCenter(new float[]{-0.03,0.5,0.0});
HAnimSegment& HAnimSegment155 =  HAnimSegment();
HAnimSegment155.X3DNode::setName(std::string("r_carpal_proximal_phalanx_3"));
HAnimSegment155.setDEF(std::string("hanim_r_carpal_proximal_phalanx_3"));
Transform& Transform156 =  Transform();
Transform156.setTranslation(new float[]{-0.03,0.5,0.0});
Shape& Shape157 =  Shape();
Shape157.setUSE(std::string("HAnimJointShape"));
Transform156.addChild(&Shape157);

HAnimSegment155.addChild(&Transform156);

Shape& Shape158 =  Shape();
Appearance& Appearance159 =  Appearance();
Appearance159.setContainerField("appearance");
Material& Material160 =  Material();
Material160.setContainerField("material");
Material160.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance159.addChild(&Material160);

Shape158.addChild(&Appearance159);

IndexedLineSet& IndexedLineSet161 =  IndexedLineSet();
IndexedLineSet161.setDEF(std::string("MCP3toPIP3"));
IndexedLineSet161.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate162 =  Coordinate();
Coordinate162.setPoint(new float[]{-0.03,0.5,0.0,-0.05,0.75,0.0}, 6);
IndexedLineSet161.setCoord(&Coordinate162);

Shape158.setGeometry(&IndexedLineSet161);

HAnimSegment155.addChild(&Shape158);

HAnimJoint154.addChildren(&HAnimSegment155);

HAnimJoint& HAnimJoint163 =  HAnimJoint();
HAnimJoint163.X3DNode::setName(std::string("r_carpal_proximal_interphalangeal_3"));
HAnimJoint163.setDEF(std::string("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint163.setCenter(new float[]{-0.05,0.75,0.0});
HAnimSegment& HAnimSegment164 =  HAnimSegment();
HAnimSegment164.X3DNode::setName(std::string("r_carpal_middle_phalanx_3"));
HAnimSegment164.setDEF(std::string("hanim_r_carpal_middle_phalanx_3"));
Transform& Transform165 =  Transform();
Transform165.setTranslation(new float[]{-0.05,0.75,0.0});
Shape& Shape166 =  Shape();
Shape166.setUSE(std::string("HAnimJointShape"));
Transform165.addChild(&Shape166);

HAnimSegment164.addChild(&Transform165);

Shape& Shape167 =  Shape();
Appearance& Appearance168 =  Appearance();
Appearance168.setContainerField("appearance");
Material& Material169 =  Material();
Material169.setContainerField("material");
Material169.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance168.addChild(&Material169);

Shape167.addChild(&Appearance168);

IndexedLineSet& IndexedLineSet170 =  IndexedLineSet();
IndexedLineSet170.setDEF(std::string("PIP3toDIP3"));
IndexedLineSet170.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate171 =  Coordinate();
Coordinate171.setPoint(new float[]{-0.05,0.75,0.0,-0.08,0.96,0.0}, 6);
IndexedLineSet170.setCoord(&Coordinate171);

Shape167.setGeometry(&IndexedLineSet170);

HAnimSegment164.addChild(&Shape167);

HAnimJoint163.addChildren(&HAnimSegment164);

HAnimJoint& HAnimJoint172 =  HAnimJoint();
HAnimJoint172.X3DNode::setName(std::string("r_carpal_distal_interphalangeal_3"));
HAnimJoint172.setDEF(std::string("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint172.setCenter(new float[]{-0.08,0.96,0.0});
HAnimSegment& HAnimSegment173 =  HAnimSegment();
HAnimSegment173.X3DNode::setName(std::string("r_carpal_distal_phalanx_3"));
HAnimSegment173.setDEF(std::string("hanim_r_carpal_distal_phalanx_3"));
Transform& Transform174 =  Transform();
Transform174.setTranslation(new float[]{-0.08,0.96,0.0});
Shape& Shape175 =  Shape();
Shape175.setUSE(std::string("HAnimJointShape"));
Transform174.addChild(&Shape175);

HAnimSegment173.addChild(&Transform174);

Shape& Shape176 =  Shape();
Appearance& Appearance177 =  Appearance();
Appearance177.setContainerField("appearance");
Material& Material178 =  Material();
Material178.setContainerField("material");
Material178.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance177.addChild(&Material178);

Shape176.addChild(&Appearance177);

IndexedLineSet& IndexedLineSet179 =  IndexedLineSet();
IndexedLineSet179.setDEF(std::string("fingertip_r_carpal_distal_interphalangeal_3"));
IndexedLineSet179.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate180 =  Coordinate();
Coordinate180.setPoint(new float[]{-0.08,0.96,0.0,-0.09,1.05,0.0}, 6);
IndexedLineSet179.setCoord(&Coordinate180);

Shape176.setGeometry(&IndexedLineSet179);

HAnimSegment173.addChild(&Shape176);

HAnimJoint172.addChildren(&HAnimSegment173);

HAnimJoint163.addChildren(&HAnimJoint172);

HAnimJoint154.addChildren(&HAnimJoint163);

HAnimJoint145.addChildren(&HAnimJoint154);

HAnimJoint136.addChildren(&HAnimJoint145);

HAnimJoint30.addChildren(&HAnimJoint136);

//MC4_5
HAnimJoint& HAnimJoint181 =  HAnimJoint();
HAnimJoint181.X3DNode::setName(std::string("r_midcarpal_4_5"));
HAnimJoint181.setDEF(std::string("hanim_r_midcarpal_4_5"));
HAnimJoint181.setCenter(new float[]{0.1,0.1,0.0});
HAnimSegment& HAnimSegment182 =  HAnimSegment();
HAnimSegment182.X3DNode::setName(std::string("r_hamate"));
HAnimSegment182.setDEF(std::string("hanim_r_hamate"));
Transform& Transform183 =  Transform();
Transform183.setTranslation(new float[]{0.1,0.1,0.0});
Shape& Shape184 =  Shape();
Shape184.setUSE(std::string("HAnimNewJointShape"));
Transform183.addChild(&Shape184);

HAnimSegment182.addChild(&Transform183);

Shape& Shape185 =  Shape();
Appearance& Appearance186 =  Appearance();
Appearance186.setContainerField("appearance");
Material& Material187 =  Material();
Material187.setContainerField("material");
Material187.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance186.addChild(&Material187);

Shape185.addChild(&Appearance186);

IndexedLineSet& IndexedLineSet188 =  IndexedLineSet();
IndexedLineSet188.setDEF(std::string("MC45toCMC4"));
IndexedLineSet188.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate189 =  Coordinate();
Coordinate189.setPoint(new float[]{0.1,0.1,0.0,0.1,0.2,0.0}, 6);
IndexedLineSet188.setCoord(&Coordinate189);

Shape185.setGeometry(&IndexedLineSet188);

HAnimSegment182.addChild(&Shape185);

Shape& Shape190 =  Shape();
Appearance& Appearance191 =  Appearance();
Appearance191.setContainerField("appearance");
Material& Material192 =  Material();
Material192.setContainerField("material");
Material192.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance191.addChild(&Material192);

Shape190.addChild(&Appearance191);

IndexedLineSet& IndexedLineSet193 =  IndexedLineSet();
IndexedLineSet193.setDEF(std::string("MC45toCMC5"));
IndexedLineSet193.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate194 =  Coordinate();
Coordinate194.setPoint(new float[]{0.1,0.1,0.0,0.15,0.17,0.0}, 6);
IndexedLineSet193.setCoord(&Coordinate194);

Shape190.setGeometry(&IndexedLineSet193);

HAnimSegment182.addChild(&Shape190);

HAnimJoint181.addChildren(&HAnimSegment182);

//ring finger
HAnimJoint& HAnimJoint195 =  HAnimJoint();
HAnimJoint195.X3DNode::setName(std::string("r_carpometacarpal_4"));
HAnimJoint195.setDEF(std::string("hanim_r_carpometacarpal_4"));
HAnimJoint195.setCenter(new float[]{0.1,0.2,0.0});
HAnimSegment& HAnimSegment196 =  HAnimSegment();
HAnimSegment196.X3DNode::setName(std::string("r_metacarpal_4"));
HAnimSegment196.setDEF(std::string("hanim_r_metacarpal_4"));
Transform& Transform197 =  Transform();
Transform197.setTranslation(new float[]{0.1,0.2,0.0});
Shape& Shape198 =  Shape();
Shape198.setUSE(std::string("HAnimJointShape"));
Transform197.addChild(&Shape198);

HAnimSegment196.addChild(&Transform197);

Shape& Shape199 =  Shape();
Appearance& Appearance200 =  Appearance();
Appearance200.setContainerField("appearance");
Material& Material201 =  Material();
Material201.setContainerField("material");
Material201.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance200.addChild(&Material201);

Shape199.addChild(&Appearance200);

IndexedLineSet& IndexedLineSet202 =  IndexedLineSet();
IndexedLineSet202.setDEF(std::string("CMC4toMCP4"));
IndexedLineSet202.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate203 =  Coordinate();
Coordinate203.setPoint(new float[]{0.1,0.2,0.0,0.1,0.47,0.0}, 6);
IndexedLineSet202.setCoord(&Coordinate203);

Shape199.setGeometry(&IndexedLineSet202);

HAnimSegment196.addChild(&Shape199);

HAnimJoint195.addChildren(&HAnimSegment196);

HAnimJoint& HAnimJoint204 =  HAnimJoint();
HAnimJoint204.X3DNode::setName(std::string("r_metacarpophalangeal_4"));
HAnimJoint204.setDEF(std::string("hanim_r_metacarpophalangeal_4"));
HAnimJoint204.setCenter(new float[]{0.1,0.47,0.0});
HAnimSegment& HAnimSegment205 =  HAnimSegment();
HAnimSegment205.X3DNode::setName(std::string("r_carpal_proximal_phalanx_4"));
HAnimSegment205.setDEF(std::string("hanim_r_carpal_proximal_phalanx_4"));
Transform& Transform206 =  Transform();
Transform206.setTranslation(new float[]{0.1,0.47,0.0});
Shape& Shape207 =  Shape();
Shape207.setUSE(std::string("HAnimJointShape"));
Transform206.addChild(&Shape207);

HAnimSegment205.addChild(&Transform206);

Shape& Shape208 =  Shape();
Appearance& Appearance209 =  Appearance();
Appearance209.setContainerField("appearance");
Material& Material210 =  Material();
Material210.setContainerField("material");
Material210.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance209.addChild(&Material210);

Shape208.addChild(&Appearance209);

IndexedLineSet& IndexedLineSet211 =  IndexedLineSet();
IndexedLineSet211.setDEF(std::string("MCP4toPIP4"));
IndexedLineSet211.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate212 =  Coordinate();
Coordinate212.setPoint(new float[]{0.1,0.47,0.0,0.1,0.7,0.0}, 6);
IndexedLineSet211.setCoord(&Coordinate212);

Shape208.setGeometry(&IndexedLineSet211);

HAnimSegment205.addChild(&Shape208);

HAnimJoint204.addChildren(&HAnimSegment205);

HAnimJoint& HAnimJoint213 =  HAnimJoint();
HAnimJoint213.X3DNode::setName(std::string("r_carpal_proximal_interphalangeal_4"));
HAnimJoint213.setDEF(std::string("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint213.setCenter(new float[]{0.1,0.7,0.0});
HAnimSegment& HAnimSegment214 =  HAnimSegment();
HAnimSegment214.X3DNode::setName(std::string("r_carpal_middle_phalanx_4"));
HAnimSegment214.setDEF(std::string("hanim_r_carpal_middle_phalanx_4"));
Transform& Transform215 =  Transform();
Transform215.setTranslation(new float[]{0.1,0.7,0.0});
Shape& Shape216 =  Shape();
Shape216.setUSE(std::string("HAnimJointShape"));
Transform215.addChild(&Shape216);

HAnimSegment214.addChild(&Transform215);

Shape& Shape217 =  Shape();
Appearance& Appearance218 =  Appearance();
Appearance218.setContainerField("appearance");
Material& Material219 =  Material();
Material219.setContainerField("material");
Material219.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance218.addChild(&Material219);

Shape217.addChild(&Appearance218);

IndexedLineSet& IndexedLineSet220 =  IndexedLineSet();
IndexedLineSet220.setDEF(std::string("PIP4toDIP4"));
IndexedLineSet220.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate221 =  Coordinate();
Coordinate221.setPoint(new float[]{0.1,0.7,0.0,0.1,0.93,0.0}, 6);
IndexedLineSet220.setCoord(&Coordinate221);

Shape217.setGeometry(&IndexedLineSet220);

HAnimSegment214.addChild(&Shape217);

HAnimJoint213.addChildren(&HAnimSegment214);

HAnimJoint& HAnimJoint222 =  HAnimJoint();
HAnimJoint222.X3DNode::setName(std::string("r_carpal_distal_interphalangeal_4"));
HAnimJoint222.setDEF(std::string("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint222.setCenter(new float[]{0.1,0.93,0.0});
HAnimSegment& HAnimSegment223 =  HAnimSegment();
HAnimSegment223.X3DNode::setName(std::string("r_carpal_distal_phalanx_4"));
HAnimSegment223.setDEF(std::string("hanim_r_carpal_distal_phalanx_4"));
Transform& Transform224 =  Transform();
Transform224.setTranslation(new float[]{0.1,0.93,0.0});
Shape& Shape225 =  Shape();
Shape225.setUSE(std::string("HAnimJointShape"));
Transform224.addChild(&Shape225);

HAnimSegment223.addChild(&Transform224);

Shape& Shape226 =  Shape();
Appearance& Appearance227 =  Appearance();
Appearance227.setContainerField("appearance");
Material& Material228 =  Material();
Material228.setContainerField("material");
Material228.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance227.addChild(&Material228);

Shape226.addChild(&Appearance227);

IndexedLineSet& IndexedLineSet229 =  IndexedLineSet();
IndexedLineSet229.setDEF(std::string("fingertip_r_carpal_distal_interphalangeal_4"));
IndexedLineSet229.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate230 =  Coordinate();
Coordinate230.setPoint(new float[]{0.1,0.93,0.0,0.1,1.0,0.0}, 6);
IndexedLineSet229.setCoord(&Coordinate230);

Shape226.setGeometry(&IndexedLineSet229);

HAnimSegment223.addChild(&Shape226);

HAnimJoint222.addChildren(&HAnimSegment223);

HAnimJoint213.addChildren(&HAnimJoint222);

HAnimJoint204.addChildren(&HAnimJoint213);

HAnimJoint195.addChildren(&HAnimJoint204);

HAnimJoint181.addChildren(&HAnimJoint195);

//pinky finger
HAnimJoint& HAnimJoint231 =  HAnimJoint();
HAnimJoint231.X3DNode::setName(std::string("r_carpometacarpal_5"));
HAnimJoint231.setDEF(std::string("hanim_r_carpometacarpal_5"));
HAnimJoint231.setCenter(new float[]{0.15,0.17,0.0});
HAnimSegment& HAnimSegment232 =  HAnimSegment();
HAnimSegment232.X3DNode::setName(std::string("r_metacarpal_5"));
HAnimSegment232.setDEF(std::string("hanim_r_metacarpal_5"));
Transform& Transform233 =  Transform();
Transform233.setTranslation(new float[]{0.15,0.17,0.0});
Shape& Shape234 =  Shape();
Shape234.setUSE(std::string("HAnimJointShape"));
Transform233.addChild(&Shape234);

HAnimSegment232.addChild(&Transform233);

Shape& Shape235 =  Shape();
Appearance& Appearance236 =  Appearance();
Appearance236.setContainerField("appearance");
Material& Material237 =  Material();
Material237.setContainerField("material");
Material237.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance236.addChild(&Material237);

Shape235.addChild(&Appearance236);

IndexedLineSet& IndexedLineSet238 =  IndexedLineSet();
IndexedLineSet238.setDEF(std::string("CMC5toMCP5"));
IndexedLineSet238.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate239 =  Coordinate();
Coordinate239.setPoint(new float[]{0.15,0.17,0.0,0.2,0.4,0.0}, 6);
IndexedLineSet238.setCoord(&Coordinate239);

Shape235.setGeometry(&IndexedLineSet238);

HAnimSegment232.addChild(&Shape235);

HAnimJoint231.addChildren(&HAnimSegment232);

HAnimJoint& HAnimJoint240 =  HAnimJoint();
HAnimJoint240.X3DNode::setName(std::string("r_metacarpophalangeal_5"));
HAnimJoint240.setDEF(std::string("hanim_r_metacarpophalangeal_5"));
HAnimJoint240.setCenter(new float[]{0.2,0.4,0.0});
HAnimSegment& HAnimSegment241 =  HAnimSegment();
HAnimSegment241.X3DNode::setName(std::string("r_carpal_proximal_phalanx_5"));
HAnimSegment241.setDEF(std::string("hanim_r_carpal_proximal_phalanx_5"));
Transform& Transform242 =  Transform();
Transform242.setTranslation(new float[]{0.2,0.4,0.0});
Shape& Shape243 =  Shape();
Shape243.setUSE(std::string("HAnimJointShape"));
Transform242.addChild(&Shape243);

HAnimSegment241.addChild(&Transform242);

Shape& Shape244 =  Shape();
Appearance& Appearance245 =  Appearance();
Appearance245.setContainerField("appearance");
Material& Material246 =  Material();
Material246.setContainerField("material");
Material246.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance245.addChild(&Material246);

Shape244.addChild(&Appearance245);

IndexedLineSet& IndexedLineSet247 =  IndexedLineSet();
IndexedLineSet247.setDEF(std::string("MCP5toPIP5"));
IndexedLineSet247.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate248 =  Coordinate();
Coordinate248.setPoint(new float[]{0.2,0.4,0.0,0.23,0.63,0.0}, 6);
IndexedLineSet247.setCoord(&Coordinate248);

Shape244.setGeometry(&IndexedLineSet247);

HAnimSegment241.addChild(&Shape244);

HAnimJoint240.addChildren(&HAnimSegment241);

HAnimJoint& HAnimJoint249 =  HAnimJoint();
HAnimJoint249.X3DNode::setName(std::string("r_carpal_proximal_interphalangeal_5"));
HAnimJoint249.setDEF(std::string("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint249.setCenter(new float[]{0.23,0.63,0.0});
HAnimSegment& HAnimSegment250 =  HAnimSegment();
HAnimSegment250.X3DNode::setName(std::string("r_carpal_middle_phalanx_5"));
HAnimSegment250.setDEF(std::string("hanim_r_carpal_middle_phalanx_5"));
Transform& Transform251 =  Transform();
Transform251.setTranslation(new float[]{0.23,0.63,0.0});
Shape& Shape252 =  Shape();
Shape252.setUSE(std::string("HAnimJointShape"));
Transform251.addChild(&Shape252);

HAnimSegment250.addChild(&Transform251);

Shape& Shape253 =  Shape();
Appearance& Appearance254 =  Appearance();
Appearance254.setContainerField("appearance");
Material& Material255 =  Material();
Material255.setContainerField("material");
Material255.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance254.addChild(&Material255);

Shape253.addChild(&Appearance254);

IndexedLineSet& IndexedLineSet256 =  IndexedLineSet();
IndexedLineSet256.setDEF(std::string("PIP5toDIP5"));
IndexedLineSet256.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate257 =  Coordinate();
Coordinate257.setPoint(new float[]{0.23,0.63,0.0,0.25,0.79,0.0}, 6);
IndexedLineSet256.setCoord(&Coordinate257);

Shape253.setGeometry(&IndexedLineSet256);

HAnimSegment250.addChild(&Shape253);

HAnimJoint249.addChildren(&HAnimSegment250);

HAnimJoint& HAnimJoint258 =  HAnimJoint();
HAnimJoint258.X3DNode::setName(std::string("r_carpal_distal_interphalangeal_5"));
HAnimJoint258.setDEF(std::string("hanim_r_carpal_distal_interphalangeal_5"));
HAnimJoint258.setCenter(new float[]{0.25,0.79,0.0});
HAnimSegment& HAnimSegment259 =  HAnimSegment();
HAnimSegment259.X3DNode::setName(std::string("r_carpal_distal_phalanx_5"));
HAnimSegment259.setDEF(std::string("hanim_r_carpal_distal_phalanx_5"));
Transform& Transform260 =  Transform();
Transform260.setTranslation(new float[]{0.25,0.79,0.0});
Shape& Shape261 =  Shape();
Shape261.setUSE(std::string("HAnimJointShape"));
Transform260.addChild(&Shape261);

HAnimSegment259.addChild(&Transform260);

Shape& Shape262 =  Shape();
Appearance& Appearance263 =  Appearance();
Appearance263.setContainerField("appearance");
Material& Material264 =  Material();
Material264.setContainerField("material");
Material264.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance263.addChild(&Material264);

Shape262.addChild(&Appearance263);

IndexedLineSet& IndexedLineSet265 =  IndexedLineSet();
IndexedLineSet265.setDEF(std::string("fingertip_r_carpal_distal_interphalangeal_5"));
IndexedLineSet265.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate266 =  Coordinate();
Coordinate266.setPoint(new float[]{0.25,0.79,0.0,0.26,0.85,0.0}, 6);
IndexedLineSet265.setCoord(&Coordinate266);

Shape262.setGeometry(&IndexedLineSet265);

HAnimSegment259.addChild(&Shape262);

HAnimJoint258.addChildren(&HAnimSegment259);

HAnimJoint249.addChildren(&HAnimJoint258);

HAnimJoint240.addChildren(&HAnimJoint249);

HAnimJoint231.addChildren(&HAnimJoint240);

HAnimJoint181.addChildren(&HAnimJoint231);

HAnimJoint30.addChildren(&HAnimJoint181);

HAnimJoint29.addChildren(&HAnimJoint30);

HAnimHumanoid26.setSkeleton(&HAnimJoint29);

HAnimJoint& HAnimJoint267 =  HAnimJoint();
HAnimJoint267.setContainerField("joints");
HAnimJoint267.setUSE(std::string("hanim_humanoid_root"));
HAnimHumanoid26.setJoints(&HAnimJoint267);

HAnimJoint& HAnimJoint268 =  HAnimJoint();
HAnimJoint268.setContainerField("joints");
HAnimJoint268.setUSE(std::string("hanim_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid26.setJoints(&HAnimJoint268);

HAnimJoint& HAnimJoint269 =  HAnimJoint();
HAnimJoint269.setContainerField("joints");
HAnimJoint269.setUSE(std::string("hanim_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid26.setJoints(&HAnimJoint269);

HAnimJoint& HAnimJoint270 =  HAnimJoint();
HAnimJoint270.setContainerField("joints");
HAnimJoint270.setUSE(std::string("hanim_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid26.setJoints(&HAnimJoint270);

HAnimJoint& HAnimJoint271 =  HAnimJoint();
HAnimJoint271.setContainerField("joints");
HAnimJoint271.setUSE(std::string("hanim_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid26.setJoints(&HAnimJoint271);

HAnimJoint& HAnimJoint272 =  HAnimJoint();
HAnimJoint272.setContainerField("joints");
HAnimJoint272.setUSE(std::string("hanim_r_carpal_interphalangeal_1"));
HAnimHumanoid26.setJoints(&HAnimJoint272);

HAnimJoint& HAnimJoint273 =  HAnimJoint();
HAnimJoint273.setContainerField("joints");
HAnimJoint273.setUSE(std::string("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid26.setJoints(&HAnimJoint273);

HAnimJoint& HAnimJoint274 =  HAnimJoint();
HAnimJoint274.setContainerField("joints");
HAnimJoint274.setUSE(std::string("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid26.setJoints(&HAnimJoint274);

HAnimJoint& HAnimJoint275 =  HAnimJoint();
HAnimJoint275.setContainerField("joints");
HAnimJoint275.setUSE(std::string("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid26.setJoints(&HAnimJoint275);

HAnimJoint& HAnimJoint276 =  HAnimJoint();
HAnimJoint276.setContainerField("joints");
HAnimJoint276.setUSE(std::string("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid26.setJoints(&HAnimJoint276);

HAnimJoint& HAnimJoint277 =  HAnimJoint();
HAnimJoint277.setContainerField("joints");
HAnimJoint277.setUSE(std::string("hanim_r_carpometacarpal_1"));
HAnimHumanoid26.setJoints(&HAnimJoint277);

HAnimJoint& HAnimJoint278 =  HAnimJoint();
HAnimJoint278.setContainerField("joints");
HAnimJoint278.setUSE(std::string("hanim_r_carpometacarpal_2"));
HAnimHumanoid26.setJoints(&HAnimJoint278);

HAnimJoint& HAnimJoint279 =  HAnimJoint();
HAnimJoint279.setContainerField("joints");
HAnimJoint279.setUSE(std::string("hanim_r_carpometacarpal_3"));
HAnimHumanoid26.setJoints(&HAnimJoint279);

HAnimJoint& HAnimJoint280 =  HAnimJoint();
HAnimJoint280.setContainerField("joints");
HAnimJoint280.setUSE(std::string("hanim_r_carpometacarpal_4"));
HAnimHumanoid26.setJoints(&HAnimJoint280);

HAnimJoint& HAnimJoint281 =  HAnimJoint();
HAnimJoint281.setContainerField("joints");
HAnimJoint281.setUSE(std::string("hanim_r_carpometacarpal_5"));
HAnimHumanoid26.setJoints(&HAnimJoint281);

HAnimJoint& HAnimJoint282 =  HAnimJoint();
HAnimJoint282.setContainerField("joints");
HAnimJoint282.setUSE(std::string("hanim_r_metacarpophalangeal_1"));
HAnimHumanoid26.setJoints(&HAnimJoint282);

HAnimJoint& HAnimJoint283 =  HAnimJoint();
HAnimJoint283.setContainerField("joints");
HAnimJoint283.setUSE(std::string("hanim_r_metacarpophalangeal_2"));
HAnimHumanoid26.setJoints(&HAnimJoint283);

HAnimJoint& HAnimJoint284 =  HAnimJoint();
HAnimJoint284.setContainerField("joints");
HAnimJoint284.setUSE(std::string("hanim_r_metacarpophalangeal_3"));
HAnimHumanoid26.setJoints(&HAnimJoint284);

HAnimJoint& HAnimJoint285 =  HAnimJoint();
HAnimJoint285.setContainerField("joints");
HAnimJoint285.setUSE(std::string("hanim_r_metacarpophalangeal_4"));
HAnimHumanoid26.setJoints(&HAnimJoint285);

HAnimJoint& HAnimJoint286 =  HAnimJoint();
HAnimJoint286.setContainerField("joints");
HAnimJoint286.setUSE(std::string("hanim_r_metacarpophalangeal_5"));
HAnimHumanoid26.setJoints(&HAnimJoint286);

HAnimJoint& HAnimJoint287 =  HAnimJoint();
HAnimJoint287.setContainerField("joints");
HAnimJoint287.setUSE(std::string("hanim_r_midcarpal_1"));
HAnimHumanoid26.setJoints(&HAnimJoint287);

HAnimJoint& HAnimJoint288 =  HAnimJoint();
HAnimJoint288.setContainerField("joints");
HAnimJoint288.setUSE(std::string("hanim_r_midcarpal_2"));
HAnimHumanoid26.setJoints(&HAnimJoint288);

HAnimJoint& HAnimJoint289 =  HAnimJoint();
HAnimJoint289.setContainerField("joints");
HAnimJoint289.setUSE(std::string("hanim_r_midcarpal_3"));
HAnimHumanoid26.setJoints(&HAnimJoint289);

HAnimJoint& HAnimJoint290 =  HAnimJoint();
HAnimJoint290.setContainerField("joints");
HAnimJoint290.setUSE(std::string("hanim_r_midcarpal_4_5"));
HAnimHumanoid26.setJoints(&HAnimJoint290);

HAnimJoint& HAnimJoint291 =  HAnimJoint();
HAnimJoint291.setContainerField("joints");
HAnimJoint291.setUSE(std::string("hanim_r_radiocarpal"));
HAnimHumanoid26.setJoints(&HAnimJoint291);

Scene24.addChild(&HAnimHumanoid26);

X3D0.setScene(&Scene24);

//}
