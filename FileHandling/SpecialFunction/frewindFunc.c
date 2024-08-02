#include <stdio.h>
int main( ){
    // using fseek( ) -> sets the file pointer to the begining of the file

    FILE *fptr ;
    fptr = fopen("demoFile.txt" , "r+");

    char ch ;

    printf("Before using rewind function : ");
    int a = fseek(fptr, 5, SEEK_SET) ;
    ch = fgetc(fptr) ;
    printf("%c",ch) ;

    printf("\nAfter using rewind function : ");
    rewind(fptr) ;          // bring the pointer to the starting position of file
    ch = fgetc(fptr) ;
    printf("%c",ch) ;


    fclose(fptr);

    return 0;
}