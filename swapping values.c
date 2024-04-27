#include <stdio.h> 
int main(){ 
 int a,b,c,x ; 
  printf("enter a b c x\n"); 
 scanf("%d\n %d\n %d\n", &a, &b, &c); 
 x=a; 
 a=c; 
 c=b; 
 b=x; 
 printf("show the values of the variables a=%d\tb=%d\tc=%d\t", a, b, c); 
}