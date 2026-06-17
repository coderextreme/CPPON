#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#define XML_PARSER_H
//#include "pch.h"
//#include "framework.h"
//#include "glut.h"
//#include "X3DLib.h"
int arc3(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("arc3.x3d"));
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
meta5.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("description"));
meta6.setContent(std::string("a generic proto to connect two objects"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Viewpoint& Viewpoint8 =  Viewpoint();
Viewpoint8.setPosition(new float[]{0,0,5});
Viewpoint8.setDescription(std::string("Only Viewpoint"));
Scene7.addChild(&Viewpoint8);

Background& Background9 =  Background();
Background9.setSkyColor(new float[]{0.4,0.4,0.4}, 3);
Scene7.addChild(&Background9);

Transform& Transform10 =  Transform();
Transform10.setDEF(std::string("DECLpoint_G1_node"));
Shape& Shape11 =  Shape();
Sphere& Sphere12 =  Sphere();
Sphere12.setRadius(0.1);
Shape11.setGeometry(&Sphere12);

Appearance& Appearance13 =  Appearance();
Material& Material14 =  Material();
Material14.setDiffuseColor(new float[]{1,0,0});
Appearance13.addChild(&Material14);

Shape11.addChild(&Appearance13);

Transform10.addChild(&Shape11);

PositionInterpolator& PositionInterpolator15 =  PositionInterpolator();
PositionInterpolator15.setDEF(std::string("DECLpoint_G1_PI1"));
PositionInterpolator15.setKey(new float[]{0,1}, 2);
PositionInterpolator15.setKeyValue(new float[]{0,0,0,0,5,0}, 6);
Transform10.addChild(&PositionInterpolator15);

Script& Script16 =  Script();
Script16.setDEF(std::string("DECLpoint_G1_MB1"));
field& field17 =  field();
field17.setName(std::string("translation"));
field17.setAccessType(std::string("inputOutput"));
field17.setType(std::string("SFVec3f"));
field17.setValue(std::string("0 0 0"));
Script16.addChild(&field17);

field& field18 =  field();
field18.setName(std::string("old"));
field18.setAccessType(std::string("inputOutput"));
field18.setType(std::string("SFVec3f"));
field18.setValue(std::string("0 0 0"));
Script16.addChild(&field18);

field& field19 =  field();
field19.setName(std::string("set_location"));
field19.setAccessType(std::string("inputOnly"));
field19.setType(std::string("SFTime"));
Script16.addChild(&field19);

field& field20 =  field();
field20.setName(std::string("keyValue"));
field20.setAccessType(std::string("inputOutput"));
field20.setType(std::string("MFVec3f"));
field20.setValue(std::string("0 0 0 0 5 0"));
Script16.addChild(&field20);


Script16.setSourceCode(std::string("ecmascript:")+
_T("		function set_location(value) {")+
_T("                    old = translation;")+
_T("		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
_T("                    keyValue = new MFVec3f([old, translation]);")+
_T("		    // Browser.println(keyValue);")+
_T("		}"));
Transform10.addChild(&Script16);

TimeSensor& TimeSensor21 =  TimeSensor();
TimeSensor21.setDEF(std::string("DECLpoint_G1_CL1"));
TimeSensor21.setCycleInterval(3);
TimeSensor21.setLoop(True);
Transform10.addChild(&TimeSensor21);

ROUTE& ROUTE22 =  ROUTE();
ROUTE22.setFromNode(std::string("DECLpoint_G1_CL1"));
ROUTE22.setFromField(std::string("cycleTime"));
ROUTE22.setToNode(std::string("DECLpoint_G1_MB1"));
ROUTE22.setToField(std::string("set_location"));
Transform10.addChild(&ROUTE22);

ROUTE& ROUTE23 =  ROUTE();
ROUTE23.setFromNode(std::string("DECLpoint_G1_CL1"));
ROUTE23.setFromField(std::string("fraction_changed"));
ROUTE23.setToNode(std::string("DECLpoint_G1_PI1"));
ROUTE23.setToField(std::string("set_fraction"));
Transform10.addChild(&ROUTE23);

ROUTE& ROUTE24 =  ROUTE();
ROUTE24.setFromNode(std::string("DECLpoint_G1_MB1"));
ROUTE24.setFromField(std::string("keyValue"));
ROUTE24.setToNode(std::string("DECLpoint_G1_PI1"));
ROUTE24.setToField(std::string("keyValue"));
Transform10.addChild(&ROUTE24);

ROUTE& ROUTE25 =  ROUTE();
ROUTE25.setFromNode(std::string("DECLpoint_G1_PI1"));
ROUTE25.setFromField(std::string("value_changed"));
ROUTE25.setToNode(std::string("DECLpoint_G1_node"));
ROUTE25.setToField(std::string("set_translation"));
Transform10.addChild(&ROUTE25);

Scene7.addChild(&Transform10);

Transform& Transform26 =  Transform();
Transform26.setDEF(std::string("DECLpoint_G2_node"));
Shape& Shape27 =  Shape();
Sphere& Sphere28 =  Sphere();
Sphere28.setRadius(0.1);
Shape27.setGeometry(&Sphere28);

Appearance& Appearance29 =  Appearance();
Material& Material30 =  Material();
Material30.setDiffuseColor(new float[]{1,0,0});
Appearance29.addChild(&Material30);

Shape27.addChild(&Appearance29);

Transform26.addChild(&Shape27);

PositionInterpolator& PositionInterpolator31 =  PositionInterpolator();
PositionInterpolator31.setDEF(std::string("DECLpoint_G2_PI1"));
PositionInterpolator31.setKey(new float[]{0,1}, 2);
PositionInterpolator31.setKeyValue(new float[]{0,0,0,0,5,0}, 6);
Transform26.addChild(&PositionInterpolator31);

Script& Script32 =  Script();
Script32.setDEF(std::string("DECLpoint_G2_MB1"));
field& field33 =  field();
field33.setName(std::string("translation"));
field33.setAccessType(std::string("inputOutput"));
field33.setType(std::string("SFVec3f"));
field33.setValue(std::string("0 0 0"));
Script32.addChild(&field33);

field& field34 =  field();
field34.setName(std::string("old"));
field34.setAccessType(std::string("inputOutput"));
field34.setType(std::string("SFVec3f"));
field34.setValue(std::string("0 0 0"));
Script32.addChild(&field34);

field& field35 =  field();
field35.setName(std::string("set_location"));
field35.setAccessType(std::string("inputOnly"));
field35.setType(std::string("SFTime"));
Script32.addChild(&field35);

field& field36 =  field();
field36.setName(std::string("keyValue"));
field36.setAccessType(std::string("inputOutput"));
field36.setType(std::string("MFVec3f"));
field36.setValue(std::string("0 0 0 0 5 0"));
Script32.addChild(&field36);


Script32.setSourceCode(std::string("ecmascript:")+
_T("		function set_location(value) {")+
_T("                    old = translation;")+
_T("		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
_T("                    keyValue = new MFVec3f([old, translation]);")+
_T("		    // Browser.println(keyValue);")+
_T("		}"));
Transform26.addChild(&Script32);

TimeSensor& TimeSensor37 =  TimeSensor();
TimeSensor37.setDEF(std::string("DECLpoint_G2_CL1"));
TimeSensor37.setCycleInterval(3);
TimeSensor37.setLoop(True);
Transform26.addChild(&TimeSensor37);

ROUTE& ROUTE38 =  ROUTE();
ROUTE38.setFromNode(std::string("DECLpoint_G2_CL1"));
ROUTE38.setFromField(std::string("cycleTime"));
ROUTE38.setToNode(std::string("DECLpoint_G2_MB1"));
ROUTE38.setToField(std::string("set_location"));
Transform26.addChild(&ROUTE38);

ROUTE& ROUTE39 =  ROUTE();
ROUTE39.setFromNode(std::string("DECLpoint_G2_CL1"));
ROUTE39.setFromField(std::string("fraction_changed"));
ROUTE39.setToNode(std::string("DECLpoint_G2_PI1"));
ROUTE39.setToField(std::string("set_fraction"));
Transform26.addChild(&ROUTE39);

ROUTE& ROUTE40 =  ROUTE();
ROUTE40.setFromNode(std::string("DECLpoint_G2_MB1"));
ROUTE40.setFromField(std::string("keyValue"));
ROUTE40.setToNode(std::string("DECLpoint_G2_PI1"));
ROUTE40.setToField(std::string("keyValue"));
Transform26.addChild(&ROUTE40);

ROUTE& ROUTE41 =  ROUTE();
ROUTE41.setFromNode(std::string("DECLpoint_G2_PI1"));
ROUTE41.setFromField(std::string("value_changed"));
ROUTE41.setToNode(std::string("DECLpoint_G2_node"));
ROUTE41.setToField(std::string("set_translation"));
Transform26.addChild(&ROUTE41);

Scene7.addChild(&Transform26);

Group& Group42 =  Group();
Transform& Transform43 =  Transform();
Transform43.setDEF(std::string("DECLx3dconnector_connector1_trans"));
Transform& Transform44 =  Transform();
Transform44.setDEF(std::string("DECLx3dconnector_connector1_rotscale"));
Shape& Shape45 =  Shape();
Appearance& Appearance46 =  Appearance();
Material& Material47 =  Material();
Material47.setDiffuseColor(new float[]{0.2,0.7,0.7});
Material47.setTransparency(0.5);
Appearance46.addChild(&Material47);

Shape45.addChild(&Appearance46);

Cylinder& Cylinder48 =  Cylinder();
Cylinder48.setRadius(0.05);
Shape45.setGeometry(&Cylinder48);

Transform44.addChild(&Shape45);

Transform43.addChild(&Transform44);

Group42.addChild(&Transform43);

Script& Script49 =  Script();
Script49.setDEF(std::string("DECLx3dconnector_connector1_S1"));
field& field50 =  field();
field50.setName(std::string("startnode"));
field50.setAccessType(std::string("initializeOnly"));
field50.setType(std::string("SFNode"));
Group& Group51 =  Group();
Group51.setUSE(std::string("DECLpoint_G1_node"));
field50.addChild(&Group51);

Script49.addChild(&field50);

field& field52 =  field();
field52.setName(std::string("endnode"));
field52.setAccessType(std::string("initializeOnly"));
field52.setType(std::string("SFNode"));
Group& Group53 =  Group();
Group53.setUSE(std::string("DECLpoint_G2_node"));
field52.addChild(&Group53);

Script49.addChild(&field52);

field& field54 =  field();
field54.setName(std::string("position"));
field54.setAccessType(std::string("inputOutput"));
field54.setType(std::string("SFNode"));
Transform& Transform55 =  Transform();
Transform55.setUSE(std::string("DECLx3dconnector_connector1_trans"));
field54.addChild(&Transform55);

Script49.addChild(&field54);

field& field56 =  field();
field56.setName(std::string("rotscale"));
field56.setAccessType(std::string("inputOutput"));
field56.setType(std::string("SFNode"));
Transform& Transform57 =  Transform();
Transform57.setUSE(std::string("DECLx3dconnector_connector1_rotscale"));
field56.addChild(&Transform57);

Script49.addChild(&field56);

field& field58 =  field();
field58.setName(std::string("set_startpoint"));
field58.setAccessType(std::string("inputOnly"));
field58.setType(std::string("SFVec3f"));
Script49.addChild(&field58);

field& field59 =  field();
field59.setName(std::string("set_endpoint"));
field59.setAccessType(std::string("inputOnly"));
field59.setType(std::string("SFVec3f"));
Script49.addChild(&field59);


Script49.setSourceCode(std::string("ecmascript:")+
_T("        function recompute(startpoint,endpoint){")+
_T("	    if (typeof endpoint === 'undefined') {")+
_T("		return;")+
_T("	    }")+
_T("            var dif = endpoint.subtract(startpoint);")+
_T("            var dist = dif.length()*0.5;")+
_T("            var dif2 = dif.multiply(0.5);")+
_T("            var norm = dif.normalize();")+
_T("            var transl = startpoint.add(dif2);")+
_T("	    if (typeof Quaternion !== 'undefined') {")+
_T("		    return {")+
_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
_T("			    translation : transl,")+
_T("			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)")+
_T("		    };")+
_T("	    } else if (typeof SFRotation !== 'undefined') {")+
_T("		    return {")+
_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
_T("			    translation : transl,")+
_T("			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)")+
_T("		    };")+
_T("	    } else {")+
_T("		    return {")+
_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
_T("			    translation : transl")+
_T("		    };")+
_T("	    }")+
_T("	}")+
_T("	function recompute_and_route(startpoint, endpoint) {")+
_T("	      var trafo = recompute(startpoint, endpoint);")+
_T("	      if (trafo) {")+
_T("		      position.translation = trafo.translation;")+
_T("		      rotscale.rotation = trafo.rotation;")+
_T("		      rotscale.scale = trafo.scale;")+
_T("	      }")+
_T("	}")+
_T("        function initialize(){")+
_T("            recompute_and_route(startnode.translation,endnode.translation);")+
_T("        }")+
_T("        function set_startpoint(val,t){")+
_T("            recompute_and_route(val,endnode.translation);")+
_T("        }")+
_T("        function set_endpoint(val,t){")+
_T("            recompute_and_route(startnode.translation,val);")+
_T("        }"));
Group42.addChild(&Script49);

Scene7.addChild(&Group42);

ROUTE& ROUTE60 =  ROUTE();
ROUTE60.setFromNode(std::string("DECLpoint_G1_node"));
ROUTE60.setFromField(std::string("translation"));
ROUTE60.setToNode(std::string("DECLx3dconnector_connector1_S1"));
ROUTE60.setToField(std::string("set_startpoint"));
Scene7.addChild(&ROUTE60);

ROUTE& ROUTE61 =  ROUTE();
ROUTE61.setFromNode(std::string("DECLpoint_G2_node"));
ROUTE61.setFromField(std::string("translation"));
ROUTE61.setToNode(std::string("DECLx3dconnector_connector1_S1"));
ROUTE61.setToField(std::string("set_endpoint"));
Scene7.addChild(&ROUTE61);

X3D0.setScene(&Scene7);

}
