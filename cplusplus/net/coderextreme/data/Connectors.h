#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
int Connectors(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Full"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("comment"));
meta2.setContent(std::string("World of Titania"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("created"));
meta3.setContent(std::string("Fri, 04 Sep 2015 10:19:01 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("generator"));
meta5.setContent(std::string("Titania V3.0.4, https://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("identifier"));
meta6.setContent(std::string("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("modified"));
meta7.setContent(std::string("Tue, 25 Jul 2017 09:42:17 GMT"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("title"));
meta8.setContent(std::string("Connectors"));
head1.addMeta(&meta8);

X3D0.setHead(&head1);

Scene& Scene9 =  Scene();
ProtoDeclare& ProtoDeclare10 =  ProtoDeclare();
ProtoDeclare10.setName(std::string("RoundedRectangle2D"));
ProtoInterface& ProtoInterface11 =  ProtoInterface();
field& field12 =  field();
field12.setName(std::string("cornerRadius"));
field12.setAccessType(std::string("initializeOnly"));
field12.setType(std::string("SFFloat"));
field12.setValue(std::string("1"));
ProtoInterface11.addChild(&field12);

field& field13 =  field();
field13.setName(std::string("size"));
field13.setAccessType(std::string("initializeOnly"));
field13.setType(std::string("SFVec2f"));
field13.setValue(std::string("2 2"));
ProtoInterface11.addChild(&field13);

field& field14 =  field();
field14.setName(std::string("solid"));
field14.setAccessType(std::string("initializeOnly"));
field14.setType(std::string("SFBool"));
field14.setValue(std::string("true"));
ProtoInterface11.addChild(&field14);

ProtoDeclare10.addChild(&ProtoInterface11);

ProtoBody& ProtoBody15 =  ProtoBody();
IndexedFaceSet& IndexedFaceSet16 =  IndexedFaceSet();
IndexedFaceSet16.setDEF(std::string("Geometry"));
IS& IS17 =  IS();
Connect& connect18 =  Connect();
connect18.setNodeField(std::string("solid"));
connect18.setProtoField(std::string("solid"));
IS17.addChild(&connect18);

IndexedFaceSet16.addChild(&IS17);

Coordinate& Coordinate19 =  Coordinate();
IndexedFaceSet16.setCoord(&Coordinate19);

ProtoBody15.addChild(&IndexedFaceSet16);

Script& Script20 =  Script();
Script20.setDEF(std::string("RoundedRectangle2D"));
Script20.setDirectOutput(true);
field& field21 =  field();
field21.setName(std::string("cornerDimension"));
field21.setAccessType(std::string("initializeOnly"));
field21.setType(std::string("SFFloat"));
field21.setValue(std::string("10"));
Script20.addChild(&field21);

field& field22 =  field();
field22.setName(std::string("cornerRadius"));
field22.setAccessType(std::string("initializeOnly"));
field22.setType(std::string("SFFloat"));
Script20.addChild(&field22);

field& field23 =  field();
field23.setName(std::string("size"));
field23.setAccessType(std::string("initializeOnly"));
field23.setType(std::string("SFVec2f"));
Script20.addChild(&field23);

field& field24 =  field();
field24.setName(std::string("geometry"));
field24.setAccessType(std::string("initializeOnly"));
field24.setType(std::string("SFNode"));
IndexedFaceSet& IndexedFaceSet25 =  IndexedFaceSet();
IndexedFaceSet25.setUSE(std::string("Geometry"));
field24.addChild(IndexedFaceSet25);

Script20.addChild(&field24);

IS& IS26 =  IS();
Connect& connect27 =  Connect();
connect27.setNodeField(std::string("cornerRadius"));
connect27.setProtoField(std::string("cornerRadius"));
IS26.addChild(&connect27);

Connect& connect28 =  Connect();
connect28.setNodeField(std::string("size"));
connect28.setProtoField(std::string("size"));
IS26.addChild(&connect28);

Script20.addChild(&IS26);


//Script20.setSourceCode(std::string("ecmascript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	var point         = new SFVec3f (cornerRadius, 0, 0);")+
//_T("	var startRotation = new SFRotation ();")+
//_T("	var endRotation   = new SFRotation (0, 0, 1, Math .PI / 2);")+
//_T("	var corner        = new MFVec3f ();")+
//_T("	var coordIndex    = new MFInt32 ();")+
//_T("	var points        = new MFVec3f ();")+
//_T("	for (var i = 0; i < cornerDimension * 4; ++ i)")+
//_T("		coordIndex [coordIndex .length] = i;")+
//_T("	geometry .coordIndex = coordIndex;")+
//_T("	for (var i = 0; i < cornerDimension; ++i)")+
//_T("		corner [i] = startRotation .slerp (endRotation, i / (cornerDimension - 1)) .multVec (point);")+
//_T("	var translation = new SFVec3f (size .x / 2 - cornerRadius, size .y / 2 - cornerRadius, 0);")+
//_T("	for (var i = 0; i < cornerDimension; ++ i)")+
//_T("		points [points .length] = corner [i] .add (translation);")+
//_T("	var translation = new SFVec3f (-size .x / 2 + cornerRadius, size .y / 2 - cornerRadius, 0);")+
//_T("	var rotation    = new SFRotation (0, 0, 1, Math .PI * 0.5);")+
//_T("	for (var i = 0; i < cornerDimension; ++ i)")+
//_T("		points [points .length] = rotation .multVec (corner [i]) .add (translation);")+
//_T("	var translation = new SFVec3f (-size .x / 2 + cornerRadius, -size .y / 2 + cornerRadius, 0);")+
//_T("	var rotation    = new SFRotation (0, 0, 1, Math .PI);")+
//_T("	for (var i = 0; i < cornerDimension; ++ i)")+
//_T("		points [points .length] = rotation .multVec (corner [i]) .add (translation);")+
//_T("	var translation = new SFVec3f (size .x / 2 - cornerRadius, -size .y / 2 + cornerRadius, 0);")+
//_T("	var rotation    = new SFRotation (0, 0, 1, Math .PI * 1.5);")+
//_T("	for (var i = 0; i < cornerDimension; ++ i)")+
//_T("		points [points .length] = rotation .multVec (corner [i]) .add (translation);")+
//_T("	geometry .coord .point = points;")+
//_T("}"));
ProtoBody15.addChild(&Script20);

ProtoDeclare10.addChild(&ProtoBody15);

Scene9.addChild(&ProtoDeclare10);

ProtoDeclare& ProtoDeclare29 =  ProtoDeclare();
ProtoDeclare29.setName(std::string("Widget"));
ProtoInterface& ProtoInterface30 =  ProtoInterface();
field& field31 =  field();
field31.setName(std::string("fillColor"));
field31.setAccessType(std::string("inputOutput"));
field31.setType(std::string("SFColor"));
field31.setValue(std::string("0.1 0.1 0.1"));
ProtoInterface30.addChild(&field31);

field& field32 =  field();
field32.setName(std::string("lineColor"));
field32.setAccessType(std::string("inputOutput"));
field32.setType(std::string("SFColor"));
field32.setValue(std::string("0.4 0.4 0.4"));
ProtoInterface30.addChild(&field32);

field& field33 =  field();
field33.setName(std::string("linewidthScaleFactor"));
field33.setAccessType(std::string("inputOutput"));
field33.setType(std::string("SFFloat"));
field33.setValue(std::string("1"));
ProtoInterface30.addChild(&field33);

field& field34 =  field();
field34.setName(std::string("geometry"));
field34.setAccessType(std::string("inputOutput"));
field34.setType(std::string("SFNode"));
ProtoInterface30.addChild(&field34);

ProtoDeclare29.addChild(&ProtoInterface30);

ProtoBody& ProtoBody35 =  ProtoBody();
Transform& Transform36 =  Transform();
Transform36.setDEF(std::string("Shape"));
Shape& Shape37 =  Shape();
IS& IS38 =  IS();
Connect& connect39 =  Connect();
connect39.setNodeField(std::string("geometry"));
connect39.setProtoField(std::string("geometry"));
IS38.addChild(&connect39);

Shape37.addChild(&IS38);

Appearance& Appearance40 =  Appearance();
Appearance40.setContainerField("appearance");
Material& Material41 =  Material();
Material41.setContainerField("material");
IS& IS42 =  IS();
Connect& connect43 =  Connect();
connect43.setNodeField(std::string("diffuseColor"));
connect43.setProtoField(std::string("fillColor"));
IS42.addChild(&connect43);

Material41.addChild(&IS42);

Appearance40.addChild(&Material41);

Shape37.addChild(&Appearance40);

Transform36.addChild(&Shape37);

Shape& Shape44 =  Shape();
IS& IS45 =  IS();
Connect& connect46 =  Connect();
connect46.setNodeField(std::string("geometry"));
connect46.setProtoField(std::string("geometry"));
IS45.addChild(&connect46);

Shape44.addChild(&IS45);

Appearance& Appearance47 =  Appearance();
Appearance47.setContainerField("appearance");
FillProperties& FillProperties48 =  FillProperties();
FillProperties48.setContainerField("fillProperties");
FillProperties48.setFilled(false);
FillProperties48.setHatched(false);
Appearance47.setFillProperties(FillProperties48);

LineProperties& LineProperties49 =  LineProperties();
LineProperties49.setContainerField("lineProperties");
IS& IS50 =  IS();
Connect& connect51 =  Connect();
connect51.setNodeField(std::string("linewidthScaleFactor"));
connect51.setProtoField(std::string("linewidthScaleFactor"));
IS50.addChild(&connect51);

LineProperties49.addChild(&IS50);

Appearance47.setLineProperties(LineProperties49);

Material& Material52 =  Material();
Material52.setContainerField("material");
Material52.setDiffuseColor(new float[]{0.0,0.0,0.0});
IS& IS53 =  IS();
Connect& connect54 =  Connect();
connect54.setNodeField(std::string("emissiveColor"));
connect54.setProtoField(std::string("lineColor"));
IS53.addChild(&connect54);

Material52.addChild(&IS53);

Appearance47.addChild(&Material52);

Shape44.addChild(&Appearance47);

Transform36.addChild(&Shape44);

ProtoBody35.addChild(&Transform36);

ProtoDeclare29.addChild(&ProtoBody35);

Scene9.addChild(&ProtoDeclare29);

ProtoDeclare& ProtoDeclare55 =  ProtoDeclare();
ProtoDeclare55.setName(std::string("Node"));
ProtoInterface& ProtoInterface56 =  ProtoInterface();
field& field57 =  field();
field57.setName(std::string("translation"));
field57.setAccessType(std::string("inputOutput"));
field57.setType(std::string("SFVec3f"));
ProtoInterface56.addChild(&field57);

ProtoDeclare55.addChild(&ProtoInterface56);

ProtoBody& ProtoBody58 =  ProtoBody();
Group& Group59 =  Group();
PlaneSensor& PlaneSensor60 =  PlaneSensor();
PlaneSensor60.setDEF(std::string("PlaneSensor"));
Group59.addChild(&PlaneSensor60);

Transform& Transform61 =  Transform();
Transform61.setDEF(std::string("Node"));
IS& IS62 =  IS();
Connect& connect63 =  Connect();
connect63.setNodeField(std::string("translation"));
connect63.setProtoField(std::string("translation"));
IS62.addChild(&connect63);

Transform61.addChild(&IS62);

ProtoInstance& ProtoInstance64 =  ProtoInstance();
ProtoInstance64.setName(std::string("Widget"));
fieldValue& fieldValue65 =  fieldValue();
fieldValue65.setName(std::string("geometry"));
ProtoInstance& ProtoInstance66 =  ProtoInstance();
ProtoInstance66.setName(std::string("RoundedRectangle2D"));
fieldValue& fieldValue67 =  fieldValue();
fieldValue67.setName(std::string("cornerRadius"));
fieldValue67.setValue(std::string("0.12"));
ProtoInstance66.addChild(&fieldValue67);

fieldValue& fieldValue68 =  fieldValue();
fieldValue68.setName(std::string("size"));
fieldValue68.setValue(std::string("2 1"));
ProtoInstance66.addChild(&fieldValue68);

fieldValue65.addChild(&ProtoInstance66);

ProtoInstance64.addChild(&fieldValue65);

Transform61.addChild(&ProtoInstance64);

Transform& Transform69 =  Transform();
Transform69.setDEF(std::string("Input"));
Transform69.setTranslation(new float[]{-1.0,0.0,0.0});
ProtoInstance& ProtoInstance70 =  ProtoInstance();
ProtoInstance70.setName(std::string("Widget"));
fieldValue& fieldValue71 =  fieldValue();
fieldValue71.setName(std::string("lineColor"));
fieldValue71.setValue(std::string("0.72 0.14 0.23"));
ProtoInstance70.addChild(&fieldValue71);

fieldValue& fieldValue72 =  fieldValue();
fieldValue72.setName(std::string("geometry"));
Disk2D& Disk2D73 =  Disk2D();
Disk2D73.setDEF(std::string("Connector"));
Disk2D73.setOuterRadius(0.2);
fieldValue72.addChild(Disk2D73);

ProtoInstance70.addChild(&fieldValue72);

Transform69.addChild(&ProtoInstance70);

Transform61.addChild(&Transform69);

Transform& Transform74 =  Transform();
Transform74.setDEF(std::string("Output"));
Transform74.setTranslation(new float[]{1.0,0.0,0.0});
ProtoInstance& ProtoInstance75 =  ProtoInstance();
ProtoInstance75.setName(std::string("Widget"));
fieldValue& fieldValue76 =  fieldValue();
fieldValue76.setName(std::string("lineColor"));
fieldValue76.setValue(std::string("0.44 0.5 0.72"));
ProtoInstance75.addChild(&fieldValue76);

fieldValue& fieldValue77 =  fieldValue();
fieldValue77.setName(std::string("geometry"));
Disk2D& Disk2D78 =  Disk2D();
Disk2D78.setUSE(std::string("Connector"));
fieldValue77.addChild(Disk2D78);

ProtoInstance75.addChild(&fieldValue77);

Transform74.addChild(&ProtoInstance75);

Transform61.addChild(&Transform74);

Group59.addChild(&Transform61);

ProtoBody58.addChild(&Group59);

Script& Script79 =  Script();
Script79.setDirectOutput(true);
field& field80 =  field();
field80.setName(std::string("translation"));
field80.setAccessType(std::string("inputOutput"));
field80.setType(std::string("SFVec3f"));
Script79.addChild(&field80);

field& field81 =  field();
field81.setName(std::string("sensor"));
field81.setAccessType(std::string("initializeOnly"));
field81.setType(std::string("SFNode"));
PlaneSensor& PlaneSensor82 =  PlaneSensor();
PlaneSensor82.setUSE(std::string("PlaneSensor"));
field81.addChild(&PlaneSensor82);

Script79.addChild(&field81);

field& field83 =  field();
field83.setName(std::string("transform"));
field83.setAccessType(std::string("initializeOnly"));
field83.setType(std::string("SFNode"));
Transform& Transform84 =  Transform();
Transform84.setUSE(std::string("Node"));
field83.addChild(&Transform84);

Script79.addChild(&field83);

IS& IS85 =  IS();
Connect& connect86 =  Connect();
connect86.setNodeField(std::string("translation"));
connect86.setProtoField(std::string("translation"));
IS85.addChild(&connect86);

Script79.addChild(&IS85);


//Script79.setSourceCode(std::string("ecmascript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	sensor .offset = translation;")+
//_T("}"));
ProtoBody58.addChild(&Script79);

ROUTE& ROUTE87 =  ROUTE();
ROUTE87.setFromNode(std::string("PlaneSensor"));
ROUTE87.setFromField(std::string("translation_changed"));
ROUTE87.setToNode(std::string("Node"));
ROUTE87.setToField(std::string("set_translation"));
ProtoBody58.addChild(&ROUTE87);

ProtoDeclare55.addChild(&ProtoBody58);

Scene9.addChild(&ProtoDeclare55);

ProtoDeclare& ProtoDeclare88 =  ProtoDeclare();
ProtoDeclare88.setName(std::string("Route"));
ProtoInterface& ProtoInterface89 =  ProtoInterface();
field& field90 =  field();
field90.setName(std::string("lineColor"));
field90.setAccessType(std::string("inputOutput"));
field90.setType(std::string("SFColor"));
field90.setValue(std::string("0.43 0.43 0.98"));
ProtoInterface89.addChild(&field90);

field& field91 =  field();
field91.setName(std::string("linewidthScaleFactor"));
field91.setAccessType(std::string("inputOutput"));
field91.setType(std::string("SFFloat"));
field91.setValue(std::string("2"));
ProtoInterface89.addChild(&field91);

field& field92 =  field();
field92.setName(std::string("output"));
field92.setAccessType(std::string("initializeOnly"));
field92.setType(std::string("SFNode"));
ProtoInterface89.addChild(&field92);

field& field93 =  field();
field93.setName(std::string("input"));
field93.setAccessType(std::string("initializeOnly"));
field93.setType(std::string("SFNode"));
ProtoInterface89.addChild(&field93);

ProtoDeclare88.addChild(&ProtoInterface89);

ProtoBody& ProtoBody94 =  ProtoBody();
Shape& Shape95 =  Shape();
Appearance& Appearance96 =  Appearance();
Appearance96.setContainerField("appearance");
LineProperties& LineProperties97 =  LineProperties();
LineProperties97.setContainerField("lineProperties");
IS& IS98 =  IS();
Connect& connect99 =  Connect();
connect99.setNodeField(std::string("linewidthScaleFactor"));
connect99.setProtoField(std::string("linewidthScaleFactor"));
IS98.addChild(&connect99);

LineProperties97.addChild(&IS98);

Appearance96.setLineProperties(LineProperties97);

Material& Material100 =  Material();
Material100.setContainerField("material");
Material100.setDiffuseColor(new float[]{0.0,0.0,0.0});
IS& IS101 =  IS();
Connect& connect102 =  Connect();
connect102.setNodeField(std::string("emissiveColor"));
connect102.setProtoField(std::string("lineColor"));
IS101.addChild(&connect102);

Material100.addChild(&IS101);

Appearance96.addChild(&Material100);

Shape95.addChild(&Appearance96);

LineSet& LineSet103 =  LineSet();
LineSet103.setDEF(std::string("Geometry_1"));
LineSet103.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate104 =  Coordinate();
Coordinate104.setPoint(new float[]{-1.0,0.0,0.0,1.0,0.0,0.0}, 6);
LineSet103.setCoord(Coordinate104);

Shape95.setGeometry(&LineSet103);

ProtoBody94.addChild(&Shape95);

Script& Script105 =  Script();
Script105.setDEF(std::string("Route"));
Script105.setDirectOutput(true);
field& field106 =  field();
field106.setName(std::string("set_translation"));
field106.setAccessType(std::string("inputOnly"));
field106.setType(std::string("SFVec3f"));
Script105.addChild(&field106);

field& field107 =  field();
field107.setName(std::string("routeDimension"));
field107.setAccessType(std::string("initializeOnly"));
field107.setType(std::string("SFInt32"));
field107.setValue(std::string("21"));
Script105.addChild(&field107);

field& field108 =  field();
field108.setName(std::string("output"));
field108.setAccessType(std::string("initializeOnly"));
field108.setType(std::string("SFNode"));
Script105.addChild(&field108);

field& field109 =  field();
field109.setName(std::string("input"));
field109.setAccessType(std::string("initializeOnly"));
field109.setType(std::string("SFNode"));
Script105.addChild(&field109);

field& field110 =  field();
field110.setName(std::string("geometry"));
field110.setAccessType(std::string("initializeOnly"));
field110.setType(std::string("SFNode"));
LineSet& LineSet111 =  LineSet();
LineSet111.setUSE(std::string("Geometry_1"));
field110.addChild(LineSet111);

Script105.addChild(&field110);

field& field112 =  field();
field112.setName(std::string("self"));
field112.setAccessType(std::string("initializeOnly"));
field112.setType(std::string("SFNode"));
Script& Script113 =  Script();
Script113.setUSE(std::string("Route"));
field112.addChild(&Script113);

Script105.addChild(&field112);

IS& IS114 =  IS();
Connect& connect115 =  Connect();
connect115.setNodeField(std::string("output"));
connect115.setProtoField(std::string("output"));
IS114.addChild(&connect115);

Connect& connect116 =  Connect();
connect116.setNodeField(std::string("input"));
connect116.setProtoField(std::string("input"));
IS114.addChild(&connect116);

Script105.addChild(&IS114);


//Script105.setSourceCode(std::string("ecmascript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	Browser .addRoute (output, 'translation_changed', self, 'set_translation');")+
//_T("	Browser .addRoute (input,  'translation_changed', self, 'set_translation');")+
//_T("	set_translation ();")+
//_T("}")+
//_T("function set_translation ()")+
//_T("{")+
//_T("	geometry .vertexCount [0] = routeDimension;")+
//_T("	var outPoint = output .translation .add (new SFVec3f ( 1, 0, 0));")+
//_T("	var inPoint  = input  .translation .add (new SFVec3f (-1, 0, 0));")+
//_T("	var w = inPoint .x - outPoint .x;")+
//_T("	var h = outPoint .y - inPoint .y;")+
//_T("	for (var i = 0; i < routeDimension; ++ i)")+
//_T("	{")+
//_T("		var t = i / (routeDimension - 1);")+
//_T("		var y = h / 2 * (Math .cos (t * Math .PI) - 1);")+
//_T("		geometry .coord .point [i] = outPoint .add (new SFVec3f (t * w, y, 0));")+
//_T("	}")+
//_T("}"));
ProtoBody94.addChild(&Script105);

ProtoDeclare88.addChild(&ProtoBody94);

Scene9.addChild(&ProtoDeclare88);

NavigationInfo& NavigationInfo117 =  NavigationInfo();
NavigationInfo117.setType((std::string[]){"FLY", "ANY"}, 2);
Scene9.addChild(&NavigationInfo117);

Background& Background118 =  Background();
Background118.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene9.addChild(&Background118);

OrthoViewpoint& OrthoViewpoint119 =  OrthoViewpoint();
OrthoViewpoint119.setDescription(std::string("OthoViewpoint"));
OrthoViewpoint119.setPosition(new float[]{-3.13496,-4.19776,10.0});
OrthoViewpoint119.setCenterOfRotation(new float[]{-3.13496,-4.19776,0.0});
OrthoViewpoint119.setFieldOfView(new float[]{0.0,0.0,10.0,10.0});
Scene9.addChild(&OrthoViewpoint119);

Viewpoint& Viewpoint120 =  Viewpoint();
Viewpoint120.setDescription(std::string("Viewpoint"));
Scene9.addChild(&Viewpoint120);

Transform& Transform121 =  Transform();
Transform121.setDEF(std::string("Connectors"));
ProtoInstance& ProtoInstance122 =  ProtoInstance();
ProtoInstance122.setName(std::string("Route"));
fieldValue& fieldValue123 =  fieldValue();
fieldValue123.setName(std::string("output"));
ProtoInstance& ProtoInstance124 =  ProtoInstance();
ProtoInstance124.setName(std::string("Node"));
ProtoInstance124.setDEF(std::string("N1"));
fieldValue& fieldValue125 =  fieldValue();
fieldValue125.setName(std::string("translation"));
fieldValue125.setValue(std::string("-3.98323 2.88948 0"));
ProtoInstance124.addChild(&fieldValue125);

fieldValue123.addChild(&ProtoInstance124);

ProtoInstance122.addChild(&fieldValue123);

fieldValue& fieldValue126 =  fieldValue();
fieldValue126.setName(std::string("input"));
ProtoInstance& ProtoInstance127 =  ProtoInstance();
ProtoInstance127.setName(std::string("Node"));
ProtoInstance127.setDEF(std::string("N2"));
fieldValue& fieldValue128 =  fieldValue();
fieldValue128.setName(std::string("translation"));
fieldValue128.setValue(std::string("-0.0890862 2.96049 0"));
ProtoInstance127.addChild(&fieldValue128);

fieldValue126.addChild(&ProtoInstance127);

ProtoInstance122.addChild(&fieldValue126);

Transform121.addChild(&ProtoInstance122);

ProtoInstance& ProtoInstance129 =  ProtoInstance();
ProtoInstance129.setName(std::string("Route"));
fieldValue& fieldValue130 =  fieldValue();
fieldValue130.setName(std::string("output"));
ProtoInstance& ProtoInstance131 =  ProtoInstance();
ProtoInstance131.setName(std::string("Node"));
ProtoInstance131.setUSE(std::string("N1"));
fieldValue130.addChild(&ProtoInstance131);

ProtoInstance129.addChild(&fieldValue130);

fieldValue& fieldValue132 =  fieldValue();
fieldValue132.setName(std::string("input"));
ProtoInstance& ProtoInstance133 =  ProtoInstance();
ProtoInstance133.setName(std::string("Node"));
ProtoInstance133.setDEF(std::string("N3"));
fieldValue& fieldValue134 =  fieldValue();
fieldValue134.setName(std::string("translation"));
fieldValue134.setValue(std::string("-0.104169 1.16371 0"));
ProtoInstance133.addChild(&fieldValue134);

fieldValue132.addChild(&ProtoInstance133);

ProtoInstance129.addChild(&fieldValue132);

Transform121.addChild(&ProtoInstance129);

ProtoInstance& ProtoInstance135 =  ProtoInstance();
ProtoInstance135.setName(std::string("Route"));
fieldValue& fieldValue136 =  fieldValue();
fieldValue136.setName(std::string("output"));
ProtoInstance& ProtoInstance137 =  ProtoInstance();
ProtoInstance137.setName(std::string("Node"));
ProtoInstance137.setUSE(std::string("N1"));
fieldValue136.addChild(&ProtoInstance137);

ProtoInstance135.addChild(&fieldValue136);

fieldValue& fieldValue138 =  fieldValue();
fieldValue138.setName(std::string("input"));
ProtoInstance& ProtoInstance139 =  ProtoInstance();
ProtoInstance139.setName(std::string("Node"));
ProtoInstance139.setDEF(std::string("N4"));
fieldValue& fieldValue140 =  fieldValue();
fieldValue140.setName(std::string("translation"));
fieldValue140.setValue(std::string("-0.0998688 -0.40172 0"));
ProtoInstance139.addChild(&fieldValue140);

fieldValue138.addChild(&ProtoInstance139);

ProtoInstance135.addChild(&fieldValue138);

Transform121.addChild(&ProtoInstance135);

ProtoInstance& ProtoInstance141 =  ProtoInstance();
ProtoInstance141.setName(std::string("Route"));
fieldValue& fieldValue142 =  fieldValue();
fieldValue142.setName(std::string("output"));
ProtoInstance& ProtoInstance143 =  ProtoInstance();
ProtoInstance143.setName(std::string("Node"));
ProtoInstance143.setUSE(std::string("N1"));
fieldValue142.addChild(&ProtoInstance143);

ProtoInstance141.addChild(&fieldValue142);

fieldValue& fieldValue144 =  fieldValue();
fieldValue144.setName(std::string("input"));
ProtoInstance& ProtoInstance145 =  ProtoInstance();
ProtoInstance145.setName(std::string("Node"));
ProtoInstance145.setDEF(std::string("N5"));
fieldValue& fieldValue146 =  fieldValue();
fieldValue146.setName(std::string("translation"));
fieldValue146.setValue(std::string("-0.0998687 -2.14742 0"));
ProtoInstance145.addChild(&fieldValue146);

fieldValue144.addChild(&ProtoInstance145);

ProtoInstance141.addChild(&fieldValue144);

Transform121.addChild(&ProtoInstance141);

ProtoInstance& ProtoInstance147 =  ProtoInstance();
ProtoInstance147.setName(std::string("Route"));
fieldValue& fieldValue148 =  fieldValue();
fieldValue148.setName(std::string("output"));
ProtoInstance& ProtoInstance149 =  ProtoInstance();
ProtoInstance149.setName(std::string("Node"));
ProtoInstance149.setUSE(std::string("N2"));
fieldValue148.addChild(&ProtoInstance149);

ProtoInstance147.addChild(&fieldValue148);

fieldValue& fieldValue150 =  fieldValue();
fieldValue150.setName(std::string("input"));
ProtoInstance& ProtoInstance151 =  ProtoInstance();
ProtoInstance151.setName(std::string("Node"));
ProtoInstance151.setDEF(std::string("N6"));
fieldValue& fieldValue152 =  fieldValue();
fieldValue152.setName(std::string("translation"));
fieldValue152.setValue(std::string("3.55694 2.4116 0"));
ProtoInstance151.addChild(&fieldValue152);

fieldValue150.addChild(&ProtoInstance151);

ProtoInstance147.addChild(&fieldValue150);

Transform121.addChild(&ProtoInstance147);

ProtoInstance& ProtoInstance153 =  ProtoInstance();
ProtoInstance153.setName(std::string("Route"));
fieldValue& fieldValue154 =  fieldValue();
fieldValue154.setName(std::string("output"));
ProtoInstance& ProtoInstance155 =  ProtoInstance();
ProtoInstance155.setName(std::string("Node"));
ProtoInstance155.setUSE(std::string("N3"));
fieldValue154.addChild(&ProtoInstance155);

ProtoInstance153.addChild(&fieldValue154);

fieldValue& fieldValue156 =  fieldValue();
fieldValue156.setName(std::string("input"));
ProtoInstance& ProtoInstance157 =  ProtoInstance();
ProtoInstance157.setName(std::string("Node"));
ProtoInstance157.setUSE(std::string("N6"));
fieldValue156.addChild(&ProtoInstance157);

ProtoInstance153.addChild(&fieldValue156);

Transform121.addChild(&ProtoInstance153);

ProtoInstance& ProtoInstance158 =  ProtoInstance();
ProtoInstance158.setName(std::string("Route"));
fieldValue& fieldValue159 =  fieldValue();
fieldValue159.setName(std::string("output"));
ProtoInstance& ProtoInstance160 =  ProtoInstance();
ProtoInstance160.setName(std::string("Node"));
ProtoInstance160.setUSE(std::string("N4"));
fieldValue159.addChild(&ProtoInstance160);

ProtoInstance158.addChild(&fieldValue159);

fieldValue& fieldValue161 =  fieldValue();
fieldValue161.setName(std::string("input"));
ProtoInstance& ProtoInstance162 =  ProtoInstance();
ProtoInstance162.setName(std::string("Node"));
ProtoInstance162.setDEF(std::string("N7"));
fieldValue& fieldValue163 =  fieldValue();
fieldValue163.setName(std::string("translation"));
fieldValue163.setValue(std::string("3.75106 -0.0794556 0"));
ProtoInstance162.addChild(&fieldValue163);

fieldValue161.addChild(&ProtoInstance162);

ProtoInstance158.addChild(&fieldValue161);

Transform121.addChild(&ProtoInstance158);

ProtoInstance& ProtoInstance164 =  ProtoInstance();
ProtoInstance164.setName(std::string("Route"));
fieldValue& fieldValue165 =  fieldValue();
fieldValue165.setName(std::string("output"));
ProtoInstance& ProtoInstance166 =  ProtoInstance();
ProtoInstance166.setName(std::string("Node"));
ProtoInstance166.setUSE(std::string("N5"));
fieldValue165.addChild(&ProtoInstance166);

ProtoInstance164.addChild(&fieldValue165);

fieldValue& fieldValue167 =  fieldValue();
fieldValue167.setName(std::string("input"));
ProtoInstance& ProtoInstance168 =  ProtoInstance();
ProtoInstance168.setName(std::string("Node"));
ProtoInstance168.setUSE(std::string("N7"));
fieldValue167.addChild(&ProtoInstance168);

ProtoInstance164.addChild(&fieldValue167);

Transform121.addChild(&ProtoInstance164);

ProtoInstance& ProtoInstance169 =  ProtoInstance();
ProtoInstance169.setName(std::string("Route"));
fieldValue& fieldValue170 =  fieldValue();
fieldValue170.setName(std::string("output"));
ProtoInstance& ProtoInstance171 =  ProtoInstance();
ProtoInstance171.setName(std::string("Node"));
ProtoInstance171.setUSE(std::string("N6"));
fieldValue170.addChild(&ProtoInstance171);

ProtoInstance169.addChild(&fieldValue170);

fieldValue& fieldValue172 =  fieldValue();
fieldValue172.setName(std::string("input"));
ProtoInstance& ProtoInstance173 =  ProtoInstance();
ProtoInstance173.setName(std::string("Node"));
ProtoInstance173.setDEF(std::string("N8"));
fieldValue& fieldValue174 =  fieldValue();
fieldValue174.setName(std::string("translation"));
fieldValue174.setValue(std::string("7.68077 1.21228 0"));
ProtoInstance173.addChild(&fieldValue174);

fieldValue172.addChild(&ProtoInstance173);

ProtoInstance169.addChild(&fieldValue172);

Transform121.addChild(&ProtoInstance169);

ProtoInstance& ProtoInstance175 =  ProtoInstance();
ProtoInstance175.setName(std::string("Route"));
fieldValue& fieldValue176 =  fieldValue();
fieldValue176.setName(std::string("output"));
ProtoInstance& ProtoInstance177 =  ProtoInstance();
ProtoInstance177.setName(std::string("Node"));
ProtoInstance177.setUSE(std::string("N7"));
fieldValue176.addChild(&ProtoInstance177);

ProtoInstance175.addChild(&fieldValue176);

fieldValue& fieldValue178 =  fieldValue();
fieldValue178.setName(std::string("input"));
ProtoInstance& ProtoInstance179 =  ProtoInstance();
ProtoInstance179.setName(std::string("Node"));
ProtoInstance179.setUSE(std::string("N8"));
fieldValue178.addChild(&ProtoInstance179);

ProtoInstance175.addChild(&fieldValue178);

Transform121.addChild(&ProtoInstance175);

ProtoInstance& ProtoInstance180 =  ProtoInstance();
ProtoInstance180.setName(std::string("Node"));
ProtoInstance180.setUSE(std::string("N1"));
Transform121.addChild(&ProtoInstance180);

ProtoInstance& ProtoInstance181 =  ProtoInstance();
ProtoInstance181.setName(std::string("Node"));
ProtoInstance181.setUSE(std::string("N2"));
Transform121.addChild(&ProtoInstance181);

ProtoInstance& ProtoInstance182 =  ProtoInstance();
ProtoInstance182.setName(std::string("Node"));
ProtoInstance182.setUSE(std::string("N3"));
Transform121.addChild(&ProtoInstance182);

ProtoInstance& ProtoInstance183 =  ProtoInstance();
ProtoInstance183.setName(std::string("Node"));
ProtoInstance183.setUSE(std::string("N4"));
Transform121.addChild(&ProtoInstance183);

ProtoInstance& ProtoInstance184 =  ProtoInstance();
ProtoInstance184.setName(std::string("Node"));
ProtoInstance184.setUSE(std::string("N5"));
Transform121.addChild(&ProtoInstance184);

ProtoInstance& ProtoInstance185 =  ProtoInstance();
ProtoInstance185.setName(std::string("Node"));
ProtoInstance185.setUSE(std::string("N6"));
Transform121.addChild(&ProtoInstance185);

ProtoInstance& ProtoInstance186 =  ProtoInstance();
ProtoInstance186.setName(std::string("Node"));
ProtoInstance186.setUSE(std::string("N7"));
Transform121.addChild(&ProtoInstance186);

ProtoInstance& ProtoInstance187 =  ProtoInstance();
ProtoInstance187.setName(std::string("Node"));
ProtoInstance187.setUSE(std::string("N8"));
Transform121.addChild(&ProtoInstance187);

Scene9.addChild(&Transform121);

X3D0.setScene(&Scene9);

}
