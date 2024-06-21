inc


Here are my responses to the tutorial and lab exercises you provided:

Tutorial #3:

Exercise 1:
A. To display the values of a and b:
```c
printf("Value of a: %d\n", a); 
printf("Value of b: %f\n", b);
```

B. To display the addresses of a and b: 
```c
printf("Address of a: %p\n", &a);
printf("Address of b: %p\n", &b);
```

C. To display values using pointers:
```c 
int *p1 = &a;
float *p2 = &b;
printf("Value of a using pointer: %d\n", *p1);
printf("Value of b using pointer: %f\n", *p2);
```

D. To display addresses using pointers:
```c
int *p1 = &a;
float *p2 = &b; 
printf("Address of a using pointer: %p\n", p1);
printf("Address of b using pointer: %p\n", p2);
```

E. To display addresses of the pointers:
```c
int *p1 = &a;
float *p2 = &b;
printf("Address of pointer p1: %p\n", &p1);
printf("Address of pointer p2: %p\n", &p2);
```

Exercise 2:
A. Error: Assigning an int value to an int pointer. Should be:
```c
int *ptr, value = 55;
ptr = &value;
```

B. Error: Assigning a float variable to a float pointer. Should be: 
```c
float *fPtr;
float number;
fPtr = &number;
```

C. Error: Assigning a char value to a char pointer. Should be:
```c  
char c = 'A';
char *pc = &c;
```

D. Error: Assigning address of an int to a double pointer. Should be:
```c
double *dPtr;
int x = 200;
int *xPtr = &x;
dPtr = (double*)xPtr;
```

E. Correct

F. Correct

Exercise 3:
1. *(&x)
2. *(arr + 5) 
3. &x
4. arr[3]
5. &arr[0]
6. arr + 2
7. *(&arr[3] + 1)
8. arr[7]

Exercise 4:
```c
#include <stdio.h>

int main() {
    int tab[10] = {1, 0, 3, 0, 5, 0, 7, 8, 0, 10};
    int *ptr = tab; // pointer to the first element of the array

    printf("Indices of null elements in the array:\n");
    for (int i = 0; i < 10; i++) {
        if (*(ptr + i) == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
```

Exercise 5:
```c
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int (*operations[])(int, int) = {add, subtract, multiply};
    int choice, a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 3) {
        int result = operations[choice - 1](a, b);
        printf("Result: %d\n", result);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
```

Exercise 6:
```c
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
```

Exercise 7:
```c
#include <stdio.h>
#include <stdlib.h>

// Node structure for singly linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end of the linked list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Function to reverse the linked list
void reverseList(struct Node** head) {
    struct Node* prev = NULL;
    struct Node* curr = *head;
    struct Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    *head = prev;
}

int main() {
    struct Node* head = NULL;
    int data;

    printf("Enter elements to insert at the end (0 to stop): ");
    scanf("%d", &data);

    while (data != 0) {
        insertAtEnd(&head, data);
        scanf("%d", &data);
    }

    printf("Original linked list: ");
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    reverseList(&head);

    printf("Reversed linked list: ");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    return 0;
}
```

Lab #3:

Exercise 1:
```c
#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int **ptr = (int**)matrix;

    printf("Accessing matrix elements using double pointers:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    return 0;
}
```

Exercise 2:
```c
#include <stdio.h>
#include <stdlib.h>

// Node structure for singly linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to add a new node at the beginning
void addAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}function to add a new mode at the begingih