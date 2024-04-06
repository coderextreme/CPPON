#!/bin/bash
# find data -name '*.h' | sed 's/^/..\//' | xargs bash buildjava.sh 2<&1

for i in data/*.h
do
	echo $i | sed 's/^/..\//' | xargs bash buildjava.sh > ../../../data/`basename $i .h`.x3d
done
