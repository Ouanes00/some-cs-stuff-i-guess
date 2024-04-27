#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("enter the length of this string: ");
    scanf("%d", &n);

    char str[n];
    printf("enter the string: ");
    scanf("%s", str);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf(" ascending orderof the string : %s", str);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] < str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf(" descending orderof the string : %s", str);

    return 0;
}
