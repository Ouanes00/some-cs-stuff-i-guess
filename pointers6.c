#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr;
    printf("enter the number of elements: ");
    scanf("%d", &n); 
        arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
    printf("sorry ,,,memory allocation failed\n");
       return 1;
    }
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
           scanf("%d", &arr[i]);
    }
    printf("the array elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr); 
    return 0;
}