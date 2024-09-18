#include <stdio.h>

int main(void) {
	int number;
	printf("Enter a number b/w 1-500:>> ");
	scanf("%d", &number);
	if (number <=100) {
		printf("number is in b/w 0-100\n");
	}
	else if (number > 100 && number <= 200) {
		printf("number is in b/w 100-200\n");
	}
	else if (number > 200 && number <= 300) {
		printf("number is in b/w 200-300\n");
	}
	else if (number > 300 && number <= 400) {
		printf("number is in b/w 300-400\n");
	}
	else if (number > 400 && number <= 500) {
		printf("number is in b/w 400-500\n");
	}
	else {
		printf("number is not in b/w 0-500\n");
	}

}
