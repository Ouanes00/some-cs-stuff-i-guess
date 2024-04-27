#include <stdio.h>
#include <math.h>
int main() {
int A , B , C , d ;
float x1 , x2 , x , sd ;
printf("second grade equation Ax^2 + Bx + C = 0\n");
    printf("Enter A , B , C\n");
    scanf("%d %d %d", &A, &B, &C);
    d = (B * B) - 4 * A * C ;
    if (d>0)
    {
        sd = sqrt(d);
        x1 = ((-1 *B) - sd) / (2*A ); 
        x2 = ((-1 *B) + sd) / ( 2*A );
        printf("there are two different solutions for this equation x1 = %.1f , x2 = %.1f\n",x1, x2);
    }
    else
    {
        if (d == 0)
      {
          x = (-1*B) / (2 * A ) ;
          printf("there is only one solution of this equation: x = %.1f\n", x);
      }
     else
       {
          printf("there is no solution for this equation\n");
       }
     }
    return 0;
}