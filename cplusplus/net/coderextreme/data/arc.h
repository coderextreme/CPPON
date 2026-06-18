#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
int arc(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("arc.x3d"));
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
meta5.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d"));
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

ProtoDeclare& ProtoDeclare10 =  ProtoDeclare();
ProtoDeclare10.setName(std::string("point"));
ProtoInterface& ProtoInterface11 =  ProtoInterface();
field& field12 =  field();
field12.setName(std::string("translation"));
field12.setAccessType(std::string("inputOutput"));
field12.setType(std::string("SFVec3f"));
field12.setValue(std::string("0 0 0"));
ProtoInterface11.addChild(&field12);

ProtoDeclare10.addChild(&ProtoInterface11);

ProtoBody& ProtoBody13 =  ProtoBody();
Transform& Transform14 =  Transform();
Transform14.setDEF(std::string("node"));
IS& IS15 =  IS();
Connect& connect16 =  Connect();
connect16.setNodeField(std::string("translation"));
connect16.setProtoField(std::string("translation"));
IS15.addChild(&connect16);

Transform14.addChild(&IS15);

Shape& Shape17 =  Shape();
Sphere& Sphere18 =  Sphere();
Sphere18.setRadius(0.1);
Shape17.setGeometry(&Sphere18);

Appearance& Appearance19 =  Appearance();
Appearance19.setContainerField("appearance");
Material& Material20 =  Material();
Material20.setContainerField("material");
Material20.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance19.addChild(&Material20);

Shape17.addChild(&Appearance19);

Transform14.addChild(&Shape17);

PositionInterpolator& PositionInterpolator21 =  PositionInterpolator();
PositionInterpolator21.setDEF(std::string("PI1"));
PositionInterpolator21.setKey(new float[]{0.0,1.0});
PositionInterpolator21.setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
Transform14.addChild(&PositionInterpolator21);

Script& Script22 =  Script();
Script22.setDEF(std::string("MB1"));
field& field23 =  field();
field23.setName(std::string("translation"));
field23.setAccessType(std::string("inputOutput"));
field23.setType(std::string("SFVec3f"));
field23.setValue(std::string("50 50 0"));
Script22.addChild(&field23);

field& field24 =  field();
field24.setName(std::string("old"));
field24.setAccessType(std::string("inputOutput"));
field24.setType(std::string("SFVec3f"));
field24.setValue(std::string("0 0 0"));
Script22.addChild(&field24);

field& field25 =  field();
field25.setName(std::string("set_location"));
field25.setAccessType(std::string("inputOnly"));
field25.setType(std::string("SFTime"));
Script22.addChild(&field25);

field& field26 =  field();
field26.setName(std::string("keyValue"));
field26.setAccessType(std::string("inputOutput"));
field26.setType(std::string("MFVec3f"));
field26.setValue(std::string("0 0 0 0 5 0"));
Script22.addChild(&field26);


//Script22.setSourceCode(std::string("ecmascript:")+
//_T("		function set_location(value) {")+
//_T("                    old = translation;")+
//_T("		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
//_T("                    keyValue = new MFVec3f([old, translation]);")+
//_T("		    // Browser.println(keyValue);")+
//_T("		}"));
Transform14.addChild(&Script22);

TimeSensor& TimeSensor27 =  TimeSensor();
TimeSensor27.setDEF(std::string("CL1"));
TimeSensor27.setCycleInterval(3);
TimeSensor27.setLoop(true);
Transform14.addChild(&TimeSensor27);

ROUTE& ROUTE28 =  ROUTE();
ROUTE28.setFromNode(std::string("CL1"));
ROUTE28.setFromField(std::string("cycleTime"));
ROUTE28.setToNode(std::string("MB1"));
ROUTE28.setToField(std::string("set_location"));
Transform14.addChild(&ROUTE28);

ROUTE& ROUTE29 =  ROUTE();
ROUTE29.setFromNode(std::string("CL1"));
ROUTE29.setFromField(std::string("fraction_changed"));
ROUTE29.setToNode(std::string("PI1"));
ROUTE29.setToField(std::string("set_fraction"));
Transform14.addChild(&ROUTE29);

ROUTE& ROUTE30 =  ROUTE();
ROUTE30.setFromNode(std::string("MB1"));
ROUTE30.setFromField(std::string("keyValue"));
ROUTE30.setToNode(std::string("PI1"));
ROUTE30.setToField(std::string("keyValue"));
Transform14.addChild(&ROUTE30);

