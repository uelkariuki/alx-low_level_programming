#!/bin/bash
wget -P /tmp 0x18-dynamic_libraries/giga_win_lib.so
export LD_PRELOAD=/tmp/giga_win_lib.so
