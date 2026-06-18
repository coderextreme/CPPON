#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
void qq3(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("qq3.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("creator"));
meta3.setContent(std::string("John Carlson"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("translator"));
meta4.setContent(std::string("John Carlson"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("created"));
meta5.setContent(std::string("11 Jan 2015"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("modified"));
meta6.setContent(std::string("05 May 2017"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("description"));
meta7.setContent(std::string("12 extrusions"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("identifier"));
meta8.setContent(std::string("https://coderextreme.net/x3d/qq3.x3d"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("generator"));
meta9.setContent(std::string("manual"));
head1.addMeta(&meta9);

X3D0.setHead(&head1);

Scene& Scene10 =  Scene();
ProtoDeclare& ProtoDeclare11 =  ProtoDeclare();
ProtoDeclare11.setName(std::string("Process"));
ProtoBody& ProtoBody12 =  ProtoBody();
Group& Group13 =  Group();
//left
Transform& Transform14 =  Transform();
Transform14.setScale(new float[]{0.5,0.5,0.5});
Shape& Shape15 =  Shape();
Shape15.setDEF(std::string("ShapeLeftDown"));
Appearance& Appearance16 =  Appearance();
Appearance16.setContainerField("appearance");
Material& Material17 =  Material();
Material17.setContainerField("material");
Material17.setDiffuseColor(new float[]{0.7,1.0,0.0});
Appearance16.addChild(&Material17);

Shape15.addChild(&Appearance16);

Extrusion& Extrusion18 =  Extrusion();
Extrusion18.setSpine(new float[]{-2.5,0.0,0.0,-2.0,0.0,0.0,-1.5,0.0,0.0}, 9);
Extrusion18.setCreaseAngle(0.785);
Extrusion18.setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
Shape15.setGeometry(&Extrusion18);

Transform14.addChild(&Shape15);

Group13.addChild(&Transform14);

//right
Transform& Transform19 =  Transform();
Transform19.setScale(new float[]{0.5,0.5,0.5});
Shape& Shape20 =  Shape();
Shape20.setDEF(std::string("ShapeUpRight"));
Appearance& Appearance21 =  Appearance();
Appearance21.setContainerField("appearance");
Material& Material22 =  Material();
Material22.setContainerField("material");
Material22.setDiffuseColor(new float[]{0.0,0.7,1.0});
Appearance21.addChild(&Material22);

Shape20.addChild(&Appearance21);

Extrusion& Extrusion23 =  Extrusion();
Extrusion23.setSpine(new float[]{1.5,0.0,0.0,2.0,0.0,0.0,2.5,0.0,0.0}, 9);
Extrusion23.setCreaseAngle(0.785);
Extrusion23.setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
Shape20.setGeometry(&Extrusion23);

Transform19.addChild(&Shape20);

Group13.addChild(&Transform19);

//up
Transform& Transform24 =  Transform();
Transform24.setScale(new float[]{0.5,0.5,0.5});
Shape& Shape25 =  Shape();
Shape25.setUSE(std::string("ShapeUpRight"));
Transform24.addChild(&Shape25);

Group13.addChild(&Transform24);

//down
Transform& Transform26 =  Transform();
Transform26.setScale(new float[]{0.5,0.5,0.5});
Shape& Shape27 =  Shape();
Shape27.setUSE(std::string("ShapeLeftDown"));
Transform26.addChild(&Shape27);

Group13.addChild(&Transform26);

ProtoBody12.addChild(&Group13);

ProtoDeclare11.addChild(&ProtoBody12);

Scene10.addChild(&ProtoDeclare11);

Viewpoint& Viewpoint28 =  Viewpoint();
Viewpoint28.setDescription(std::string("Process pipes"));
Viewpoint28.setOrientation(new float[]{1.0,0.0,0.0,-0.4});
Viewpoint28.setPosition(new float[]{0.0,5.0,12.0});
Scene10.addChild(&Viewpoint28);

Transform& Transform29 =  Transform();
Transform29.setTranslation(new float[]{0.0,-2.5,0.0});
ProtoInstance& ProtoInstance30 =  ProtoInstance();
ProtoInstance30.setName(std::string("Process"));
Transform29.addChild(&ProtoInstance30);

Scene10.addChild(&Transform29);

Transform& Transform31 =  Transform();
ProtoInstance& ProtoInstance32 =  ProtoInstance();
ProtoInstance32.setName(std::string("Process"));
Transform31.addChild(&ProtoInstance32);

Scene10.addChild(&Transform31);

Transform& Transform33 =  Transform();
Transform33.setTranslation(new float[]{0.0,2.5,0.0});
ProtoInstance& ProtoInstance34 =  ProtoInstance();
ProtoInstance34.setName(std::string("Process"));
Transform33.addChild(&ProtoInstance34);

Scene10.addChild(&Transform33);

X3D0.setScene(&Scene10);

}
