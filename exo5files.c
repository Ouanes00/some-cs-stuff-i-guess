#include <stdio.h>
#include <time.h>

int main() {
  FILE *file;
  char data[100];
  time_t current_time;

  file = fopen("log.txt", "a");  // Open in append mode to add new entries

  if (file == NULL) {
    printf("Error! Could not open the file.\n");
    return 1;
  }

  time(&current_time);
  printf("Enter your data: ");
  fgets(data, 100, stdin);  // Read data including newline

  fprintf(file, "%s - %s\n", ctime(&current_time), data);

  fclose(file);

  printf("Data logged successfully.\n");

  return 0;
}
