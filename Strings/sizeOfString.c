#include <stdio.h>
int main( ){
    // how to find the size of an array which is taken as input by the user 
    char str[40] ;  
    // strings cannot be initialized without giving it's size so we have to give a size according to us 
    printf("Enter a string : ");
    gets(str) ;

    printf("You entered : ");
    puts(str) ; 

    int size = 0;
    for(int i=0; str[i] != '\0'; i++){
        size++ ;
    }
    printf("Size of this string is %d",size) ;
    return 0;
}