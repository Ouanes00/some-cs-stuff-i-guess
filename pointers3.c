Exercise 3:
Given the following declarations: int x; double arr[15];, you are required to rewrite each
expression with pointers if it does not use them, and without pointers if it uses them.
1. x
2. arr[5]
3. &x
4. *(arr + 3)
5. arr
6. &arr[2]
7. arr[3] + 1
8.*(arr + 7) = 2.5
expand_more
edit
Show drafts




















































volume_up

Here's the rewrite of each expression with and without pointers:

Without Pointers:

1 -x (already without pointers)
2- arr[5] (already without pointers)
3- &x (address of x, uses pointers)
4-- *(arr + 3) (dereference of pointer to the 4th element of arr, uses pointers)
5-  -arr (name of the array, already without pointers)
6 -&arr[2] (address of the 3rd element of arr, uses pointers)
7 -arr[3] + 1 (value of the 4th element of arr plus 1, without pointers)
8 - *(arr + 7) = 2.5 (assign 2.5 to the value at the 8th element of arr, uses pointers)
With Pointers:

1-  int *ptr = &x; // Pointer to x
2  double *ptr = arr + 5; // Pointer to the 6th element of arr
3   int *ptr = &x; // Pointer to x (already uses pointers)
4 double value = *(arr + 3); // Value at the 4th element of arr
5 double *ptr = arr; // Pointer to the first element of arr
6 double *ptr = &arr[2]; // Pointer to the 3rd element of arr (already uses pointers)
7 double value = arr[3] + 1; // Value at the 4th element of arr plus 1 (without pointers)
8 double *ptr = arr + 7; // Pointer to the 8th element of arr *ptr = 2.5; // Assign 2.5 to the value at the 8th element



share


more_vert
