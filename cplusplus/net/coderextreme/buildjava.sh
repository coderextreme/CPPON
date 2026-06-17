#!/bin/bash
mkdir -p java
pushd java > /dev/null
# antlr4.exe -vistor ../CPPONGrammar.g4
java -Xss1g -Xmx8g -cp "C:/Users/jcarl/Downloads/antlr-4.13.2-complete.jar;." org.antlr.v4.Tool -Dlanguage=Java -visitor ../CPPONGrammar.g4
javac -cp "C:/Users/jcarl/Downloads/antlr-4.13.2-complete.jar;.;X3DJSAIL.4.0.full.jar" *.java
mkdir ../../../../output

for i in ../data/*.h
do
	echo $i
	java -Djdk.xml.entityExpansionLimit=120000 -Djdk.xml.totalEntitySizeLimit=50000000 -Djdk.xml.maxGeneralEntitySizeLimit=50000000 -Xss1g -Xmx8g -cp "C:/Users/jcarl/Downloads/antlr-4.13.2-complete.jar;." CPPONGrammarDOMVisitor "$i" > ../../../../output/`basename $i .h`.x3d
	if [ $? -eq 1 ]
	then
		exit
	fi
	java -Djdk.xml.entityExpansionLimit=120000 -Djdk.xml.totalEntitySizeLimit=50000000 -Djdk.xml.maxGeneralEntitySizeLimit=50000000 -Xss1g -Xmx8g -cp "C:/Users/jcarl/Downloads/antlr-4.13.2-complete.jar;.;X3DJSAIL.4.0.full.jar" ValidateCppWithX3dJsail "$i" 
	if [ $? -eq 1 ]
	then
		exit
	fi
done
popd > /dev/null
