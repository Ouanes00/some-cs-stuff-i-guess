#include <stdio.h>

int main() {
    int N, i;
    int temp;
    int posCount= 0, negCount= 0;

    printf("Enter the dimension N (maximum 50): ");
    scanf("%d", &N);

    if (N<1 || N>50) {
        printf("sorry ,nvalid dimension. Exiting program.\n");
        return 1;
    }

    int T[N];
    int TPOS[N], TNEG[N]; 

    printf("Enter %d values for the array:\n", N);
    for (i =0; i< N; i++) {
        scanf("%d", &T[i]);
    }

    printf("array elements: ");
    for (i =0; i <N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    int sum = 0;
    for (i = 0; i < N; i++) {
        sum += T[i];
    }
    printf("the sum of array elements: %d\n", sum);

    int max = T[0], min = T[0];
    int maxPos = 0, minPos = 0;

    for (i =1; i <N; i++) {
        if (T[i] > max) {
            max = T[i];
            maxPos = i;
        }
        if (T[i] < min) {
            min = T[i];
            minPos = i;
        }
    }

    printf("largest value: %d at position %d\n", max, maxPos);
    printf("smallest value: %d at position %d\n", min, minPos);

    
    for (i = 0; i < N / 2; i++) {
        temp = T[i];
        T[i] = T[N - i - 1];
        T[N - i - 1] = temp;
    }

    printf("array elements in reverse order: ");
    for (i = 0; i< N; i++) {
        printf("%d ", T[i]);
    }

    
    for (i = 0; i < N; i++) {
        if (T[i] > 0) {
            TPOS[posCount] = T[i];
            posCount++;
        } else if (T[i] < 0) {
            TNEG[negCount] = T[i];
            negCount++;
        }
    }

    printf("\narray elements in TPOS (strictly positive): ");
    for (i = 0; i < posCount; i++) {
        printf("%d ", TPOS[i]);
    }

    printf("array elements in TNEG (strictly negative): ");
    for (i = 0; i < negCount; i++) {
        printf("%d ", TNEG[i]);
    }

    return 0;
}