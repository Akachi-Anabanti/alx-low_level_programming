#!/bin/bash
wget -P /tmp https://github.com/alx-tools/0x18.c
export LD_PRELOAD=/tmp/0x18.c /tmp/0x18.c/gm 9 8 10 24 75 9
