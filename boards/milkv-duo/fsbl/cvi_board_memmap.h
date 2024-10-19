#ifndef __BOARD_MMAP__
#define __BOARD_MMAP__

#define CVIMMAP_DRAM_BASE 0x80000000  /* offset 0.0KiB */
#define CVIMMAP_DRAM_SIZE 0x4000000  /* 64.0MiB */
#define CVIMMAP_FSBL_C906L_START_ADDR 0x83f40000  /* offset 63.25MiB */
#define CVIMMAP_FSBL_UNZIP_ADDR 0x81400000  /* offset 20.0MiB */
#define CVIMMAP_FSBL_UNZIP_SIZE 0x500000  /* 5.0MiB */
#define CVIMMAP_MONITOR_ADDR 0x80000000  /* offset 0.0KiB */
#define CVIMMAP_OPENSBI_FDT_ADDR 0x80080000  /* offset 512.0KiB */

#endif /* __BOARD_MMAP__ */
