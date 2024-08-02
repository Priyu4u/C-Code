#include <stdio.h>
int main( ){
    // reading a string from the file using fgets function

    FILE *fptr ;
    fptr = fopen("demo.txt" , "r") ;

    char str[100] ;
    fgets(str, 25, fptr) ;         // string name , number of char , file pointer
    printf("%s",str) ;
    return 0;
}