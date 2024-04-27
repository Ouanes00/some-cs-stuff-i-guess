#include <stdio.h>

int main() {
    char TXT[201];  //201 ...is for the terminator /0
    int length ,i;

    printf("Hello sir\\mis enter a line of text(not exceeding 200 characters): ");
// fgets is waaaaaaaaaaaaaaaayyy better than gets...
    fgets(TXT, sizeof(TXT), stdin);
        TXT[strcspn(TXT, "\n")] = '\0';
   /*for (int i = 0; i <= length; i++)
    if (TXT[i] == '\n')
      printf("string[%d] = \\n \n", i);
    else if (TXT[i] == '\0')
      printf("string[%d] = \\0 \n", i);
    else
      printf("string[%d] = %c \n", i, TXT[i]);*/
        printf("you entered: %s\n", TXT);
        // this for loop didn't work sooooo i used the strcspn to remove the terminatoer and new line character
   //calculate the lenght of the entered string

    for (i =0; TXT[i]!='\0';i++){
        length++;
    }
   printf("Length of the string: %d \n", length);
     // Count the number of 'a's in the string
    int countA = 0;
    for (i = 0; i < length; ++i) {
        if (TXT[i]== 'a'||TXT[i]=='A') {
            countA++;
        }
    }    printf("the number of the a's in this string: %d\n",countA);
         strrev(TXT);
         printf("LOL this is the reverse version of the sting : %s\n",TXT);


    //there is another method of reversing...creating new array with new variable ///and store the reversed string in it but i preffered this one


    return 0;
}