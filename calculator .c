#include <stdio.h>

float add(float x, float y);
float subtract(float x, float y);
float multiply(float x, float y);
float devide(float x, float y);

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            if (num2!= 0) {
                result = devide(num1, num2);
            } else {
                printf("Error: Division by zero\n");
                return 0;
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 0;
    }

    printf("Result: %.1f\n", result);

    return 0;
}

float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, f -²loat y) {
    return x * y;
}

float devide(float x, float y) {
    return x / y;
}