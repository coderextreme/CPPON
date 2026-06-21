#include "pch.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wingdi.h>
#include <string>
#include "X3DLib.h"
//void browser(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(std::string("Immersive"));
X3D0.setVersion(std::string("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(std::string("title"));
meta2.setContent(std::string("browser.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(std::string("creator"));
meta3.setContent(std::string("John Carlson"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(std::string("generator"));
meta4.setContent(std::string("manual"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(std::string("identifier"));
meta5.setContent(std::string("https://coderextreme.net/X3DJSONLD/src/main/data/browser.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(std::string("description"));
meta6.setContent(std::string("a script test with embedded \\n between single quotes, a double backslash \\\\ a backslash \\ and a closing quote \""));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Script& Script8 =  Script();
Script8.setDEF(std::string("Browser"));

//Script8.setSourceCode(std::string("ecmascript:")+
//_T("                function initialize() {")+
//_T("		    Browser.print('DUDES\\n'+'\"DUDETTES');")+
//_T("                }"));
Scene7.addChild(&Script8);

Script& Script9 =  Script();
Script9.setDEF(std::string("Clouds"));

//Script9.setSourceCode(std::string("ecmascript:")+
//_T("function cumulustranslation() // These values designate the boundary location of the cloud")+
//_T("{")+
//_T("var xxx = ' '+' '+")+
//_T("'	Transform		\\n'+")+
//_T("'    ' + '               	\\n';")+
//_T("}"));
Scene7.addChild(&Script9);

X3D0.setScene(&Scene7);

//}
