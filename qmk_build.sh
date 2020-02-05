#!/bin/bash

SCRIPT_DIR=$(cd $(dirname $0); pwd)
cd $SCRIPT_DIR

build=$1

cd ../qmk_firmware

make helix:$build

cp *.hex ../helix_show

