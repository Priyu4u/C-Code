#include <stdio.h>
int main( ){
    // using fseek( )  function -> set file pointer to a given position

    FILE *fptr ;
    fptr = fopen("demoFile.txt" , "r") ;

    char ch ;
    fseek(fptr, 4, SEEK_SET) ;         // set file ptr to 4th position from begining
    ch = fgetc(fptr) ;
    printf("%c",ch) ;

    fseek(fptr, -2, SEEK_CUR);    // set file ptr to 2 characters backward from current position
    ch = fgetc(fptr) ;
    printf("%c",ch) ;

    fseek(fptr, -4, SEEK_END);    // set file ptr to 4 character backward from end
    ch = fgetc(fptr) ;
    printf("%c",ch) ;



    fclose(fptr) ;
    return 0;
}