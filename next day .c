#include <stdio.h> 
 
int main() { 
    char leapyear; 
    int y, m, days ,day ; 
 
    printf("Enter year: "); 
    scanf("%d", &y); 
 
    if (y % 4 == 0) { 
        printf("It's a leap year\n"); 
        leapyear = 't'; 
    } else { 
        printf("It's not a leap year\n"); 
        leapyear = 'f'; 
    } 
 
    printf("Enter month(1-12): "); 
    scanf("%d", &m); 
    printf("enter a day: "); 
    scanf("%d", &day); 
    switch (m) { 
        case 4: 
        case 6: 
        case 9: 
        case 11: 
            days = 30; 
    if (day < 30) { 
                day++; 
            } else if (day>30){ 
                printf("Enter a valid day for this month: "); 
                scanf("%d", &day); 
            } 
            break; 
        case 2: 
            if (leapyear == 't') {days = 29; 
                if (day < 29) { 
                    day++; 
                } else { 
                    day = 1; 
                    m++; 
                } 
            } else { days = 28; 
                if (day < 28) { 
                    day++; 
                } else { 
                    day = 1; 
                    m++; 
                } 
            } 
            break; 
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12: 
           days = 31; 
      if (day < 31) { 
                day++; 
            } else { 
                day = 1; 
                if (m==12){ 
                 m=1; 
                 y++; 
                }else{ 
                m++; 
            } 
   } 
            break; 
        default: 
            printf("Invalid month entered\n"); 
            return 0; 
 
    } 
    printf("The number of days in month is %d\n", days); 
    printf("The next day is: %d/%d/%d\n", day, m, y); 
    return 0; 
}