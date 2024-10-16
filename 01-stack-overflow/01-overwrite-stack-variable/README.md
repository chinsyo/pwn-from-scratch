- 编译目标为x86时，需增加-m32编译32位可执行文件
- 运行```gcc -v```检查输出内容是否包含```--with-multilib-list=m32,m64,mx32 --enable-multilib```
- 如输出内容中没有multilib的信息，需要执行```sudo apt-get install gcc-multilib```

