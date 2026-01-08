#!/bin/bash
sudo rm -r ./fs/*
sudo debootstrap --verbose --arch=armhf --include=init,net-tools,nano,systemd --foreign trixie ./fs/
sudo chroot ./fs/ /debootstrap/debootstrap --second-stage
sudo chroot ./fs/ /bin/bash
