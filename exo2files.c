#include <stdio.h>
#include <stdlib.h>
int main (){

FILE*file= fopen("exaple.txt", "r");
if (file==NULL){

perror("there was an error when openning file");
}
char ch; 
do{
    printf("%c", ch);
}while ((ch = fgetc(file)) != EOF);

fclose(file);
}