# QEMU AMD64

```shell
qemu-system-x86_64 \
  -M q35,accel=kvm -m 256M \
  -bios /usr/share/immutos-u-boot-qemu/bios-amd64.bin \
  -device virtio-blk-pci,drive=hd0 \
  -drive file=rootfs.erofs,format=raw,id=hd0,if=none \
  -nographic
```