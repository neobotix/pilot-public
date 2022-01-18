#!/bin/bash

cd $(dirname "$0")

vnxcppcodegen --cleanup generated/ pilot.kinematics.mecanum interface/ $1