ROUTE& ROUTE31 =  ROUTE();
ROUTE31.setFromNode(std::string("PI1"));
ROUTE31.setFromField(std::string("value_changed"));
ROUTE31.setToNode(std::string("node"));
ROUTE31.setToField(std::string("set_translation"));
Transform14.addChild(&ROUTE31);

ProtoBody13.addChild(&Transform14);

ProtoDeclare10.addChild(&ProtoBody13);

Scene7.addChild(&ProtoDeclare10);

ProtoDeclare& ProtoDeclare32 =  ProtoDeclare();
ProtoDeclare32.setName(std::string("x3dconnector"));
ProtoInterface& ProtoInterface33 =  ProtoInterface();
field& field34 =  field();
field34.setName(std::string("startnode"));
field34.setAccessType(std::string("initializeOnly"));
field34.setType(std::string("SFNode"));
ProtoInterface33.addChild(&field34);

field& field35 =  field();
field35.setName(std::string("endnode"));
field35.setAccessType(std::string("initializeOnly"));
field35.setType(std::string("SFNode"));
ProtoInterface33.addChild(&field35);

field& field36 =  field();
field36.setName(std::string("set_startpoint"));
field36.setAccessType(std::string("inputOnly"));
field36.setType(std::string("SFVec3f"));
ProtoInterface33.addChild(&field36);

field& field37 =  field();
field37.setName(std::string("set_endpoint"));
field37.setAccessType(std::string("inputOnly"));
field37.setType(std::string("SFVec3f"));
ProtoInterface33.addChild(&field37);

ProtoDeclare32.addChild(&ProtoInterface33);

ProtoBody& ProtoBody38 =  ProtoBody();
Group& Group39 =  Group();
Transform& Transform40 =  Transform();
Transform40.setDEF(std::string("trans"));
Transform& Transform41 =  Transform();
Transform41.setDEF(std::string("rotscale"));
Shape& Shape42 =  Shape();
Appearance& Appearance43 =  Appearance();
Appearance43.setContainerField("appearance");
Material& Material44 =  Material();
Material44.setContainerField("material");
Material44.setDiffuseColor(new float[]{0.2,0.7,0.7});
Material44.setTransparency(0.5);
Appearance43.addChild(&Material44);

Shape42.addChild(&Appearance43);

Cylinder& Cylinder45 =  Cylinder();
Cylinder45.setRadius(0.05);
Shape42.setGeometry(&Cylinder45);

Transform41.addChild(&Shape42);

Transform40.addChild(&Transform41);

Group39.addChild(&Transform40);

Script& Script46 =  Script();
Script46.setDEF(std::string("S1"));
field& field47 =  field();
field47.setName(std::string("startnode"));
field47.setAccessType(std::string("initializeOnly"));
field47.setType(std::string("SFNode"));
Script46.addChild(&field47);

field& field48 =  field();
field48.setName(std::string("endnode"));
field48.setAccessType(std::string("initializeOnly"));
field48.setType(std::string("SFNode"));
Script46.addChild(&field48);

field& field49 =  field();
field49.setName(std::string("position"));
field49.setAccessType(std::string("inputOutput"));
field49.setType(std::string("SFNode"));
Transform& Transform50 =  Transform();
Transform50.setUSE(std::string("trans"));
field49.addChild(&Transform50);

Script46.addChild(&field49);

field& field51 =  field();
field51.setName(std::string("rotscale"));
field51.setAccessType(std::string("inputOutput"));
field51.setType(std::string("SFNode"));
Transform& Transform52 =  Transform();
Transform52.setUSE(std::string("rotscale"));
field51.addChild(&Transform52);

Script46.addChild(&field51);

field& field53 =  field();
field53.setName(std::string("set_startpoint"));
field53.setAccessType(std::string("inputOnly"));
field53.setType(std::string("SFVec3f"));
Script46.addChild(&field53);

field& field54 =  field();
field54.setName(std::string("set_endpoint"));
field54.setAccessType(std::string("inputOnly"));
field54.setType(std::string("SFVec3f"));
Script46.addChild(&field54);

IS& IS55 =  IS();
Connect& connect56 =  Connect();
connect56.setNodeField(std::string("startnode"));
connect56.setProtoField(std::string("startnode"));
IS55.addChild(&connect56);

