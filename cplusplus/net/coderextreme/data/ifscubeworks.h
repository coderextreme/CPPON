#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void ifscubeworks(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("ifscubeworks.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("identifier"));
meta3.setContent(std::string("http://coderextreme.net/X3DJSONLD/src/main/data/ifscubeworks.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("description"));
meta4.setContent(std::string("Template for an Indexed Face Set"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("creator"));
meta5.setContent(std::string("John Carlson"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("created"));
meta6.setContent(std::string("4 April 2017"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("license"));
meta7.setContent(std::string("https://www.web3d.org/x3d/content/examples/license.html"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("generator"));
meta8.setContent(std::string("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta8);

X3D0.setHead(&head1);

Scene& Scene9 =  Scene();
WorldInfo& WorldInfo10 =  WorldInfo();
WorldInfo10.setTitle(std::string("ifscubeworks.x3d"));
Scene9.addChild(&WorldInfo10);

Group& Group11 =  Group();
Shape& Shape12 =  Shape();
IndexedFaceSet& IndexedFaceSet13 =  IndexedFaceSet();
IndexedFaceSet13.setDEF(std::string("IndexedFaceSet"));
IndexedFaceSet13.setCoordIndex(new int32_t[]{0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1}, 33);
IndexedFaceSet13.setNormalIndex(new int32_t[]{0,0,1,2,3,4,5}, 7);
IndexedFaceSet13.setNormalPerVertex(false);
IndexedFaceSet13.setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1}, 33);
Coordinate& Coordinate14 =  Coordinate();
Coordinate14.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0}, 12);
IndexedFaceSet13.setCoord(&Coordinate14);

Normal& Normal15 =  Normal();
Normal15.setContainerField("normal");
Normal15.setVector(new float[]{1.0,0.0,0.0,-1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,-1.0,0.0,0.0,0.0,1.0}, 18);
IndexedFaceSet13.setNormal(&Normal15);

Color& Color16 =  Color();
Color16.setContainerField("color");
Color16.setColor(new float[]{0.0,1.0,0.0}, 3);
IndexedFaceSet13.setColor(Color16);

Shape12.setGeometry(&IndexedFaceSet13);

Group11.addChild(&Shape12);

Scene9.addChild(&Group11);

X3D0.setScene(&Scene9);

//}
