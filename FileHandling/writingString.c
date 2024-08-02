#include <stdio.h>
int main( ){
    // writing a sentence into a text file
    FILE *fptr ;
    fptr = fopen("writingString.txt", "r");

    // checking if file opened successfully or not
    if(fptr == NULL){
        printf("Error in opening file");
        return 1;
    }


    char str[500] ;
    

    fclose(fptr) ;
    return 0;
}