# 操作系统实现

## 使用方法

iso 文件的使用参考

对于 `qemu` 模拟器，需要提前配置 `tap0` 设备，用于网络：

    qemu-system-i386  -m 32M -audiodev pa,id=snd -machine pcspk-audiodev=snd -device sb16,audiodev=snd -rtc base=localtime -chardev stdio,mux=on,id=com1 -serial chardev:com1 -netdev tap,id=eth0,ifname=tap0,script=no,downscript=no -device e1000,netdev=eth0 -drive file=onix_1.0.0.iso,media=cdrom,if=ide -boot d

## 开发中的功能

### 硬件驱动

- [x] ACPI：控制关机和重启
- [x] 网卡驱动 RTL8139

## 相关软件版本参考

- bochs >= 2.7
- qemu >= 6.2.0
- gcc >= 11.2.0
- gdb == 12.1
- nasm == 2.15.05
- binutils >= 2.38
- vmware >= 16.1
- vscode == 1.74.3
