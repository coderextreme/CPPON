#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
int SimpleShader(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
//meta content='under development' name='warning'/
component& component2 =  component();
component2.setName(std::string("Shaders"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(std::string("title"));
meta3.setContent(std::string("SimpleShader.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("description"));
meta4.setContent(std::string("Simple shader example"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("creator"));
meta5.setContent(std::string("John Stewart"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("translator"));
meta6.setContent(std::string("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(std::string("created"));
meta7.setContent(std::string("26 May 2009"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(std::string("translated"));
meta8.setContent(std::string("15 October 2009"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(std::string("modified"));
meta9.setContent(std::string("20 October 2019"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(std::string("reference"));
meta10.setContent(std::string("http://www.opengl.org/wiki/Fragment_Shader"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(std::string("reference"));
meta11.setContent(std::string("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(std::string("reference"));
meta12.setContent(std::string("https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(std::string("subject"));
meta13.setContent(std::string("X3D shader example"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(std::string("reference"));
meta14.setContent(std::string("originals/simpleShader.x3dv"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(std::string("reference"));
meta15.setContent(std::string("ShaderTutorialInstantReality.pdf"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(std::string("generator"));
meta16.setContent(std::string("Titania V3.0.3, http://titania.create3000.de"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(std::string("info"));
meta17.setContent(std::string("World of Titania"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(std::string("outputStyle"));
meta18.setContent(std::string("nicest"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(std::string("generator"));
meta19.setContent(std::string("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(std::string("identifier"));
meta20.setContent(std::string("https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(std::string("license"));
meta21.setContent(std::string("../../license.html"));
head1.addMeta(&meta21);

X3D0.setHead(&head1);

Scene& Scene22 =  Scene();
ProtoDeclare& ProtoDeclare23 =  ProtoDeclare();
ProtoDeclare23.setName(std::string("myPrototype"));
ProtoInterface& ProtoInterface24 =  ProtoInterface();
field& field25 =  field();
field25.setName(std::string("myInputRange"));
field25.setAccessType(std::string("initializeOnly"));
field25.setType(std::string("SFVec3f"));
field25.setValue(std::string("0.95 0.44 0.22"));
ProtoInterface24.addChild(&field25);

ProtoDeclare23.addChild(&ProtoInterface24);

ProtoBody& ProtoBody26 =  ProtoBody();
Transform& Transform27 =  Transform();
Transform27.setDEF(std::string("TR"));
Shape& Shape28 =  Shape();
Appearance& Appearance29 =  Appearance();
Appearance29.setContainerField("appearance");
Material& Material30 =  Material();
Material30.setContainerField("material");
Material30.setDiffuseColor(new float[]{0.5,0.5,0.9});
Appearance29.addChild(&Material30);

ComposedShader& ComposedShader31 =  ComposedShader();
ComposedShader31.setLanguage(std::string("GLSL"));
field& field32 =  field();
field32.setName(std::string("decis"));
field32.setAccessType(std::string("initializeOnly"));
field32.setType(std::string("SFVec3f"));
ComposedShader31.addChild(&field32);

IS& IS33 =  IS();
Connect& connect34 =  Connect();
connect34.setNodeField(std::string("decis"));
connect34.setProtoField(std::string("myInputRange"));
IS33.addChild(&connect34);

ComposedShader31.addChild(&IS33);

ShaderPart& ShaderPart35 =  ShaderPart();
ShaderPart35.setType(std::string("VERTEX"));
ComposedShader31.setParts(&ShaderPart35);

ShaderPart& ShaderPart36 =  ShaderPart();
ShaderPart36.setType(std::string("FRAGMENT"));
ComposedShader31.setParts(&ShaderPart36);

Appearance29.addChild(&ComposedShader31);

ComposedShader& ComposedShader37 =  ComposedShader();
ComposedShader37.setDEF(std::string("Cobweb"));
ComposedShader37.setLanguage(std::string("GLSL"));
field& field38 =  field();
field38.setName(std::string("decis"));
field38.setAccessType(std::string("initializeOnly"));
field38.setType(std::string("SFVec3f"));
field38.setValue(std::string("0.95 0.77 0.44"));
ComposedShader37.addChild(&field38);

ShaderPart& ShaderPart39 =  ShaderPart();
ShaderPart39.setType(std::string("VERTEX"));
ComposedShader37.setParts(&ShaderPart39);

ShaderPart& ShaderPart40 =  ShaderPart();
ShaderPart40.setDEF(std::string("_1"));
ShaderPart40.setType(std::string("FRAGMENT"));
ComposedShader37.setParts(&ShaderPart40);

Appearance29.addChild(&ComposedShader37);

Shape28.addChild(&Appearance29);

Sphere& Sphere41 =  Sphere();
Sphere41.setRadius(1.75);
Shape28.setGeometry(&Sphere41);

Transform27.addChild(&Shape28);

ProtoBody26.addChild(&Transform27);

ProtoDeclare23.addChild(&ProtoBody26);

Scene22.addChild(&ProtoDeclare23);

WorldInfo& WorldInfo42 =  WorldInfo();
WorldInfo42.setTitle(std::string("SimpleShader"));
MetadataSet& MetadataSet43 =  MetadataSet();
MetadataSet43.setContainerField("metadata");
MetadataSet43.X3DNode::setName(std::string("Titania"));
MetadataSet43.setDEF(std::string("Titania"));
MetadataSet43.X3DNode::setReference(std::string("http://titania.create3000.de"));
MetadataSet& MetadataSet44 =  MetadataSet();
MetadataSet44.X3DNode::setName(std::string("Selection"));
MetadataSet44.setDEF(std::string("Selection"));
MetadataSet44.X3DNode::setReference(std::string("http://titania.create3000.de"));
MetadataSet44.setContainerField("value");
MetadataSet& MetadataSet45 =  MetadataSet();
MetadataSet45.X3DNode::setName(std::string("nodes"));
MetadataSet45.setDEF(std::string("nodes"));
MetadataSet45.X3DNode::setReference(std::string("http://titania.create3000.de"));
MetadataSet45.setContainerField("value");
//NULL
MetadataSet44.setValue((X3DNode *)&MetadataSet45);

MetadataSet43.setValue((X3DNode *)&MetadataSet44);

MetadataSet& MetadataSet46 =  MetadataSet();
MetadataSet46.X3DNode::setName(std::string("NavigationInfo"));
MetadataSet46.setDEF(std::string("NavigationInfo"));
MetadataSet46.X3DNode::setReference(std::string("http://titania.create3000.de"));
MetadataSet46.setContainerField("value");
MetadataString& MetadataString47 =  MetadataString();
MetadataString47.X3DNode::setName(std::string("type"));
MetadataString47.setDEF(std::string("type"));
MetadataString47.X3DNode::setReference(std::string("http://titania.create3000.de"));
MetadataString47.setValue((std::string[]){"EXAMINE"}, 1);
MetadataString47.setContainerField("value");
MetadataSet46.setValue((X3DNode *)&MetadataString47);

MetadataSet43.setValue((X3DNode *)&MetadataSet46);

MetadataSet& MetadataSet48 =  MetadataSet();
MetadataSet48.X3DNode::setName(std::string("Viewpoint"));
MetadataSet48.setDEF(std::string("Viewpoint"));
MetadataSet48.X3DNode::setReference(std::string("http://titania.create3000.de"));
MetadataSet48.setContainerField("value");
MetadataDouble& MetadataDouble49 =  MetadataDouble();
MetadataDouble49.X3DNode::setName(std::string("position"));
MetadataDouble49.setDEF(std::string("position"));
MetadataDouble49.X3DNode::setReference(std::string("http://titania.create3000.de"));
MetadataDouble49.setValue(new double[]{6.24067728185014,0.00250837343276661,2.92117542307615}, 3);
MetadataDouble49.setContainerField("value");
MetadataSet48.setValue((X3DNode *)&MetadataDouble49);

MetadataDouble& MetadataDouble50 =  MetadataDouble();
MetadataDouble50.X3DNode::setName(std::string("orientation"));
MetadataDouble50.setDEF(std::string("orientation"));
MetadataDouble50.X3DNode::setReference(std::string("http://titania.create3000.de"));
MetadataDouble50.setValue(new double[]{-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191}, 4);
MetadataDouble50.setContainerField("value");
MetadataSet48.setValue((X3DNode *)&MetadataDouble50);

MetadataDouble& MetadataDouble51 =  MetadataDouble();
MetadataDouble51.X3DNode::setName(std::string("centerOfRotation"));
MetadataDouble51.setDEF(std::string("centerOfRotation"));
MetadataDouble51.X3DNode::setReference(std::string("http://titania.create3000.de"));
MetadataDouble51.setValue(new double[]{-0.808320198626341,-0.358072370409949,0.22817191560906}, 3);
MetadataDouble51.setContainerField("value");
MetadataSet48.setValue((X3DNode *)&MetadataDouble51);

MetadataSet43.setValue((X3DNode *)&MetadataSet48);

WorldInfo42.setMetadata(&MetadataSet43);

Scene22.addChild(&WorldInfo42);

ProtoInstance& ProtoInstance52 =  ProtoInstance();
ProtoInstance52.setName(std::string("myPrototype"));
Scene22.addChild(&ProtoInstance52);

X3D0.setScene(&Scene22);

}