Connect& connect57 =  Connect();
connect57.setNodeField(std::string("endnode"));
connect57.setProtoField(std::string("endnode"));
IS55.addChild(&connect57);

Connect& connect58 =  Connect();
connect58.setNodeField(std::string("set_startpoint"));
connect58.setProtoField(std::string("set_startpoint"));
IS55.addChild(&connect58);

Connect& connect59 =  Connect();
connect59.setNodeField(std::string("set_endpoint"));
connect59.setProtoField(std::string("set_endpoint"));
IS55.addChild(&connect59);

Script46.addChild(&IS55);


//Script46.setSourceCode(std::string("ecmascript:")+
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
//_T("	    } else if (typeof SFRotation !== 'undefined') {")+
//_T("		    return {")+
//_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
//_T("			    translation : transl,")+
//_T("			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)")+
//_T("		    };")+
//_T("	    } else {")+
//_T("		    return {")+
//_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
//_T("			    translation : transl")+
//_T("		    };")+
//_T("	    }")+
//_T("	}")+
//_T("	function recompute_and_route(startpoint, endpoint) {")+
//_T("	      var trafo = recompute(startpoint, endpoint);")+
//_T("	      if (trafo) {")+
//_T("		      position.translation = trafo.translation;")+
//_T("		      rotscale.rotation = trafo.rotation;")+
//_T("		      rotscale.scale = trafo.scale;")+
//_T("	      }")+
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
Group39.addChild(&Script46);

ProtoBody38.addChild(&Group39);

ProtoDeclare32.addChild(&ProtoBody38);

Scene7.addChild(&ProtoDeclare32);

ProtoInstance& ProtoInstance60 =  ProtoInstance();
ProtoInstance60.setName(std::string("point"));
ProtoInstance60.setDEF(std::string("G1"));
Scene7.addChild(&ProtoInstance60);

ProtoInstance& ProtoInstance61 =  ProtoInstance();
ProtoInstance61.setName(std::string("point"));
ProtoInstance61.setDEF(std::string("G2"));
Scene7.addChild(&ProtoInstance61);

ProtoInstance& ProtoInstance62 =  ProtoInstance();
ProtoInstance62.setName(std::string("point"));
ProtoInstance62.setDEF(std::string("G3"));
Scene7.addChild(&ProtoInstance62);

ProtoInstance& ProtoInstance63 =  ProtoInstance();
ProtoInstance63.setName(std::string("point"));
ProtoInstance63.setDEF(std::string("G4"));
Scene7.addChild(&ProtoInstance63);

ProtoInstance& ProtoInstance64 =  ProtoInstance();
ProtoInstance64.setName(std::string("x3dconnector"));
ProtoInstance64.setDEF(std::string("connector1"));
fieldValue& fieldValue65 =  fieldValue();
fieldValue65.setName(std::string("startnode"));
ProtoInstance& ProtoInstance66 =  ProtoInstance();
ProtoInstance66.setName(std::string("point"));
ProtoInstance66.setUSE(std::string("G1"));
fieldValue65.addChild(&ProtoInstance66);

ProtoInstance64.addChild(&fieldValue65);

fieldValue& fieldValue67 =  fieldValue();
fieldValue67.setName(std::string("endnode"));
ProtoInstance& ProtoInstance68 =  ProtoInstance();
ProtoInstance68.setName(std::string("point"));
ProtoInstance68.setUSE(std::string("G2"));
fieldValue67.addChild(&ProtoInstance68);

ProtoInstance64.addChild(&fieldValue67);

fieldValue& fieldValue69 =  fieldValue();
fieldValue69.setName(std::string("set_startpoint"));
ProtoInstance64.addChild(&fieldValue69);

fieldValue& fieldValue70 =  fieldValue();
fieldValue70.setName(std::string("set_endpoint"));
ProtoInstance64.addChild(&fieldValue70);

Scene7.addChild(&ProtoInstance64);

ProtoInstance& ProtoInstance71 =  ProtoInstance();
ProtoInstance71.setName(std::string("x3dconnector"));
ProtoInstance71.setDEF(std::string("connector2"));
fieldValue& fieldValue72 =  fieldValue();
fieldValue72.setName(std::string("startnode"));
ProtoInstance& ProtoInstance73 =  ProtoInstance();
ProtoInstance73.setName(std::string("point"));
ProtoInstance73.setUSE(std::string("G1"));
fieldValue72.addChild(&ProtoInstance73);

