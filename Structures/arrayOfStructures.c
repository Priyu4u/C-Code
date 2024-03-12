#include <stdio.h>
#include <string.h>

int main( ){
    // creating an array of structures using typedef too

    typedef struct pokemon{
        int attack ;
        int hp ;
        int speed ;
        char tier ;
        char name[15] ; 
    } pokemon ;

    // creating array 
    pokemon arr[3] ;

    arr[0].attack = 130 ;
    arr[0].hp = 80 ;
    arr[0].speed = 120 ;
    arr[0].tier = 'A' ;
    strcpy(arr[0].name, "Pikachu") ;

    arr[1].attack = 80 ;
    arr[1].hp = 120 ;
    arr[1].speed = 30 ;
    arr[1].tier = 'B' ;
    strcpy(arr[1].name, "Charizard") ;

    arr[2].attack = 180 ;
    arr[2].hp = 90 ;
    arr[2].speed = 130 ;
    arr[2].tier = 'G' ; 
    strcpy(arr[2].name, "Mewtwo") ; 

    for(int i=0; i<3; i++){
        printf("Pokemon Name : %s\n",arr[i].name) ;
        printf("Attack : %d\n",arr[i].attack) ;
        printf("HP : %d\n",arr[i].hp) ;
        printf("Speed : %d\n",arr[i].speed) ;
        printf("Tier : %c\n",arr[i].tier) ; 
    } 

    return 0;
}