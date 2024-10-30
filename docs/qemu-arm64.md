# QEMU ARM64

```shell
qemu-system-aarch64 \
  -M virt -m 256M \
  -cpu cortex-a57 \
  -bios /usr/share/immutos-u-boot-qemu/bios-arm64.bin \
  -device virtio-blk-device,drive=hd0 \
  -drive file=rootfs.erofs,format=raw,id=hd0,if=none \
  -nographic
```