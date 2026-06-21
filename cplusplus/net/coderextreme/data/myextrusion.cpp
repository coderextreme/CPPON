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
meta4.setContent(std::string("November 9 2024"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("title"));
meta5.setContent(std::string("myextrusion.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("identifier"));
meta6.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d"));
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
Group& Group10 =  Group();
Shape& Shape11 =  Shape();
Extrusion& Extrusion12 =  Extrusion();
Extrusion12.setDEF(std::string("myextrusion"));
Extrusion12.setSpine(new float[]{-50.0,-50.0,0.0,50.0,50.0,0.0}, 6);
Extrusion12.setCreaseAngle(0.785);
Extrusion12.setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
Shape11.setGeometry(&Extrusion12);

Appearance& Appearance13 =  Appearance();
Appearance13.setContainerField("appearance");
Material& Material14 =  Material();
Material14.setContainerField("material");
Material14.setDiffuseColor(new float[]{0.0,1.0,0.0});
Appearance13.addChild(&Material14);

Shape11.addChild(&Appearance13);

Group10.addChild(&Shape11);

TimeSensor& TimeSensor15 =  TimeSensor();
TimeSensor15.setDEF(std::string("TourTime"));
TimeSensor15.setLoop(true);
Group10.addChild(&TimeSensor15);

Script& Script16 =  Script();
Script16.setDEF(std::string("MoveCylinder"));
field& field17 =  field();
field17.setName(std::string("set_cycle"));
field17.setAccessType(std::string("inputOnly"));
field17.setType(std::string("SFTime"));
Script16.addChild(&field17);

field& field18 =  field();
field18.setName(std::string("spine"));
field18.setAccessType(std::string("inputOutput"));
field18.setType(std::string("MFVec3f"));
field18.setValue(std::string("-50 -50 0 50 50 0"));
Script16.addChild(&field18);


//Script16.setSourceCode(std::string("ecmascript:")+
//_T("                function set_cycle(value) {")+
//_T("                        Browser.print(value);")+
//_T("                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);")+
//_T("                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);")+
//_T("                        var tmpspine = new MFVec3f();")+
//_T("			tmpspine[0] = endA;")+
//_T("			tmpspine[1] = endB;")+
//_T("                        spine = tmpspine;")+
//_T("                }"));
Group10.addChild(&Script16);

ROUTE& ROUTE19 =  ROUTE();
ROUTE19.setFromNode(std::string("TourTime"));
ROUTE19.setFromField(std::string("cycleTime"));
ROUTE19.setToNode(std::string("MoveCylinder"));
ROUTE19.setToField(std::string("set_cycle"));
Group10.addChild(&ROUTE19);

ROUTE& ROUTE20 =  ROUTE();
ROUTE20.setFromNode(std::string("MoveCylinder"));
ROUTE20.setFromField(std::string("spine_changed"));
ROUTE20.setToNode(std::string("myextrusion"));
ROUTE20.setToField(std::string("set_spine"));
Group10.addChild(&ROUTE20);

Scene9.addChild(&Group10);

X3D0.setScene(&Scene9);

}
