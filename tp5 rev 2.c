#include <stdio.h>
#include <math.h>

int main() {
    
    int X;
    printf("enter an integer X: ");
    scanf("%d", &X);
    int absX = abs(X);
    printf("|%d| = %d\n", X, absX);

    float Y;
    printf("enter a number  Y: ");
    scanf("%f", &Y);
    float sqrtY = sqrt(Y);
    printf("square root of %.1f = %.f\n", Y, sqrtY);

    int M, N;
    printf("enter M and N: ");
    scanf("%d %d", &M, &N);
    float powMN = pow(M,N);
    printf("%d^%d = %.1f\n", M, N, powMN);

    return 0;
}
