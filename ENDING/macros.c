#include <stdio.h>
#define PI 3.14159265359     // -> macro
// float area(float r){
//     return PI*r*r ;
// }
#define area(r) (PI*r*r)         // ->  macro function


int main( ){
    /*
    #define PI 3.14159265359
    #define Area(r) (PI * r * r)
    */
   printf("%f\n",PI) ;
   printf("%.10f\n",PI) ;
   printf("%.11f\n",PI) ;
    //  printf("%.100f\n",PI) ;

    printf("%f",area(10.34)) ;

    return 0;
}