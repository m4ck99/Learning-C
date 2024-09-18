#include <stdio.h>

void main(void) {
	int seconds;
	printf("Enter the number of seconds:>> ");
	scanf("%d", &seconds);
	int hours = seconds / 3600;
	int minutes = (seconds - hours * 3600) / 60;
	printf("%d Hours, %d minutes and %d seconds.\n", hours, minutes, seconds % 60);

}
