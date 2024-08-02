#include <stdio.h>
int main( ){
    // program to copy content of one file into another file character by character
    FILE *fptr1, *fptr2 ;
    fptr1 = fopen("source.txt","r") ;
    if(fptr1 == NULL){
        printf("Error opening source file !");
        return 1;
    }
    fptr2 = fopen("destination.txt","w");
    if(fptr2 == NULL){
        printf("Error opening destination file !");
        return 1;
    }

    char ch ;
    while ((ch = fgetc(fptr1)) != EOF)
    {
        fputc(ch,fptr2) ;
    }
    printf("Successfully copied");

    fclose(fptr1);
    fclose(fptr2) ;

    return 0;
}