#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

        char buffer[16];
        int flag = 0;
        printf("Please input your passowrd:");
        gets(buffer);
        if (!strcmp(buffer, "password")) {
                flag = 1;
        }

        if (flag != 0) {
                printf("Correct! Access Granted!\n");
        } else {
                printf("Incorrect! Access Denied!\n");
        }

        return 0;

}