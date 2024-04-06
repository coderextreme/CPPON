#!/bin/bash
# find data -name '*.h' | sed 's/^/..\//' | xargs bash buildjava.sh 2<&1

for i in data/*.h
do
	if [ "$i" != "data/afxtempl.h" ]
	then
		echo $i
		X3D=../../../data/`basename $i .h`.x3d
		echo $i | sed 's/^/..\//' | xargs bash buildjava.sh > "$X3D"
		java -cp ~/pythonSAI/X3DJSAIL.4.0.full.jar org.web3d.x3d.jsail.CommandLine -validate $X3D
	fi
done
