#include <stdio.h>
int main(  ){
    // using ftell( ) function
    FILE *fptr ;
    fptr = fopen("demoFile.txt", "r") ;

    int pos ;
    pos = ftell(fptr);
    printf("%d",pos) ;       // output = 0

    fseek(fptr, 6, SEEK_SET) ;     // setting ptr to 6th position
    printf("\n%d",ftell(fptr)) ;

    char ch ;
    ch = fgetc(fptr) ;    // fetching element at 6th position
    printf("\n%c",ch) ;

    fclose(fptr) ;
    return 0;
}