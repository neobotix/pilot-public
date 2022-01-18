#!/bin/bash

cd $(dirname "$0")
DIR="$(pwd)"

./differential/codegen.sh "$1 ${DIR}/interface/"
./mecanum/codegen.sh "$1 ${DIR}/interface/"
./omnidrive/codegen.sh "$1 ${DIR}/interface/"

vnxcppcodegen --cleanup generated/ pilot.kinematics interface/ $1

