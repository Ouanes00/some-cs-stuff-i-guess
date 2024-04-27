#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
 
int main() { 
    int dice1, dice2, sum; 
    int player1_score= 0, player2_score= 0; 
 
    srand(time(0)); 
 
    while (player1_score<11 && player2_score<11) { 
        dice1 =(rand()%6) + 1; 
        dice2 =(rand()%6) + 1; 
 
        printf("Player1 rolled: %d\n", dice1); 
        printf("Player2 rolled: %d\n", dice2); 
 
        if (dice1>dice2) { 
            printf("player1 wins the game!\n"); 
            player1_score++; 
        } else if (dice2>dice1) { 
            printf("player2 wins the game!\n"); 
            player2_score++; 
        } else { 
            printf("its tie roll again\n"); 
        } 
 
        printf("Current Scores: Player1- %d, Player2- %d\n\n", player1_score, player2_score); 
    } 
    if (player1_score== 11) { 
        printf("player 1 wins the game!\n"); 
    } else { 
        printf("player 2 wins the game!\n"); 
    } 
 
    return 0; 
}