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

void printing(pokemon p){
    printf("%s",p.name) ;
    return ;
}

int main( ){
    // A structure variable can be passed to a function

    pokemon pikachu ;
    strcpy(pikachu.name, "Pikachu") ;
    printing(pikachu) ;
   
    // NOTE : STRUCTURES are passed by VALUE not PASS BY REFERENCE

    return 0;
} 