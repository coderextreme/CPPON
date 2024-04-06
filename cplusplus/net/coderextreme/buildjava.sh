#!/bin/bash
mkdir -p java
pushd java > /dev/null
# antlr4.exe -vistor ../CPPONGrammar.g4
java -Xss1g -Xmx8g -cp "C:/Users/john/Downloads/antlr-4.13.1-complete.jar;." org.antlr.v4.Tool -Dlanguage=Java -visitor ../CPPONGrammar.g4
javac -cp "C:/Users/john/Downloads/antlr-4.13.1-complete.jar;." *.java
java -Xss1g -Xmx8g -cp "C:/Users/john/Downloads/antlr-4.13.1-complete.jar;." CPPONGrammarDOMVisitor "$@"
popd > /dev/null
