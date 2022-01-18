#!/bin/bash

cd $(dirname "$0")

vnxcppcodegen --cleanup generated/ pilot.kinematics.differential interface/ $1

