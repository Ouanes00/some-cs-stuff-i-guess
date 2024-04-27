#include <stdio.h>
#include <stdlib.h>
int main (){

FILE *file = fopen("words.txt", "w");
if(file){
         fputs("hello world\n  ", file);
    fclose(file);
}
   else{ 
    perror("there was an error when openning file");
}
}