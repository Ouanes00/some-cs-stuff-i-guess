/**#include <stdio.h>

double power(double x, int n) {
    if (n == 0) {
        return 1; // Base case: x^0 = 1
    } else {
        return x * power(x, n - 1); // Recursive call
    }
}

int main() {
    double x;
    int n;

    printf("Enter a number (x): ");
    scanf("%lf", &x);

    printf("Enter the power (non-negative integer): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Power cannot be negative.\n");
    } else {
        double result = power(x, n);
        printf("%.2lf raised to the power of %d is %.2lf\n", x, n, result);
    }

    return 0;
}

#include <stdio.h>

int binary_search(int arr[], int low, int high, int value) {
    if (low > high) {
        return -1; // Not found
    }

    int mid = low + (high - low) / 2; // Avoid overflow by calculating mid this way

    if (arr[mid] == value) {
        return mid; // Found at the middle index
    } else if (arr[mid] < value) {
        return binary_search(arr, mid + 1, high, value); // Search in the right half
    } else {
        return binary_search(arr, low, mid - 1, value); // Search in the left half
    }
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int search_value;

    printf("Enter a value to search: ");
    scanf("%d", &search_value);

    int index = binary_search(arr, 0, n - 1, search_value);

    if (index != -1) {
        printf("%d is found at index %d\n", search_value, index);
    } else {
        printf("%d is not found in the array.\n", search_value);
    }

    return 0;
}
*/
#include <stdio.h>

void print_reverse(char *s);

int main() {
    char s[] = "this is it ";
    print_reverse(s);
    return 0;
}

void print_reverse(char *s) {
    if (*s!= '\0') {
        print_reverse(s + 1);
        printf("%c", *s);
    }
}
