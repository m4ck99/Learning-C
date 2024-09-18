#include <stdio.h>
#include <stdlib.h>

void main (void) {
	char *first;
	char *second;
	scanf("%ms", &first);
	scanf("%ms", &second);
	printf("Hi %s %s!\n", first, second);
	free(first);
	free(second);
}
