# A motherboard/test/dev board based on Xilinx 7Z010 and components from Antminer S9 control board

## Hardware:

![3d rendered PCB front](images/3d_view_f.png)
![3d rendered PCB back](images/3d_view_b.png)

### Features:
- Most expensive components can be salvaged from dirt cheap miner boards
- 6-layer pcb, moderately cheap to manufacture with JLCPCB, achieved by using Via In Pad technology
- Full 512MB two-chip DDR3 support
- Peripheral interfaces available on MIO pins: USB(Device/OTG), Gigabit ethernet, SD card(two switchable slots), eMMC+QSPI as boot media, I2C, UART, DS1307 RTC, XADC direct input
- Dedicated PL display header with 5 LVDS pairs, 5v/3.3v power lines, I2C and two GPIOs. Designed to be directly connectable to HDMI or MIPI DSI connector with simple extension board
- 10 matched length differential pairs available on PL_IO_A
- 22 matched length single ended CMOS lines available on PL_IO_B
- 44(+2 on PL_IO_A) general purpose CMOS lines available on PL_IO_C and PL_IO_D, effectively utilizing all 34 and 35 FPGA banks

PDF schematic is available at [hardware/schematic.pdf](hardware/schematic.pdf)

### To order from JLCPCB

Use file [hardware/gerbers/zynq_test.zip](hardware/gerbers/zynq_test.zip) and next PCB configuration:

- Layers: 6
- Dimensions: 99.5x100mm(auto derived from gerbers)
- PCB thickness: 1.2mm
- Material: FR4 TG135
- Surface finish: ENIG
- Outer copper weight: 1oz
- Inner copper weight: 0.5oz
- Stackup: JLC06121H-3313
- Impedance control: not required
- Via covering: Epoxy filled&Capped OR Copper paste filled&Capped (IMPORTANT!!!)
- Min via hole size/diameter: 0.3(0.4/0.45)mm
- PCB mark: Order number(specify position)

### Assembling

TODO

## Software:

### Building from source

Replace -j4 with the number of cores your CPU have. Pre-built binaries for each stage are present in subsequent directories, so those steps are not neccesary.

1. Building fsbl

    In software/BOOTLOADER/fsbl/src run:

    `make BOARD=a9mb CC=arm-none-eabi-gcc CFLAGS=-DFSBL_DEBUG_INFO`

    (if you need to change peripheral config, for example PL clock frequency, first export platform from Vivado, then open .xsa file with archiver and copy ps7_init.c, ps7_init.h, ps7_init_gpl.c, ps7_init_gpl.h from it to software/BOOTLOADER/fsbl/misc/a9mb)

    The built fsbl executable is software/BOOTLOADER/fsbl/src/fsbl.elf

2. Building memtest

    If you need a memtest to check the DDR, build it in software/BOOTLOADER/memtest/src with:

    `make BOARD=a9mb CC=arm-none-eabi-gcc`

    Built executable will be software/BOOTLOADER/memtest/src/memtest.elf

3. Building u-boot

    In software/BOOTLOADER/u-boot run:

    `make CROSS_COMPILE=arm-none-eabi- ARCH=arm -j4 ind1r_a9_mb_defconfig`

    `make CROSS_COMPILE=arm-none-eabi- ARCH=arm -j4`

    (if you need to change main system device tree, it's located in software/BOOTLOADER/u-boot/arch/arm/dts/ind1r-a9-mb.dts, but it's recommended to change it using dtb overlays to get more flexibility)

    u-boot executable will be software/BOOTLOADER/u-boot/u-boot.elf

4. Making binary bootloader image

    In software/BOOTLOADER run:

    `/PATH/TO/Vivado/bin/bootgen -image bootimg.bif -o boot.bin -w on`

    Resulting boot.bin file is the ready SPI flash image.

5. Making bootscript

    In software/BOOTLOADER/bootscript execute

    `./mkbootscr.sh`

6. Prepare FPGA bitstream

    Put your .bit file from Vivado(either exported or from Platform.xsa) to software/BOOTLOADER/fpga_bs, and execute

    `./bit2bin.py -f INPUT.bit PL.bin`

7. Making DT overlays

    In software/KERNEL/dtb-overlays for each overlay you want(OVERLAY_NAME.dts -> OVERLAY_NAME.dtb) run:

    `./make_overlay.sh OVERLAY_NAME`

8. Building kernel

    In software/KERNEL/linux-xlnx run:

    `make CROSS_COMPILE=arm-none-eabi- ARCH=arm -j4 ind1r_a9_mb_defconfig`

    `make CROSS_COMPILE=arm-none-eabi- ARCH=arm -j4 zImage`

    If you also need to build modules:

    `make CROSS_COMPILE=arm-none-eabi- ARCH=arm -j4 modules`

    (to use them, you'll need to install them to the ROOTFS by running

    `sudo make CROSS_COMPILE=arm-none-eabi- ARCH=arm -j4 INSTALL_MOD_PATH=../../ROOTFS/fs modules_install`

    after rootfs is initialized and set up)

    Ready kernel image is at software/KERNEL/linux-xlnx/arch/arm/boot/zImage

9. Creating rootfs

    If you want to create brand new debian rootfs, run "bootstrap.sh" script in software/ROOTFS. It will erase contents of ./fs directory and populate it with new debian system using debootstrap. Then it will run second stage using chroot, and give you the shell, so you can install and configure anything you need. Keep in mind that to do that you will need a linux system that's capable of running different architecture binaries, for example using qemu. More info on that on the internet (qemu-user-static,qemu-user-static-binfmt and qemu-system-arm).

    After finishing the configuration, run "compress.sh" from software/ROOTFS to create .tar.bz2 filesystem image. After that you can safely delete everything in ./fs directory, and later restore it using "decompress.sh ./fs" script.

    If you want to access decompressed system image shell again, just run

    `sudo chroot ./fs/ /bin/bash`

    in software/ROOTFS. Then you can change things such as root password,filesystem,install additional packages and so on. After modification, repack the image again using "compress.sh"

### Flashing the board

TODO
