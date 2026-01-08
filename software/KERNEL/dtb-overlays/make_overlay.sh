#!/bin/bash

dtc -@ -I dts -O dtb -o $1.dtbo $1.dtso
