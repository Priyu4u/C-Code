#include <stdio.h>
int main( ){
    // writing into a file using putc function

    FILE *fptr ;
    fptr = fopen("demo2.txt","w") ;

    char ch = 'P' ;
    fputc(ch, fptr) ;
    fputc('p',fptr);
    fputs("Hello world",fptr) ;

    

    fclose(fptr) ;
    return 0;
}