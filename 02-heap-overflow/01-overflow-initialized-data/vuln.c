#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define BUFSIZE 16
#define OVERSIZE 8 /* overflow buf2 by OVERSIZE bytes */

int main(int argc, char *argv[]) {
	__uint64_t diff;
	char *buf1, *buf2;
	buf1 = (char *)malloc(BUFSIZE);
	buf2 = (char *)malloc(BUFSIZE);

	strcpy(buf2, "You're a wizard");
	puts(buf2);

	gets(buf1);
	if (!strcmp(buf2, "MAGIC!")) {
		printf("Well done! You got magic.\n");
	} else {
		printf("Shhh... Muggle");
	}

	return 0;
}
