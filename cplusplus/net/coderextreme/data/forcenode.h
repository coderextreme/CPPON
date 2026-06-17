#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define BOOL bool
#define XML_PARSER_H
//#include "pch.h"
//#include "framework.h"
//#include "glut.h"
//#include "X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("creator"));
meta2.setContent(std::string("John W Carlson"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("created"));
meta3.setContent(std::string("December 13 2015"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("modified"));
meta4.setContent(std::string("July 14 2025"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("title"));
meta5.setContent(std::string("forcenode.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("identifier"));
meta6.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("description"));
meta7.setContent(std::string("beginnings of a force directed graph in 3D"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("generator"));
meta8.setContent(std::string("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta8);

X3D0.setHead(&head1);

Scene& Scene9 =  Scene();
ProtoDeclare& ProtoDeclare10 =  ProtoDeclare();
ProtoDeclare10.setName(std::string("node"));
ProtoInterface& ProtoInterface11 =  ProtoInterface();
field& field12 =  field();
field12.setName(std::string("position"));
field12.setAccessType(std::string("inputOutput"));
field12.setType(std::string("SFVec3f"));
field12.setValue(std::string("0 0 0"));
ProtoInterface11.addChild(&field12);

ProtoDeclare10.addChild(&ProtoInterface11);

ProtoBody& ProtoBody13 =  ProtoBody();
Group& Group14 =  Group();
Transform& Transform15 =  Transform();
Transform15.setDEF(std::string("transform"));
IS& IS16 =  IS();
Connect& connect17 =  Connect();
connect17.setNodeField(std::string("translation"));
connect17.setProtoField(std::string("position"));
IS16.addChild(&connect17);

Transform15.addChild(&IS16);

Shape& Shape18 =  Shape();
Sphere& Sphere19 =  Sphere();
Shape18.setGeometry(&Sphere19);

Appearance& Appearance20 =  Appearance();
Material& Material21 =  Material();
Material21.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance20.addChild(&Material21);

Shape18.addChild(&Appearance20);

Transform15.addChild(&Shape18);

Transform& Transform22 =  Transform();
Transform22.setTranslation(new float[]{1.0,0.0,1.0});
Shape& Shape23 =  Shape();
Text& Text24 =  Text();
Text24.setString((std::string[]){"Node"}, 1);
CFontStyle& FontStyle25 =  CFontStyle();
FontStyle25.setJustify((std::string[]){"MIDDLE", "MIDDLE"}, 2);
FontStyle25.setSize(5);
Text24.setFontStyle(&FontStyle25);

Shape23.setGeometry(&Text24);

Appearance& Appearance26 =  Appearance();
Material& Material27 =  Material();
Material27.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance26.addChild(&Material27);

Shape23.addChild(&Appearance26);

Transform22.addChild(&Shape23);

Transform15.addChild(&Transform22);

Group14.addChild(&Transform15);

PositionInterpolator& PositionInterpolator28 =  PositionInterpolator();
PositionInterpolator28.setDEF(std::string("NodePosition"));
PositionInterpolator28.setKey(new float[]{0.0,1.0}, 2);
PositionInterpolator28.setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
Group14.addChild(&PositionInterpolator28);

Script& Script29 =  Script();
Script29.setDEF(std::string("MoveBall"));
field& field30 =  field();
field30.setName(std::string("translation"));
field30.setAccessType(std::string("inputOutput"));
field30.setType(std::string("SFVec3f"));
field30.setValue(std::string("50 50 0"));
Script29.addChild(&field30);

field& field31 =  field();
field31.setName(std::string("old"));
field31.setAccessType(std::string("inputOutput"));
field31.setType(std::string("SFVec3f"));
field31.setValue(std::string("0 0 0"));
Script29.addChild(&field31);

field& field32 =  field();
field32.setName(std::string("set_cycle"));
field32.setAccessType(std::string("inputOnly"));
field32.setType(std::string("SFTime"));
Script29.addChild(&field32);

field& field33 =  field();
field33.setName(std::string("keyValue"));
field33.setAccessType(std::string("outputOnly"));
field33.setType(std::string("MFVec3f"));
Script29.addChild(&field33);


//Script29.setSourceCode(std::string("ecmascript:")+
//_T("					function set_cycle(value) {")+
//_T("                                                old = translation;")+
//_T("						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);")+
//_T("			    			keyValue = new MFVec3f(old, translation);")+
//_T("						// Browser.println(translation);")+
//_T("					}"));
Group14.addChild(&Script29);

TimeSensor& TimeSensor34 =  TimeSensor();
TimeSensor34.setDEF(std::string("nodeClock"));
TimeSensor34.setCycleInterval(3);
TimeSensor34.setLoop(true);
Group14.addChild(&TimeSensor34);

ROUTE& ROUTE35 =  ROUTE();
ROUTE35.setFromNode(std::string("nodeClock"));
ROUTE35.setFromField(std::string("cycleTime"));
ROUTE35.setToNode(std::string("MoveBall"));
ROUTE35.setToField(std::string("set_cycle"));
Group14.addChild(&ROUTE35);

ROUTE& ROUTE36 =  ROUTE();
ROUTE36.setFromNode(std::string("nodeClock"));
ROUTE36.setFromField(std::string("fraction_changed"));
ROUTE36.setToNode(std::string("NodePosition"));
ROUTE36.setToField(std::string("set_fraction"));
Group14.addChild(&ROUTE36);

ROUTE& ROUTE37 =  ROUTE();
ROUTE37.setFromNode(std::string("MoveBall"));
ROUTE37.setFromField(std::string("keyValue"));
ROUTE37.setToNode(std::string("NodePosition"));
ROUTE37.setToField(std::string("keyValue"));
Group14.addChild(&ROUTE37);

ROUTE& ROUTE38 =  ROUTE();
ROUTE38.setFromNode(std::string("NodePosition"));
ROUTE38.setFromField(std::string("value_changed"));
ROUTE38.setToNode(std::string("transform"));
ROUTE38.setToField(std::string("set_translation"));
Group14.addChild(&ROUTE38);

ProtoBody13.addChild(&Group14);

ProtoDeclare10.addChild(&ProtoBody13);

Scene9.addChild(&ProtoDeclare10);

ProtoDeclare& ProtoDeclare39 =  ProtoDeclare();
ProtoDeclare39.setName(std::string("cyl"));
ProtoInterface& ProtoInterface40 =  ProtoInterface();
field& field41 =  field();
field41.setName(std::string("set_positionA"));
field41.setAccessType(std::string("inputOutput"));
field41.setType(std::string("SFVec3f"));
ProtoInterface40.addChild(&field41);

field& field42 =  field();
field42.setName(std::string("set_positionB"));
field42.setAccessType(std::string("inputOutput"));
field42.setType(std::string("SFVec3f"));
ProtoInterface40.addChild(&field42);

ProtoDeclare39.addChild(&ProtoInterface40);

ProtoBody& ProtoBody43 =  ProtoBody();
Group& Group44 =  Group();
Shape& Shape45 =  Shape();
Extrusion& Extrusion46 =  Extrusion();
Extrusion46.setDEF(std::string("extrusion"));
Extrusion46.setCreaseAngle(0.785);
Extrusion46.setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
Extrusion46.setSpine(new float[]{0.0,-50.0,0.0,0.0,0.0,0.0,0.0,50.0,0.0}, 9);
Shape45.setGeometry(&Extrusion46);

Appearance& Appearance47 =  Appearance();
Material& Material48 =  Material();
Material48.setDiffuseColor(new float[]{0.0,1.0,0.0});
Appearance47.addChild(&Material48);

Shape45.addChild(&Appearance47);

Group44.addChild(&Shape45);

Script& Script49 =  Script();
Script49.setDEF(std::string("MoveCylinder"));
field& field50 =  field();
field50.setName(std::string("spine"));
field50.setAccessType(std::string("inputOutput"));
field50.setType(std::string("MFVec3f"));
field50.setValue(std::string("0 -50 0 0 0 0 0 50 0"));
Script49.addChild(&field50);

field& field51 =  field();
field51.setName(std::string("endA"));
field51.setAccessType(std::string("inputOutput"));
field51.setType(std::string("SFVec3f"));
Script49.addChild(&field51);

field& field52 =  field();
field52.setName(std::string("endB"));
field52.setAccessType(std::string("inputOutput"));
field52.setType(std::string("SFVec3f"));
Script49.addChild(&field52);

IS& IS53 =  IS();
Connect& connect54 =  Connect();
connect54.setNodeField(std::string("endA"));
connect54.setProtoField(std::string("set_positionA"));
IS53.addChild(&connect54);

Connect& connect55 =  Connect();
connect55.setNodeField(std::string("endB"));
connect55.setProtoField(std::string("set_positionB"));
IS53.addChild(&connect55);

Script49.addChild(&IS53);


//Script49.setSourceCode(std::string("ecmascript:")+
//_T("                function set_endA(value) {")+
//_T("		    spine = new MFVec3f(value, spine[1]);")+
//_T("                }")+
//_T("                function set_endB(value) {")+
//_T("		    spine = new MFVec3f(spine[0], value);")+
//_T("                }"));
Group44.addChild(&Script49);

ROUTE& ROUTE56 =  ROUTE();
ROUTE56.setFromNode(std::string("MoveCylinder"));
ROUTE56.setFromField(std::string("spine"));
ROUTE56.setToNode(std::string("extrusion"));
ROUTE56.setToField(std::string("set_spine"));
Group44.addChild(&ROUTE56);

ProtoBody43.addChild(&Group44);

ProtoDeclare39.addChild(&ProtoBody43);

Scene9.addChild(&ProtoDeclare39);

Transform& Transform57 =  Transform();
Transform57.setDEF(std::string("HoldsContent"));
Transform57.setScale(new float[]{0.1,0.1,0.1});
PlaneSensor& PlaneSensor58 =  PlaneSensor();
PlaneSensor58.setDEF(std::string("clickGenerator"));
PlaneSensor58.setMinPosition(new float[]{-50.0,-50.0});
PlaneSensor58.setMaxPosition(new float[]{50.0,50.0});
PlaneSensor58.setDescription(std::string("click on background to add nodes, click on nodes to add links"));
Transform57.addChild(&PlaneSensor58);

ProtoInstance& ProtoInstance59 =  ProtoInstance();
ProtoInstance59.setName(std::string("node"));
ProtoInstance59.setDEF(std::string("nodeA"));
fieldValue& fieldValue60 =  fieldValue();
fieldValue60.setName(std::string("position"));
fieldValue60.setValue(std::string("0 0 0"));
ProtoInstance59.addChild(&fieldValue60);

Transform57.addChild(&ProtoInstance59);

ProtoInstance& ProtoInstance61 =  ProtoInstance();
ProtoInstance61.setName(std::string("node"));
ProtoInstance61.setDEF(std::string("nodeB"));
fieldValue& fieldValue62 =  fieldValue();
fieldValue62.setName(std::string("position"));
fieldValue62.setValue(std::string("50 50 50"));
ProtoInstance61.addChild(&fieldValue62);

Transform57.addChild(&ProtoInstance61);

ProtoInstance& ProtoInstance63 =  ProtoInstance();
ProtoInstance63.setName(std::string("node"));
ProtoInstance63.setDEF(std::string("nodeC"));
fieldValue& fieldValue64 =  fieldValue();
fieldValue64.setName(std::string("position"));
fieldValue64.setValue(std::string("-50 -50 -50"));
ProtoInstance63.addChild(&fieldValue64);

Transform57.addChild(&ProtoInstance63);

ProtoInstance& ProtoInstance65 =  ProtoInstance();
ProtoInstance65.setName(std::string("node"));
ProtoInstance65.setDEF(std::string("nodeD"));
fieldValue& fieldValue66 =  fieldValue();
fieldValue66.setName(std::string("position"));
fieldValue66.setValue(std::string("50 50 -50"));
ProtoInstance65.addChild(&fieldValue66);

Transform57.addChild(&ProtoInstance65);

ProtoInstance& ProtoInstance67 =  ProtoInstance();
ProtoInstance67.setName(std::string("cyl"));
ProtoInstance67.setDEF(std::string("linkA"));
Transform57.addChild(&ProtoInstance67);

ProtoInstance& ProtoInstance68 =  ProtoInstance();
ProtoInstance68.setName(std::string("cyl"));
ProtoInstance68.setDEF(std::string("linkB"));
Transform57.addChild(&ProtoInstance68);

ProtoInstance& ProtoInstance69 =  ProtoInstance();
ProtoInstance69.setName(std::string("cyl"));
ProtoInstance69.setDEF(std::string("linkC"));
Transform57.addChild(&ProtoInstance69);

Scene9.addChild(&Transform57);

Script& Script70 =  Script();
Script70.setDEF(std::string("clickHandler"));
field& field71 =  field();
field71.setName(std::string("counter"));
field71.setAccessType(std::string("inputOutput"));
field71.setValue(std::string("0"));
field71.setType(std::string("SFInt32"));
Script70.addChild(&field71);

field& field72 =  field();
field72.setName(std::string("node_changed"));
field72.setAccessType(std::string("outputOnly"));
field72.setType(std::string("SFNode"));
Script70.addChild(&field72);

field& field73 =  field();
field73.setName(std::string("add_node"));
field73.setAccessType(std::string("inputOnly"));
field73.setValue(std::string("false"));
field73.setType(std::string("SFBool"));
Script70.addChild(&field73);

//<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\">
//<Transform USE=\"HoldsContent\"/>
//</field>

//Script70.setSourceCode(std::string("ecmascript:")+
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
Scene9.addChild(&Script70);

ROUTE& ROUTE74 =  ROUTE();
ROUTE74.setFromNode(std::string("clickGenerator"));
ROUTE74.setFromField(std::string("isActive"));
ROUTE74.setToNode(std::string("clickHandler"));
ROUTE74.setToField(std::string("add_node"));
Scene9.addChild(&ROUTE74);

ROUTE& ROUTE75 =  ROUTE();
ROUTE75.setFromNode(std::string("nodeA"));
ROUTE75.setFromField(std::string("position"));
ROUTE75.setToNode(std::string("linkA"));
ROUTE75.setToField(std::string("set_positionA"));
Scene9.addChild(&ROUTE75);

ROUTE& ROUTE76 =  ROUTE();
ROUTE76.setFromNode(std::string("nodeB"));
ROUTE76.setFromField(std::string("position"));
ROUTE76.setToNode(std::string("linkA"));
ROUTE76.setToField(std::string("set_positionB"));
Scene9.addChild(&ROUTE76);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromNode(std::string("nodeA"));
ROUTE77.setFromField(std::string("position"));
ROUTE77.setToNode(std::string("linkB"));
ROUTE77.setToField(std::string("set_positionA"));
Scene9.addChild(&ROUTE77);

ROUTE& ROUTE78 =  ROUTE();
ROUTE78.setFromNode(std::string("nodeC"));
ROUTE78.setFromField(std::string("position"));
ROUTE78.setToNode(std::string("linkB"));
ROUTE78.setToField(std::string("set_positionB"));
Scene9.addChild(&ROUTE78);

ROUTE& ROUTE79 =  ROUTE();
ROUTE79.setFromNode(std::string("nodeA"));
ROUTE79.setFromField(std::string("position"));
ROUTE79.setToNode(std::string("linkC"));
ROUTE79.setToField(std::string("set_positionA"));
Scene9.addChild(&ROUTE79);

ROUTE& ROUTE80 =  ROUTE();
ROUTE80.setFromNode(std::string("nodeD"));
ROUTE80.setFromField(std::string("position"));
ROUTE80.setToNode(std::string("linkC"));
ROUTE80.setToField(std::string("set_positionB"));
Scene9.addChild(&ROUTE80);

X3D0.setScene(&Scene9);

//}
