#include <stdio.h>

int main(int argc, char* argv[]) {
	if (argc == 3) {
		printf("hey %s %s\n", argv[1], argv[2]);
	}
	else {
		printf("Usage: ./a.out firstname lastname");
	}
	return 0;


}
