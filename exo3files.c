#include <stdio.h>
#include <stdlib.h>
int main() {
  char the_origin_filenme[100], the_copy_filename[100];
  
  printf("Enter the source file name: ");
  scanf("%s", the_origin_filenme);

  printf("Enter the destination file name: ");
  scanf("%s", the_copy_filename);

FILE *original = fopen("the_origin_filenme", "w");
if (original == NULL)
{
  printf("error opening the file !: %s\n", the_origin_filenme);
  return 1;
}
   FILE*copy = fopen("the_copy_filename.txt", "w");
  if (copy == NULL) {
    printf("Error creating destination file: %s\n", the_copy_filename);
    fclose(original); 
    return 1;
  }

  char ch;
  while ((ch = fgetc(original)) != EOF) {
    fputc(ch, copy);
  }

  printf("File copied successfully!\n");

  fclose(original);
  fclose(copy);

  return 0;
}