#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(std::string("Scripting"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(std::string("creator"));
meta3.setContent(std::string("John W Carlson"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("created"));
meta4.setContent(std::string("December 13 2015"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("modified"));
meta5.setContent(std::string("July 14 2025"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("title"));
meta6.setContent(std::string("fors.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("identifier"));
meta7.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("description"));
meta8.setContent(std::string("beginnings of a force directed graph in 3D"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("generator"));
meta9.setContent(std::string("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta9);

X3D0.setHead(&head1);

Scene& Scene10 =  Scene();
ProtoDeclare& ProtoDeclare11 =  ProtoDeclare();
ProtoDeclare11.setName(std::string("node"));
ProtoInterface& ProtoInterface12 =  ProtoInterface();
field& field13 =  field();
field13.setName(std::string("position"));
field13.setAccessType(std::string("inputOutput"));
field13.setType(std::string("SFVec3f"));
field13.setValue(std::string("0 0 0"));
ProtoInterface12.addChild(&field13);

ProtoDeclare11.addChild(&ProtoInterface12);

ProtoBody& ProtoBody14 =  ProtoBody();
Group& Group15 =  Group();
Transform& Transform16 =  Transform();
Transform16.setDEF(std::string("transform"));
IS& IS17 =  IS();
Connect& connect18 =  Connect();
connect18.setNodeField(std::string("translation"));
connect18.setProtoField(std::string("position"));
IS17.addChild(&connect18);

Transform16.addChild(&IS17);

Shape& Shape19 =  Shape();
Sphere& Sphere20 =  Sphere();
Shape19.setGeometry(&Sphere20);

Appearance& Appearance21 =  Appearance();
Appearance21.setContainerField("appearance");
Material& Material22 =  Material();
Material22.setContainerField("material");
Material22.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance21.addChild(&Material22);

Shape19.addChild(&Appearance21);

Transform16.addChild(&Shape19);

Transform& Transform23 =  Transform();
Transform23.setTranslation(new float[]{1.0,0.0,0.0});
Shape& Shape24 =  Shape();
Text& Text25 =  Text();
Text25.setString(new std::string[]{"Node"}, 1);
CFontStyle& FontStyle26 =  CFontStyle();
FontStyle26.setContainerField("fontStyle");
FontStyle26.setJustify(new std::string[]{"MIDDLE", "MIDDLE"}, 2);
FontStyle26.setSize(5);
Text25.setFontStyle(&FontStyle26);

Shape24.setGeometry(&Text25);

Appearance& Appearance27 =  Appearance();
Appearance27.setContainerField("appearance");
Material& Material28 =  Material();
Material28.setContainerField("material");
Material28.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance27.addChild(&Material28);

Shape24.addChild(&Appearance27);

Transform23.addChild(&Shape24);

Transform16.addChild(&Transform23);

Group15.addChild(&Transform16);

PositionInterpolator& PositionInterpolator29 =  PositionInterpolator();
PositionInterpolator29.setDEF(std::string("NodePosition"));
PositionInterpolator29.setKey(new float[]{0.0,1.0}, 2);
PositionInterpolator29.setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
Group15.addChild(&PositionInterpolator29);

Script& Script30 =  Script();
Script30.setDEF(std::string("MoveBall"));
field& field31 =  field();
field31.setName(std::string("translation"));
field31.setAccessType(std::string("inputOutput"));
field31.setType(std::string("SFVec3f"));
field31.setValue(std::string("50 50 0"));
Script30.addChild(&field31);

field& field32 =  field();
field32.setName(std::string("old"));
field32.setAccessType(std::string("inputOutput"));
field32.setType(std::string("SFVec3f"));
field32.setValue(std::string("0 0 0"));
Script30.addChild(&field32);

field& field33 =  field();
field33.setName(std::string("set_cycle"));
field33.setAccessType(std::string("inputOnly"));
field33.setType(std::string("SFTime"));
Script30.addChild(&field33);

field& field34 =  field();
field34.setName(std::string("keyValue"));
field34.setAccessType(std::string("outputOnly"));
field34.setType(std::string("MFVec3f"));
Script30.addChild(&field34);


//Script30.setSourceCode(std::string("ecmascript:")+
//_T("			function set_cycle(value) {")+
//_T("				old = translation;")+
//_T("				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
//_T("				keyValue = new MFVec3f(old, translation);")+
//_T("			}"));
Group15.addChild(&Script30);

TimeSensor& TimeSensor35 =  TimeSensor();
TimeSensor35.setDEF(std::string("nodeClock"));
TimeSensor35.setCycleInterval(3);
TimeSensor35.setLoop(true);
Group15.addChild(&TimeSensor35);

ROUTE& ROUTE36 =  ROUTE();
ROUTE36.setFromNode(std::string("nodeClock"));
ROUTE36.setFromField(std::string("cycleTime"));
ROUTE36.setToNode(std::string("MoveBall"));
ROUTE36.setToField(std::string("set_cycle"));
Group15.addChild(&ROUTE36);

ROUTE& ROUTE37 =  ROUTE();
ROUTE37.setFromNode(std::string("nodeClock"));
ROUTE37.setFromField(std::string("fraction_changed"));
ROUTE37.setToNode(std::string("NodePosition"));
ROUTE37.setToField(std::string("set_fraction"));
Group15.addChild(&ROUTE37);

ROUTE& ROUTE38 =  ROUTE();
ROUTE38.setFromNode(std::string("MoveBall"));
ROUTE38.setFromField(std::string("keyValue"));
ROUTE38.setToNode(std::string("NodePosition"));
ROUTE38.setToField(std::string("keyValue"));
Group15.addChild(&ROUTE38);

ROUTE& ROUTE39 =  ROUTE();
ROUTE39.setFromNode(std::string("NodePosition"));
ROUTE39.setFromField(std::string("value_changed"));
ROUTE39.setToNode(std::string("transform"));
ROUTE39.setToField(std::string("set_translation"));
Group15.addChild(&ROUTE39);

ProtoBody14.addChild(&Group15);

ProtoDeclare11.addChild(&ProtoBody14);

Scene10.addChild(&ProtoDeclare11);

ProtoDeclare& ProtoDeclare40 =  ProtoDeclare();
ProtoDeclare40.setName(std::string("cyl"));
ProtoInterface& ProtoInterface41 =  ProtoInterface();
field& field42 =  field();
field42.setName(std::string("set_positionA"));
field42.setAccessType(std::string("inputOutput"));
field42.setType(std::string("SFVec3f"));
field42.setValue(std::string("0 0 0"));
ProtoInterface41.addChild(&field42);

field& field43 =  field();
field43.setName(std::string("set_positionB"));
field43.setAccessType(std::string("inputOutput"));
field43.setType(std::string("SFVec3f"));
field43.setValue(std::string("50 50 50"));
ProtoInterface41.addChild(&field43);

ProtoDeclare40.addChild(&ProtoInterface41);

ProtoBody& ProtoBody44 =  ProtoBody();
Group& Group45 =  Group();
Shape& Shape46 =  Shape();
Extrusion& Extrusion47 =  Extrusion();
Extrusion47.setDEF(std::string("extrusion"));
Extrusion47.setCreaseAngle(0.785);
Extrusion47.setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
Extrusion47.setSpine(new float[]{0.0,-50.0,0.0,0.0,0.0,0.0,0.0,50.0,0.0}, 9);
Shape46.setGeometry(&Extrusion47);

Appearance& Appearance48 =  Appearance();
Appearance48.setContainerField("appearance");
Material& Material49 =  Material();
Material49.setContainerField("material");
Material49.setDiffuseColor(new float[]{0.0,1.0,0.0});
Appearance48.addChild(&Material49);

Shape46.addChild(&Appearance48);

Group45.addChild(&Shape46);

Script& Script50 =  Script();
Script50.setDEF(std::string("MoveCylinder"));
field& field51 =  field();
field51.setName(std::string("spine"));
field51.setAccessType(std::string("inputOutput"));
field51.setType(std::string("MFVec3f"));
field51.setValue(std::string("0 -50 0 0 0 0 0 50 0"));
Script50.addChild(&field51);

field& field52 =  field();
field52.setName(std::string("endA"));
field52.setAccessType(std::string("inputOutput"));
field52.setType(std::string("SFVec3f"));
field52.setValue(std::string("0 0 0"));
Script50.addChild(&field52);

field& field53 =  field();
field53.setName(std::string("endB"));
field53.setAccessType(std::string("inputOutput"));
field53.setType(std::string("SFVec3f"));
field53.setValue(std::string("50 50 50"));
Script50.addChild(&field53);

IS& IS54 =  IS();
Connect& connect55 =  Connect();
connect55.setNodeField(std::string("endA"));
connect55.setProtoField(std::string("set_positionA"));
IS54.addChild(&connect55);

Connect& connect56 =  Connect();
connect56.setNodeField(std::string("endB"));
connect56.setProtoField(std::string("set_positionB"));
IS54.addChild(&connect56);

Script50.addChild(&IS54);


//Script50.setSourceCode(std::string("ecmascript:")+
//_T("			function set_endA(value) {")+
//_T("				spine = new MFVec3f(value, spine[1]);")+
//_T("			}")+
//_T("			function set_endB(value) {")+
//_T("				spine = new MFVec3f(spine[0], value);")+
//_T("			}"));
Group45.addChild(&Script50);

ROUTE& ROUTE57 =  ROUTE();
ROUTE57.setFromNode(std::string("MoveCylinder"));
ROUTE57.setFromField(std::string("spine"));
ROUTE57.setToNode(std::string("extrusion"));
ROUTE57.setToField(std::string("set_spine"));
Group45.addChild(&ROUTE57);

ProtoBody44.addChild(&Group45);

ProtoDeclare40.addChild(&ProtoBody44);

Scene10.addChild(&ProtoDeclare40);

Transform& Transform58 =  Transform();
Transform58.setDEF(std::string("HoldsContent"));
Transform58.setScale(new float[]{0.1,0.1,0.1});
PlaneSensor& PlaneSensor59 =  PlaneSensor();
PlaneSensor59.setDEF(std::string("clickGenerator"));
PlaneSensor59.setMinPosition(new float[]{-50.0,-50.0});
PlaneSensor59.setMaxPosition(new float[]{50.0,50.0});
PlaneSensor59.setDescription(std::string("click on background to add nodes, click on nodes to add links"));
Transform58.addChild(&PlaneSensor59);

ProtoInstance& ProtoInstance60 =  ProtoInstance();
ProtoInstance60.setName(std::string("node"));
ProtoInstance60.setDEF(std::string("nodeA"));
fieldValue& fieldValue61 =  fieldValue();
fieldValue61.setName(std::string("position"));
fieldValue61.setValue(std::string("0 0 0"));
ProtoInstance60.addChild(&fieldValue61);

Transform58.addChild(&ProtoInstance60);

ProtoInstance& ProtoInstance62 =  ProtoInstance();
ProtoInstance62.setName(std::string("node"));
ProtoInstance62.setDEF(std::string("nodeB"));
fieldValue& fieldValue63 =  fieldValue();
fieldValue63.setName(std::string("position"));
fieldValue63.setValue(std::string("50 50 50"));
ProtoInstance62.addChild(&fieldValue63);

Transform58.addChild(&ProtoInstance62);

ProtoInstance& ProtoInstance64 =  ProtoInstance();
ProtoInstance64.setName(std::string("cyl"));
ProtoInstance64.setDEF(std::string("linkA"));
Transform58.addChild(&ProtoInstance64);

Scene10.addChild(&Transform58);

Script& Script65 =  Script();
Script65.setDEF(std::string("clickHandler"));
field& field66 =  field();
field66.setName(std::string("counter"));
field66.setAccessType(std::string("inputOutput"));
field66.setValue(std::string("0"));
field66.setType(std::string("SFInt32"));
Script65.addChild(&field66);

field& field67 =  field();
field67.setName(std::string("add_node"));
field67.setAccessType(std::string("inputOnly"));
field67.setValue(std::string("false"));
field67.setType(std::string("SFBool"));
Script65.addChild(&field67);

//<field accessType=\"outputOnly\" name=\"node_changed\" type=\"SFNode\"/>
//<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\">
//<Transform USE=\"HoldsContent\"/>
//</field>

//Script65.setSourceCode(std::string("ecmascript:")+
//_T("	function add_node(value) {")+
//_T("                // Browser.print('hey ', counter);")+
//_T("                counter = counter++;")+
//_T("		Browser.appendTo(Browser.getDocument().querySelector(\"field [name=ModifiableNode]\"),")+
//_T("			{ \"ProtoInstance\":")+
//_T("				{ \"@name\":\"node\",")+
//_T("				  \"@DEF\":\"node'+counter+'\",")+
//_T("				  \"fieldValue\": [")+
//_T("					{")+
//_T("						 \"@name\":\"position\",")+
//_T("						 \"@value\":[0.0,0.0,0.0]")+
//_T("					}")+
//_T("				  ]")+
//_T("				}")+
//_T("			});")+
//_T("        }"));
Scene10.addChild(&Script65);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(std::string("clickGenerator"));
ROUTE68.setFromField(std::string("isActive"));
ROUTE68.setToNode(std::string("clickHandler"));
ROUTE68.setToField(std::string("add_node"));
Scene10.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(std::string("nodeA"));
ROUTE69.setFromField(std::string("position"));
ROUTE69.setToNode(std::string("linkA"));
ROUTE69.setToField(std::string("set_positionA"));
Scene10.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(std::string("nodeB"));
ROUTE70.setFromField(std::string("position"));
ROUTE70.setToNode(std::string("linkA"));
ROUTE70.setToField(std::string("set_positionB"));
Scene10.addChild(&ROUTE70);

X3D0.setScene(&Scene10);

}
