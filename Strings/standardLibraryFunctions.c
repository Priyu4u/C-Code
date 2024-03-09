#include <stdio.h>
#include <string.h>
int main( ){
    // strlen(char *str)  -> returns the length of string
    char* str = "Priyanshu Gupta" ;
    int length = strlen(str) ; 
    printf("%d\n",length) ;


    // strcpy(char *s1, char *s2) ->  copies the content of string1 to string2

    // strcat(char *s1, char *s2) -> concat s1 string with s2 and stores the result in s1

    // strcmp(char *s1, char *s2)  -> compares the two strings 

    // strncpy(char *s2, char *s1, int len)   ->  copy substring of size len starting starting from s1 character pointer into s2
    return 0;
}