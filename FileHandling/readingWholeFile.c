#include <stdio.h>
int main( ){
    // rading whole file  using EOF 

    FILE *fptr ;
    fptr = fopen("demo.txt","r") ;

    char ch = fgetc(fptr) ;
    while(ch != EOF){
        printf("%c",ch);
        ch = fgetc(fptr) ;
    }

    fclose(fptr) ;
    return 0;
}