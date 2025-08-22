#!/bin/bash
mkdir -p cpp
pushd cpp
java -Xss1g -Xmx8g -cp "C:/Users/jcarl/Downloads/antlr-4.13.2-complete.jar;." org.antlr.v4.Tool -Dlanguage=Cpp -visitor ../CPPONGrammar.g4
export PATH=${PATH}:/c/msys64/usr/bin
C:/msys64/usr/bin/g++.exe -I. -I/c/Users/john/Downloads/antlr4-cpp-runtime-4.13.1-source/runtime/src/ -I/c/msys64/usr/lib/gcc/x86_64-pc-msys/11.3.0/include/c++ -I/c/msys64/usr/include -I/c/msys64/usr/lib/gcc/x86_64-pc-msys/11.3.0/include/ -I/c/msys64/usr/lib/gcc/x86_64-pc-msys/11.3.0/include/c++/x86_64-pc-msys -I/c/msys64/usr/lib/gcc/x86_64-pc-msys/11.3.0/include/c++/tr1/ *.cpp -LC/:msys64/usr/lib/gcc/x86_64-pc-msys/11.3.0 -lstdc++ -o CPP.exe
popd
