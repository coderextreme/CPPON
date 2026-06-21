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
meta6.setContent(std::string("force.x3d"));
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

meta& meta10 =  meta();
meta10.setName(std::string("generator"));
meta10.setContent(std::string("x3d-tidy V1.0.175, https://www.npmjs.com/package/x3d-tidy"));
head1.addMeta(&meta10);

X3D0.setHead(&head1);

Scene& Scene11 =  Scene();
ProtoDeclare& ProtoDeclare12 =  ProtoDeclare();
ProtoDeclare12.setName(std::string("node"));
ProtoInterface& ProtoInterface13 =  ProtoInterface();
field& field14 =  field();
field14.setName(std::string("position"));
field14.setAccessType(std::string("inputOutput"));
field14.setType(std::string("SFVec3f"));
ProtoInterface13.addChild(&field14);

ProtoDeclare12.addChild(&ProtoInterface13);

ProtoBody& ProtoBody15 =  ProtoBody();
Group& Group16 =  Group();
Transform& Transform17 =  Transform();
Transform17.setDEF(std::string("transform"));
IS& IS18 =  IS();
Connect& connect19 =  Connect();
connect19.setNodeField(std::string("translation"));
connect19.setProtoField(std::string("position"));
IS18.addChild(&connect19);

Transform17.addChild(&IS18);

Shape& Shape20 =  Shape();
Sphere& Sphere21 =  Sphere();
Shape20.setGeometry(&Sphere21);

Appearance& Appearance22 =  Appearance();
Appearance22.setContainerField("appearance");
Material& Material23 =  Material();
Material23.setContainerField("material");
Material23.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance22.addChild(&Material23);

Shape20.addChild(&Appearance22);

Transform17.addChild(&Shape20);

Transform& Transform24 =  Transform();
Transform24.setTranslation(new float[]{1.0,0.0,0.0});
Shape& Shape25 =  Shape();
Appearance& Appearance26 =  Appearance();
Appearance26.setContainerField("appearance");
Material& Material27 =  Material();
Material27.setContainerField("material");
Material27.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance26.addChild(&Material27);

Shape25.addChild(&Appearance26);

Text& Text28 =  Text();
Text28.setString(new std::string[]{"Node"}, 1);
CFontStyle& FontStyle29 =  CFontStyle();
FontStyle29.setContainerField("fontStyle");
FontStyle29.setSize(5);
FontStyle29.setJustify(new std::string[]{"MIDDLE", "MIDDLE"}, 2);
Text28.setFontStyle(&FontStyle29);

Shape25.setGeometry(&Text28);

Transform24.addChild(&Shape25);

Transform17.addChild(&Transform24);

Group16.addChild(&Transform17);

PositionInterpolator& PositionInterpolator30 =  PositionInterpolator();
PositionInterpolator30.setDEF(std::string("NodePosition"));
PositionInterpolator30.setKey(new float[]{0.0,1.0}, 2);
PositionInterpolator30.setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
Group16.addChild(&PositionInterpolator30);

Script& Script31 =  Script();
Script31.setDEF(std::string("MoveBall"));
field& field32 =  field();
field32.setName(std::string("translation"));
field32.setAccessType(std::string("inputOutput"));
field32.setType(std::string("SFVec3f"));
field32.setValue(std::string("50 50 0"));
Script31.addChild(&field32);

field& field33 =  field();
field33.setName(std::string("old"));
field33.setAccessType(std::string("inputOutput"));
field33.setType(std::string("SFVec3f"));
Script31.addChild(&field33);

field& field34 =  field();
field34.setName(std::string("set_cycle"));
field34.setAccessType(std::string("inputOnly"));
field34.setType(std::string("SFTime"));
Script31.addChild(&field34);

field& field35 =  field();
field35.setName(std::string("keyValue"));
field35.setAccessType(std::string("outputOnly"));
field35.setType(std::string("MFVec3f"));
Script31.addChild(&field35);


