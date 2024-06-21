#include <stdio.h>
/*
int main(){
      
      int x= 10;
      printf("%p",&x);
      int *pX = &x;
       printf("/n%p", pX);
      return 0;
}
#include <stdio.h>
void maxmin ( int arr[] , int len ,int  *min , int *max){ 
   *min = *max = arr[0];
   int i ; 
   for (i = 1 ; i < len ; i++){

      if (arr[i] > *max )
      *max = arr[i];
      if (arr[i]<arr[0]) 
      *min  = arr [i];
   }
             
}
int main(){
    int arr [] = { 1 , 177, 77, 6 ,-7,99,200};
    int min , max ;
   int len = sizeof(arr)/sizeof(arr[0]); 
   maxmin(arr ,len , &min , &max);
   printf("the minimum value of the array is : %d \n the maxium value of the array is : %d ", min ,max);
   return 0;
}  
*/
/* int *findmid(int arr[], int n ){
      return &arr[n/2];
 }
int main (){
      int arr [] = { 1 , 177, 77, 6 ,-7,99,200};
        int n = sizeof(arr)/sizeof(arr[0]);  
         int *mid  = findmid(arr, n );
         printf("%d", *mid);
  
 }
 */

int main(){

int n ; 

printf("enter the number of elements in the array : " );
scanf("%d", &n );
int *-p = calloc( n, sizeof(int));
for(i= 0 ; i <
}

