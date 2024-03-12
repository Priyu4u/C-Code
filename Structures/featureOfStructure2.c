#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main( ){
    // nesting one structure within another structure
    typedef struct pokemon{
        int attack ;
        int hp ;
        int speed ;
        char tier ;
        char name[15] ; 
    } pokemon ; 

    // nesting
    typedef struct legendaryPokemon{
        // int attack ;
        // int hp ;
        // int speed ;
        // char tier ;
        // char name[15] ; 
        pokemon normal ;      // it will represent all the above categories
        char ability[20] ;
    } legendaryPokemon ;

    legendaryPokemon mewtwo ;
    strcpy(mewtwo.ability, "Pressure") ;
    printf("%s\n",mewtwo.ability) ;

    mewtwo.normal.attack = 140 ;
    mewtwo.normal.hp =  80 ;
    mewtwo.normal.tier = 'G' ;
    strcpy(mewtwo.normal.name, "Mewtwo") ;

    printf("%s\n",mewtwo.normal.name) ;
    printf("%d\n",mewtwo.normal.attack) ;
    printf("%d\n",mewtwo.normal.hp) ;
    printf("%c\n",mewtwo.normal.tier) ;

    // nesting inside nesting
    typedef struct superLegendaryPokemon{
        legendaryPokemon legends ;
        char specialAttackk[20] ; 
    } superLegendaryPokemon ; 

    superLegendaryPokemon charizard ;
    charizard.legends.normal.speed = 350 ;
    strcpy(charizard.legends.ability, "Turns into stone") ;
    strcpy(charizard.legends.normal.name, "Arsceus");

    printf("%s\n",charizard.legends.normal.name) ;
    printf("%d\n",charizard.legends.normal.speed) ;
    printf("%s\n",charizard.legends.ability) ;

    return 0;
}