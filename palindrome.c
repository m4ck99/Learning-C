#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* fliparr(char* arr);

int main(void) {
  char input[50], _input[50];
  printf("Enter the word: ");
  scanf("%s", &input);
  strcpy(_input, input);
  strcpy(_input, fliparr(_input));
  for (int j = 0; j < strlen(_input); j++) {
    if (_input[j] != input[j]) {
      printf("This is not a palindrome!\n");
      return 1;
    }
  }
  printf("This is a palindrome!!\n");
}
char* fliparr(char* arr) {
  char *temp = malloc(sizeof(char) * (1 + strlen(arr)));
  for (int i = 0; i < strlen(arr); i++) {
    temp[i] = arr[strlen(arr) - 1 - i];
  }
  return temp;
}
