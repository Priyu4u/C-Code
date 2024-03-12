#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main( ){
    // Create a structure 'date' that contains three members namely date, month and year. Create 2 structure variables with different dates and now compare the two. If the dates are equal then display the message as "Equal" otherwise "Unequal" .

    typedef struct dates{
        int date ;
        int month ;
        int year ;
    } dates ; 

    dates a, b;
    // a -> 19/02/2004
    // b -> 10/01/2005
    a.date = 19 ;
    a.month = 2;
    a.year = 2004 ;

    b.date = 10 ;
    b.month = 1 ;
    b.year = 2005 ;

    bool flag = true ;
    if(a.date != b.date) flag = false ;
    if(a.month != b.month) flag = false ;
    if(a.year != b.year) flag = false ;

    if(flag == true) printf("Dates are equal");
    else printf("Dates are not equal") ;
    
    return 0;
}