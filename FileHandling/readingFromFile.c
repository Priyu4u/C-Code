#include <stdio.h>
int main( ){

    // reading single character at a time using fgetc function
    
    FILE *fptr ;
    fptr = fopen("demo.txt","r");

    char ch = fgetc(fptr);
    printf("The character I read is : %c\n",ch) ;

    ch = fgetc(fptr);
    printf("The character I read is : %c\n",ch) ;

    ch = fgetc(fptr);
    printf("The character I read is : %c\n",ch) ;
    
    ch = fgetc(fptr);
    printf("The character I read is : %c\n",ch) ;

    ch = fgetc(fptr);
    printf("The character I read is : %c\n",ch) ;

    ch = fgetc(fptr);
    printf("The character I read is : %c\n",ch) ;

    ch = fgetc(fptr);
    printf("The character I read is : %c\n",ch) ;






    fclose(fptr);
    return 0;
}