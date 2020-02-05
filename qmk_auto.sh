#!/bin/bash

SCRIPT_DIR=$(cd $(dirname $0); pwd)
cd $SCRIPT_DIR

dir=`find . -maxdepth 1 -type d -not -name '.*'`
#echo $dir

for i in $dir; do
	tmp=${i#./}
	rm -rf ../qmk_firmware/keyboards/helix/rev2/keymaps/$tmp*
	cp -rf  $SCRIPT_DIR/$tmp ../qmk_firmware/keyboards/helix/rev2/keymaps/$tmp
done

./qmk_build.sh $1

./qmk_write.sh $1

