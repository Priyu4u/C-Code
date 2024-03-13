#include <stdio.h>
#include <string.h>
int main( ){
    // difference between structures and unions

    // structures
    typedef struct pokemon{             
        int attack ;
        int hp ; 
        int speed ;
        char tier ;
        char name[15] ; 
    } pokemon ; 
    // all the attributes can be accessed and used

    // unions
    typedef struct pokemon{             
        int attack ;
        int hp ; 
        int speed ;
        char tier ;
        char name[15] ; 
    } pokemon ; 
    // a single attribute can only be used at a time
    return 0;
}