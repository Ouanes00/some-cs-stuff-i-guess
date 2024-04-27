#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
int main (){
// exo 1
/*

FILE *file = fopen("example.txt", "w");
if(file){
         fputs("hello world\n  ", file);
    fclose(file);
}
   else{ 
    perror("there was an error when openning file");
}


*/y
FILE*file= fopen("example.txt", "r");
if (file==NULL){

perror("there was an error when openning file");
}
char ch; 
do{
    printf("%c", ch);
}while ((ch = fgetc(file)) != EOF);

fclose(file);
}
