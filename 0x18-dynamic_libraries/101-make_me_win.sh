#!/bin/bash
wget -P /tmp https://github.com/onyxvail/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD=/tmp/libdynamic.so