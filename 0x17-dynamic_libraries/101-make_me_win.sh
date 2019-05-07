#!/bin/bash
wget https://github.com/carlosariasf/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/random.so
export LD_PRELOAD=$PWD/random.so
