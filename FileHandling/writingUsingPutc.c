#include <stdio.h>
int main( ){
    // writing some thing to a file using putc in loop

    FILE *fptr ;
    fptr = fopen("writingUsingPutc.txt","w");

    char str[100] ;
    printf("Enter a string : ");
    gets(str) ;

    for(int i=0; i <= strlen(str); i++){
        fputc(str[i], fptr) ;
    }

    fclose(fptr) ;
    return 0;
}