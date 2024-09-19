#include <stdio.h>
#include <stdlib.h>
#define NUMBER_OF_PLAYERS 5

struct stats {
    int points;
    int games;
};


int main(void) {
    struct stats *allPlayers[NUMBER_OF_PLAYERS];
    float average;
    for (int loop1 = 0; loop1 < NUMBER_OF_PLAYERS; ++loop1) {
        allPlayers[loop1] = malloc(sizeof(struct stats));
        printf("Enter Player %d\'s point total: ", loop1 + 1);
        scanf("%d", &allPlayers[loop1]->points);
        printf("Enter Player %d\'s game total: ", loop1 + 1);
        scanf("%d", &allPlayers[loop1]->games);
    }
    for (int loop2 = 0; loop2 < NUMBER_OF_PLAYERS; ++loop2) {
        average = allPlayers[loop2]->points / allPlayers[loop2]->games;
        if (allPlayers[loop2]->games != 0){
            printf("Player %d's scoring average was %.2f ppg\n", loop2 + 1, average);
        }
        else {
            printf("Player didn't show up to any games.\n");
        }
        free(allPlayers[loop2]);
    }
    return 0;
}