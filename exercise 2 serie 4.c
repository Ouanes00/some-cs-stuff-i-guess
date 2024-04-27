#include <stdio.h>

int main() {
    int N, M, i, j, X;
    int A[50][50], B[50][50], sumA= 0, sumB= 0, sumAB= 0;

    printf("enter the dimensions N and M: ");
    scanf("%d %d", &N, &M);

    printf("enter the elements of the array A: ");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
            sumA += A[i][j];
        } }

    printf("Enter the elements of the array B: ");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &B[i][j]);
            sumB += B[i][j];
        }}
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            A[i][j] += B[i][j];
            sumAB += A[i][j];
        }}

    printf("array A: \n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("the sum of all elements in A: %d\n", sumA);

    printf("array B: \n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("the sum of all elements in B: %d\n", sumB);

    printf("array A+B: \n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("the sum of all elements in A+B: %d\n", sumAB);

    printf("enter the variable X that u wanna search for: ");
    scanf("%d", &X);

   
    int  count = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (A[i][j] == X) count++;
            if (B[i][j] == X) count++;
        }
    }

    printf("the variable X occurred %d times in the arrays.\n", count);

    return 0;
}