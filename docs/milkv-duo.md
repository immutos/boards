# Milk-V Duo

## Packages

We publish two Debian Trixie packages for the Milk-V Duo platform.

### bootloader-immutos-milkv-duo

Contains a `fip.bin` bootloader for the Milk-V Duo.

The `fip.bin` file contains up-to-date builds of the SOPHGO FSBL, OpenSBI, 
and U-Boot.

### linux-image-immutos-milkv-duo

Contains a minimal Linux kernel image for the Milk-V Duo based on the mainline
kernel.

## Supported Features

### CPU Subsystem

- [x] C906
- [ ] C906L RTOS Core
- [ ] 8051 MCU
- [x] Reset and Clock Control
- [x] DMA Controller
- [ ] Thermal Sensor
- [ ] Real Time Clock
- [ ] Watchdog Timer

### High Speed Peripherals

- [x] USB 2.0 (OTG with DMA support)
- [x] Ethernet 10/100Mbps and PHY
- [ ] SPI NOR Flash
- [ ] SPI NAND Flash
- [x] MMC/SD

### Peripherals

- [x] I2C
- [x] SPI
- [x] GPIO
- [ ] SAR ADC
- [ ] PWM
- [x] UART
- [ ] Key Scan
- [ ] Wiegand

### Video and Audio Subsystem

- [ ] MIPI Video Input 
- [ ] Video Processing Subsystem
- [ ] H.265/H.264/MJPEG Encoder
- [ ] Integrated Audio CODEC

### Hardware Accelerators

- [ ] Security System Module
- [ ] Tensor Processing Unit (TPU)
  
## Upstreaming

SOPHGO's progress on upstreaming CV18xx SoC support to the mainline Linux kernel can be tracked [here](https://github.com/sophgo/linux/wiki).