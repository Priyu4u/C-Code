#include <stdio.h>
int main( ){
    // C program to count number of characters, words and lines in a text file.
    FILE *fptr ;
    fptr = fopen("counting.txt" , "r") ;

    if(fptr == NULL){
        printf("Error opening file !") ;
        return 1;
    }
    
    char ch ;
    int character = 0, line = 0 , word = 0;

    while( (ch = fgetc(fptr)) != EOF){
        character++ ;
        if(ch == '\n'){
            line++ ;
        }
        if(ch == ' ' || ch == '\n' || ch == '\0'){
            word ++ ;
        }
    }

    // for single word in file
    if(character > 0 || word == 0){
        line++ ;
        word++ ;
    }

    // for empty file
    if(character==0){
        word = 0;
        line = 0;
    }


    fclose(fptr) ;

    printf("Number of characters : %d\n",character) ;
    printf("Number of words : %d\n",word) ;
    printf("Number of lines : %d\n",line) ;

    return 0;
}