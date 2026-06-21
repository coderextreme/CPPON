#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void ArchPrototype(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("ArchPrototype.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("description"));
meta3.setContent(std::string("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("description"));
meta4.setContent(std::string("Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("creator"));
meta5.setContent(std::string("Michele Foti, Don Brutzman"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("created"));
meta6.setContent(std::string("15 December 2014"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("modified"));
meta7.setContent(std::string("27 November 2015"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("reference"));
meta8.setContent(std::string("ArchModelingDiagrams.pdf"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("reference"));
meta9.setContent(std::string("https://en.wikipedia.org/wiki/Arch"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("identifier"));
meta10.setContent(std::string("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("generator"));
meta11.setContent(std::string("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("license"));
meta12.setContent(std::string("../license.html"));
head1.addMeta(&meta12);

X3D0.setHead(&head1);

Scene& Scene13 =  Scene();
ProtoDeclare& ProtoDeclare14 =  ProtoDeclare();
ProtoDeclare14.setName(std::string("ArchPrototype"));
ProtoDeclare14.setAppinfo(std::string("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js."));
ProtoInterface& ProtoInterface15 =  ProtoInterface();
//COLOR OF ARCH
//INPUT PARAMETERS
//General parameters: measures in meters
//Parameters to create to create shapes related to arch: put true to apply
field& field16 =  field();
field16.setName(std::string("diffuseColor"));
field16.setAccessType(std::string("inputOutput"));
field16.setAppinfo(std::string("color of arch"));
field16.setType(std::string("SFColor"));
field16.setValue(std::string("0.2 0.8 0.8"));
ProtoInterface15.addChild(&field16);

field& field17 =  field();
field17.setName(std::string("emissiveColor"));
field17.setAccessType(std::string("inputOutput"));
field17.setAppinfo(std::string("color of arch"));
field17.setType(std::string("SFColor"));
field17.setValue(std::string("0.2 0.8 0.8"));
ProtoInterface15.addChild(&field17);

field& field18 =  field();
field18.setName(std::string("clearSpanWidth"));
field18.setAccessType(std::string("initializeOnly"));
field18.setAppinfo(std::string("clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference"));
field18.setType(std::string("SFFloat"));
field18.setValue(std::string("4"));
ProtoInterface15.addChild(&field18);

field& field19 =  field();
field19.setName(std::string("riseHeight"));
field19.setAccessType(std::string("initializeOnly"));
field19.setAppinfo(std::string("riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference"));
field19.setType(std::string("SFFloat"));
field19.setValue(std::string("2"));
ProtoInterface15.addChild(&field19);

field& field20 =  field();
field20.setName(std::string("depth"));
field20.setAccessType(std::string("initializeOnly"));
field20.setAppinfo(std::string("depth"));
field20.setType(std::string("SFFloat"));
field20.setValue(std::string("3"));
ProtoInterface15.addChild(&field20);

field& field21 =  field();
field21.setName(std::string("topAbutmentHeight"));
field21.setAccessType(std::string("initializeOnly"));
field21.setAppinfo(std::string("topAbutmentHeight:topAbutmentHeight=0 means no topAbutment"));
field21.setType(std::string("SFFloat"));
field21.setValue(std::string("0.5"));
ProtoInterface15.addChild(&field21);

field& field22 =  field();
field22.setName(std::string("pierWidth"));
field22.setAccessType(std::string("initializeOnly"));
field22.setAppinfo(std::string("pierWidth:pierWidtht=0 means no pierWidth"));
field22.setType(std::string("SFFloat"));
field22.setValue(std::string("0.5"));
ProtoInterface15.addChild(&field22);

field& field23 =  field();
field23.setName(std::string("pierHeight"));
field23.setAccessType(std::string("initializeOnly"));
field23.setAppinfo(std::string("pierHeight: pierHeight=0 means no pierHeight"));
field23.setType(std::string("SFFloat"));
field23.setValue(std::string("1"));
ProtoInterface15.addChild(&field23);

field& field24 =  field();
field24.setName(std::string("archHalf"));
field24.setAccessType(std::string("initializeOnly"));
field24.setAppinfo(std::string("archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width"));
field24.setType(std::string("SFBool"));
field24.setValue(std::string("false"));
ProtoInterface15.addChild(&field24);

field& field25 =  field();
field25.setName(std::string("archHalfExtensionWidth"));
field25.setAccessType(std::string("initializeOnly"));
field25.setAppinfo(std::string("archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information."));
field25.setType(std::string("SFFloat"));
field25.setValue(std::string("0"));
ProtoInterface15.addChild(&field25);

field& field26 =  field();
field26.setName(std::string("onlyIntrados"));
field26.setAccessType(std::string("initializeOnly"));
field26.setAppinfo(std::string("onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true."));
field26.setType(std::string("SFBool"));
field26.setValue(std::string("false"));
ProtoInterface15.addChild(&field26);

field& field27 =  field();
field27.setName(std::string("archFilled"));
field27.setAccessType(std::string("initializeOnly"));
field27.setAppinfo(std::string("archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose."));
field27.setType(std::string("SFBool"));
field27.setValue(std::string("false"));
ProtoInterface15.addChild(&field27);

field& field28 =  field();
field28.setName(std::string("archHalfFilled"));
field28.setAccessType(std::string("initializeOnly"));
field28.setAppinfo(std::string("archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width."));
field28.setType(std::string("SFBool"));
field28.setValue(std::string("false"));
ProtoInterface15.addChild(&field28);

field& field29 =  field();
field29.setName(std::string("lintel"));
field29.setAccessType(std::string("initializeOnly"));
field29.setAppinfo(std::string("lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true."));
field29.setType(std::string("SFBool"));
field29.setValue(std::string("false"));
ProtoInterface15.addChild(&field29);

ProtoDeclare14.addChild(&ProtoInterface15);

ProtoBody& ProtoBody30 =  ProtoBody();
//First node determines node type of this prototype
//IndexedFaceset creates arch
Transform& Transform31 =  Transform();
Transform31.setDEF(std::string("ArchTransform"));
Shape& Shape32 =  Shape();
Shape32.setDEF(std::string("Arch"));
//note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly
IndexedFaceSet& IndexedFaceSet33 =  IndexedFaceSet();
IndexedFaceSet33.setDEF(std::string("ArchIndex"));
IndexedFaceSet33.setConvex(false);
IndexedFaceSet33.setSolid(false);
Coordinate& Coordinate34 =  Coordinate();
Coordinate34.setDEF(std::string("ArchChord"));
IndexedFaceSet33.setCoord(&Coordinate34);

Shape32.setGeometry(&IndexedFaceSet33);

Appearance& Appearance35 =  Appearance();
Appearance35.setContainerField("appearance");
Material& Material36 =  Material();
Material36.setContainerField("material");
Material36.setDEF(std::string("MaterialNode"));
IS& IS37 =  IS();
Connect& connect38 =  Connect();
connect38.setNodeField(std::string("emissiveColor"));
connect38.setProtoField(std::string("emissiveColor"));
IS37.addChild(&connect38);

Connect& connect39 =  Connect();
connect39.setNodeField(std::string("diffuseColor"));
connect39.setProtoField(std::string("diffuseColor"));
IS37.addChild(&connect39);

Material36.addChild(&IS37);

Appearance35.addChild(&Material36);

Shape32.addChild(&Appearance35);

Transform31.addChild(&Shape32);

ProtoBody30.addChild(&Transform31);

//Subsequent nodes do not render, but still must be a valid X3D subgraph
//This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs
Script& Script40 =  Script();
Script40.setDEF(std::string("ArchPrototypeScript"));
Script40.setUrl(new std::string[]{"../node/ArchPrototypeScript.js", "https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"}, 2);
//INPUT PARAMETERS
//General parameters
//Parameters to create to create shapes related to arch: put true to apply
//OUTPUT PARAMETERS
field& field41 =  field();
field41.setName(std::string("clearSpanWidth"));
field41.setAccessType(std::string("initializeOnly"));
field41.setAppinfo(std::string("user or default input for clearSpanWidth parameter"));
field41.setType(std::string("SFFloat"));
Script40.addChild(&field41);

field& field42 =  field();
field42.setName(std::string("riseHeight"));
field42.setAccessType(std::string("initializeOnly"));
field42.setAppinfo(std::string("user or default input for riseHeight parameter"));
field42.setType(std::string("SFFloat"));
Script40.addChild(&field42);

field& field43 =  field();
field43.setName(std::string("depth"));
field43.setAccessType(std::string("initializeOnly"));
field43.setAppinfo(std::string("user or default input for depth parameter"));
field43.setType(std::string("SFFloat"));
Script40.addChild(&field43);

field& field44 =  field();
field44.setName(std::string("topAbutmentHeight"));
field44.setAccessType(std::string("initializeOnly"));
field44.setAppinfo(std::string("user or default input for topAbutmentHeight parameter"));
field44.setType(std::string("SFFloat"));
Script40.addChild(&field44);

field& field45 =  field();
field45.setName(std::string("pierWidth"));
field45.setAccessType(std::string("initializeOnly"));
field45.setAppinfo(std::string("user or default input for pierWidth parameter"));
field45.setType(std::string("SFFloat"));
Script40.addChild(&field45);

field& field46 =  field();
field46.setName(std::string("pierHeight"));
field46.setAccessType(std::string("initializeOnly"));
field46.setAppinfo(std::string("user or default input for pierHeight parameter"));
field46.setType(std::string("SFFloat"));
Script40.addChild(&field46);

field& field47 =  field();
field47.setName(std::string("archHalf"));
field47.setAccessType(std::string("initializeOnly"));
field47.setAppinfo(std::string("user or default input for archHalf parameter"));
field47.setType(std::string("SFBool"));
Script40.addChild(&field47);

field& field48 =  field();
field48.setName(std::string("archHalfExtensionWidth"));
field48.setAccessType(std::string("initializeOnly"));
field48.setAppinfo(std::string("user or default input for archHalfExtensionWidth parameter"));
field48.setType(std::string("SFFloat"));
Script40.addChild(&field48);

field& field49 =  field();
field49.setName(std::string("onlyIntrados"));
field49.setAccessType(std::string("initializeOnly"));
field49.setAppinfo(std::string("user or default input for onlyIntrados parameter"));
field49.setType(std::string("SFBool"));
Script40.addChild(&field49);

field& field50 =  field();
field50.setName(std::string("archFilled"));
field50.setAccessType(std::string("initializeOnly"));
field50.setAppinfo(std::string("user or default input for archFilled parameter"));
field50.setType(std::string("SFBool"));
Script40.addChild(&field50);

field& field51 =  field();
field51.setName(std::string("archHalfFilled"));
field51.setAccessType(std::string("initializeOnly"));
field51.setAppinfo(std::string("user or default input for archHalfFilled parameter"));
field51.setType(std::string("SFBool"));
Script40.addChild(&field51);

field& field52 =  field();
field52.setName(std::string("lintel"));
field52.setAccessType(std::string("initializeOnly"));
field52.setAppinfo(std::string("user or default input for lintel parameter"));
field52.setType(std::string("SFBool"));
Script40.addChild(&field52);

field& field53 =  field();
field53.setName(std::string("computedScale"));
field53.setAccessType(std::string("outputOnly"));
field53.setAppinfo(std::string("computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth"));
field53.setType(std::string("SFVec3f"));
Script40.addChild(&field53);

field& field54 =  field();
field54.setName(std::string("pointOut"));
field54.setAccessType(std::string("outputOnly"));
field54.setAppinfo(std::string("send computed points to the Coordinate node"));
field54.setType(std::string("MFVec3f"));
Script40.addChild(&field54);

field& field55 =  field();
field55.setName(std::string("indexOut"));
field55.setAccessType(std::string("outputOnly"));
field55.setAppinfo(std::string("send computed indices to the IndexedFaceSet node"));
field55.setType(std::string("MFInt32"));
Script40.addChild(&field55);

IS& IS56 =  IS();
Connect& connect57 =  Connect();
connect57.setNodeField(std::string("clearSpanWidth"));
connect57.setProtoField(std::string("clearSpanWidth"));
IS56.addChild(&connect57);

Connect& connect58 =  Connect();
connect58.setNodeField(std::string("riseHeight"));
connect58.setProtoField(std::string("riseHeight"));
IS56.addChild(&connect58);

Connect& connect59 =  Connect();
connect59.setNodeField(std::string("depth"));
connect59.setProtoField(std::string("depth"));
IS56.addChild(&connect59);

Connect& connect60 =  Connect();
connect60.setNodeField(std::string("pierWidth"));
connect60.setProtoField(std::string("pierWidth"));
IS56.addChild(&connect60);

Connect& connect61 =  Connect();
connect61.setNodeField(std::string("topAbutmentHeight"));
connect61.setProtoField(std::string("topAbutmentHeight"));
IS56.addChild(&connect61);

Connect& connect62 =  Connect();
connect62.setNodeField(std::string("pierHeight"));
connect62.setProtoField(std::string("pierHeight"));
IS56.addChild(&connect62);

Connect& connect63 =  Connect();
connect63.setNodeField(std::string("archHalf"));
connect63.setProtoField(std::string("archHalf"));
IS56.addChild(&connect63);

Connect& connect64 =  Connect();
connect64.setNodeField(std::string("archHalfExtensionWidth"));
connect64.setProtoField(std::string("archHalfExtensionWidth"));
IS56.addChild(&connect64);

Connect& connect65 =  Connect();
connect65.setNodeField(std::string("onlyIntrados"));
connect65.setProtoField(std::string("onlyIntrados"));
IS56.addChild(&connect65);

Connect& connect66 =  Connect();
connect66.setNodeField(std::string("archFilled"));
connect66.setProtoField(std::string("archFilled"));
IS56.addChild(&connect66);

Connect& connect67 =  Connect();
connect67.setNodeField(std::string("archHalfFilled"));
connect67.setProtoField(std::string("archHalfFilled"));
IS56.addChild(&connect67);

Connect& connect68 =  Connect();
connect68.setNodeField(std::string("lintel"));
connect68.setProtoField(std::string("lintel"));
IS56.addChild(&connect68);

Script40.addChild(&IS56);

ProtoBody30.addChild(&Script40);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromField(std::string("computedScale"));
ROUTE69.setFromNode(std::string("ArchPrototypeScript"));
ROUTE69.setToField(std::string("scale"));
ROUTE69.setToNode(std::string("ArchTransform"));
ProtoBody30.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromField(std::string("pointOut"));
ROUTE70.setFromNode(std::string("ArchPrototypeScript"));
ROUTE70.setToField(std::string("point"));
ROUTE70.setToNode(std::string("ArchChord"));
ProtoBody30.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromField(std::string("indexOut"));
ROUTE71.setFromNode(std::string("ArchPrototypeScript"));
ROUTE71.setToField(std::string("set_coordIndex"));
ROUTE71.setToNode(std::string("ArchIndex"));
ProtoBody30.addChild(&ROUTE71);

ProtoDeclare14.addChild(&ProtoBody30);

Scene13.addChild(&ProtoDeclare14);

ProtoInstance& ProtoInstance72 =  ProtoInstance();
ProtoInstance72.setName(std::string("ArchPrototype"));
ProtoInstance72.setDEF(std::string("ArchInstance"));
fieldValue& fieldValue73 =  fieldValue();
fieldValue73.setName(std::string("diffuseColor"));
fieldValue73.setValue(std::string("0.5 0.3 0.6"));
ProtoInstance72.addChild(&fieldValue73);

fieldValue& fieldValue74 =  fieldValue();
fieldValue74.setName(std::string("emissiveColor"));
fieldValue74.setValue(std::string("0.5 0.3 0.6"));
ProtoInstance72.addChild(&fieldValue74);

fieldValue& fieldValue75 =  fieldValue();
fieldValue75.setName(std::string("clearSpanWidth"));
fieldValue75.setValue(std::string("5"));
ProtoInstance72.addChild(&fieldValue75);

fieldValue& fieldValue76 =  fieldValue();
fieldValue76.setName(std::string("riseHeight"));
fieldValue76.setValue(std::string("2.5"));
ProtoInstance72.addChild(&fieldValue76);

fieldValue& fieldValue77 =  fieldValue();
fieldValue77.setName(std::string("depth"));
fieldValue77.setValue(std::string("2"));
ProtoInstance72.addChild(&fieldValue77);

fieldValue& fieldValue78 =  fieldValue();
fieldValue78.setName(std::string("topAbutmentHeight"));
fieldValue78.setValue(std::string("0.6"));
ProtoInstance72.addChild(&fieldValue78);

fieldValue& fieldValue79 =  fieldValue();
fieldValue79.setName(std::string("pierWidth"));
fieldValue79.setValue(std::string("1"));
ProtoInstance72.addChild(&fieldValue79);

fieldValue& fieldValue80 =  fieldValue();
fieldValue80.setName(std::string("pierHeight"));
fieldValue80.setValue(std::string("2"));
ProtoInstance72.addChild(&fieldValue80);

Scene13.addChild(&ProtoInstance72);

//Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare)
Inline& Inline81 =  Inline();
Inline81.setDEF(std::string("CoordinateAxes"));
Inline81.setUrl(new std::string[]{"../data/CoordinateAxes.x3d"}, 1);
Scene13.addChild(&Inline81);

X3D0.setScene(&Scene13);

//}