ProtoInstance71.addChild(&fieldValue72);

fieldValue& fieldValue74 =  fieldValue();
fieldValue74.setName(std::string("endnode"));
ProtoInstance& ProtoInstance75 =  ProtoInstance();
ProtoInstance75.setName(std::string("point"));
ProtoInstance75.setUSE(std::string("G3"));
fieldValue74.addChild(&ProtoInstance75);

ProtoInstance71.addChild(&fieldValue74);

fieldValue& fieldValue76 =  fieldValue();
fieldValue76.setName(std::string("set_startpoint"));
ProtoInstance71.addChild(&fieldValue76);

fieldValue& fieldValue77 =  fieldValue();
fieldValue77.setName(std::string("set_endpoint"));
ProtoInstance71.addChild(&fieldValue77);

Scene7.addChild(&ProtoInstance71);

ProtoInstance& ProtoInstance78 =  ProtoInstance();
ProtoInstance78.setName(std::string("x3dconnector"));
ProtoInstance78.setDEF(std::string("connector3"));
fieldValue& fieldValue79 =  fieldValue();
fieldValue79.setName(std::string("startnode"));
ProtoInstance& ProtoInstance80 =  ProtoInstance();
ProtoInstance80.setName(std::string("point"));
ProtoInstance80.setUSE(std::string("G1"));
fieldValue79.addChild(&ProtoInstance80);

ProtoInstance78.addChild(&fieldValue79);

fieldValue& fieldValue81 =  fieldValue();
fieldValue81.setName(std::string("endnode"));
ProtoInstance& ProtoInstance82 =  ProtoInstance();
ProtoInstance82.setName(std::string("point"));
ProtoInstance82.setUSE(std::string("G4"));
fieldValue81.addChild(&ProtoInstance82);

ProtoInstance78.addChild(&fieldValue81);

fieldValue& fieldValue83 =  fieldValue();
fieldValue83.setName(std::string("set_startpoint"));
ProtoInstance78.addChild(&fieldValue83);

fieldValue& fieldValue84 =  fieldValue();
fieldValue84.setName(std::string("set_endpoint"));
ProtoInstance78.addChild(&fieldValue84);

Scene7.addChild(&ProtoInstance78);

ROUTE& ROUTE85 =  ROUTE();
ROUTE85.setFromNode(std::string("G1"));
ROUTE85.setFromField(std::string("translation"));
ROUTE85.setToNode(std::string("connector1"));
ROUTE85.setToField(std::string("set_startpoint"));
Scene7.addChild(&ROUTE85);

ROUTE& ROUTE86 =  ROUTE();
ROUTE86.setFromNode(std::string("G2"));
ROUTE86.setFromField(std::string("translation"));
ROUTE86.setToNode(std::string("connector1"));
ROUTE86.setToField(std::string("set_endpoint"));
Scene7.addChild(&ROUTE86);

ROUTE& ROUTE87 =  ROUTE();
ROUTE87.setFromNode(std::string("G1"));
ROUTE87.setFromField(std::string("translation"));
ROUTE87.setToNode(std::string("connector2"));
ROUTE87.setToField(std::string("set_startpoint"));
Scene7.addChild(&ROUTE87);

ROUTE& ROUTE88 =  ROUTE();
ROUTE88.setFromNode(std::string("G3"));
ROUTE88.setFromField(std::string("translation"));
ROUTE88.setToNode(std::string("connector2"));
ROUTE88.setToField(std::string("set_endpoint"));
Scene7.addChild(&ROUTE88);

ROUTE& ROUTE89 =  ROUTE();
ROUTE89.setFromNode(std::string("G1"));
ROUTE89.setFromField(std::string("translation"));
ROUTE89.setToNode(std::string("connector3"));
ROUTE89.setToField(std::string("set_startpoint"));
Scene7.addChild(&ROUTE89);

ROUTE& ROUTE90 =  ROUTE();
ROUTE90.setFromNode(std::string("G4"));
ROUTE90.setFromField(std::string("translation"));
ROUTE90.setToNode(std::string("connector3"));
ROUTE90.setToField(std::string("set_endpoint"));
Scene7.addChild(&ROUTE90);

X3D0.setScene(&Scene7);

}
