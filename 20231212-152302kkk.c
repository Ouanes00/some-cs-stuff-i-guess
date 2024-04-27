#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int pile, player, matches;

    
    srand(time(NULL));

    
    printf("Enter the number of matchsticks to start the game: ");
    scanf("%d", &pile);

    
    player = rand() % 2 + 1;
    printf("Player %d starts the game.\n", player);

    while (pile > 0) {
        
        printf("\nPlayer %d, enter the number of matchsticks to take (1-3): ", player);
        scanf("%d", &matches);

        
        if (matches < 1 || matches > 3 || matches > pile) {
            printf("Invalid move. Try again.\n");
            continue;
        }

        pile -= matches;

        if (pile == 0) {
            printf("\nPlayer %d removed the last matchstick. Player %d wins!\n", player, 3 - player);
            break;
        }
        player = 3 - player;

        
        printf("Matchsticks remaining: %d\n", pile);
    }

    
    printf("\nDo you want to replay? (1 for Yes, 0 for No): ");
    scanf("%d", &matches);

    if (matches == 1) {
        
        printf("\nStarting a new game...\n");
        pile = 0;
        player = rand() % 2 + 1;
        printf("Player %d starts the game.\n", player);
    } else {
        printf("Game over. Goodbye!\n");
    }

    return 0;
}
