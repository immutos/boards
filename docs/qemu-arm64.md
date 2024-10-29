# QEMU ARM64

```shell
qemu-system-aarch64 \
  -M virt \
  -cpu cortex-a57 \
  -bios /usr/share/immutos-u-boot-qemu/bios-arm64.bin \
  -nographic
```