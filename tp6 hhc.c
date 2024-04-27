#include <stdio.h>
#include <string.h>

struct DATE {
    int day;
    int month;
    int year;
};

struct ATHLETE {
    char firstName[30];
    char lastName[30];
    char country[30];
    struct DATE dateofbirth;
    double performance;
};

int main() {
    int N;
    do {
        printf("Enter the number of athletes: ");
        if (scanf("%d", &N) != 1 || N <= 0) {
            printf("Invalid input, please enter a positive integer.\n");
        }
    } while (N <= 0);

    struct ATHLETE T_SPORT[N];
    int i;

    for (i = 0; i < N; i++) {
        printf("Enter athlete%d information:\n", i + 1);
        printf("First name: ");
        scanf("%s", T_SPORT[i].firstName);
        printf("Last name: ");
        scanf("%s", T_SPORT[i].lastName);
        printf("Country: ");
        scanf("%s", T_SPORT[i].country);
        printf("Date of birth (DD MM YYYY): ");
        scanf("%d %d %d", &T_SPORT[i].dateofbirth.day, &T_SPORT[i].dateofbirth.month, &T_SPORT[i].dateofbirth.year);
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

    printf("Ladies and gentlemen, the gold medal of this year's competition goes to:\n");
    printf("Name: %s\n", T_SPORT[winner].firstName);
    printf("Last name: %s\n", T_SPORT[winner].lastName);
    printf("Country: %s\n", T_SPORT[winner].country);
    printf("Date of Birth: %02d/%02d/%04d\n", T_SPORT[winner].dateofbirth.day, T_SPORT[winner].dateofbirth.month, T_SPORT[winner].dateofbirth.year);
    printf("Performance: %.1f seconds\n", T_SPORT[winner].performance);
    
    for (i = 0; i < 3 && i < N; i++) {
        printf("%d. %s %s from %s with %.1f seconds\n", i + 1, T_SPORT[i].firstName, T_SPORT[i].lastName, T_SPORT[i].country, T_SPORT[i].performance);
    }

    return 0;
}
