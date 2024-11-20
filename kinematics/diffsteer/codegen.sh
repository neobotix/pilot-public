#!/bin/bash

cd $(dirname "$0")

vnxcppcodegen --cleanup generated/ pilot.kinematics.diffsteer interface/ $1

