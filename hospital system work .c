#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Treatment {
    char medication[50];
    float dosage;
    int duration;
    bool has_allergies;
    char allergy_details[100];
};

struct DrugAllergies {
    bool has_allergies;
    char allergy_details[100];
};

struct Hospitalization {
    bool is_hospitalized;
    char service[50];
    char room[50];
    char physician_name[50];
    char physician_specialty[80];
    char treatment_type[70];
    char diagnosis[100];
    char admission_date[60];
    char discharge_date[60];
};

struct Personal_information {
       char firstname[70];
 char name[70];
    char dob[70];
    int filenum;
};
struct searchterm {
    char name[70];
    char firstname[70];
    int filenumber;
};


int main() {
     int max_patients;
    printf("enter the maximum number of patients: ");
    if (scanf("%d", &max_patients) != 1 || max_patients < 1) {
        printf("invalid value for the maximum number of patients.please reenter a valid value:)....");
        return 1;
    }
    struct Treatment treatment;
    struct DrugAllergies allergies;
    struct Hospitalization hospitalization;
    struct Personal_information personal_info;
    struct searchterm searchterm;
    // Array to store patient records
    struct Patient {
        struct Personal_information personal_info;
        struct Treatment treatments[10];
        struct Hospitalization hospitalization_info;
    } patients[max_patients];

    int patients_num;

       do {
   printf("Enter the number of patients: ", patients_num);
            if (scanf("%d", &patients_num) != 1  || patients_num < 1  || patients_num > max_patients) {
            while (getchar() != '\n');
            printf("invali input please enter a number between 1 and %d : ", max_patients);
        }
    } while (patients_num < 1 || patients_num > max_patients);

    for (int i = 0; i < patients_num; ++i) {
        printf("*****Menu*****:\n");
        printf("1. Enter patient data\n");
        printf("2. Search for a patient\n");
        printf("3. Display patient details\n");
        printf("4. Exit\n");

        int choice;
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice){
            case 1:
                printf("\nEnter Patient %d Information:\n", i + 1);

                   printf("name: ");
                   scanf("%s",patients[i].personal_info.name);

                    printf("first Name: ");
            scanf("%s",patients[i].personal_info.firstname);

                printf("date of birth: ");
                scanf("%s",patients[i].personal_info.dob);

           printf("file number: ");
            scanf("%d",&patients[i].personal_info.filenum);

                // normal system to store treatment information
                printf("medication: ");
                scanf("%s",patients[i].treatments[0].medication);

                printf("dosage: ");
                scanf("%f",&patients[i].treatments[0].dosage);

                printf("duration of treatment(in days): ");
                scanf("%d",&patients[i].treatments[0].duration);

                printf("does the patient have allergies(0 for No, 1 for Yes): ");
                scanf("%d",&patients[i].treatments[0].has_allergies);

                if (patients[i].treatments[0].has_allergies) {
                    printf("allergy details: ");
                    scanf("%s",patients[i].treatments[0].allergy_details);
                }

                // normal system to store hospitalization information
                printf("is the patient hospitalized before? (0 for no, 1 for yes): ");
                scanf("%d",&patients[i].hospitalization_info.is_hospitalized);

                if (patients[i].hospitalization_info.is_hospitalized) {

                    printf("service: ");
                    scanf("%s",patients[i].hospitalization_info.service);

                    printf("room: ");
                    scanf("%s",patients[i].hospitalization_info.room);
                   printf("physician name: ");
                    scanf("%s",patients[i].hospitalization_info.physician_name);

                    printf("physician specialty: ");
                    scanf("%s",patients[i].hospitalization_info.physician_specialty);

                    printf("treatment type: ");
                    scanf("%s",patients[i].hospitalization_info.treatment_type);

                    printf("diagnosis: ");
                    scanf("%s",patients[i].hospitalization_info.diagnosis);

                    printf("admission Date: ");
                    scanf("%s",patients[i].hospitalization_info.admission_date);

                    printf("discharge Date: ");
                    scanf("%s",patients[i].hospitalization_info.discharge_date);
                }

                break;
            case 2:

               printf("\nSearch Options:\n");
                printf("1. Search by Name\n");
                printf("2. Search by First Name\n");
                printf("3. Search by File Number\n");
                printf("Enter your choice: ");

                int searchoption;
                scanf("%d", &searchoption);

                switch (searchoption) {
                    case 1:
                        printf("Enter search term (name): ");
                        scanf("%s", searchterm.name);
                        break;
                    case 2:
                        printf("Enter search term (first name): ");
                        scanf("%s", searchterm.firstname);
                        break;
                    case 3:
                        printf("Enter search term (file number): ");
                        scanf("%d", &searchterm.filenumber);
                        break;
                    default:
                        printf("Invalid search option. Please enter a valid option.\n");
                        continue;
                }
                /*
                
                int found = 0;
                for (int j = 0; j < i + 1; j++) {
                 if (strcmp(searchterm,patients[j].personal_info.name) == 0 
                     strcmp(searchterm,patients[j].personal_info.firstname) == 0 
                     atoi(searchterm)==patients[j].personal_info.filenum) {

                        printf("\nPatient Found\n");
                        printf("name: %s %s\n", patients[j].personal_info.firstname, patients[j].personal_info.name);
                        printf("date of Birth: %s\n",patients[j].personal_info.dob);
                        printf("file Number: %d\n",patients[j].personal_info.filenum);

                        found=1;
                        break;
                    }
                }

                if (!found) {
                    printf("\nPatient not found.\n");
                }
                break;
                
                
                
                */
                
                
                
                
                
                
                
                int found = 0;
                for (int j = 0; j < i + 1; j++) {
                    // compare names
                    int k;
                    for (k = 0; searchterm.name[k] != '\0' && patients[j].personal_info.name[k] != '\0'; ++k) {
                        if (searchterm.name[k] != patients[j].personal_info.name[k]) {
                            break;
                        }
                    }
                    if (searchterm.name[k] == '\0' && patients[j].personal_info.name[k] == '\0') {
                        // names match
                        found = 1;
                    }

                    // compare first names if not found
                    if (!found) {
                        for (k = 0; searchterm.firstname[k] != '\0' && patients[j].personal_info.firstname[k] != '\0'; ++k) {
                            if (searchterm.firstname[k] != patients[j].personal_info.firstname[k]) {
                                break;
                            }
                        }
                        if (searchterm.firstname[k] == '\0' && patients[j].personal_info.firstname[k] == '\0') {
                            // first names match
                            found = 1;
                        }
                    }

                    // compare file numbers if not found
                    if (!found && searchterm.filenumber == patients[j].personal_info.filenum) {
                        found = 1;
                    }

                    if (found) {
                        // display the found patient details
                        printf("\nPatient Found!\n");
                        printf("Name: %s %s\n", patients[j].personal_info.firstname, patients[j].personal_info.name);
                        printf("Date of Birth: %s\n", patients[j].personal_info.dob);
                        printf("File Number: %d\n", patients[j].personal_info.filenum);
                        break;
                    }
                }
               if (!found) {
                    printf("\nPatient not found.\n");
                }
                break;
            case 3:
                //this choice for displaying patient info's
                /*first enter the patient index*/
                printf("\nEnter patient index: ");
                int patientI;
                scanf("%d", &patientI);

                // display the patient with the enetred index info's
                printf("\nPatient Information:\n");
                printf("name: %s %s\n", patients[patientI].personal_info.firstname, patients[patientI].personal_info.name);
                printf("date of Birth: %s\n", patients[patientI].personal_info.dob);
                printf("file Number: %d\n", patients[patientI].personal_info.filenum);

                printf("\nTreatment Information:\n");
                printf("medication: %s\n", patients[patientI].treatments[0].medication);
                printf("dosage: %.2f\n", patients[patientI].treatments[0].dosage);
                printf("duration: %d days\n", patients[patientI].treatments[0].duration);

                printf("\nDrug allergies:\n");
                printf("patient has allergies: %s\n", patients[patientI].treatments[0].has_allergies ? "yes" : "no");
                if (patients[patientI].treatments[0].has_allergies) {
                    printf("allergy details: %s\n", patients[patientI].treatments[0].allergy_details);
                }

                printf("\nHospitalization information:\n");
                printf("is Hospitalized: %s\n", patients[patientI].hospitalization_info.is_hospitalized ? "yes" : "no");
                if (patients[patientI].hospitalization_info.is_hospitalized) {
                    printf("service: %s\n", patients[patientI].hospitalization_info.service);
                    printf("room: %s\n", patients[patientI].hospitalization_info.room);
                    printf("physician name: %s\n", patients[patientI].hospitalization_info.physician_name);
                    printf("physician specialty: %s\n", patients[patientI].hospitalization_info.physician_specialty);
                    printf("treatment type: %s\n", patients[patientI].hospitalization_info.treatment_type);
                    printf("diagnosis: %s\n", patients[patientI].hospitalization_info.diagnosis);
                    printf("admission Date: %s\n", patients[patientI].hospitalization_info.admission_date);
                    printf("discharge Date: %s\n", patients[patientI].hospitalization_info.discharge_date);
                }

                break;
            case 4:
                // this choice allows u to exit the program
                printf("exiting the program\n");
                return 0;
            default:
                printf("invalid choice Please enter a valid option\n");
                break;}
    }
    return 0;
}