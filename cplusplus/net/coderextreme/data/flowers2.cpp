#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void flowers2(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(std::string("Scripting"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(std::string("title"));
meta3.setContent(std::string("flowers2.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("John Carlson"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("created"));
meta5.setContent(std::string("23 January 2005"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("modified"));
meta6.setContent(std::string("9 November 2024"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("description"));
meta7.setContent(std::string("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("identifier"));
meta8.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("generator"));
meta9.setContent(std::string("manually written"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("license"));
meta10.setContent(std::string("https://www.web3d.org/x3d/content/examples/license.html"));
head1.addMeta(&meta10);

X3D0.setHead(&head1);

Scene& Scene11 =  Scene();
NavigationInfo& NavigationInfo12 =  NavigationInfo();
Scene11.addChild(&NavigationInfo12);

Viewpoint& Viewpoint13 =  Viewpoint();
Viewpoint13.setDescription(std::string("Two mathematical orbitals"));
Viewpoint13.setPosition(new float[]{0.0,0.0,50.0});
Scene11.addChild(&Viewpoint13);

Group& Group14 =  Group();
DirectionalLight& DirectionalLight15 =  DirectionalLight();
DirectionalLight15.setDirection(new float[]{1.0,1.0,1.0});
Group14.addChild(&DirectionalLight15);

ProtoDeclare& ProtoDeclare16 =  ProtoDeclare();
ProtoDeclare16.setName(std::string("orbit"));
ProtoInterface& ProtoInterface17 =  ProtoInterface();
field& field18 =  field();
field18.setName(std::string("translation"));
field18.setAccessType(std::string("inputOutput"));
field18.setType(std::string("SFVec3f"));
field18.setValue(std::string("-8 0 0"));
ProtoInterface17.addChild(&field18);

field& field19 =  field();
field19.setName(std::string("diffuseColor"));
field19.setAccessType(std::string("inputOutput"));
field19.setType(std::string("SFColor"));
field19.setValue(std::string("1 0.5 0"));
ProtoInterface17.addChild(&field19);

field& field20 =  field();
field20.setName(std::string("specularColor"));
field20.setAccessType(std::string("inputOutput"));
field20.setType(std::string("SFColor"));
field20.setValue(std::string("1 0.5 0"));
ProtoInterface17.addChild(&field20);

field& field21 =  field();
field21.setName(std::string("transparency"));
field21.setAccessType(std::string("inputOutput"));
field21.setType(std::string("SFFloat"));
field21.setValue(std::string("0.75"));
ProtoInterface17.addChild(&field21);

ProtoDeclare16.addChild(&ProtoInterface17);

ProtoBody& ProtoBody22 =  ProtoBody();
Group& Group23 =  Group();
TimeSensor& TimeSensor24 =  TimeSensor();
TimeSensor24.setDEF(std::string("Clock"));
TimeSensor24.setCycleInterval(16);
TimeSensor24.setLoop(true);
Group23.addChild(&TimeSensor24);

OrientationInterpolator& OrientationInterpolator25 =  OrientationInterpolator();
OrientationInterpolator25.setDEF(std::string("OrbitPath"));
OrientationInterpolator25.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator25.setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,3.14,1.0,0.0,0.0,6.28}, 12);
Group23.addChild(&OrientationInterpolator25);

Transform& Transform26 =  Transform();
Transform26.setDEF(std::string("OrbitTransform"));
IS& IS27 =  IS();
Connect& connect28 =  Connect();
connect28.setNodeField(std::string("translation"));
connect28.setProtoField(std::string("translation"));
IS27.addChild(&connect28);

Transform26.addChild(&IS27);

Shape& Shape29 =  Shape();
Appearance& Appearance30 =  Appearance();
Appearance30.setContainerField("appearance");
Material& Material31 =  Material();
Material31.setContainerField("material");
IS& IS32 =  IS();
Connect& connect33 =  Connect();
connect33.setNodeField(std::string("diffuseColor"));
connect33.setProtoField(std::string("diffuseColor"));
IS32.addChild(&connect33);

Connect& connect34 =  Connect();
connect34.setNodeField(std::string("specularColor"));
connect34.setProtoField(std::string("specularColor"));
IS32.addChild(&connect34);

Connect& connect35 =  Connect();
connect35.setNodeField(std::string("transparency"));
connect35.setProtoField(std::string("transparency"));
IS32.addChild(&connect35);

Material31.addChild(&IS32);

Appearance30.addChild(&Material31);

Shape29.addChild(&Appearance30);

//<IndexedFaceSet DEF=\"Orbit\">
//<Coordinate DEF=\"OrbitCoordinates\"/>
//</IndexedFaceSet>
IndexedFaceSet& IndexedFaceSet36 =  IndexedFaceSet();
IndexedFaceSet36.setCcw(false);
IndexedFaceSet36.setConvex(false);
IndexedFaceSet36.setCoordIndex(new int32_t[]{0,1,2,-1}, 4);
IndexedFaceSet36.setDEF(std::string("Orbit"));
Coordinate& Coordinate37 =  Coordinate();
Coordinate37.setDEF(std::string("OrbitCoordinates"));
Coordinate37.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0}, 9);
IndexedFaceSet36.setCoord(&Coordinate37);

Shape29.setGeometry(&IndexedFaceSet36);

Transform26.addChild(&Shape29);

Group23.addChild(&Transform26);

Script& Script38 =  Script();
Script38.setDEF(std::string("OrbitScript"));
field& field39 =  field();
field39.setName(std::string("set_fraction"));
field39.setAccessType(std::string("inputOnly"));
field39.setType(std::string("SFFloat"));
Script38.addChild(&field39);

field& field40 =  field();
field40.setName(std::string("coordinates"));
field40.setAccessType(std::string("inputOutput"));
field40.setType(std::string("MFVec3f"));
Script38.addChild(&field40);

field& field41 =  field();
field41.setName(std::string("coordIndexes"));
field41.setAccessType(std::string("inputOutput"));
field41.setType(std::string("MFInt32"));
Script38.addChild(&field41);

field& field42 =  field();
field42.setName(std::string("e"));
field42.setAccessType(std::string("inputOutput"));
field42.setType(std::string("SFFloat"));
field42.setValue(std::string("5"));
Script38.addChild(&field42);

field& field43 =  field();
field43.setName(std::string("f"));
field43.setAccessType(std::string("inputOutput"));
field43.setType(std::string("SFFloat"));
field43.setValue(std::string("5"));
Script38.addChild(&field43);

field& field44 =  field();
field44.setName(std::string("g"));
field44.setAccessType(std::string("inputOutput"));
field44.setType(std::string("SFFloat"));
field44.setValue(std::string("5"));
Script38.addChild(&field44);

field& field45 =  field();
field45.setName(std::string("h"));
field45.setAccessType(std::string("inputOutput"));
field45.setType(std::string("SFFloat"));
field45.setValue(std::string("5"));
Script38.addChild(&field45);

field& field46 =  field();
field46.setName(std::string("resolution"));
field46.setAccessType(std::string("inputOutput"));
field46.setType(std::string("SFInt32"));
field46.setValue(std::string("50"));
Script38.addChild(&field46);


//Script38.setSourceCode(std::string("ecmascript:")+
//_T("			function initialize() {")+
//_T("			     generateCoordinates();")+
//_T("			     var arrIndex = 0;")+
//_T("			     for (var i = 0; i < resolution-1; i++) {")+
//_T("				for (var j = 0; j < resolution-1; j++) {")+
//_T("				     coordIndexes[arrIndex++] = i*resolution+j;")+
//_T("				     coordIndexes[arrIndex++] = i*resolution+j+1;")+
//_T("				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;")+
//_T("				     coordIndexes[arrIndex++] = (i+1)*resolution+j;")+
//_T("				     coordIndexes[arrIndex++] = -1;")+
//_T("				}")+
//_T("			    }")+
//_T("			}")+
//_T("			function generateCoordinates() {")+
//_T("			     var theta = 0.0;")+
//_T("			     var phi = 0.0;")+
//_T("			     var delta = (2 * 3.141592653) / (resolution-1);")+
//_T("			     var arrIndex = 0;")+
//_T("			     for (var i = 0; i < resolution; i++) {")+
//_T("				for (var j = 0; j < resolution; j++) {")+
//_T("					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);")+
//_T("					coordinates[arrIndex++] = new SFVec3f(")+
//_T("						rho * Math.cos(phi) * Math.cos(theta),")+
//_T("						rho * Math.cos(phi) * Math.sin(theta),")+
//_T("						rho * Math.sin(phi)")+
//_T("					);")+
//_T("					theta += delta;")+
//_T("				}")+
//_T("				phi += delta;")+
//_T("			     }")+
//_T("			}")+
//_T("			function set_fraction(fraction, eventTime) {")+
//_T("				var choice = Math.floor(Math.random() * 4);")+
//_T("				switch (choice) {")+
//_T("				case 0:")+
//_T("					e += Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("					break;")+
//_T("				case 1:")+
//_T("					f += Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("					break;")+
//_T("				case 2:")+
//_T("					g += Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("					break;")+
//_T("				case 3:")+
//_T("					h += Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("					break;")+
//_T("				}")+
//_T("				if (e < 1) {")+
//_T("					f = 10;")+
//_T("				}")+
//_T("				if (f < 1) {")+
//_T("					f = 10;")+
//_T("				}")+
//_T("				if (g < 1) {")+
//_T("					g = 4;")+
//_T("				}")+
//_T("				if (h < 1) {")+
//_T("					h = 4;")+
//_T("				}")+
//_T("				generateCoordinates();")+
//_T("			}"));
Group23.addChild(&Script38);

ROUTE& ROUTE47 =  ROUTE();
ROUTE47.setFromNode(std::string("OrbitScript"));
ROUTE47.setFromField(std::string("coordIndexes"));
ROUTE47.setToNode(std::string("Orbit"));
ROUTE47.setToField(std::string("set_coordIndex"));
Group23.addChild(&ROUTE47);

ROUTE& ROUTE48 =  ROUTE();
ROUTE48.setFromNode(std::string("OrbitScript"));
ROUTE48.setFromField(std::string("coordinates"));
ROUTE48.setToNode(std::string("OrbitCoordinates"));
ROUTE48.setToField(std::string("point"));
Group23.addChild(&ROUTE48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(std::string("Clock"));
ROUTE49.setFromField(std::string("fraction_changed"));
ROUTE49.setToNode(std::string("OrbitScript"));
ROUTE49.setToField(std::string("set_fraction"));
Group23.addChild(&ROUTE49);

ROUTE& ROUTE50 =  ROUTE();
ROUTE50.setFromNode(std::string("OrbitPath"));
ROUTE50.setFromField(std::string("value_changed"));
ROUTE50.setToNode(std::string("OrbitTransform"));
ROUTE50.setToField(std::string("rotation"));
Group23.addChild(&ROUTE50);

ROUTE& ROUTE51 =  ROUTE();
ROUTE51.setFromNode(std::string("Clock"));
ROUTE51.setFromField(std::string("fraction_changed"));
ROUTE51.setToNode(std::string("OrbitPath"));
ROUTE51.setToField(std::string("set_fraction"));
Group23.addChild(&ROUTE51);

ProtoBody22.addChild(&Group23);

ProtoDeclare16.addChild(&ProtoBody22);

Group14.addChild(&ProtoDeclare16);

ProtoInstance& ProtoInstance52 =  ProtoInstance();
ProtoInstance52.setName(std::string("orbit"));
fieldValue& fieldValue53 =  fieldValue();
fieldValue53.setName(std::string("translation"));
fieldValue53.setValue(std::string("-8 0 0"));
ProtoInstance52.addChild(&fieldValue53);

fieldValue& fieldValue54 =  fieldValue();
fieldValue54.setName(std::string("diffuseColor"));
fieldValue54.setValue(std::string("1 0.5 0"));
ProtoInstance52.addChild(&fieldValue54);

fieldValue& fieldValue55 =  fieldValue();
fieldValue55.setName(std::string("specularColor"));
fieldValue55.setValue(std::string("1 0.5 0"));
ProtoInstance52.addChild(&fieldValue55);

fieldValue& fieldValue56 =  fieldValue();
fieldValue56.setName(std::string("transparency"));
fieldValue56.setValue(std::string("0.75"));
ProtoInstance52.addChild(&fieldValue56);

Group14.addChild(&ProtoInstance52);

ProtoInstance& ProtoInstance57 =  ProtoInstance();
ProtoInstance57.setName(std::string("orbit"));
fieldValue& fieldValue58 =  fieldValue();
fieldValue58.setName(std::string("translation"));
fieldValue58.setValue(std::string("8 0 0"));
ProtoInstance57.addChild(&fieldValue58);

fieldValue& fieldValue59 =  fieldValue();
fieldValue59.setName(std::string("diffuseColor"));
fieldValue59.setValue(std::string("0 0.5 1"));
ProtoInstance57.addChild(&fieldValue59);

fieldValue& fieldValue60 =  fieldValue();
fieldValue60.setName(std::string("specularColor"));
fieldValue60.setValue(std::string("0 0.5 1"));
ProtoInstance57.addChild(&fieldValue60);

fieldValue& fieldValue61 =  fieldValue();
fieldValue61.setName(std::string("transparency"));
fieldValue61.setValue(std::string("0.5"));
ProtoInstance57.addChild(&fieldValue61);

Group14.addChild(&ProtoInstance57);

Scene11.addChild(&Group14);

X3D0.setScene(&Scene11);

}
