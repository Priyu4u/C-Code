#include <stdio.h>
#include <string.h>
int main( ){
    // Write a function to insert a new character in a string at a given position
    char str[10] = "Colege" ; 
    puts(str) ;
    // we have to push l at index 2
    for(int i=6; i>=3; i-- ){
        str[i+1] = str[i] ;
    } 
    str[3] = 'l' ;
    puts(str) ;
    return 0;
}  