#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITAL_CAPACITY 3

int error() {
	printf("Memmory is not allocated!\n");
	return 1;
}

int main(void) {
	char answer[] = "y";
	double *scores = malloc(INITAL_CAPACITY * sizeof(double));
	if (!scores) {
		error();
	}

	int capacity = INITAL_CAPACITY;
	int scoreIndex;
	for (scoreIndex = 0; strcmp(answer, "y") == 0 || strcmp(answer, "Y") == 0; ++scoreIndex)	{
		if (scoreIndex == capacity) {
			capacity *= 2;
			scores = realloc(scores, capacity * sizeof(double));
			if (!scores) {
				error();
			}
		}
		printf("Enter a test score:>> ");
		scanf("%lf", &scores[scoreIndex]);

		printf("Would you like to continue? (Y/N):>> ");
		scanf("%s", &answer);
	}
	double sum = 0;
	
	for (int loop = 0; loop < scoreIndex; ++loop) {
		sum += scores[loop];
	}
	printf("Your average mark is %lf\n", sum / scoreIndex);
	free(scores);
	return 0;
} 