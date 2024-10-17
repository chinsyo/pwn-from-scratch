## WSL2 (Windows 11, Ubuntu 22.04.5 LTS) 调试记录

- ```lsb_release -a```查看发行版 Ubuntu 22.04.5 LTS
- checksec显示没有保护措施，NX显示为 ```NX:         NX unknown - GNU_STACK missing```
- readelf -S ./ret2shellcode 显示 .bss 段起始地址为 0x0804a040
- 运行 ./ret2shellcode 后通过 ps aux | grep shellcode 获取PID
- 运行 ```sudo pmap _PID_ | more``` 查看进程的虚拟内存，显示 ```000000000804a000      4K rw--- ret2shellcode```
- 通过以上步骤（如安装了GEF调试器，可使用vmmap简化以上步骤）确认 .bss 段没有可执行权限