#!/bin/bash

SCRIPT_DIR=$(cd $(dirname $0); pwd)
cd $SCRIPT_DIR

./qmk_copy.sh

./qmk_build.sh hinode default

#./qmk_write.sh hinode default

./qmk_copy.sh

