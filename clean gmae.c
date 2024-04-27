#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <stdbool.h> 
 
int main(void) { 
    char input; 
    int dice1, dice2, sum; 
    int playerScore = 0, compScore = 0; 
    bool loop = true; 
 
    system("clear"); 
    printf("-------Dice Game-------\n"); 
    printf("Your goal is to roll an 11.\n"); 
    printf("Press ENTER to begin.\n"); 
    getchar(); 
 
    while (loop) { 
        system("clear"); 
        printf("Your score is: %d\n", playerScore); 
        printf("The computer's score is: %d\n", compScore); 
 
        srand(time(NULL)); 
        dice1 = (rand() % 6) + 1; 
        dice2 = (rand() % 6) + 1; 
 
        printf("\nDice 1 value: %d\n", dice1); 
        printf("Dice 2 value: %d\n", dice2); 
        sum = dice1 + dice2; 
        printf("Your sum is: %d\n", sum); 
 
        if (sum == 11) { 
            printf("\nCongratulations! Your sum was %d, you win!\n", sum); 
            ++playerScore; 
        } else { 
            printf("\nYour sum was not 11, you lose.\n"); 
            ++compScore; 
        } 
 
        
        printf("\nWould you like to play again?\n[y] Yes\t\t [n] No\n>"); 
        scanf(" %c", &input); 
 
        if (input == 'Y') { 
            loop = true; 
        } else { 
            loop = false; 
        } 
    } 
 
    system("clear"); 
    printf("Thank you for playing!\n"); 
    printf("Here are the final scores:\n"); 
    printf("Your score: %d\n", playerScore); 
    printf("The computer's score: %d\n", compScore); 
 
    return 0; 
}