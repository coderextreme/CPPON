#!/bin/bash
export PATH=${PATH}:/c/msys64/usr/bin
for i in data/ab*.cpp
do
	echo $i
	C:/msys64/usr/bin/g++.exe -Idata -I/c/msys64/usr/include/w32api -I/c/msys64/usr/include -I/c/msys64/usr/lib/gcc/x86_64-pc-msys/11.3.0/include/ -I/c/msys64/usr/lib/gcc/x86_64-pc-msys/11.3.0/include/c++ -I/c/msys64/usr/lib/gcc/x86_64-pc-msys/11.3.0/include/c++/x86_64-pc-msys -I/c/msys64/usr/lib/gcc/x86_64-pc-msys/11.3.0/include/c++/tr1/ -I/c/Users/john/Downloads/antlr4-cpp-runtime-4.13.1-source/runtime/src/ -c "$i" -LC/:msys64/usr/lib/gcc/x86_64-pc-msys/11.3.0 -lstdc++
done
