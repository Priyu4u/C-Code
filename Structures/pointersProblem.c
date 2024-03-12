#include <stdio.h>
typedef int* intPointer ;
int main( ){
    int x = 5 , y = 8 ;        // - > two initialization at the same time
    printf("%d\n",x) ;
    printf("%d\n",y) ; 

    // int* a = &x , b = &y ;    -> not possible
    // int* a, b ;                       -> int* a  and int b - for computer
    // printf("%p\n",a) ;
    // printf("%p\n",b) ;  

    // solution            -> using typedef
    intPointer a = &x , b = &y ;
    printf("%p\n",a) ;
    printf("%p\n",b) ;        

    return 0;
}