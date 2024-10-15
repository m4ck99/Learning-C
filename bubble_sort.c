#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array(int *arr, int index, int count, char *i_or_o) {
  for(index = 1; index < count; index++) {
    if (index == 1)
      printf("The %s array is {%d, ", i_or_o, arr[index]);
    else if (index == count - 1)
      printf("%d}\n", arr[index]);
    else 
      printf("%d, ", arr[index]);
  }
}

int main(void) {
  int *arr = NULL;
  int temp, index, count = 1;
  char temp_[5];

  printf("Enter the elements, Press (q) to sort: \n");
  while (1) {
    scanf("%s", temp_);
    if (strcmp(temp_, "q") == 0) {
      break;
    }
    count += 1;
    arr = realloc(arr, count * sizeof(int));
    arr[count - 1] = atoi(temp_);
  }
  system("clear");
  int numOfElements = count;
  print_array(arr, index, count, "input");
  count = 0;
  while (count < numOfElements) {
    for (index = 0; index < numOfElements; index++) {
      if (index != numOfElements - 1 && arr[index] > arr[index + 1]) {
        temp = arr[index + 1];
        arr[index + 1] = arr[index];
        arr[index] = temp;
      }
    }
    count += 1;
  }
  print_array(arr, index, count, "sorted");
  free(arr);
  return 0;
}