//Script31.setSourceCode(std::string("ecmascript:")+
//_T("		function set_cycle(value) {")+
//_T("			old = translation;")+
//_T("			translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
//_T("			keyValue = new MFVec3f(old, translation);")+
//_T("		}"));
Group16.addChild(&Script31);

TimeSensor& TimeSensor36 =  TimeSensor();
TimeSensor36.setDEF(std::string("nodeClock"));
TimeSensor36.setCycleInterval(3);
TimeSensor36.setLoop(true);
Group16.addChild(&TimeSensor36);

ROUTE& ROUTE37 =  ROUTE();
ROUTE37.setFromNode(std::string("nodeClock"));
ROUTE37.setFromField(std::string("cycleTime"));
ROUTE37.setToNode(std::string("MoveBall"));
ROUTE37.setToField(std::string("set_cycle"));
Group16.addChild(&ROUTE37);

ROUTE& ROUTE38 =  ROUTE();
ROUTE38.setFromNode(std::string("nodeClock"));
ROUTE38.setFromField(std::string("fraction_changed"));
ROUTE38.setToNode(std::string("NodePosition"));
ROUTE38.setToField(std::string("set_fraction"));
Group16.addChild(&ROUTE38);

ROUTE& ROUTE39 =  ROUTE();
ROUTE39.setFromNode(std::string("MoveBall"));
ROUTE39.setFromField(std::string("keyValue"));
ROUTE39.setToNode(std::string("NodePosition"));
ROUTE39.setToField(std::string("set_keyValue"));
Group16.addChild(&ROUTE39);

ROUTE& ROUTE40 =  ROUTE();
ROUTE40.setFromNode(std::string("NodePosition"));
ROUTE40.setFromField(std::string("value_changed"));
ROUTE40.setToNode(std::string("transform"));
ROUTE40.setToField(std::string("set_translation"));
Group16.addChild(&ROUTE40);

ProtoBody15.addChild(&Group16);

ProtoDeclare12.addChild(&ProtoBody15);

Scene11.addChild(&ProtoDeclare12);

ProtoDeclare& ProtoDeclare41 =  ProtoDeclare();
ProtoDeclare41.setName(std::string("cyl"));
ProtoInterface& ProtoInterface42 =  ProtoInterface();
field& field43 =  field();
field43.setName(std::string("set_positionA"));
field43.setAccessType(std::string("inputOutput"));
field43.setType(std::string("SFVec3f"));
ProtoInterface42.addChild(&field43);

field& field44 =  field();
field44.setName(std::string("set_positionB"));
field44.setAccessType(std::string("inputOutput"));
field44.setType(std::string("SFVec3f"));
ProtoInterface42.addChild(&field44);

ProtoDeclare41.addChild(&ProtoInterface42);

ProtoBody& ProtoBody45 =  ProtoBody();
Group& Group46 =  Group();
Shape& Shape47 =  Shape();
Appearance& Appearance48 =  Appearance();
Appearance48.setContainerField("appearance");
Material& Material49 =  Material();
Material49.setContainerField("material");
Material49.setDiffuseColor(new float[]{0.0,1.0,0.0});
Appearance48.addChild(&Material49);

Shape47.addChild(&Appearance48);

Extrusion& Extrusion50 =  Extrusion();
Extrusion50.setDEF(std::string("extrusion"));
Extrusion50.setCreaseAngle(0.785);
Extrusion50.setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
Extrusion50.setSpine(new float[]{0.0,-50.0,0.0,0.0,0.0,0.0,0.0,50.0,0.0}, 9);
Shape47.setGeometry(&Extrusion50);

Group46.addChild(&Shape47);

Script& Script51 =  Script();
Script51.setDEF(std::string("MoveCylinder"));
field& field52 =  field();
field52.setName(std::string("spine"));
field52.setAccessType(std::string("inputOutput"));
field52.setType(std::string("MFVec3f"));
field52.setValue(std::string("0 -50 0 0 0 0 0 50 0"));
Script51.addChild(&field52);

