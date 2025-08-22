#!/bin/bash
mkdir -p js
pushd js
#npm install -g antlr4js-cli
npm install --save antlr4
#antlr4js -visitor ../CPPONGrammar.g4
java -Xss1g -Xmx8g -cp "C:/Users/jcarl/Downloads/antlr-4.13.2-complete.jar;." org.antlr.v4.Tool -Dlanguage=JavaScript -visitor ../CPPONGrammar.g4
for i in ../data/*.h
do
	echo $i
	node.exe CPP.mjs "$i"
done
popd
