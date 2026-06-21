#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void MyBounce(int argc, char ** argv) {
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
meta3.setContent(std::string("MyBounce.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("John Carlson"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("description"));
meta5.setContent(std::string("3 prismatic spheres"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("identifier"));
meta6.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/SFVec3f.x3d"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
Scene7.addChild(&NavigationInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(std::string("transform"));
Shape& Shape10 =  Shape();
Appearance& Appearance11 =  Appearance();
Appearance11.setContainerField("appearance");
Material& Material12 =  Material();
Material12.setContainerField("material");
Material12.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material12.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance11.addChild(&Material12);

Shape10.addChild(&Appearance11);

Sphere& Sphere13 =  Sphere();
Shape10.setGeometry(&Sphere13);

Transform9.addChild(&Shape10);

Scene7.addChild(&Transform9);

Script& Script14 =  Script();
Script14.setDEF(std::string("Bounce2"));
field& field15 =  field();
field15.setName(std::string("set_translation"));
field15.setAccessType(std::string("inputOnly"));
field15.setType(std::string("SFVec3f"));
field15.setValue(std::string("0 0 0"));
Script14.addChild(&field15);

field& field16 =  field();
field16.setName(std::string("translation_changed"));
field16.setAccessType(std::string("outputOnly"));
field16.setType(std::string("SFVec3f"));
field16.setValue(std::string("0 0 0"));
Script14.addChild(&field16);

field& field17 =  field();
field17.setName(std::string("translation"));
field17.setAccessType(std::string("inputOutput"));
field17.setType(std::string("SFVec3f"));
field17.setValue(std::string("0 0 0"));
Script14.addChild(&field17);

field& field18 =  field();
field18.setName(std::string("velocity"));
field18.setAccessType(std::string("inputOutput"));
field18.setType(std::string("SFVec3f"));
field18.setValue(std::string("0 0 0"));
Script14.addChild(&field18);

field& field19 =  field();
field19.setName(std::string("set_fraction"));
field19.setAccessType(std::string("inputOnly"));
field19.setType(std::string("SFTime"));
Script14.addChild(&field19);


//Script14.setSourceCode(std::string("ecmascript:")+
//_T("			function newBubble() {")+
//_T("			    translation = new SFVec3f(0, 0, 0);")+
//_T("			    velocity = new SFVec3f(")+
//_T("			    	Math.random() - 0.5,")+
//_T("				Math.random() - 0.5,")+
//_T("				Math.random() - 0.5);")+
//_T("			}")+
//_T("			function set_fraction() {")+
//_T("			    translation = new SFVec3f(")+
//_T("			    	translation.x + velocity.x,")+
//_T("				translation.y + velocity.y,")+
//_T("				translation.z + velocity.z);")+
//_T("				if (Math.abs(translation.x) > 10) {")+
//_T("					newBubble();")+
//_T("				} else if (Math.abs(translation.y) > 10) {")+
//_T("					newBubble();")+
//_T("				} else if (Math.abs(translation.z) > 10) {")+
//_T("					newBubble();")+
//_T("				} else {")+
//_T("					velocity = new SFVec3f(")+
//_T("						velocity.x + Math.random() * 0.2 - 0.1,")+
//_T("						velocity.y + Math.random() * 0.2 - 0.1,")+
//_T("						velocity.z + Math.random() * 0.2 - 0.1")+
//_T("					);")+
//_T("				}")+
//_T("			}")+
//_T("			function initialize() {")+
//_T("			     newBubble();")+
//_T("			}"));
Scene7.addChild(&Script14);

TimeSensor& TimeSensor20 =  TimeSensor();
TimeSensor20.setDEF(std::string("TourTime"));
TimeSensor20.setCycleInterval(0.15);
TimeSensor20.setLoop(true);
Scene7.addChild(&TimeSensor20);

ROUTE& ROUTE21 =  ROUTE();
ROUTE21.setFromNode(std::string("TourTime"));
ROUTE21.setFromField(std::string("cycleTime"));
ROUTE21.setToNode(std::string("Bounce2"));
ROUTE21.setToField(std::string("set_fraction"));
Scene7.addChild(&ROUTE21);

ROUTE& ROUTE22 =  ROUTE();
ROUTE22.setFromNode(std::string("Bounce2"));
ROUTE22.setFromField(std::string("translation_changed"));
ROUTE22.setToNode(std::string("transform"));
ROUTE22.setToField(std::string("set_translation"));
Scene7.addChild(&ROUTE22);

X3D0.setScene(&Scene7);

//}
