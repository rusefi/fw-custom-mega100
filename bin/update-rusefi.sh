#!/usr/bin/env bash
#
# problem: we are changing files right inside submodule folders (which is probably against git intentions?)
# this script helps us clean state and overall work around the currently convoluted submodule structure
#
cd ext/rusefi/
git reset --hard
cd ../..
git submodule update --init
cd ext/rusefi/
git submodule update --init
git status
