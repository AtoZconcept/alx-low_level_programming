#!/bin/bash
wget -F /tmp https://github.com/AtoZconcept/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/lilgiga.so
