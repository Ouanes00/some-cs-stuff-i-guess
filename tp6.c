#include <stdio.h>
#include <string.h>

 struct ATHLETE {
    char firstName[30];
    char lastName[30];
    char country[30];
    char dateofbirth[30];
    double performance;
};

int main() {
    int N;
  do {
        printf("enter the number of athletes: ");

        if (scanf("%d", &N)!= 1||N <= 0) {
            printf("invalid input please enter a positive integer.\n");
        }
    } while (N <= 0);

    struct ATHLETE T_SPORT[N];
 int i;
for (i=0; i<N; i++) {
        printf("enter athlete%d information :\n", i+1);
    printf("first name: ");
        scanf("%s", T_SPORT[i].firstName);
printf("last name: ");
        scanf("%s", T_SPORT[i].lastName);
printf("Country: ");
        scanf("%s", T_SPORT[i].country);
printf("date of birth: ");
        scanf("%s", T_SPORT[i].dateofbirth);
printf("Performance: ");
scanf("%lf", &T_SPORT[i].performance);



printf("\n");

    }

  int winner = 0;
    for (i = 1; i < N; i++) {
        if (T_SPORT[i].performance < T_SPORT[winner].performance) {
            winner = i;
        }
    }

    printf("Laaadiiies aaaaaaand gentelmeeeens the gold medal of this year competition gooooes toooooo :\n");
    printf("neme: %s\n", T_SPORT[winner].firstName);
    printf("last name :%s\n", T_SPORT[winner].lastName);
    printf("country: %s\n", T_SPORT[winner].country);
    printf("date of Birth: %s\n", T_SPORT[winner].dateofbirth);
    printf("performance: %.1f seconds\n", T_SPORT[winner].performance);
    
    
    
    
    
    
    
    
    
    
    
    
    


    return 0;
}