"use strict";

// Convert X3D JSON to JAVA

process.argv.shift();
process.argv.shift();

import convertJSON from "./convertJSON.js";

convertJSON([{ 
	serializer : 'CppSerializer',
	folder : "../cplusplus/net/coderextreme/",
	extension : ".cpp",
	codeOutput : "../",
	},
	{ 
	serializer : 'DOMSerializer',
	folder : "../",
	extension : ".x3d.new"
	},
	{ 
	serializer : 'CppFunctionBodySerializer',
	folder : "../cplusplus/net/coderextreme/",
	extension : ".h",
	codeOutput : "../"
	}
]);
