#include <stdio.h>
#include <string.h>
int main( ){
    char str[ ] = "Priyanshu Gupta" ;
    puts(str) ;
    char* ptr = str ;
    ptr = "Kundan Gupta" ;  
    // ptr created a new array and pointed to that array instead of changing the contents of str
    puts(str) ;
    return 0;
}