field& field53 =  field();
field53.setName(std::string("endA"));
field53.setAccessType(std::string("inputOutput"));
field53.setType(std::string("SFVec3f"));
Script51.addChild(&field53);

field& field54 =  field();
field54.setName(std::string("endB"));
field54.setAccessType(std::string("inputOutput"));
field54.setType(std::string("SFVec3f"));
Script51.addChild(&field54);

IS& IS55 =  IS();
Connect& connect56 =  Connect();
connect56.setNodeField(std::string("endA"));
connect56.setProtoField(std::string("set_positionA"));
IS55.addChild(&connect56);

Connect& connect57 =  Connect();
connect57.setNodeField(std::string("endB"));
connect57.setProtoField(std::string("set_positionB"));
IS55.addChild(&connect57);

Script51.addChild(&IS55);


//Script51.setSourceCode(std::string("ecmascript:")+
//_T("                function set_endA(value) {")+
//_T("		    spine = new MFVec3f(value, spine[1]);")+
//_T("                }")+
//_T("                function set_endB(value) {")+
//_T("		    spine = new MFVec3f(spine[0], value);")+
//_T("                }"));
Group46.addChild(&Script51);

ROUTE& ROUTE58 =  ROUTE();
ROUTE58.setFromNode(std::string("MoveCylinder"));
ROUTE58.setFromField(std::string("spine_changed"));
ROUTE58.setToNode(std::string("extrusion"));
ROUTE58.setToField(std::string("set_spine"));
Group46.addChild(&ROUTE58);

ProtoBody45.addChild(&Group46);

ProtoDeclare41.addChild(&ProtoBody45);

Scene11.addChild(&ProtoDeclare41);

Transform& Transform59 =  Transform();
Transform59.setDEF(std::string("HoldsContent"));
Transform59.setScale(new float[]{0.1,0.1,0.1});
PlaneSensor& PlaneSensor60 =  PlaneSensor();
PlaneSensor60.setDEF(std::string("clickGenerator"));
PlaneSensor60.setDescription(std::string("click on background to add nodes, click on nodes to add links"));
PlaneSensor60.setMinPosition(new float[]{-50.0,-50.0});
PlaneSensor60.setMaxPosition(new float[]{50.0,50.0});
Transform59.addChild(&PlaneSensor60);

ProtoInstance& ProtoInstance61 =  ProtoInstance();
ProtoInstance61.setName(std::string("node"));
ProtoInstance61.setDEF(std::string("nodeA"));
fieldValue& fieldValue62 =  fieldValue();
fieldValue62.setName(std::string("position"));
fieldValue62.setValue(std::string("0 1.388333 0"));
ProtoInstance61.addChild(&fieldValue62);

Transform59.addChild(&ProtoInstance61);

ProtoInstance& ProtoInstance63 =  ProtoInstance();
ProtoInstance63.setName(std::string("node"));
ProtoInstance63.setDEF(std::string("nodeB"));
fieldValue& fieldValue64 =  fieldValue();
fieldValue64.setName(std::string("position"));
fieldValue64.setValue(std::string("0 1.388333 0"));
ProtoInstance63.addChild(&fieldValue64);

Transform59.addChild(&ProtoInstance63);

ProtoInstance& ProtoInstance65 =  ProtoInstance();
ProtoInstance65.setName(std::string("node"));
ProtoInstance65.setDEF(std::string("nodeC"));
fieldValue& fieldValue66 =  fieldValue();
fieldValue66.setName(std::string("position"));
fieldValue66.setValue(std::string("0 1.388333 0"));
ProtoInstance65.addChild(&fieldValue66);

Transform59.addChild(&ProtoInstance65);

ProtoInstance& ProtoInstance67 =  ProtoInstance();
ProtoInstance67.setName(std::string("node"));
ProtoInstance67.setDEF(std::string("nodeD"));
fieldValue& fieldValue68 =  fieldValue();
fieldValue68.setName(std::string("position"));
fieldValue68.setValue(std::string("0 1.388333 0"));
ProtoInstance67.addChild(&fieldValue68);

