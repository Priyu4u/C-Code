#include <stdio.h>
#include <string.h>
// using typedef in structures
int main( ){

    typedef struct book{
        char name[40] ;
        float price ;
        int noOfPages ;
    } book ; 
    
    book doglapan ;         // -> valid
    struct book atomicHabits ; 


    return 0;
}