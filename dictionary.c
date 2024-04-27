#include <stdio.h>
#include <string.h>

int main() {
int max_word_length;
    int max_words;
printf("*******enter the number of words in this dictionary*****: ");
scanf("%d", &max_words);




printf("*****Enter the maximum word length*****: ");
scanf("%d", &max_word_length);

  char vocabulary[max_words][4][max_word_length];  // 4 columns: word, synonym 1, synonym 2 (optional), antonym
  int size = 0;  //  vocabulary is empty so it starts from zero

  char word[max_words], synonym1[max_word_length], synonym2[max_word_length], antonym[max_word_length];
  int user_input;

  do {
    printf("\n****** Vocabulary Management ******\n");
    printf("1. ****Enter a new word****\n");
    printf("2. ****Find synonyms/antonyms****\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &user_input);

    switch (user_input) {
      case 1:
        // Check for available space
        if (size == max_words) {
          printf(" vocabulary is full u can't add new words Aaa\n");
        } else {
          printf("Enter a new word niggga: ");
          scanf("%s", word);

          printf("Enter synonym 1: ");
          scanf("%s", synonym1);

          printf("Enter synonym 2 (it's fine if u don't want to hehe) : ");
          scanf("%s", synonym2);

          printf("Enter antonym (also nobody gaf if don't :D ): ");
          scanf("%s", antonym);

          // copy user-entered information
          strcpy(vocabulary[size][0], word);
          strcpy(vocabulary[size][1], synonym1);
          if (synonym2[0] != '\0') { // check if synonym2 is empty
            strcpy(vocabulary[size][2], synonym2);
          } else {
            vocabulary[size][2][0] = '\0'; // set synonym2 to empty string if not provided
          }
          if (antonym[0] != '\0') { // check if antonym is empty
            strcpy(vocabulary[size][3], antonym);
          } else {
            vocabulary[size][3][0] = '\0'; // set antonym to empty string if not provided
          }
          printf("New word and synonyms/antonym added!\n");
          size++; // increment size only if a new word is added
        }
        break;
      case 2:
        printf("  enter a word to find its synonym or antonym: ");
        scanf("%s", word);

        int found = 0;
        for (int i = 0; i < size; i++) {
          if (strcmp(vocabulary[i][0], word) == 0) {
            printf("Synonyms of '%s': %s", word, vocabulary[i][1]);
            if (vocabulary[i][2][0] != '\0') {
              printf(", %s", vocabulary[i][2]); // print second synonym if available
            }
            printf("\n");

            if (vocabulary[i][3][0] != '\0') {
              printf("Antonym of '%s': %s\n", word, vocabulary[i][3]);
            }

            found = 1;
            break;
          }
        }

        if (!found) {
          printf("Word '%s' not found in vocabulary aaaa better recal urself ", word);
        }
        break;
      case 3:
        printf("Exiting...\n");
            break;
              default:
        printf("Invalid choice. Please try again.\n");
       }
      } while (user_input != 3);

  return 0;
}