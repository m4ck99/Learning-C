#include <stdio.h>
#include <stdlib.h>
#define NUMBER_OF_GAMES 4
#define NUMBER_OF_PLAYERS 5

int main(void) {
    int *scores = malloc(NUMBER_OF_PLAYERS * sizeof(int));
    int player = 0;
    int temp = 0;
    int max = 0;
    for (int loop1 = 1; loop1 < NUMBER_OF_GAMES + 1; ++loop1) {
        printf("Game #%d\n", loop1);
        int temp = 0;
        for (int loop2 = 1; loop2 < NUMBER_OF_PLAYERS + 1; ++loop2) {
            printf("Enter scoring total for Player #%d: ", loop2);
            scanf("%d", &temp);
            scores[loop2 - 1] += temp;
        }
        
    }
    for (int loop1 = 0; loop1 < NUMBER_OF_PLAYERS + 1; ++loop1) {
        for (int loop2 =0; loop2 < NUMBER_OF_PLAYERS + 1; ++loop2) {
            if ((scores[loop1] / NUMBER_OF_GAMES) > (scores[loop2] / NUMBER_OF_GAMES)) {
                temp = scores[loop1] / NUMBER_OF_GAMES;
                if (max < temp) {
                    max = temp;
                    player = loop1 + 1;
                }
            }
        }
    }
    printf("Player #%d had the highest scoring average at %d points per game.\n",player, max);
    free(scores);
    return 0;
}