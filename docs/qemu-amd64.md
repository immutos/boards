# QEMU AMD64

## Full Machine

```shell
qemu-system-x86_64 \
  -M q35,accel=kvm -m 256M \
  -bios /usr/share/immutos-u-boot-qemu/bios-amd64.bin \
  -device virtio-blk-pci,drive=hd0 \
  -drive file=rootfs.erofs,format=raw,id=hd0,if=none \
  -nographic
```

## MicroVM

The RTC has to be enabled otherwise you will run into: 

https://bugs.launchpad.net/ubuntu/+source/qemu/+bug/2074073

```shell
qemu-system-x86_64 \
  -M microvm,x-option-roms=off,pit=off,pic=off,isa-serial=off,rtc=on,accel=kvm -m 256m \
  -chardev stdio,id=virtiocon0 \
  -device virtio-serial-device \
  -device virtconsole,chardev=virtiocon0 \
  -device virtio-blk-device,drive=hd0 \
  -drive file=rootfs.erofs,format=raw,id=hd0,if=none \
  -nodefaults -no-user-config -nographic \
  -kernel vmlinuz \
  -append "console=hvc0 root=/dev/vda"
```