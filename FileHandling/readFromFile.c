#include <stdio.h>
int main( ){
    // c program to read data from a file named student info
    FILE *fptr ;
    fptr = fopen("studentInfo.txt", "r") ;

    char ch = fgetc(fptr);
    while(ch != EOF){
        printf("%c",ch) ;
        ch = fgetc(fptr) ;
    }

    
    fclose(fptr) ;
    return 0;
}