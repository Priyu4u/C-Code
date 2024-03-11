#include <stdio.h>
int main( ){
    // Structures are user defined data types
    struct pokemon{             // -> user defined data type
        int hp;
        int speed;
        int attack;
        char tier ;        // G S A B C D
    } /* we can also declare variables here like - pikachu, charizard, mewtwo */ ;  // -> semicolon is mendatory in structures

    struct pokemon pikachu ;
    pikachu.hp = 50 ;
    pikachu.speed = 100 ;
    pikachu.attack = 70 ;
    pikachu.tier = 'A' ;

    struct pokemon charizard;
    charizard.attack = 160 ;
    charizard.hp = 80 ;
    charizard.speed = 70 ;
    charizard.tier = 'S' ;

    struct pokemon mewtwo ;
    mewtwo.attack = 180 ;
    mewtwo.hp = 150 ;
    mewtwo.speed = 120 ;
    mewtwo.tier = 'G' ;

    printf("%d\n",mewtwo.attack) ;
    printf("%d\n",charizard.attack) ;
    printf("%c\n",charizard.tier) ;
    printf("%d\n",pikachu.hp) ; 

    // we can also take input from user
    printf("Enter attack of pikachu : ");
    scanf("%d",&pikachu.attack) ;
    // printing
    printf("%d\n",pikachu.attack) ;  


    return 0;
}