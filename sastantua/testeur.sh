#!/usr/bin/env bash

for i in $(seq 0 $1)
do
	OUT_ORIG=$(./sastantua_exemple $i)
	OUT_ME=$(./a.out $i)

	if [ "$OUT_ME" != "$OUT_ORIG" ]; then
		echo "$i: Fail"
		echo -e "Original (Saved in out_orig)\n\n$OUT_ORIG \n"
		echo -e "Me (Saved in out_me)\n\n$OUT_ME \n"
		echo "$OUT_ORIG" > out_orig
		echo "$OUT_ME" > out_me
		echo -e "[1tip4u] \n $> vimdiff out_me out_orig"
		exit -1
	else
		echo "$i: Ok"
	fi
done
