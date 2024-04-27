#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int pile, player, matches, winner;

    
    srand(time(NULL));

    
    printf("Eenter the number of matchsticks to start the game: ");
    scanf("%d", &pile);

    
    player = rand() % 2 + 1;
    printf("player %d starts the game.\n", player);

    while (pile > 0) {
        
        printf("player %d, enter the number of matchsticks to take (1-3): ", player);
        scanf("%d", &matches);

        
        if (matches < 1 || matches > 3 || matches > pile) {
            printf("invalid move. Try again.\n");
            continue;
        }

        pile = pile - matches;

        if (pile == 0) {
            printf("Player %d removed the last matchstick. Player %d wins!\n", player, 3 - player);
            break;
        }
        player = 3 - player;

        
        printf("matchsticks remaining: %d\n", pile);
    }

    
    printf("do you want to replay? (1 for Yes, 0 for No): ");
    scanf("%d", &matches);

    if (matches == 1) {
        
        printf("starting a new game...\n");
        pile = 0;
        player = rand() % 2 + 1;
        printf("player %d starts the game.\n", player);
    } else {
        printf("pame over goodbye lol\n");
        
      if (pile == 0) {
        printf("player %d is the winner\n", winner);
    } else {
        printf("pllaer %d quit. player %d wins\n", player, 3 - player);
    }
    
}
    return 0;
}
