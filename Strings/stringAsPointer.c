#include <stdio.h>
int main( ){
    // can we use strings as pointers
    char str[ ] = "Priyanshu Gupta" ;
    char* ptr = str ;   // ptr now points to the str[0] 

    // printf("%p\n",&str) ; 
    // printf("%p\n",ptr) ; 
    // printf("%p",&ptr) ; 

    int i=0; 
    while(*ptr != '\0'){
        printf("%c",*ptr);
        ptr++;
        i++;
    } 
    return 0;
} 