#include <stdio.h>

int main() {
    int tableau[10] = {1,0, 3, 0, 5, 0, 7, 8, 0, 10};
    int *ptr = tableau; 

    printf("index of the all null elements in the array :\n");
    for (int i = 0; i < 10; i++) {
        if (*(ptr + i) == NULL ) {
            printf("%d ", i);
        }
    }
    return 0;
}