#include <stdio.h>
int main( ){
    // C program to count total number of words in a file
    FILE *fptr ;
    fptr = fopen("countingWord.txt","r");

    if(fptr == NULL){
        printf("Error opening file !");
        return 1;
    }

    char ch ;
    int wordCount = 0;
    while((ch = fgetc(fptr)) != EOF){
        if(ch == ' ' || ch == '\n' || ch == '\t' || ch == '\0'){
            wordCount++ ;
        }
    }

    printf("Total number of words in file : %d",wordCount) ;

    fclose(fptr) ;
    return 0;
}