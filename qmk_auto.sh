#!/bin/bash

SCRIPT_DIR=$(cd $(dirname $0); pwd)
cd $SCRIPT_DIR

./qmk_build.sh $1 $2

./qmk_write.sh $1 $2

