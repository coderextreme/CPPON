#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void ifscube(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("ifscube.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("identifier"));
meta3.setContent(std::string("http://coderextreme.net/X3DJSONLD/src/main/data/ifscube.x3d"));
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

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Group& Group8 =  Group();
Shape& Shape9 =  Shape();
IndexedFaceSet& IndexedFaceSet10 =  IndexedFaceSet();
IndexedFaceSet10.setCreaseAngle(1.57);
IndexedFaceSet10.setDEF(std::string("IndexedFaceSet"));
IndexedFaceSet10.setCoordIndex(new int32_t[]{0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1}, 33);
IndexedFaceSet10.setNormalIndex(new int32_t[]{0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1}, 14);
IndexedFaceSet10.setNormalPerVertex(false);
IndexedFaceSet10.setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1}, 33);
Coordinate& Coordinate11 =  Coordinate();
Coordinate11.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0}, 12);
IndexedFaceSet10.setCoord(&Coordinate11);

Normal& Normal12 =  Normal();
Normal12.setContainerField("normal");
Normal12.setVector(new float[]{1.0,0.0,0.0,-1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,-1.0,0.0,0.0,0.0,1.0}, 18);
IndexedFaceSet10.setNormal(&Normal12);

Color& Color13 =  Color();
Color13.setContainerField("color");
Color13.setColor(new float[]{0.0,1.0,0.0}, 3);
IndexedFaceSet10.setColor(Color13);

Shape9.setGeometry(&IndexedFaceSet10);

Group8.addChild(&Shape9);

Scene7.addChild(&Group8);

X3D0.setScene(&Scene7);

//}
