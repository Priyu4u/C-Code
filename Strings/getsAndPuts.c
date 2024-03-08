#include <stdio.h>
#include <string.h>
int main( ){
    char str[ ] = "Priyanshu Gupta is learning C with Raghav Sir" ;

    char st[10 ] ;
    printf("Enter your name : ");
    //scanf("%s",st) ;    -> cannot take full sentence as input
    gets(st) ;    // can take full sentence as input
    printf("Your input : %s\n",st) ;

    printf("%s\n",str) ;
    puts(str) ;   // for printing strings 
    puts("Hello Everyone") ;

    

    return 0;
} 