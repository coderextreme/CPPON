#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void HAnimModelFootLeft(int argc, char ** argv) {
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
meta3.setContent(std::string("HAnimModelFootLeft.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("description"));
meta4.setContent(std::string("Left foot, using high-fidelity definitions for HAnim version 2.0"));
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
meta8.setName(std::string("warning"));
meta8.setContent(std::string("not yet to scale"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("warning"));
meta9.setContent(std::string("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("info"));
meta10.setContent(std::string("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("reference"));
meta11.setContent(std::string("https://www.web3d.org/working-groups/humanoid-animation-HAnim"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("reference"));
meta12.setContent(std::string("https://www.web3d.org/documents/specifications/19774/V2.0"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("reference"));
meta13.setContent(std::string("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("reference"));
meta14.setContent(std::string("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("reference"));
meta15.setContent(std::string("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(std::string("reference"));
meta16.setContent(std::string("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(std::string("subject"));
meta17.setContent(std::string("X3D HAnim humanoid animation"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(std::string("TODO"));
meta18.setContent(std::string("Integrate and confirm Segment/Joint names, Viewpoints."));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(std::string("identifier"));
meta19.setContent(std::string("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(std::string("generator"));
meta20.setContent(std::string("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(std::string("license"));
meta21.setContent(std::string("../license.html"));
head1.addMeta(&meta21);

X3D0.setHead(&head1);

Scene& Scene22 =  Scene();
WorldInfo& WorldInfo23 =  WorldInfo();
WorldInfo23.setTitle(std::string("HAnimModelFootLeft.x3d"));
Scene22.addChild(&WorldInfo23);

HAnimHumanoid& HAnimHumanoid24 =  HAnimHumanoid();
HAnimHumanoid24.X3DNode::setName(std::string("Foot_Left"));
HAnimHumanoid24.setDEF(std::string("hanim_Foot_Left"));
HAnimHumanoid24.setLoa(4);
HAnimHumanoid24.setVersion(std::string("2.0"));
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
MetadataSet& MetadataSet25 =  MetadataSet();
MetadataSet25.setContainerField("metadata");
MetadataSet25.X3DNode::setName(std::string("HAnimHumanoid.info"));
MetadataSet25.X3DNode::setReference(std::string("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
MetadataString& MetadataString26 =  MetadataString();
MetadataString26.X3DNode::setName(std::string("authorName"));
MetadataString26.setValue(new std::string[]{"Kwan-Hee YOO, Don Brutzman and Joe Williams"}, 1);
MetadataString26.setContainerField("value");
MetadataSet25.setValue((X3DNode *)&MetadataString26);

HAnimHumanoid24.setMetadata(MetadataSet25);

HAnimJoint& HAnimJoint27 =  HAnimJoint();
HAnimJoint27.X3DNode::setName(std::string("humanoid_root"));
HAnimJoint27.setDEF(std::string("hanim_humanoid_root"));
HAnimJoint27.setContainerField("skeleton");
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model
HAnimJoint& HAnimJoint28 =  HAnimJoint();
HAnimJoint28.X3DNode::setName(std::string("l_talocrural"));
HAnimJoint28.setDEF(std::string("hanim_l_talocrural"));
HAnimJoint28.setDescription(std::string("connection joint of foot to leg above"));
HAnimSegment& HAnimSegment29 =  HAnimSegment();
HAnimSegment29.X3DNode::setName(std::string("l_talus"));
HAnimSegment29.setDEF(std::string("hanim_l_talus"));
Transform& Transform30 =  Transform();
Shape& Shape31 =  Shape();
Shape31.setDEF(std::string("HAnimJointShape"));
Sphere& Sphere32 =  Sphere();
Sphere32.setRadius(0.025);
Shape31.setGeometry(&Sphere32);

Appearance& Appearance33 =  Appearance();
Appearance33.setContainerField("appearance");
Appearance33.setDEF(std::string("HAnimJointAppearance"));
Material& Material34 =  Material();
Material34.setContainerField("material");
Material34.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance33.addChild(&Material34);

Shape31.addChild(&Appearance33);

Transform30.addChild(&Shape31);

HAnimSegment29.addChild(&Transform30);

Shape& Shape35 =  Shape();
Appearance& Appearance36 =  Appearance();
Appearance36.setContainerField("appearance");
Material& Material37 =  Material();
Material37.setContainerField("material");
Material37.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance36.addChild(&Material37);

Shape35.addChild(&Appearance36);

IndexedLineSet& IndexedLineSet38 =  IndexedLineSet();
IndexedLineSet38.setDEF(std::string("TCtoTCN"));
IndexedLineSet38.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate39 =  Coordinate();
Coordinate39.setPoint(new float[]{0.0,0.0,0.0,0.0,-0.3,0.0}, 6);
IndexedLineSet38.setCoord(&Coordinate39);

Shape35.setGeometry(&IndexedLineSet38);

HAnimSegment29.addChild(&Shape35);

Shape& Shape40 =  Shape();
Appearance& Appearance41 =  Appearance();
Appearance41.setContainerField("appearance");
Material& Material42 =  Material();
Material42.setContainerField("material");
Material42.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance41.addChild(&Material42);

Shape40.addChild(&Appearance41);

IndexedLineSet& IndexedLineSet43 =  IndexedLineSet();
IndexedLineSet43.setDEF(std::string("TCtoCC"));
IndexedLineSet43.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate44 =  Coordinate();
Coordinate44.setPoint(new float[]{0.0,0.0,0.0,0.2,0.3,0.0}, 6);
IndexedLineSet43.setCoord(&Coordinate44);

Shape40.setGeometry(&IndexedLineSet43);

HAnimSegment29.addChild(&Shape40);

HAnimJoint28.addChildren(&HAnimSegment29);

//TCN
HAnimJoint& HAnimJoint45 =  HAnimJoint();
HAnimJoint45.X3DNode::setName(std::string("l_talocalcaneonavicular"));
HAnimJoint45.setDEF(std::string("hanim_l_talocalcaneonavicular"));
HAnimJoint45.setCenter(new float[]{0.0,-0.3,0.0});
HAnimSegment& HAnimSegment46 =  HAnimSegment();
HAnimSegment46.X3DNode::setName(std::string("l_navicular"));
HAnimSegment46.setDEF(std::string("hanim_l_navicular"));
Transform& Transform47 =  Transform();
Transform47.setTranslation(new float[]{0.0,-0.3,0.0});
Shape& Shape48 =  Shape();
Shape48.setUSE(std::string("HAnimJointShape"));
Transform47.addChild(&Shape48);

HAnimSegment46.addChild(&Transform47);

Shape& Shape49 =  Shape();
Appearance& Appearance50 =  Appearance();
Appearance50.setContainerField("appearance");
Material& Material51 =  Material();
Material51.setContainerField("material");
Material51.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance50.addChild(&Material51);

Shape49.addChild(&Appearance50);

IndexedLineSet& IndexedLineSet52 =  IndexedLineSet();
IndexedLineSet52.setDEF(std::string("TCNtoCN1"));
IndexedLineSet52.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate53 =  Coordinate();
Coordinate53.setPoint(new float[]{0.0,-0.3,0.0,-0.1,-0.45,0.0}, 6);
IndexedLineSet52.setCoord(&Coordinate53);

Shape49.setGeometry(&IndexedLineSet52);

HAnimSegment46.addChild(&Shape49);

Shape& Shape54 =  Shape();
Appearance& Appearance55 =  Appearance();
Appearance55.setContainerField("appearance");
Material& Material56 =  Material();
Material56.setContainerField("material");
Material56.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance55.addChild(&Material56);

Shape54.addChild(&Appearance55);

IndexedLineSet& IndexedLineSet57 =  IndexedLineSet();
IndexedLineSet57.setDEF(std::string("TCNtoCN2"));
IndexedLineSet57.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate58 =  Coordinate();
Coordinate58.setPoint(new float[]{0.0,-0.3,0.0,0.0,-0.45,0.0}, 6);
IndexedLineSet57.setCoord(&Coordinate58);

Shape54.setGeometry(&IndexedLineSet57);

HAnimSegment46.addChild(&Shape54);

Shape& Shape59 =  Shape();
Appearance& Appearance60 =  Appearance();
Appearance60.setContainerField("appearance");
Material& Material61 =  Material();
Material61.setContainerField("material");
Material61.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance60.addChild(&Material61);

Shape59.addChild(&Appearance60);

IndexedLineSet& IndexedLineSet62 =  IndexedLineSet();
IndexedLineSet62.setDEF(std::string("TCNtoCN3"));
IndexedLineSet62.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate63 =  Coordinate();
Coordinate63.setPoint(new float[]{0.0,-0.3,0.0,0.1,-0.4,0.0}, 6);
IndexedLineSet62.setCoord(&Coordinate63);

Shape59.setGeometry(&IndexedLineSet62);

HAnimSegment46.addChild(&Shape59);

HAnimJoint45.addChildren(&HAnimSegment46);

//CN1
HAnimJoint& HAnimJoint64 =  HAnimJoint();
HAnimJoint64.X3DNode::setName(std::string("l_cuneonavicular_1"));
HAnimJoint64.setDEF(std::string("hanim_l_cuneonavicular_1"));
HAnimJoint64.setCenter(new float[]{-0.1,-0.45,0.0});
HAnimSegment& HAnimSegment65 =  HAnimSegment();
HAnimSegment65.X3DNode::setName(std::string("l_cuneiform_1"));
HAnimSegment65.setDEF(std::string("hanim_l_cuneiform_1"));
Transform& Transform66 =  Transform();
Transform66.setTranslation(new float[]{-0.1,-0.45,0.0});
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
IndexedLineSet71.setDEF(std::string("CN1toTMT1"));
IndexedLineSet71.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate72 =  Coordinate();
Coordinate72.setPoint(new float[]{-0.1,-0.45,0.0,-0.1,-0.6,0.0}, 6);
IndexedLineSet71.setCoord(&Coordinate72);

Shape68.setGeometry(&IndexedLineSet71);

HAnimSegment65.addChild(&Shape68);

HAnimJoint64.addChildren(&HAnimSegment65);

HAnimJoint& HAnimJoint73 =  HAnimJoint();
HAnimJoint73.X3DNode::setName(std::string("l_tarsometatarsal_1"));
HAnimJoint73.setDEF(std::string("hanim_l_tarsometatarsal_1"));
HAnimJoint73.setCenter(new float[]{-0.1,-0.6,0.0});
HAnimSegment& HAnimSegment74 =  HAnimSegment();
HAnimSegment74.X3DNode::setName(std::string("l_metatarsal_1"));
HAnimSegment74.setDEF(std::string("hanim_l_metatarsal_1"));
Transform& Transform75 =  Transform();
Transform75.setTranslation(new float[]{-0.1,-0.6,0.0});
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
IndexedLineSet80.setDEF(std::string("TMT1toMTP1"));
IndexedLineSet80.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate81 =  Coordinate();
Coordinate81.setPoint(new float[]{-0.1,-0.6,0.0,-0.1,-0.9,0.0}, 6);
IndexedLineSet80.setCoord(&Coordinate81);

Shape77.setGeometry(&IndexedLineSet80);

HAnimSegment74.addChild(&Shape77);

HAnimJoint73.addChildren(&HAnimSegment74);

HAnimJoint& HAnimJoint82 =  HAnimJoint();
HAnimJoint82.X3DNode::setName(std::string("l_metatarsophalangeal_1"));
HAnimJoint82.setDEF(std::string("hanim_l_metatarsophalangeal_1"));
HAnimJoint82.setCenter(new float[]{-0.1,-0.9,0.0});
HAnimSegment& HAnimSegment83 =  HAnimSegment();
HAnimSegment83.X3DNode::setName(std::string("l_tarsal_proximal_phalanx_1"));
HAnimSegment83.setDEF(std::string("hanim_l_tarsal_proximal_phalanx_1"));
Transform& Transform84 =  Transform();
Transform84.setTranslation(new float[]{-0.1,-0.9,0.0});
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
IndexedLineSet89.setDEF(std::string("MTP1toIP1"));
IndexedLineSet89.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate90 =  Coordinate();
Coordinate90.setPoint(new float[]{-0.1,-0.9,0.0,-0.1,-1.05,0.0}, 6);
IndexedLineSet89.setCoord(&Coordinate90);

Shape86.setGeometry(&IndexedLineSet89);

HAnimSegment83.addChild(&Shape86);

HAnimJoint82.addChildren(&HAnimSegment83);

HAnimJoint& HAnimJoint91 =  HAnimJoint();
HAnimJoint91.X3DNode::setName(std::string("l_tarsal_interphalangeal_1"));
HAnimJoint91.setDEF(std::string("hanim_l_tarsal_interphalangeal_1"));
HAnimJoint91.setCenter(new float[]{-0.1,-1.05,0.0});
HAnimSegment& HAnimSegment92 =  HAnimSegment();
HAnimSegment92.X3DNode::setName(std::string("l_tarsal_distal_phalanx_1"));
HAnimSegment92.setDEF(std::string("hanim_l_tarsal_distal_phalanx_1"));
Transform& Transform93 =  Transform();
Transform93.setTranslation(new float[]{-0.1,-1.05,0.0});
Shape& Shape94 =  Shape();
Shape94.setUSE(std::string("HAnimJointShape"));
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
IndexedLineSet98.setDEF(std::string("tiptoe_l_tarsal_distal_interphalangeal_1"));
IndexedLineSet98.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate99 =  Coordinate();
Coordinate99.setPoint(new float[]{-0.1,-1.05,0.0,-0.1,-1.1,0.0}, 6);
IndexedLineSet98.setCoord(&Coordinate99);

Shape95.setGeometry(&IndexedLineSet98);

HAnimSegment92.addChild(&Shape95);

HAnimJoint91.addChildren(&HAnimSegment92);

HAnimJoint82.addChildren(&HAnimJoint91);

HAnimJoint73.addChildren(&HAnimJoint82);

HAnimJoint64.addChildren(&HAnimJoint73);

HAnimJoint45.addChildren(&HAnimJoint64);

//CN2
HAnimJoint& HAnimJoint100 =  HAnimJoint();
HAnimJoint100.X3DNode::setName(std::string("l_cuneonavicular_2"));
HAnimJoint100.setDEF(std::string("hanim_l_cuneonavicular_2"));
HAnimJoint100.setCenter(new float[]{0.0,-0.45,0.0});
HAnimSegment& HAnimSegment101 =  HAnimSegment();
HAnimSegment101.X3DNode::setName(std::string("l_cuneiform_2"));
HAnimSegment101.setDEF(std::string("hanim_l_cuneiform_2"));
Transform& Transform102 =  Transform();
Transform102.setTranslation(new float[]{0.0,-0.45,0.0});
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
IndexedLineSet107.setDEF(std::string("CN2toTMT2"));
IndexedLineSet107.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate108 =  Coordinate();
Coordinate108.setPoint(new float[]{0.0,-0.45,0.0,0.05,-0.6,0.0}, 6);
IndexedLineSet107.setCoord(&Coordinate108);

Shape104.setGeometry(&IndexedLineSet107);

HAnimSegment101.addChild(&Shape104);

HAnimJoint100.addChildren(&HAnimSegment101);

HAnimJoint& HAnimJoint109 =  HAnimJoint();
HAnimJoint109.X3DNode::setName(std::string("l_tarsometatarsal_2"));
HAnimJoint109.setDEF(std::string("hanim_l_tarsometatarsal_2"));
HAnimJoint109.setCenter(new float[]{0.05,-0.6,0.0});
HAnimSegment& HAnimSegment110 =  HAnimSegment();
HAnimSegment110.X3DNode::setName(std::string("l_metatarsal_2"));
HAnimSegment110.setDEF(std::string("hanim_l_metatarsal_2"));
Transform& Transform111 =  Transform();
Transform111.setTranslation(new float[]{0.05,-0.6,0.0});
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
IndexedLineSet116.setDEF(std::string("TMT2toMTP2"));
IndexedLineSet116.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate117 =  Coordinate();
Coordinate117.setPoint(new float[]{0.05,-0.6,0.0,0.05,-0.9,0.0}, 6);
IndexedLineSet116.setCoord(&Coordinate117);

Shape113.setGeometry(&IndexedLineSet116);

HAnimSegment110.addChild(&Shape113);

HAnimJoint109.addChildren(&HAnimSegment110);

HAnimJoint& HAnimJoint118 =  HAnimJoint();
HAnimJoint118.X3DNode::setName(std::string("l_metatarsophalangeal_2"));
HAnimJoint118.setDEF(std::string("hanim_l_metatarsophalangeal_2"));
HAnimJoint118.setCenter(new float[]{0.05,-0.9,0.0});
HAnimSegment& HAnimSegment119 =  HAnimSegment();
HAnimSegment119.X3DNode::setName(std::string("l_tarsal_proximal_phalanx_2"));
HAnimSegment119.setDEF(std::string("hanim_l_tarsal_proximal_phalanx_2"));
Transform& Transform120 =  Transform();
Transform120.setTranslation(new float[]{0.05,-0.9,0.0});
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
IndexedLineSet125.setDEF(std::string("MTP2toPIP2"));
IndexedLineSet125.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate126 =  Coordinate();
Coordinate126.setPoint(new float[]{0.05,-0.9,0.0,0.05,-1.05,0.0}, 6);
IndexedLineSet125.setCoord(&Coordinate126);

Shape122.setGeometry(&IndexedLineSet125);

HAnimSegment119.addChild(&Shape122);

HAnimJoint118.addChildren(&HAnimSegment119);

HAnimJoint& HAnimJoint127 =  HAnimJoint();
HAnimJoint127.X3DNode::setName(std::string("l_tarsal_proximal_interphalangeal_2"));
HAnimJoint127.setDEF(std::string("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimJoint127.setCenter(new float[]{0.05,-1.05,0.0});
HAnimSegment& HAnimSegment128 =  HAnimSegment();
HAnimSegment128.X3DNode::setName(std::string("l_tarsal_middle_phalanx_2"));
HAnimSegment128.setDEF(std::string("hanim_l_tarsal_middle_phalanx_2"));
Transform& Transform129 =  Transform();
Transform129.setTranslation(new float[]{0.05,-1.05,0.0});
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
IndexedLineSet134.setDEF(std::string("PIP2toDIP2"));
IndexedLineSet134.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate135 =  Coordinate();
Coordinate135.setPoint(new float[]{0.05,-1.05,0.0,0.05,-1.12,0.0}, 6);
IndexedLineSet134.setCoord(&Coordinate135);

Shape131.setGeometry(&IndexedLineSet134);

HAnimSegment128.addChild(&Shape131);

HAnimJoint127.addChildren(&HAnimSegment128);

HAnimJoint& HAnimJoint136 =  HAnimJoint();
HAnimJoint136.X3DNode::setName(std::string("l_tarsal_distal_interphalangeal_2"));
HAnimJoint136.setDEF(std::string("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimJoint136.setCenter(new float[]{0.05,-1.12,0.0});
HAnimSegment& HAnimSegment137 =  HAnimSegment();
HAnimSegment137.X3DNode::setName(std::string("l_tarsal_distal_phalanx_2"));
HAnimSegment137.setDEF(std::string("hanim_l_tarsal_distal_phalanx_2"));
Transform& Transform138 =  Transform();
Transform138.setTranslation(new float[]{0.05,-1.12,0.0});
Shape& Shape139 =  Shape();
Shape139.setUSE(std::string("HAnimJointShape"));
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
IndexedLineSet143.setDEF(std::string("tiptoe_l_tarsal_distal_phalanx_2"));
IndexedLineSet143.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate144 =  Coordinate();
Coordinate144.setPoint(new float[]{0.05,-1.12,0.0,0.05,-1.16,0.0}, 6);
IndexedLineSet143.setCoord(&Coordinate144);

Shape140.setGeometry(&IndexedLineSet143);

HAnimSegment137.addChild(&Shape140);

HAnimJoint136.addChildren(&HAnimSegment137);

HAnimJoint127.addChildren(&HAnimJoint136);

HAnimJoint118.addChildren(&HAnimJoint127);

HAnimJoint109.addChildren(&HAnimJoint118);

HAnimJoint100.addChildren(&HAnimJoint109);

HAnimJoint45.addChildren(&HAnimJoint100);

//CN3
HAnimJoint& HAnimJoint145 =  HAnimJoint();
HAnimJoint145.X3DNode::setName(std::string("l_cuneonavicular_3"));
HAnimJoint145.setDEF(std::string("hanim_l_cuneonavicular_3"));
HAnimJoint145.setCenter(new float[]{0.1,-0.4,0.0});
HAnimSegment& HAnimSegment146 =  HAnimSegment();
HAnimSegment146.X3DNode::setName(std::string("l_cuneiform_3"));
HAnimSegment146.setDEF(std::string("hanim_l_cuneiform_3"));
Transform& Transform147 =  Transform();
Transform147.setTranslation(new float[]{0.1,-0.4,0.0});
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
IndexedLineSet152.setDEF(std::string("CN3toTMT3"));
IndexedLineSet152.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate153 =  Coordinate();
Coordinate153.setPoint(new float[]{0.1,-0.4,0.0,0.15,-0.6,0.0}, 6);
IndexedLineSet152.setCoord(&Coordinate153);

Shape149.setGeometry(&IndexedLineSet152);

HAnimSegment146.addChild(&Shape149);

HAnimJoint145.addChildren(&HAnimSegment146);

HAnimJoint& HAnimJoint154 =  HAnimJoint();
HAnimJoint154.X3DNode::setName(std::string("l_tarsometatarsal_3"));
HAnimJoint154.setDEF(std::string("hanim_l_tarsometatarsal_3"));
HAnimJoint154.setCenter(new float[]{0.15,-0.6,0.0});
HAnimSegment& HAnimSegment155 =  HAnimSegment();
HAnimSegment155.X3DNode::setName(std::string("l_metatarsal_3"));
HAnimSegment155.setDEF(std::string("hanim_l_metatarsal_3"));
Transform& Transform156 =  Transform();
Transform156.setTranslation(new float[]{0.15,-0.6,0.0});
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
IndexedLineSet161.setDEF(std::string("TMT3toMTP3"));
IndexedLineSet161.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate162 =  Coordinate();
Coordinate162.setPoint(new float[]{0.15,-0.6,0.0,0.15,-0.9,0.0}, 6);
IndexedLineSet161.setCoord(&Coordinate162);

Shape158.setGeometry(&IndexedLineSet161);

HAnimSegment155.addChild(&Shape158);

HAnimJoint154.addChildren(&HAnimSegment155);

HAnimJoint& HAnimJoint163 =  HAnimJoint();
HAnimJoint163.X3DNode::setName(std::string("l_metatarsophalangeal_3"));
HAnimJoint163.setDEF(std::string("hanim_l_metatarsophalangeal_3"));
HAnimJoint163.setCenter(new float[]{0.15,-0.9,0.0});
HAnimSegment& HAnimSegment164 =  HAnimSegment();
HAnimSegment164.X3DNode::setName(std::string("l_tarsal_proximal_phalanx_3"));
HAnimSegment164.setDEF(std::string("hanim_l_tarsal_proximal_phalanx_3"));
Transform& Transform165 =  Transform();
Transform165.setTranslation(new float[]{0.15,-0.9,0.0});
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
IndexedLineSet170.setDEF(std::string("MTP3toPIP3"));
IndexedLineSet170.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate171 =  Coordinate();
Coordinate171.setPoint(new float[]{0.15,-0.9,0.0,0.15,-1.05,0.0}, 6);
IndexedLineSet170.setCoord(&Coordinate171);

Shape167.setGeometry(&IndexedLineSet170);

HAnimSegment164.addChild(&Shape167);

HAnimJoint163.addChildren(&HAnimSegment164);

HAnimJoint& HAnimJoint172 =  HAnimJoint();
HAnimJoint172.X3DNode::setName(std::string("l_tarsal_proximal_interphalangeal_3"));
HAnimJoint172.setDEF(std::string("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimJoint172.setCenter(new float[]{0.15,-1.05,0.0});
HAnimSegment& HAnimSegment173 =  HAnimSegment();
HAnimSegment173.X3DNode::setName(std::string("l_tarsal_middle_phalanx_3"));
HAnimSegment173.setDEF(std::string("hanim_l_tarsal_middle_phalanx_3"));
Transform& Transform174 =  Transform();
Transform174.setTranslation(new float[]{0.15,-1.05,0.0});
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
IndexedLineSet179.setDEF(std::string("PIP3toDIP3"));
IndexedLineSet179.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate180 =  Coordinate();
Coordinate180.setPoint(new float[]{0.15,-1.05,0.0,0.15,-1.13,0.0}, 6);
IndexedLineSet179.setCoord(&Coordinate180);

Shape176.setGeometry(&IndexedLineSet179);

HAnimSegment173.addChild(&Shape176);

HAnimJoint172.addChildren(&HAnimSegment173);

HAnimJoint& HAnimJoint181 =  HAnimJoint();
HAnimJoint181.X3DNode::setName(std::string("l_tarsal_distal_interphalangeal_3"));
HAnimJoint181.setDEF(std::string("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimJoint181.setCenter(new float[]{0.15,-1.13,0.0});
HAnimSegment& HAnimSegment182 =  HAnimSegment();
HAnimSegment182.X3DNode::setName(std::string("l_tarsal_distal_phalanx_3"));
HAnimSegment182.setDEF(std::string("hanim_l_tarsal_distal_phalanx_3"));
Transform& Transform183 =  Transform();
Transform183.setTranslation(new float[]{0.15,-1.13,0.0});
Shape& Shape184 =  Shape();
Shape184.setUSE(std::string("HAnimJointShape"));
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
IndexedLineSet188.setDEF(std::string("tiptoe_l_tarsal_distal_interphalangeal_3"));
IndexedLineSet188.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate189 =  Coordinate();
Coordinate189.setPoint(new float[]{0.15,-1.13,0.0,0.15,-1.16,0.0}, 6);
IndexedLineSet188.setCoord(&Coordinate189);

Shape185.setGeometry(&IndexedLineSet188);

HAnimSegment182.addChild(&Shape185);

HAnimJoint181.addChildren(&HAnimSegment182);

HAnimJoint172.addChildren(&HAnimJoint181);

HAnimJoint163.addChildren(&HAnimJoint172);

HAnimJoint154.addChildren(&HAnimJoint163);

HAnimJoint145.addChildren(&HAnimJoint154);

HAnimJoint45.addChildren(&HAnimJoint145);

HAnimJoint28.addChildren(&HAnimJoint45);

//CC
HAnimJoint& HAnimJoint190 =  HAnimJoint();
HAnimJoint190.X3DNode::setName(std::string("l_calcaneocuboid"));
HAnimJoint190.setDEF(std::string("hanim_l_calcaneocuboid"));
HAnimJoint190.setCenter(new float[]{0.2,0.3,0.0});
HAnimSegment& HAnimSegment191 =  HAnimSegment();
HAnimSegment191.X3DNode::setName(std::string("l_calcaneus"));
HAnimSegment191.setDEF(std::string("hanim_l_calcaneus"));
Transform& Transform192 =  Transform();
Transform192.setTranslation(new float[]{0.2,0.3,0.0});
Shape& Shape193 =  Shape();
Shape193.setUSE(std::string("HAnimJointShape"));
Transform192.addChild(&Shape193);

HAnimSegment191.addChild(&Transform192);

Shape& Shape194 =  Shape();
Appearance& Appearance195 =  Appearance();
Appearance195.setContainerField("appearance");
Material& Material196 =  Material();
Material196.setContainerField("material");
Material196.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance195.addChild(&Material196);

Shape194.addChild(&Appearance195);

IndexedLineSet& IndexedLineSet197 =  IndexedLineSet();
IndexedLineSet197.setDEF(std::string("CCtoTT"));
IndexedLineSet197.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate198 =  Coordinate();
Coordinate198.setPoint(new float[]{0.2,0.3,0.0,0.21,-0.3,0.0}, 6);
IndexedLineSet197.setCoord(&Coordinate198);

Shape194.setGeometry(&IndexedLineSet197);

HAnimSegment191.addChild(&Shape194);

HAnimJoint190.addChildren(&HAnimSegment191);

//TT
HAnimJoint& HAnimJoint199 =  HAnimJoint();
HAnimJoint199.X3DNode::setName(std::string("l_transversetarsal"));
HAnimJoint199.setDEF(std::string("hanim_l_transversetarsal"));
HAnimJoint199.setCenter(new float[]{0.21,-0.3,0.0});
HAnimSegment& HAnimSegment200 =  HAnimSegment();
HAnimSegment200.X3DNode::setName(std::string("l_cuboid"));
HAnimSegment200.setDEF(std::string("hanim_l_cuboid"));
Transform& Transform201 =  Transform();
Transform201.setTranslation(new float[]{0.21,-0.3,0.0});
Shape& Shape202 =  Shape();
Shape202.setUSE(std::string("HAnimJointShape"));
Transform201.addChild(&Shape202);

HAnimSegment200.addChild(&Transform201);

Shape& Shape203 =  Shape();
Appearance& Appearance204 =  Appearance();
Appearance204.setContainerField("appearance");
Material& Material205 =  Material();
Material205.setContainerField("material");
Material205.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance204.addChild(&Material205);

Shape203.addChild(&Appearance204);

IndexedLineSet& IndexedLineSet206 =  IndexedLineSet();
IndexedLineSet206.setDEF(std::string("TTtoTMT4"));
IndexedLineSet206.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate207 =  Coordinate();
Coordinate207.setPoint(new float[]{0.21,-0.3,0.0,0.25,-0.58,0.0}, 6);
IndexedLineSet206.setCoord(&Coordinate207);

Shape203.setGeometry(&IndexedLineSet206);

HAnimSegment200.addChild(&Shape203);

Shape& Shape208 =  Shape();
Appearance& Appearance209 =  Appearance();
Appearance209.setContainerField("appearance");
Material& Material210 =  Material();
Material210.setContainerField("material");
Material210.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance209.addChild(&Material210);

Shape208.addChild(&Appearance209);

IndexedLineSet& IndexedLineSet211 =  IndexedLineSet();
IndexedLineSet211.setDEF(std::string("TTtoTMT5"));
IndexedLineSet211.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate212 =  Coordinate();
Coordinate212.setPoint(new float[]{0.21,-0.3,0.0,0.33,-0.52,0.0}, 6);
IndexedLineSet211.setCoord(&Coordinate212);

Shape208.setGeometry(&IndexedLineSet211);

HAnimSegment200.addChild(&Shape208);

HAnimJoint199.addChildren(&HAnimSegment200);

//TMT4
HAnimJoint& HAnimJoint213 =  HAnimJoint();
HAnimJoint213.X3DNode::setName(std::string("l_tarsometatarsal_4"));
HAnimJoint213.setDEF(std::string("hanim_l_tarsometatarsal_4"));
HAnimJoint213.setCenter(new float[]{0.25,-0.58,0.0});
HAnimSegment& HAnimSegment214 =  HAnimSegment();
HAnimSegment214.X3DNode::setName(std::string("l_metatarsal_4"));
HAnimSegment214.setDEF(std::string("hanim_l_metatarsal_4"));
Transform& Transform215 =  Transform();
Transform215.setTranslation(new float[]{0.25,-0.58,0.0});
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
IndexedLineSet220.setDEF(std::string("TMT4toMTP4"));
IndexedLineSet220.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate221 =  Coordinate();
Coordinate221.setPoint(new float[]{0.25,-0.58,0.0,0.25,-0.87,0.0}, 6);
IndexedLineSet220.setCoord(&Coordinate221);

Shape217.setGeometry(&IndexedLineSet220);

HAnimSegment214.addChild(&Shape217);

HAnimJoint213.addChildren(&HAnimSegment214);

HAnimJoint& HAnimJoint222 =  HAnimJoint();
HAnimJoint222.X3DNode::setName(std::string("l_metatarsophalangeal_4"));
HAnimJoint222.setDEF(std::string("hanim_l_metatarsophalangeal_4"));
HAnimJoint222.setCenter(new float[]{0.25,-0.87,0.0});
HAnimSegment& HAnimSegment223 =  HAnimSegment();
HAnimSegment223.X3DNode::setName(std::string("l_tarsal_proximal_phalanx_4"));
HAnimSegment223.setDEF(std::string("hanim_l_tarsal_proximal_phalanx_4"));
Transform& Transform224 =  Transform();
Transform224.setTranslation(new float[]{0.25,-0.87,0.0});
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
IndexedLineSet229.setDEF(std::string("MTP4toPIP4"));
IndexedLineSet229.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate230 =  Coordinate();
Coordinate230.setPoint(new float[]{0.25,-0.87,0.0,0.25,-1.0,0.0}, 6);
IndexedLineSet229.setCoord(&Coordinate230);

Shape226.setGeometry(&IndexedLineSet229);

HAnimSegment223.addChild(&Shape226);

HAnimJoint222.addChildren(&HAnimSegment223);

HAnimJoint& HAnimJoint231 =  HAnimJoint();
HAnimJoint231.X3DNode::setName(std::string("l_tarsal_proximal_interphalangeal_4"));
HAnimJoint231.setDEF(std::string("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimJoint231.setCenter(new float[]{0.25,-1.0,0.0});
HAnimSegment& HAnimSegment232 =  HAnimSegment();
HAnimSegment232.X3DNode::setName(std::string("l_tarsal_middle_phalanx_4"));
HAnimSegment232.setDEF(std::string("hanim_l_tarsal_middle_phalanx_4"));
Transform& Transform233 =  Transform();
Transform233.setTranslation(new float[]{0.25,-1.0,0.0});
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
IndexedLineSet238.setDEF(std::string("PIP4toDIP4"));
IndexedLineSet238.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate239 =  Coordinate();
Coordinate239.setPoint(new float[]{0.25,-1.0,0.0,0.25,-1.1,0.0}, 6);
IndexedLineSet238.setCoord(&Coordinate239);

Shape235.setGeometry(&IndexedLineSet238);

HAnimSegment232.addChild(&Shape235);

HAnimJoint231.addChildren(&HAnimSegment232);

HAnimJoint& HAnimJoint240 =  HAnimJoint();
HAnimJoint240.X3DNode::setName(std::string("l_tarsal_distal_interphalangeal_4"));
HAnimJoint240.setDEF(std::string("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimJoint240.setCenter(new float[]{0.25,-1.1,0.0});
HAnimSegment& HAnimSegment241 =  HAnimSegment();
HAnimSegment241.X3DNode::setName(std::string("l_tarsal_distal_phalanx_4"));
HAnimSegment241.setDEF(std::string("hanim_l_tarsal_distal_phalanx_4"));
Transform& Transform242 =  Transform();
Transform242.setTranslation(new float[]{0.25,-1.1,0.0});
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
IndexedLineSet247.setDEF(std::string("tiptoe_l_tarsal_distal_interphalangeal_4"));
IndexedLineSet247.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate248 =  Coordinate();
Coordinate248.setPoint(new float[]{0.25,-1.1,0.0,0.25,-1.15,0.0}, 6);
IndexedLineSet247.setCoord(&Coordinate248);

Shape244.setGeometry(&IndexedLineSet247);

HAnimSegment241.addChild(&Shape244);

HAnimJoint240.addChildren(&HAnimSegment241);

HAnimJoint231.addChildren(&HAnimJoint240);

HAnimJoint222.addChildren(&HAnimJoint231);

HAnimJoint213.addChildren(&HAnimJoint222);

HAnimJoint199.addChildren(&HAnimJoint213);

//TMT5
HAnimJoint& HAnimJoint249 =  HAnimJoint();
HAnimJoint249.X3DNode::setName(std::string("l_tarsometatarsal_5"));
HAnimJoint249.setDEF(std::string("hanim_l_tarsometatarsal_5"));
HAnimJoint249.setCenter(new float[]{0.33,-0.52,0.0});
HAnimSegment& HAnimSegment250 =  HAnimSegment();
HAnimSegment250.X3DNode::setName(std::string("l_metatarsal_5"));
HAnimSegment250.setDEF(std::string("hanim_l_metatarsal_5"));
Transform& Transform251 =  Transform();
Transform251.setTranslation(new float[]{0.33,-0.52,0.0});
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
IndexedLineSet256.setDEF(std::string("TMT5toMTP5"));
IndexedLineSet256.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate257 =  Coordinate();
Coordinate257.setPoint(new float[]{0.33,-0.52,0.0,0.34,-0.8,0.0}, 6);
IndexedLineSet256.setCoord(&Coordinate257);

Shape253.setGeometry(&IndexedLineSet256);

HAnimSegment250.addChild(&Shape253);

HAnimJoint249.addChildren(&HAnimSegment250);

HAnimJoint& HAnimJoint258 =  HAnimJoint();
HAnimJoint258.X3DNode::setName(std::string("l_metatarsophalangeal_5"));
HAnimJoint258.setDEF(std::string("hanim_l_metatarsophalangeal_5"));
HAnimJoint258.setCenter(new float[]{0.34,-0.8,0.0});
HAnimSegment& HAnimSegment259 =  HAnimSegment();
HAnimSegment259.X3DNode::setName(std::string("l_tarsal_proximal_phalanx_5"));
HAnimSegment259.setDEF(std::string("hanim_l_tarsal_proximal_phalanx_5"));
Transform& Transform260 =  Transform();
Transform260.setTranslation(new float[]{0.34,-0.8,0.0});
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
IndexedLineSet265.setDEF(std::string("MTP5toPIP5"));
IndexedLineSet265.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate266 =  Coordinate();
Coordinate266.setPoint(new float[]{0.34,-0.8,0.0,0.34,-0.95,0.0}, 6);
IndexedLineSet265.setCoord(&Coordinate266);

Shape262.setGeometry(&IndexedLineSet265);

HAnimSegment259.addChild(&Shape262);

HAnimJoint258.addChildren(&HAnimSegment259);

HAnimJoint& HAnimJoint267 =  HAnimJoint();
HAnimJoint267.X3DNode::setName(std::string("l_tarsal_proximal_interphalangeal_5"));
HAnimJoint267.setDEF(std::string("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimJoint267.setCenter(new float[]{0.34,-0.95,0.0});
HAnimSegment& HAnimSegment268 =  HAnimSegment();
HAnimSegment268.X3DNode::setName(std::string("l_tarsal_middle_phalanx_5"));
HAnimSegment268.setDEF(std::string("hanim_l_tarsal_middle_phalanx_5"));
Transform& Transform269 =  Transform();
Transform269.setTranslation(new float[]{0.34,-0.95,0.0});
Shape& Shape270 =  Shape();
Shape270.setUSE(std::string("HAnimJointShape"));
Transform269.addChild(&Shape270);

HAnimSegment268.addChild(&Transform269);

Shape& Shape271 =  Shape();
Appearance& Appearance272 =  Appearance();
Appearance272.setContainerField("appearance");
Material& Material273 =  Material();
Material273.setContainerField("material");
Material273.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance272.addChild(&Material273);

Shape271.addChild(&Appearance272);

IndexedLineSet& IndexedLineSet274 =  IndexedLineSet();
IndexedLineSet274.setDEF(std::string("PIP5toDIP5"));
IndexedLineSet274.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate275 =  Coordinate();
Coordinate275.setPoint(new float[]{0.34,-0.95,0.0,0.34,-1.05,0.0}, 6);
IndexedLineSet274.setCoord(&Coordinate275);

Shape271.setGeometry(&IndexedLineSet274);

HAnimSegment268.addChild(&Shape271);

HAnimJoint267.addChildren(&HAnimSegment268);

HAnimJoint& HAnimJoint276 =  HAnimJoint();
HAnimJoint276.X3DNode::setName(std::string("l_tarsal_distal_interphalangeal_5"));
HAnimJoint276.setDEF(std::string("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimJoint276.setCenter(new float[]{0.34,-1.05,0.0});
HAnimSegment& HAnimSegment277 =  HAnimSegment();
HAnimSegment277.X3DNode::setName(std::string("l_tarsal_distal_phalanx_5"));
HAnimSegment277.setDEF(std::string("hanim_l_tarsal_distal_phalanx_5"));
Transform& Transform278 =  Transform();
Transform278.setTranslation(new float[]{0.34,-1.05,0.0});
Shape& Shape279 =  Shape();
Shape279.setUSE(std::string("HAnimJointShape"));
Transform278.addChild(&Shape279);

HAnimSegment277.addChild(&Transform278);

Shape& Shape280 =  Shape();
Appearance& Appearance281 =  Appearance();
Appearance281.setContainerField("appearance");
Material& Material282 =  Material();
Material282.setContainerField("material");
Material282.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance281.addChild(&Material282);

Shape280.addChild(&Appearance281);

IndexedLineSet& IndexedLineSet283 =  IndexedLineSet();
IndexedLineSet283.setDEF(std::string("tiptoe_l_tarsal_distal_interphalangeal_5"));
IndexedLineSet283.setCoordIndex(new int32_t[]{0,1}, 2);
Coordinate& Coordinate284 =  Coordinate();
Coordinate284.setPoint(new float[]{0.34,-1.05,0.0,0.34,-1.08,0.0}, 6);
IndexedLineSet283.setCoord(&Coordinate284);

Shape280.setGeometry(&IndexedLineSet283);

HAnimSegment277.addChild(&Shape280);

HAnimJoint276.addChildren(&HAnimSegment277);

HAnimJoint267.addChildren(&HAnimJoint276);

HAnimJoint258.addChildren(&HAnimJoint267);

HAnimJoint249.addChildren(&HAnimJoint258);

HAnimJoint199.addChildren(&HAnimJoint249);

HAnimJoint190.addChildren(&HAnimJoint199);

HAnimJoint28.addChildren(&HAnimJoint190);

HAnimJoint27.addChildren(&HAnimJoint28);

HAnimHumanoid24.setSkeleton(&HAnimJoint27);

HAnimJoint& HAnimJoint285 =  HAnimJoint();
HAnimJoint285.setContainerField("joints");
HAnimJoint285.setUSE(std::string("hanim_humanoid_root"));
HAnimHumanoid24.setJoints(&HAnimJoint285);

HAnimJoint& HAnimJoint286 =  HAnimJoint();
HAnimJoint286.setContainerField("joints");
HAnimJoint286.setUSE(std::string("hanim_l_calcaneocuboid"));
HAnimHumanoid24.setJoints(&HAnimJoint286);

HAnimJoint& HAnimJoint287 =  HAnimJoint();
HAnimJoint287.setContainerField("joints");
HAnimJoint287.setUSE(std::string("hanim_l_cuneonavicular_1"));
HAnimHumanoid24.setJoints(&HAnimJoint287);

HAnimJoint& HAnimJoint288 =  HAnimJoint();
HAnimJoint288.setContainerField("joints");
HAnimJoint288.setUSE(std::string("hanim_l_cuneonavicular_2"));
HAnimHumanoid24.setJoints(&HAnimJoint288);

HAnimJoint& HAnimJoint289 =  HAnimJoint();
HAnimJoint289.setContainerField("joints");
HAnimJoint289.setUSE(std::string("hanim_l_cuneonavicular_3"));
HAnimHumanoid24.setJoints(&HAnimJoint289);

HAnimJoint& HAnimJoint290 =  HAnimJoint();
HAnimJoint290.setContainerField("joints");
HAnimJoint290.setUSE(std::string("hanim_l_metatarsophalangeal_1"));
HAnimHumanoid24.setJoints(&HAnimJoint290);

HAnimJoint& HAnimJoint291 =  HAnimJoint();
HAnimJoint291.setContainerField("joints");
HAnimJoint291.setUSE(std::string("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid24.setJoints(&HAnimJoint291);

HAnimJoint& HAnimJoint292 =  HAnimJoint();
HAnimJoint292.setContainerField("joints");
HAnimJoint292.setUSE(std::string("hanim_l_metatarsophalangeal_3"));
HAnimHumanoid24.setJoints(&HAnimJoint292);

HAnimJoint& HAnimJoint293 =  HAnimJoint();
HAnimJoint293.setContainerField("joints");
HAnimJoint293.setUSE(std::string("hanim_l_metatarsophalangeal_4"));
HAnimHumanoid24.setJoints(&HAnimJoint293);

HAnimJoint& HAnimJoint294 =  HAnimJoint();
HAnimJoint294.setContainerField("joints");
HAnimJoint294.setUSE(std::string("hanim_l_metatarsophalangeal_5"));
HAnimHumanoid24.setJoints(&HAnimJoint294);

HAnimJoint& HAnimJoint295 =  HAnimJoint();
HAnimJoint295.setContainerField("joints");
HAnimJoint295.setUSE(std::string("hanim_l_talocalcaneonavicular"));
HAnimHumanoid24.setJoints(&HAnimJoint295);

HAnimJoint& HAnimJoint296 =  HAnimJoint();
HAnimJoint296.setContainerField("joints");
HAnimJoint296.setUSE(std::string("hanim_l_talocrural"));
HAnimHumanoid24.setJoints(&HAnimJoint296);

HAnimJoint& HAnimJoint297 =  HAnimJoint();
HAnimJoint297.setContainerField("joints");
HAnimJoint297.setUSE(std::string("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid24.setJoints(&HAnimJoint297);

HAnimJoint& HAnimJoint298 =  HAnimJoint();
HAnimJoint298.setContainerField("joints");
HAnimJoint298.setUSE(std::string("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimHumanoid24.setJoints(&HAnimJoint298);

HAnimJoint& HAnimJoint299 =  HAnimJoint();
HAnimJoint299.setContainerField("joints");
HAnimJoint299.setUSE(std::string("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimHumanoid24.setJoints(&HAnimJoint299);

HAnimJoint& HAnimJoint300 =  HAnimJoint();
HAnimJoint300.setContainerField("joints");
HAnimJoint300.setUSE(std::string("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimHumanoid24.setJoints(&HAnimJoint300);

HAnimJoint& HAnimJoint301 =  HAnimJoint();
HAnimJoint301.setContainerField("joints");
HAnimJoint301.setUSE(std::string("hanim_l_tarsal_interphalangeal_1"));
HAnimHumanoid24.setJoints(&HAnimJoint301);

HAnimJoint& HAnimJoint302 =  HAnimJoint();
HAnimJoint302.setContainerField("joints");
HAnimJoint302.setUSE(std::string("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid24.setJoints(&HAnimJoint302);

HAnimJoint& HAnimJoint303 =  HAnimJoint();
HAnimJoint303.setContainerField("joints");
HAnimJoint303.setUSE(std::string("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid24.setJoints(&HAnimJoint303);

HAnimJoint& HAnimJoint304 =  HAnimJoint();
HAnimJoint304.setContainerField("joints");
HAnimJoint304.setUSE(std::string("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid24.setJoints(&HAnimJoint304);

HAnimJoint& HAnimJoint305 =  HAnimJoint();
HAnimJoint305.setContainerField("joints");
HAnimJoint305.setUSE(std::string("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid24.setJoints(&HAnimJoint305);

HAnimJoint& HAnimJoint306 =  HAnimJoint();
HAnimJoint306.setContainerField("joints");
HAnimJoint306.setUSE(std::string("hanim_l_tarsometatarsal_1"));
HAnimHumanoid24.setJoints(&HAnimJoint306);

HAnimJoint& HAnimJoint307 =  HAnimJoint();
HAnimJoint307.setContainerField("joints");
HAnimJoint307.setUSE(std::string("hanim_l_tarsometatarsal_2"));
HAnimHumanoid24.setJoints(&HAnimJoint307);

HAnimJoint& HAnimJoint308 =  HAnimJoint();
HAnimJoint308.setContainerField("joints");
HAnimJoint308.setUSE(std::string("hanim_l_tarsometatarsal_3"));
HAnimHumanoid24.setJoints(&HAnimJoint308);

HAnimJoint& HAnimJoint309 =  HAnimJoint();
HAnimJoint309.setContainerField("joints");
HAnimJoint309.setUSE(std::string("hanim_l_tarsometatarsal_4"));
HAnimHumanoid24.setJoints(&HAnimJoint309);

HAnimJoint& HAnimJoint310 =  HAnimJoint();
HAnimJoint310.setContainerField("joints");
HAnimJoint310.setUSE(std::string("hanim_l_tarsometatarsal_5"));
HAnimHumanoid24.setJoints(&HAnimJoint310);

HAnimJoint& HAnimJoint311 =  HAnimJoint();
HAnimJoint311.setContainerField("joints");
HAnimJoint311.setUSE(std::string("hanim_l_transversetarsal"));
HAnimHumanoid24.setJoints(&HAnimJoint311);

Scene22.addChild(&HAnimHumanoid24);

X3D0.setScene(&Scene22);

//}
