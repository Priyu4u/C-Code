#include <stdio.h>
int main( ){
    // we get another way of initialising strings
    char *ptr = "Priyanshu Gupta" ;
    // character pointer can also be used to strore address of a string
    // here a string is made "Priyanshu Gupta" without a name but a ptr pointer is known which is pointing to first character of the string


    // NOTE - Such direct initialisation using pointers results in a read-only memory allocation of character arrays and hence, caused undefined behaviour when we try to change the characters. 

    char str[ ] = "Priyanshu Gupta" ; 
    puts(str) ;
    str[4] = 'A' ;
    printf("%s\n",str) ;

    char *a = "Hello World !" ;
    printf("%s\n",a) ;
    printf("%c\n",*a) ;  //     -> %c is a single character format specifier

    // *a[0] = 'h' ;     -> not possible
    printf("%s\n",a) ;



    return 0;
}