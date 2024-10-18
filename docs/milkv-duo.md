# Milk-V Duo

## Packages

We publish two Debian Trixie packages for the Milk-V Duo platform.

### bootloader-immutos-milkv-duo

Contains a `fip.bin` bootloader for the Milk-V Duo.

The `fip.bin` file contains up-to-date builds of the SOPHGO FSBL, OpenSBI, 
and U-Boot.

### linux-image-immutos-milkv-duo

Contains a minimal Linux kernel image for the Milk-V Duo based on the mainline
6.11.x kernel.

Support includes:

* MMC/SD card
* USB Host/Peripheral
* Ethernet
* UART
* SPI
* I2C
* GPIO

Currently the coprocessor, and audio/visual subsystems are not supported.


