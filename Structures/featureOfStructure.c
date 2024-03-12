#include <stdio.h>
#include <string.h>
int main( ){
    typedef struct pokemon{
        int attack ;
        int hp ;
        int speed ;
        char tier ;
        char name[15] ; 
    } pokemon ; 

    pokemon a, b, c ;
    a.attack = 130 ;
    a.hp = 50 ;
    a.speed = 80 ;
    a.tier = 'A' ;
    strcpy(a.name , "Pikachu") ;
    
    // copying a in b
    b.attack = a.attack ;
    b.hp = a.hp ;
    b.speed = a.speed ;
    b.tier = a.tier ;
    strcpy(b.name, a.name) ;

    // shortcut to copy one into another
    c = b ;   // elements of b copied into c
    strcpy(c.name, "Blastoise") ;
    printf("%s",c.name) ;

    return 0;
}