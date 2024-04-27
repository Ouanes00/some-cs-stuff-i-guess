#include <stdio.h>

int main() {
    int num1,num2;
    
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    int quotient = num1 / num2;
    int remainder = num1 % num2;
    
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    
    return 0;
}
    