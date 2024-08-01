#!/bin/bash

git status
bash ext/rusefi/misc/git_scripts/git_super_clean.sh

git status
cd ext/rusefi

bash misc/git_scripts/git_super_clean.sh
git status