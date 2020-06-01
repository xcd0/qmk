#!/bin/bash

SCRIPT_DIR=$(cd $(dirname $0); pwd)
echo cd $SCRIPT_DIR
cd $SCRIPT_DIR

flag_dir=$SCRIPT_DIR/flag/
helix_dir=`find $SCRIPT_DIR/helix -maxdepth 1 -type d -not -name '.*'`
#echo $dir

echo cp -rf  $flag_dir ../qmk_firmware/keyboards/
cp -rf  $flag_dir ../qmk_firmware/keyboards/

echo ls -al ../qmk_firmware/keyboards/flag
ls -al ../qmk_firmware/keyboards/flag

echo cp -rf ${SCRIPT_DIR}/helix ../qmk_firmware/keyboards/helix/rev2/keymaps/
cp -rf ${SCRIPT_DIR}/helix ../qmk_firmware/keyboards/helix/rev2/keymaps/

echo ls -al ../qmk_firmware/keyboards/helix/rev2/keymaps/
ls -al ../qmk_firmware/keyboards/helix/rev2/keymaps/


