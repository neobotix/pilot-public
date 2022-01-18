#!/bin/bash

cd $(dirname "$0")

vnxcppcodegen --cleanup generated/ pilot.kinematics.omnidrive interface/ $1

