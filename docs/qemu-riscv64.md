# QEMU RISC-V

```shell
qemu-system-riscv64 \
  -M virt -m 256M \
  -bios /usr/lib/riscv64-linux-gnu/opensbi/generic/fw_jump.bin \
  -kernel /usr/share/immutos-u-boot-qemu/bios-riscv64.bin \
  -device virtio-blk-device,drive=hd0 \
  -drive file=rootfs.erofs,format=raw,id=hd0,if=none \
  -nographic
```