#!/bin/sh

find source \( -name '*.cc' -o -name '*.cpp' -o -name '*.hpp' -o -name '*.c' -o -name '*.h' \) -exec clang-format -style=file -i {} ';'
