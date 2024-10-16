#include <stdio.h>
#include <string.h>

void success(void) {
	puts("Yeah! You have controlled it!");
}

void vulnerable(void) {
	char buffer[12];
	gets(buffer);
	puts(buffer);
	return;
}

int main(int argc, char *argv[]) {
	vulnerable();
	return 0;
}
