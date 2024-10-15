#include <stdio.h>
#include <stdlib.h>

long long int factorial(int num) {
  if (num <= 1)
    return 1;
  return num * factorial(num - 1);
}

long long int combination(int n, int r) {
  return factorial(n) / (factorial(r) * factorial(n - r));
}

int main(void) {
  int i, j, k, in;
  printf("Enter number: ");
  scanf("%d", &in);

  for (i = 0; i < in; ++i) {
    if (i == 1)
      printf("1\n");
    
    for(j = 0; j < in - i; j++) {
      printf(" ");
    }
    for (k = 0; k < i; k++) { 
      if (k == i - 1) {
        printf("%lld 1\n", combination(i, k));
      }
      else {
        printf("%lld ", combination(i, k));
      }
    }
  }

  return 0;
}
