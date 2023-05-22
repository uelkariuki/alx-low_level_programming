#!/bin/bash
wget -P /tmp https://github.com/uelkariuki/alx-low_level_programming/raw/master/0x18-dynamic_libraries/giga_win_lib.so
export LD_PRELOAD=/tmp/giga_win_lib.so
