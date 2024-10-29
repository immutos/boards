# QEMU RISC-V

```shell
qemu-system-riscv64 \
  -M virt \
  -bios /usr/lib/riscv64-linux-gnu/opensbi/generic/fw_jump.bin \
  -kernel /usr/share/immutos-u-boot-qemu/bios-riscv64.bin \
  -nographic
```