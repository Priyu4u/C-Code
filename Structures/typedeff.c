#include <stdio.h>
typedef float realNumber ;
typedef int integer ;
// typedef oldName newName ;     -> format

int main( ){
    int x = 5 ;
    printf("%d\n",x) ;
    integer x2 = 19 ;
    printf("%d\n",x2) ;
    float  y ;  //     float = realNumber 
    y = 5.287;
    realNumber y2 = 3.238 ;
    printf("%f\n",y2) ;
    printf("%f\n",y) ;

    return 0;
}