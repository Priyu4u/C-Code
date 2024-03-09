#include <stdio.h>
#include <string.h>
int main( ){
    char str[ ] = "Priyanshu Gupta" ;
    printf("%s\n",str) ;
    str[4] = 'A' ;                 //  -> valid
    printf("%s\n",str) ; 

    //  str = "Hello World" ;     -> error !

    // In normal initialization we can modify individual characters but not the ENTIRE string 



    char* ptr = "Hello World" ;
    puts(ptr) ;
    ptr = "Hello Universe" ;
    puts(ptr) ;      //      ->  valid
    ptr[0] = 'G' ;
    // puts(ptr) ;              -> error

    // In pointer initialization we can modify the ENTIRE string but not the individual characters




    return 0;
}