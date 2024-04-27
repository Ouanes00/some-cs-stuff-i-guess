#include <stdio.h> 
 
int main() { 
    float average; 
     
    printf("Enter the student's average: "); 
    scanf("%f", &average); 
    if (average<0 || average >20) { 
        printf("Invalid average Please enter a value between 0 and 20\n"); 
     } else if (average<10) 
    { 
        printf("You failed, buddy. Try your best next year\n"); 
     } else if (average>=10 && average<12)  
   { 
        printf("You did good but you should work more\n"); 
    } else if (average>=12 && average<14)  
  { 
        printf("Hmm I mean that's alright :)\n"); 
    } else if (average>=14 && average<16) 
   { 
        printf("That's ma boy!:)\n"); 
    } else if (average>=16)  
  { 
        printf("Ayyo NASA needs you XD\n"); 
    } 
 
    return 0; 
}