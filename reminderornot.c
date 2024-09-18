#include <stdio.h>

void main(void) {
	int numerator, denomenator;
	printf("Enter Numerator and denomenator\n");
	scanf("%d %d", &numerator, &denomenator);
	if (numerator % denomenator == 0) {
		printf("No reminder\n");
	}
	else {
		printf("Reminder present\n");
	}

}