Transform59.addChild(&ProtoInstance67);

ProtoInstance& ProtoInstance69 =  ProtoInstance();
ProtoInstance69.setName(std::string("cyl"));
ProtoInstance69.setDEF(std::string("linkA"));
Transform59.addChild(&ProtoInstance69);

ProtoInstance& ProtoInstance70 =  ProtoInstance();
ProtoInstance70.setName(std::string("cyl"));
ProtoInstance70.setDEF(std::string("linkB"));
Transform59.addChild(&ProtoInstance70);

ProtoInstance& ProtoInstance71 =  ProtoInstance();
ProtoInstance71.setName(std::string("cyl"));
ProtoInstance71.setDEF(std::string("linkC"));
Transform59.addChild(&ProtoInstance71);

Scene11.addChild(&Transform59);

Script& Script72 =  Script();
Script72.setDEF(std::string("clickHandler"));
field& field73 =  field();
field73.setName(std::string("counter"));
field73.setAccessType(std::string("inputOutput"));
field73.setType(std::string("SFInt32"));
Script72.addChild(&field73);

field& field74 =  field();
field74.setName(std::string("node_changed"));
field74.setAccessType(std::string("outputOnly"));
field74.setType(std::string("SFNode"));
Script72.addChild(&field74);

field& field75 =  field();
field75.setName(std::string("add_node"));
field75.setAccessType(std::string("inputOnly"));
field75.setType(std::string("SFBool"));
Script72.addChild(&field75);


//Script72.setSourceCode(std::string("ecmascript:")+
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
Scene11.addChild(&Script72);

ROUTE& ROUTE76 =  ROUTE();
ROUTE76.setFromNode(std::string("clickGenerator"));
ROUTE76.setFromField(std::string("isActive"));
ROUTE76.setToNode(std::string("clickHandler"));
ROUTE76.setToField(std::string("add_node"));
Scene11.addChild(&ROUTE76);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromNode(std::string("nodeA"));
ROUTE77.setFromField(std::string("position_changed"));
ROUTE77.setToNode(std::string("linkA"));
ROUTE77.setToField(std::string("set_positionA"));
Scene11.addChild(&ROUTE77);

ROUTE& ROUTE78 =  ROUTE();
ROUTE78.setFromNode(std::string("nodeB"));
ROUTE78.setFromField(std::string("position_changed"));
ROUTE78.setToNode(std::string("linkA"));
ROUTE78.setToField(std::string("set_positionB"));
Scene11.addChild(&ROUTE78);

ROUTE& ROUTE79 =  ROUTE();
ROUTE79.setFromNode(std::string("nodeA"));
ROUTE79.setFromField(std::string("position_changed"));
ROUTE79.setToNode(std::string("linkB"));
ROUTE79.setToField(std::string("set_positionA"));
Scene11.addChild(&ROUTE79);

ROUTE& ROUTE80 =  ROUTE();
ROUTE80.setFromNode(std::string("nodeC"));
ROUTE80.setFromField(std::string("position_changed"));
ROUTE80.setToNode(std::string("linkB"));
ROUTE80.setToField(std::string("set_positionB"));
Scene11.addChild(&ROUTE80);

ROUTE& ROUTE81 =  ROUTE();
ROUTE81.setFromNode(std::string("nodeA"));
ROUTE81.setFromField(std::string("position_changed"));
ROUTE81.setToNode(std::string("linkC"));
ROUTE81.setToField(std::string("set_positionA"));
Scene11.addChild(&ROUTE81);

ROUTE& ROUTE82 =  ROUTE();
ROUTE82.setFromNode(std::string("nodeD"));
ROUTE82.setFromField(std::string("position_changed"));
ROUTE82.setToNode(std::string("linkC"));
ROUTE82.setToField(std::string("set_positionB"));
Scene11.addChild(&ROUTE82);

X3D0.setScene(&Scene11);

}
