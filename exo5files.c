#include <stdio.h>
#include <time.h>

int main() {
  FILE *file;
  char data[100];
  time_t current_time;
  file = fopen("randome_thoughts.txt", "a"); 
  if (file == NULL) {
    printf("error....couldn't create the file.\n");
    return 1;
  }    time(&current_time);
             printf("sooo wtvr wht do u wanna say :) : ");
  fgets(data, 100, stdin);
      fprintf(file, "%s - %s\n", ctime(&current_time), data);
     fclose(file);
      printf("Data entered succesfully bruh .");

  return 0;
}
