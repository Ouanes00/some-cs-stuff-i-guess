/* 

*A. int ptr, value = 55;
ptr = value;

Error: Assigning an integer value directly to a pointer is incorrect. Pointers should store memory addresses, not integer values.
the correction  : 
*/
int *ptr;  // Declare pointer without initialization
value = 55;  // Assign value to the integer variable
ptr = &value;  // Assign the address of value to the pointer

/*

*B.

 float fPtr;
float number;
fPtr = number;

Error: Similar to A, assigning a float value directly to a pointer is invalid.

Correction:
*/
float *fPtr;
float number;
fPtr = &number;  // Store the address of number in fPtr



/*


*C.
char c = 'A';
char pc = c;

No error: This sequence correctly declares a character variable c, a pointer pc to a character, and assigns the address of c to pc
*/





/*
double dPtr;
int x = 200;
dPtr = &x;

Error: Assigning the address of an integer (x) to a double pointer is incorrect. Pointers should match the data type they point to.

Correction:
*/
int x = 200;
double *dPtr = (double*)&x;  // Cast the address of x to double*




/*

*E.
int values[10];
int pValues = &values;

No error: This sequence correctly declares an integer array values, a pointer pValues to an integer, and assigns the address of the first element in values to pValues.



*F. 
int mainValue;
int const cPtr = &mainValue;
cPtr = 20;
mainValue = 30;

Error: This sequence attempts to modify a constant pointer cPtr. Once a pointer is declared as const, its value (the address it points to) cannot be changed.

Correction:
If you want to modify the value pointed to by cPtr:

*/
int mainValue;
int *cPtr = &mainValue;  // Non-constant pointer
*cPtr = 20;  // Modify the value at the address pointed to by cPtr

//If you only need to read the value through the pointer without modification:

int mainValue;
const int *cPtr = &mainValue;  // Constant pointer
mainValue = 30;  // Modify the value directly (cPtr remains unchanged)
