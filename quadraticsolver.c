#include <stdio.h>
#include <math.h>

int main(void) {
	int A, B, C;
	printf("Ax²+Bx+C = 0\n");
	printf("A: ");
	scanf("%d", &A);
	printf("B: ");
	scanf("%d", &B);
	printf("C: ");
	scanf("%d", &C);
	float discriminant = (B * B) - (4 * A * C);
	if (discriminant > 0) {
		float soln1 =((-1 * B) + sqrt(discriminant)) / (2*A);
		float soln2 =((-1 * B) - sqrt(discriminant)) / (2*A);
		printf("The solutions are %.2f and %.2f", soln1, soln2);
	}
	else if (discriminant == 0) {
		float soln = (-1 * B) / (2 * A);
		printf("The root is %.2f\n", soln);
	}
	else {
		printf("Solution is complex!\n");
	}
	return 0;


}
