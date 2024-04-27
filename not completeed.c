#include <stdio.h>
#include <string.h>

struct tdate {
    int day, month , year;
};

struct tadress {
    int nun;
    char street[50];
    char city [20];
    char povince[20];
    int provincecode;
};

struct thabitant {
    char name[20];
    char surnams[20];
    struct tdate BirthDate;
    struct tadress Residence;
};

int main() {
    struct thabitant inhabitants [100];
    int N;

    printf("Enter the number of inhabitants (N <= 100): ");
    scanf("%d", &N);
    
    int i = 0;
    while (i < N) {
        printf("Enter Name, Surname: ");
        scanf("%s %s", inhabitants [i].name, inhabitants [i].surname );

        printf("Enter Birth Date (Day Month Year): ");
        scanf("%d %d %d", &inhabitants [i].birthdate.day, &inhabitants [i].birthdate.month , &inhabitants [i].birthdate.year);

        printf("Enter Residence (Number Street City Province ProvinceCode): ");
        scanf("%d %s %s %s %d", &inhabitants [i].residence.number , inhabitants [i].residence.street ,
              inhabitants [i].residence.city , inhabitants [i].residence , &inhabitants [i].residence.provincecode);

        i++;
    }

    
    i = 0;
    while (i < N) {
        if (inhabitants [i].birthdate.year < 2000) {
            printf("Address: %d %s %s %s %d\n", inhabitants [i].residence.number , inhabitants [i].residence.,
                   inhabitants [i].residence.city, inhabitants [i].residence.province , inhabitants [i].residence.provincecode);
        
        i++;
    }

    return 0;
}
    