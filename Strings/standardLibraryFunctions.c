#include <stdio.h>
#include <string.h>
int main( ){
    // strlen(char *str)  -> returns the length of string
    char* str = "Priyanshu Gupta" ;
    int length = strlen(str) ; 
    printf("%d\n",length) ;


    // strcpy(char *s1, char *s2) ->  copies the content of string s2 to string s1 
    char s1[ ] = "Priyu" ;
    char s2[6] ;
    strcpy(s2,s1) ;
    s1[0] = 'p' ;                 //   -> deep copy 
    printf("%s\n",s1) ;
    printf("%s\n",s2) ; 

    /*
    char* s3 = "Priyanshu" ;     -> not valid
    char* s4 ;
    strcpy(*s4,*s3) ;
    printf("%s\n",s3) ;
    printf("%s\n",s4) ; 
    */


    // strcat(char *s1, char *s2) -> concat(add) s1 string with s2 and stores the result in s1
    char s3[ ] = "Priyanshu " ;
    char s4[ ] = "Gupta" ;
    strcat(s3,s4) ; 
    printf("%s\n",s3) ;
    printf("%s\n",s4) ;

 


    // strcmp(char *s1, char *s2)  -> compares the two strings 

    // strncpy(char *s2, char *s1, int len)   ->  copy substring of size len starting starting from s1 character pointer into s2
    return 0;
}