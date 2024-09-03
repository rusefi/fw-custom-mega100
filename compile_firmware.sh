#!/usr/bin/env bash



export META_OUTPUT_ROOT_FOLDER=$(realpath --relative-to=ext/rusefi/firmware generated)/
echo "META_OUTPUT_ROOT_FOLDER=$META_OUTPUT_ROOT_FOLDER"

export AUTOMATION_REF=`git branch --show-current`
cd ext/rusefi/firmware/
bash bin/compile.sh ../../../meta-info.env
