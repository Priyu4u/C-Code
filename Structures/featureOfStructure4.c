#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct pokemon{             // Global Declaration
    int attack ;
    int hp ; 
    int speed ;
    char tier ;
    char name[15] ; 
} pokemon ; 

int main( ){
    // structure pointers
    pokemon pikachu ;
    pikachu.attack = 70 ;
    pikachu.hp = 90 ;
    pikachu.speed = 120 ;
    pikachu.tier = 'A' ;
    strcpy(pikachu.name, "Pikachu") ;

    pokemon* a = &pikachu ;

    printf("%p\n",a) ;                      // address of pokemon pikachu
    printf("%p\n",&pikachu) ;        // address of pokemon pikachu
    printf("%p\n",&pikachu.attack) ;    // first member address is the address of full structure pokemon pikachu
    printf("%p\n",&pikachu.hp) ;
    printf("%p\n",&pikachu.speed) ;
    printf("%p\n",pikachu.name) ;
    printf("%p\n",&pikachu.tier) ;


    return 0;
}