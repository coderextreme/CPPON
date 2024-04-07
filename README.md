# CPPON
C++ Object Notation for general use, specifically: X3D and glTF (I hope)

# CPPON examples

See .h files in in below link.  During C++ compilation, CPPON is #included into a C++ function.
https://github.com/coderextreme/CPPON/tree/main/cplusplus/net/coderextreme/data

# Parsers

There are Java, JavaScript and partial C++ parsers in below link.  Currently the parsers are based on an ANTLR4 grammar.
https://github.com/coderextreme/CPPON/tree/main/cplusplus/net/coderextreme

# ANTLR4 Grammar

Here's an ANTLR4 Grammar for CPPON:

https://github.com/coderextreme/CPPON/blob/main/cplusplus/net/coderextreme/CPPONGrammar.g4

# DOM to C++ Serializer

Here's how I create C++ from DOM (json parameter is ignored)

https://github.com/coderextreme/CPPON/blob/main/node/CppFunctionBodySerializer.js

# Here's my more domain-specific (for X3D) JSON to DOM converter.

https://github.com/coderextreme/CPPON/blob/main/node/X3DJSONLD.js

# Next Steps

I have written a CPPON to DOM converter, here:  

https://github.com/coderextreme/CPPON/blob/main/cplusplus/net/coderextreme/java/CPPONGrammarDOMVisitor.java

# Installation

1. git clone https://github.com/coderextreme/CPPON

2. Download node.js and npm

3.  Run ```npm install``` in the main folder

4.  Run ```npm install``` in the cplusplus/net/coderextreme
