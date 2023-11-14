#!/bin/bash
wget -P /tmp https://github.com/Akachi-Anabanti/alx-low_level_programming/blob/master/0x18-dynamic_libraries/awin.so
export LD_PRELOAD=/tmp/awin.so
