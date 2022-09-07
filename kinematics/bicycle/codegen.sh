#!/bin/bash

cd $(dirname "$0")

vnxcppcodegen --cleanup generated/ pilot.kinematics.bicycle interface/ $1

