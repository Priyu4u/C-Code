#include <stdio.h>
#include <math.h>
#include <limits.h>
int main( ){

    /*
    # -> preprocessor directive
    #include -> preprocessor 
    It is used to attach/include header file in a program
    */
    float x = sqrt(2) ;
    float x1 = sqrt(3) ;
    printf("%f\n",x) ;
    printf("%f\n",x1) ;

    float y = cbrt(8) ;
    printf("%f\n",y) ;
    float y1 = cbrt(45) ;
    printf("%f\n",y1) ;

    int a = __INT_MAX__ ;
    int a1 = INT_MAX ;              // 2147483647
    printf("%d\n",a) ; 
    printf("%d\n",a1) ; 

    int b = 2147483647 ;
    printf("%d\n",b) ;
    
    long b1 = LONG_MAX ;
    printf("%ld\n",b1) ;




    return 0;
}