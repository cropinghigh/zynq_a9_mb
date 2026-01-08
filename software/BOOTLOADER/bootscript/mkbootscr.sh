#!/bin/bash

mkimage -A arm -O linux -T script -C none -a 0 -e 0 -n 'ZYNQA9MB boot script' -d bootscr.txt boot.scr
