#!/bin/bash
curl -o /tmp/giga_win_lib.so https://github.com/uelkariuki/alx-low_level_programming.git/0x18-dynamic_libraries/giga_win_lib.so
export LD_PRELOAD=/tmp/giga_win_lib.so
