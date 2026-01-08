Building fsbl:
    in fsbl/src

    make BOARD=a9mb CC=arm-none-eabi-gcc CFLAGS=-DFSBL_DEBUG_INFO


Loading fsbl through jtag:
    in xsct or xsdb

    select first cpu

    rst; dow "/PATH/TO/fsbl/src/fsbl.elf"; con


Building u-boot:
    in u-boot

    make CROSS_COMPILE=arm-none-eabi- ARCH=arm -j4


Loading u-boot through jtag:
    in xsct or xsdb
    after loading fsbl

    stop; dow "/PATH/TO/u-boot/u-boot.elf"; con


Building memtest:
    in memtest/src

    make BOARD=a9mb CC=arm-none-eabi-gcc


Loading memtest through jtag:
    in xsct or xsdb
    after loading fsbl

    stop; dow "/PATH/TO/memtest/memtest.elf"; con


Making binary boot image:
    /PATH/TO/Vivado/bin/bootgen -image bootimg.bif -o boot.bin


Flashing the boot image to QSPI:
    in u-boot console
    transfer the file to memory by any way(ethernet,sd card,uart,usb)
    for example:
        execute "loadx"
        then send the boot.bin file with xmodem from pc
        after finishing it will print:
            ## Total Size      = 0x0016c1d0 = 1491408 Bytes
            ## Start Addr      = 0x00100000
        with file size and memory adress
    then flash file to chip:
    
    sf probe
    sf protect unlock 0 200000
    sf erase 0 200000
    sf write 0x00100000 0 0x0016c1d0 (with actual file adress and size)
    env save (if needs to be preserved)
    reset
    
To set mac adress:
    in u-boot console
    
    setenv ethaddr {new mac adress}
    saveenv
