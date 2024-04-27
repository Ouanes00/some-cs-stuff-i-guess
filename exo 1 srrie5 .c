#include <stdio.h>
#include  <stdlib.h>
int main() {
    int year;
    int daysinmonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const char *monthnames[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int month,totaldays ;

        printf("Enter a year bro : ");
    while (scanf("%d", &year) != 1) {
                    while (getchar() != '\n');
        printf(" Enter a year nigga we're not playing here 0_0 :\n : ");
      }
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("it's a leapyear\n");
        daysinmonth[2] = 29;
    }



    for (month = 1; month <= 12; ++month) {
        printf("%s: %d days", monthnames[month], daysinmonth[month]);
        totaldays += daysinmonth[month];
    }

    printf("Total number of days in %d: %d\n", year, totaldays);

    return 0;
}