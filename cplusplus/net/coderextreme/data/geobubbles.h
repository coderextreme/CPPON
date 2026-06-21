#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void geobubbles(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(std::string("Geospatial"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(std::string("title"));
meta3.setContent(std::string("geobubbles.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("John Carlson"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("generator"));
meta5.setContent(std::string("manual"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("identifier"));
meta6.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("description"));
meta7.setContent(std::string("geo bubbles"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
//Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/
//PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/
GeoViewpoint& GeoViewpoint9 =  GeoViewpoint();
GeoViewpoint9.setDEF(std::string("Tour"));
GeoViewpoint9.setPosition(new double[]{0.0,0.0,4.0});
GeoViewpoint9.setOrientation(new float[]{1.0,0.0,0.0,0.0});
GeoViewpoint9.setDescription(std::string("Tour Views"));
Scene8.addChild(&GeoViewpoint9);

Background& Background10 =  Background();
Background10.setBackUrl(new std::string[]{"../resources/images/BK.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"}, 2);
Background10.setBottomUrl(new std::string[]{"../resources/images/BT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"}, 2);
Background10.setFrontUrl(new std::string[]{"../resources/images/FR.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"}, 2);
Background10.setLeftUrl(new std::string[]{"../resources/images/LF.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"}, 2);
Background10.setRightUrl(new std::string[]{"../resources/images/RT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"}, 2);
Background10.setTopUrl(new std::string[]{"../resources/images/TP.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"}, 2);
Scene8.addChild(&Background10);

Transform& Transform11 =  Transform();
Shape& Shape12 =  Shape();
Sphere& Sphere13 =  Sphere();
Shape12.setGeometry(&Sphere13);

Appearance& Appearance14 =  Appearance();
Appearance14.setContainerField("appearance");
Material& Material15 =  Material();
Material15.setContainerField("material");
Material15.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material15.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance14.addChild(&Material15);

Shape12.addChild(&Appearance14);

Transform11.addChild(&Shape12);

Scene8.addChild(&Transform11);

TimeSensor& TimeSensor16 =  TimeSensor();
TimeSensor16.setDEF(std::string("TourTime"));
TimeSensor16.setCycleInterval(5);
TimeSensor16.setLoop(true);
Scene8.addChild(&TimeSensor16);

GeoPositionInterpolator& GeoPositionInterpolator17 =  GeoPositionInterpolator();
GeoPositionInterpolator17.setDEF(std::string("TourPosition"));
GeoPositionInterpolator17.setKey(new float[]{0.0,1.0}, 2);
GeoPositionInterpolator17.setKeyValue(new double[]{0.0015708,0.0,4.0,0.0,0.0015708,4.0}, 6);
Scene8.addChild(&GeoPositionInterpolator17);

Script& Script18 =  Script();
Script18.setDEF(std::string("RandomTourTime"));
field& field19 =  field();
field19.setName(std::string("set_cycle"));
field19.setAccessType(std::string("inputOnly"));
field19.setType(std::string("SFTime"));
Script18.addChild(&field19);

field& field20 =  field();
field20.setName(std::string("val"));
field20.setAccessType(std::string("inputOutput"));
field20.setType(std::string("SFFloat"));
field20.setValue(std::string("0"));
Script18.addChild(&field20);

field& field21 =  field();
field21.setName(std::string("positions"));
field21.setAccessType(std::string("inputOutput"));
field21.setType(std::string("MFVec3d"));
field21.setValue(std::string("0.0015708 0 4 0 0.0015708 4"));
Script18.addChild(&field21);

field& field22 =  field();
field22.setName(std::string("position"));
field22.setAccessType(std::string("inputOutput"));
field22.setType(std::string("MFVec3d"));
field22.setValue(std::string("0.0015708 0 4 0 0.0015708 4"));
Script18.addChild(&field22);


//Script18.setSourceCode(std::string("ecmascript:")+
//_T("               function set_cycle(value) {")+
//_T("                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo")+
//_T("                        var ov = val;")+
//_T("			// Browser.print('old '+ov);")+
//_T("                        do {")+
//_T("                                val = Math.floor(Math.random()*2);")+
//_T("                                var vc = val;")+
//_T("                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);")+
//_T("                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);")+
//_T("			// Browser.println(positions[ov]);")+
//_T("			// Browser.println(positions[vc]);")+
//_T("                        position = new MFVec3d();")+
//_T("                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);")+
//_T("                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);")+
//_T("               }"));
Scene8.addChild(&Script18);

ROUTE& ROUTE23 =  ROUTE();
ROUTE23.setFromNode(std::string("TourTime"));
ROUTE23.setFromField(std::string("cycleTime"));
ROUTE23.setToNode(std::string("RandomTourTime"));
ROUTE23.setToField(std::string("set_cycle"));
Scene8.addChild(&ROUTE23);

ROUTE& ROUTE24 =  ROUTE();
ROUTE24.setFromNode(std::string("RandomTourTime"));
ROUTE24.setFromField(std::string("position"));
ROUTE24.setToNode(std::string("TourPosition"));
ROUTE24.setToField(std::string("keyValue"));
Scene8.addChild(&ROUTE24);

ROUTE& ROUTE25 =  ROUTE();
ROUTE25.setFromNode(std::string("TourTime"));
ROUTE25.setFromField(std::string("fraction_changed"));
ROUTE25.setToNode(std::string("TourPosition"));
ROUTE25.setToField(std::string("set_fraction"));
Scene8.addChild(&ROUTE25);

ROUTE& ROUTE26 =  ROUTE();
ROUTE26.setFromNode(std::string("TourPosition"));
ROUTE26.setFromField(std::string("geovalue_changed"));
ROUTE26.setToNode(std::string("Tour"));
ROUTE26.setToField(std::string("set_position"));
Scene8.addChild(&ROUTE26);

X3D0.setScene(&Scene8);

//}
