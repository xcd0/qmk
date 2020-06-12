#!/bin/bash

SCRIPT_DIR=$(cd $(dirname $0); pwd)
cd $SCRIPT_DIR

keyboard=$1
build=$2

cd ../qmk_firmware

make $keyboard:$build:avrdude

cp *.hex ../qmw

