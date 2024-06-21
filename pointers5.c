#include <stdio.h>

float add(float x, float y);
float subtract(float x, float y);
float multiply(float x, float y);
float devide(float x, float y);

int main() {
    float (*operations[4])(float, float) = {add, subtract, multiply, devide};

    float num1, num2;
    int choice;

    printf("Enter two  numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Choose operation (1: add, 2: subtract, 3: multiply, 4: divide): ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 4) {
        printf("Invalid choice. Please choose between 1, 2, 3, or 4.\n");
        return 1;
    }

    float result = operations[choice - 1](num1, num2);
    printf("%s(%.1f, %.1f) = %.1f\n", operations[choice - 1], num1, num2, result);

    return 0;
}

float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float devide(float x, float y) {
    return x / y;
}
