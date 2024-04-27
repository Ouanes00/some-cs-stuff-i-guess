#include <stdio.h>

#define MAX_STUDENTS 100

typedef struct{
  char name[50];
  float grades[3];
} Student;

int main() {
  FILE *file;
  int num_students, i;
  Student students[MAX_STUDENTS];

  printf("Enter the number of students (max %d): ", MAX_STUDENTS);
  scanf("%d", &num_students);

  if (num_students > MAX_STUDENTS) {
    printf("Error! Maximum student capacity reached.\n");
    return 1;
  }

  for (i = 0; i < num_students; i++) {
    printf("Enter student %d details:\n", i + 1);
    printf("Name: ");
    scanf("%s", students[i].name);
    printf("Grades (3 numbers): ");
    scanf("%f %f %f", &students[i].grades[0], &students[i].grades[1], &students[i].grades[2]);
  }

  file = fopen("students.txt", "w");
  if (file == NULL) {
    printf("Error! Could not open the file.\n");
    return 1;
  }

  fprintf(file, "Number of Students: %d\n", num_students);
  for (i = 0; i < num_students; i++) {
    fprintf(file, "Student %d:\n", i + 1);
    fprintf(file, "  Name: %s\n", students[i].name);
    fprintf(file, "  Grades: %.2f %.2f %.2f\n", students[i].grades[0], students[i].grades[1], students[i].grades[2]);
  }

  fclose(file);

  printf("Student data stored successfully.\n");

  return 0;
}
