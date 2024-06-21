# include <stdio.h>
 
 
 
 
    int mian (){
    int a =10 ;
    int b = 12.5;
    printf("value of a : %d ", a);
        printf("value of b : %d ", b);

    printf("adress of a : %p", &a);
    printf("adress of b : %p ", &b);
         int *ptr_a= &a;
         int *ptr_b= &b;
    printf("value of a using pointer: %d ", *ptr_a);
    printf("value of b using pointer: %d ", *ptr_b);

    printf("adress of a using pointer: %p ", ptr_a);
    printf("adress of b using pointer: %p ", ptr_b);

   printf("adress of ptr_a: %p ", ptr_a);
   printf("adress of ptr_b: %p ", ptr_b);
return 0;
}



