#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void vulnerable_func() {
        char buffer[128];
        read(STDIN_FILENO, buffer, 256);
}

int main(int argc, char *argv[]) {
        vulnerable_func();
        write(STDOUT_FILENO, "Hello, World!\n", 14);
        return 0;
}