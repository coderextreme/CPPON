#!/bin/bash
mkdir -p java
pushd java > /dev/null
# antlr4.exe -vistor ../CPPONGrammar.g4
java -Xss1g -Xmx8g -cp "C:/Users/jcarl/Downloads/antlr-4.13.2-complete.jar;." org.antlr.v4.Tool -Dlanguage=Java -visitor ../CPPONGrammar.g4
javac -cp "C:/Users/jcarl/Downloads/antlr-4.13.2-complete.jar;." *.java
for i in ../data/*.h
do
	echo $i
	java -Xss1g -Xmx8g -cp "C:/Users/jcarl/Downloads/antlr-4.13.2-complete.jar;." CPPONGrammarDOMVisitor "$i"
	if [ $? -eq 1 ]
	then
		exit
	fi
done
popd > /dev/null
