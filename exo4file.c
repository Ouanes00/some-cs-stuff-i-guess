#include <stdio.h>

int main() {

  char ch, filename[20];
  int word_counter = 0;

  printf("Enter the filename: ");
  scanf("%s", filename);

FILE*file= fopen("filename", "r");


  while ((ch = fgetc(file)) != EOF) {
    if (ch == ' ' || ch == '\n' || ch == '\t') {
      word_counter++;
    }
  }
 
  fclose(file);

  printf("the number of words in this file is : %d\n", word_counter);

  return 0;
}
