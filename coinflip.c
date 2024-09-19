#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int answer;
    int head = 0;
    int tail = 0;
    printf("How many times you have to roll the dice? ");
    scanf("%d", &answer);
    srand(time(NULL));
    for (int loop = 0; loop < answer; ++loop) {
        if (rand() % 2 == 0) {
            head += 1 ;
        }
        else {
            tail += 1;
        }
    }
    printf("There are:\n%d Heads,\n%d tails.\n", head, tail);
    return 0;
}