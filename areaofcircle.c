#include <stdio.h>
#define PI 3.14

void main(void) {
	float radius;
	printf("Enter length of the radius:>> ");
	scanf("%f", &radius);
	printf("Area of the circle is %f\n", PI*radius*radius);
}
