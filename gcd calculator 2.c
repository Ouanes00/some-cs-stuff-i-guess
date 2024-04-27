#include <stdio.h>

int main() {
    int a, b, i, P;
    printf("Please enter two integers: ");
    scanf("%d %d", &a, &b);

    for (i=1; i<=a && i<=b; i++) {
        if (a%i==0 && b%i==0)
            P=i;
    }

    printf("GCD of %d and %d is : %d ", a, b, P);

    return 0;
}
