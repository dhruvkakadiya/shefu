#!/bin/sh

find . \( -name 'CMakeLists.txt' -o -name '*.cmake' \) -exec cmake-format -c .cmake-format.yaml -i {} ';'
