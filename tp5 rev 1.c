#include <stdio.h>

int main() {
     int S = 0;
    int N;

    
    for (int i = 0; i < 4; ++i) {
        
        printf("Enter a number : ");
        scanf("%d", &N);

        
        S += N;
    }
    
    printf("Sum of four integers: %d\n", S);

    return 0;
}
