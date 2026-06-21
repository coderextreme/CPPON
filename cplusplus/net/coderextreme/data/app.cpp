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
meta2.setName(std::string("title"));
meta2.setContent(std::string("app.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("creator"));
meta3.setContent(std::string("Carlson, I"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("creator"));
meta4.setContent(std::string("Carlson, II"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("creator"));
meta5.setContent(std::string("Carlson, III"));
head1.addMeta(&meta5);

X3D0.setHead(&head1);

Scene& Scene6 =  Scene();
Group& Group7 =  Group();
Shape& Shape8 =  Shape();
Appearance& Appearance9 =  Appearance();
Appearance9.setContainerField("appearance");
Material& Material10 =  Material();
Material10.setContainerField("material");
Material10.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance9.addChild(&Material10);

Shape8.addChild(&Appearance9);

Box& Box11 =  Box();
Shape8.setGeometry(&Box11);

Group7.addChild(&Shape8);

Scene6.addChild(&Group7);

Transform& Transform12 =  Transform();
Transform12.setRotation(new float[]{7.0,8.0,9.0,3.14});
Transform12.setScale(new float[]{4.0,5.0,6.0});
Transform12.setTranslation(new float[]{1.0,2.0,3.0});
Scene6.addChild(&Transform12);

X3D0.setScene(&Scene6);

}
