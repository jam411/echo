#include <stdio.h>

int main(int argc, char **argv) {
	char *args = argv + 1;
	for (char **p = args; *p; p++)
		printf("%s%s", (p == args ? "" : " "), *p);
	printf("\n");

	return 0;
}

