# boards

Board support packages for various platforms.

## Platforms

### QEMU

```shell
make defconfig kvm_guest.config
```

And then disable the following options:

* Virtualization
* Device Drivers -> Graphics support
* Device Drivers -> Multimedia support
* Device Drivers -> Sound card support

Enable filesystems (disable everything else):

Note: Remember to disable CD-ROM/DVD Filesystems

* File systems -> The Extended 4 (ext4) filesystem
* File systems -> Overlay filesystem support (As a module)
* File systems -> DOS/FAT/NT Filesystems -> MSDOS fs support and VFAT (Windows-95) fs support
* File systems -> Miscellaneous filesystems -> EROFS filesystem support
* File systems -> Network File Systems