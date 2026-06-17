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
meta2.setName(std::string("title"));
meta2.setContent(std::string("arc2.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("creator"));
meta3.setContent(std::string("Lost, Doug Sanden I think"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("generator"));
meta4.setContent(std::string("manual"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("identifier"));
meta5.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("description"));
meta6.setContent(std::string("a generic proto to connect two objects"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Viewpoint& Viewpoint8 =  Viewpoint();
Viewpoint8.setPosition(new float[]{0.0,0.0,5.0});
Viewpoint8.setDescription(std::string("Only Viewpoint"));
Scene7.addChild(&Viewpoint8);

Background& Background9 =  Background();
Background9.setSkyColor(new float[]{0.4,0.4,0.4}, 3);
Scene7.addChild(&Background9);

Transform& Transform10 =  Transform();
Transform10.setDEF(std::string("G1"));
Transform& Transform11 =  Transform();
Transform11.setDEF(std::string("DECLpoint_INSTANCE_node"));
Shape& Shape12 =  Shape();
Sphere& Sphere13 =  Sphere();
Sphere13.setRadius(0.1);
Shape12.setGeometry(&Sphere13);

Appearance& Appearance14 =  Appearance();
Material& Material15 =  Material();
Material15.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance14.addChild(&Material15);

Shape12.addChild(&Appearance14);

Transform11.addChild(&Shape12);

PositionInterpolator& PositionInterpolator16 =  PositionInterpolator();
PositionInterpolator16.setDEF(std::string("DECLpoint_INSTANCE_PI1"));
PositionInterpolator16.setKey(new float[]{0.0,1.0}, 2);
PositionInterpolator16.setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
Transform11.addChild(&PositionInterpolator16);

Script& Script17 =  Script();
Script17.setDEF(std::string("DECLpoint_INSTANCE_MB1"));
field& field18 =  field();
field18.setName(std::string("translation"));
field18.setAccessType(std::string("inputOutput"));
field18.setType(std::string("SFVec3f"));
field18.setValue(std::string("0 0 0"));
Script17.addChild(&field18);

field& field19 =  field();
field19.setName(std::string("old"));
field19.setAccessType(std::string("inputOutput"));
field19.setType(std::string("SFVec3f"));
field19.setValue(std::string("0 0 0"));
Script17.addChild(&field19);

field& field20 =  field();
field20.setName(std::string("set_location"));
field20.setAccessType(std::string("inputOnly"));
field20.setType(std::string("SFTime"));
Script17.addChild(&field20);

field& field21 =  field();
field21.setName(std::string("keyValue"));
field21.setAccessType(std::string("inputOutput"));
field21.setType(std::string("MFVec3f"));
field21.setValue(std::string("0 0 0 0 5 0"));
Script17.addChild(&field21);


//Script17.setSourceCode(std::string("ecmascript:")+
//_T("               function set_location(value) {")+
//_T("                    old = translation;")+
//_T("                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
//_T("                    keyValue = new MFVec3f([old, translation]);")+
//_T("               }"));
Transform11.addChild(&Script17);

TimeSensor& TimeSensor22 =  TimeSensor();
TimeSensor22.setDEF(std::string("DECLpoint_INSTANCE_CL1"));
TimeSensor22.setCycleInterval(3);
TimeSensor22.setLoop(true);
Transform11.addChild(&TimeSensor22);

ROUTE& ROUTE23 =  ROUTE();
ROUTE23.setFromNode(std::string("DECLpoint_INSTANCE_CL1"));
ROUTE23.setFromField(std::string("cycleTime"));
ROUTE23.setToNode(std::string("DECLpoint_INSTANCE_MB1"));
ROUTE23.setToField(std::string("set_location"));
Transform11.addChild(&ROUTE23);

ROUTE& ROUTE24 =  ROUTE();
ROUTE24.setFromNode(std::string("DECLpoint_INSTANCE_CL1"));
ROUTE24.setFromField(std::string("fraction_changed"));
ROUTE24.setToNode(std::string("DECLpoint_INSTANCE_PI1"));
ROUTE24.setToField(std::string("set_fraction"));
Transform11.addChild(&ROUTE24);

ROUTE& ROUTE25 =  ROUTE();
ROUTE25.setFromNode(std::string("DECLpoint_INSTANCE_MB1"));
ROUTE25.setFromField(std::string("keyValue"));
ROUTE25.setToNode(std::string("DECLpoint_INSTANCE_PI1"));
ROUTE25.setToField(std::string("keyValue"));
Transform11.addChild(&ROUTE25);

ROUTE& ROUTE26 =  ROUTE();
ROUTE26.setFromNode(std::string("DECLpoint_INSTANCE_PI1"));
ROUTE26.setFromField(std::string("value_changed"));
ROUTE26.setToNode(std::string("DECLpoint_INSTANCE_node"));
ROUTE26.setToField(std::string("set_translation"));
Transform11.addChild(&ROUTE26);

ROUTE& ROUTE27 =  ROUTE();
ROUTE27.setFromNode(std::string("DECLpoint_INSTANCE_MB1"));
ROUTE27.setFromField(std::string("translation_changed"));
ROUTE27.setToNode(std::string("DECLpoint_INSTANCE_node"));
ROUTE27.setToField(std::string("set_translation"));
Transform11.addChild(&ROUTE27);

Transform10.addChild(&Transform11);

Scene7.addChild(&Transform10);

Transform& Transform28 =  Transform();
Transform28.setDEF(std::string("G2"));
Transform& Transform29 =  Transform();
Transform29.setDEF(std::string("DECLpoint_INSTANCE1000_node"));
Shape& Shape30 =  Shape();
Sphere& Sphere31 =  Sphere();
Sphere31.setRadius(0.1);
Shape30.setGeometry(&Sphere31);

Appearance& Appearance32 =  Appearance();
Material& Material33 =  Material();
Material33.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance32.addChild(&Material33);

Shape30.addChild(&Appearance32);

Transform29.addChild(&Shape30);

PositionInterpolator& PositionInterpolator34 =  PositionInterpolator();
PositionInterpolator34.setDEF(std::string("DECLpoint_INSTANCE1000_PI1"));
PositionInterpolator34.setKey(new float[]{0.0,1.0}, 2);
PositionInterpolator34.setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
Transform29.addChild(&PositionInterpolator34);

Script& Script35 =  Script();
Script35.setDEF(std::string("DECLpoint_INSTANCE1000_MB1"));
field& field36 =  field();
field36.setName(std::string("translation"));
field36.setAccessType(std::string("inputOutput"));
field36.setType(std::string("SFVec3f"));
field36.setValue(std::string("0 0 0"));
Script35.addChild(&field36);

field& field37 =  field();
field37.setName(std::string("old"));
field37.setAccessType(std::string("inputOutput"));
field37.setType(std::string("SFVec3f"));
field37.setValue(std::string("0 0 0"));
Script35.addChild(&field37);

field& field38 =  field();
field38.setName(std::string("set_location"));
field38.setAccessType(std::string("inputOnly"));
field38.setType(std::string("SFTime"));
Script35.addChild(&field38);

field& field39 =  field();
field39.setName(std::string("keyValue"));
field39.setAccessType(std::string("inputOutput"));
field39.setType(std::string("MFVec3f"));
field39.setValue(std::string("0 0 0 0 5 0"));
Script35.addChild(&field39);


//Script35.setSourceCode(std::string("ecmascript:")+
//_T("               function set_location(value) {")+
//_T("                    old = translation;")+
//_T("                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
//_T("                    keyValue = new MFVec3f([old, translation]);")+
//_T("               }"));
Transform29.addChild(&Script35);

TimeSensor& TimeSensor40 =  TimeSensor();
TimeSensor40.setDEF(std::string("DECLpoint_INSTANCE1000_CL1"));
TimeSensor40.setCycleInterval(3);
TimeSensor40.setLoop(true);
Transform29.addChild(&TimeSensor40);

ROUTE& ROUTE41 =  ROUTE();
ROUTE41.setFromNode(std::string("DECLpoint_INSTANCE1000_CL1"));
ROUTE41.setFromField(std::string("cycleTime"));
ROUTE41.setToNode(std::string("DECLpoint_INSTANCE1000_MB1"));
ROUTE41.setToField(std::string("set_location"));
Transform29.addChild(&ROUTE41);

ROUTE& ROUTE42 =  ROUTE();
ROUTE42.setFromNode(std::string("DECLpoint_INSTANCE1000_CL1"));
ROUTE42.setFromField(std::string("fraction_changed"));
ROUTE42.setToNode(std::string("DECLpoint_INSTANCE1000_PI1"));
ROUTE42.setToField(std::string("set_fraction"));
Transform29.addChild(&ROUTE42);

ROUTE& ROUTE43 =  ROUTE();
ROUTE43.setFromNode(std::string("DECLpoint_INSTANCE1000_MB1"));
ROUTE43.setFromField(std::string("keyValue"));
ROUTE43.setToNode(std::string("DECLpoint_INSTANCE1000_PI1"));
ROUTE43.setToField(std::string("keyValue"));
Transform29.addChild(&ROUTE43);

ROUTE& ROUTE44 =  ROUTE();
ROUTE44.setFromNode(std::string("DECLpoint_INSTANCE1000_PI1"));
ROUTE44.setFromField(std::string("value_changed"));
ROUTE44.setToNode(std::string("DECLpoint_INSTANCE1000_node"));
ROUTE44.setToField(std::string("set_translation"));
Transform29.addChild(&ROUTE44);

ROUTE& ROUTE45 =  ROUTE();
ROUTE45.setFromNode(std::string("DECLpoint_INSTANCE1000_MB1"));
ROUTE45.setFromField(std::string("translation_changed"));
ROUTE45.setToNode(std::string("DECLpoint_INSTANCE1000_node"));
ROUTE45.setToField(std::string("set_translation"));
Transform29.addChild(&ROUTE45);

Transform28.addChild(&Transform29);

Scene7.addChild(&Transform28);

Transform& Transform46 =  Transform();
Transform46.setDEF(std::string("transC1"));
Transform& Transform47 =  Transform();
Transform47.setDEF(std::string("rotscaleC1"));
Shape& Shape48 =  Shape();
Appearance& Appearance49 =  Appearance();
Material& Material50 =  Material();
Material50.setDiffuseColor(new float[]{0.2,0.7,0.7});
Material50.setTransparency(0.5);
Appearance49.addChild(&Material50);

Shape48.addChild(&Appearance49);

Cylinder& Cylinder51 =  Cylinder();
Cylinder51.setRadius(0.05);
Shape48.setGeometry(&Cylinder51);

Transform47.addChild(&Shape48);

Transform46.addChild(&Transform47);

Scene7.addChild(&Transform46);

Script& Script52 =  Script();
Script52.setDEF(std::string("DECLx3dconnector_connector1_S1"));
field& field53 =  field();
field53.setName(std::string("startnode"));
field53.setAccessType(std::string("initializeOnly"));
field53.setType(std::string("SFNode"));
Transform& Transform54 =  Transform();
Transform54.setUSE(std::string("G1"));
field53.addChild(&Transform54);

Script52.addChild(&field53);

field& field55 =  field();
field55.setName(std::string("endnode"));
field55.setAccessType(std::string("initializeOnly"));
field55.setType(std::string("SFNode"));
Transform& Transform56 =  Transform();
Transform56.setUSE(std::string("G2"));
field55.addChild(&Transform56);

Script52.addChild(&field55);

field& field57 =  field();
field57.setName(std::string("transC1"));
field57.setAccessType(std::string("initializeOnly"));
field57.setType(std::string("SFNode"));
Transform& Transform58 =  Transform();
Transform58.setUSE(std::string("transC1"));
field57.addChild(&Transform58);

Script52.addChild(&field57);

field& field59 =  field();
field59.setName(std::string("rotscaleC1"));
field59.setAccessType(std::string("initializeOnly"));
field59.setType(std::string("SFNode"));
Transform& Transform60 =  Transform();
Transform60.setUSE(std::string("rotscaleC1"));
field59.addChild(&Transform60);

Script52.addChild(&field59);

field& field61 =  field();
field61.setName(std::string("set_startpoint"));
field61.setAccessType(std::string("inputOnly"));
field61.setType(std::string("SFVec3f"));
Script52.addChild(&field61);

field& field62 =  field();
field62.setName(std::string("set_endpoint"));
field62.setAccessType(std::string("inputOnly"));
field62.setType(std::string("SFVec3f"));
Script52.addChild(&field62);


//Script52.setSourceCode(std::string("ecmascript:")+
//_T("        function recompute(startpoint,endpoint){")+
//_T("	    if (typeof endpoint === 'undefined') {")+
//_T("		return;")+
//_T("	    }")+
//_T("            var dif = endpoint.subtract(startpoint);")+
//_T("            var dist = dif.length()*0.5;")+
//_T("            var dif2 = dif.multiply(0.5);")+
//_T("            var norm = dif.normalize();")+
//_T("            var transl = startpoint.add(dif2);")+
//_T("	    if (typeof Quaternion !== 'undefined') {")+
//_T("		    return {")+
//_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
//_T("			    translation : transl,")+
//_T("			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)")+
//_T("		    };")+
//_T("	    } else {")+
//_T("		    return {")+
//_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
//_T("			    translation : transl,")+
//_T("			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)")+
//_T("		    };")+
//_T("	    }")+
//_T("	}")+
//_T("	function recompute_and_route(startpoint, endpoint) {")+
//_T("	      var trafo = recompute(startpoint, endpoint);")+
//_T("	      transC1.translation = trafo.translation;")+
//_T("	      rotscaleC1.rotation = trafo.rotation;")+
//_T("	      rotscaleC1.scale = trafo.scale;")+
//_T("	}")+
//_T("        function initialize(){")+
//_T("            recompute_and_route(startnode.translation,endnode.translation);")+
//_T("        }")+
//_T("        function set_startpoint(val,t){")+
//_T("            recompute_and_route(val,endnode.translation);")+
//_T("        }")+
//_T("        function set_endpoint(val,t){")+
//_T("            recompute_and_route(startnode.translation,val);")+
//_T("        }"));
Scene7.addChild(&Script52);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(std::string("G1"));
ROUTE63.setFromField(std::string("translation_changed"));
ROUTE63.setToNode(std::string("DECLx3dconnector_connector1_S1"));
ROUTE63.setToField(std::string("set_startpoint"));
Scene7.addChild(&ROUTE63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(std::string("G2"));
ROUTE64.setFromField(std::string("translation_changed"));
ROUTE64.setToNode(std::string("DECLx3dconnector_connector1_S1"));
ROUTE64.setToField(std::string("set_endpoint"));
Scene7.addChild(&ROUTE64);

X3D0.setScene(&Scene7);

//}
