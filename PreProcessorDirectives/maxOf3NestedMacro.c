#include <stdio.h>
// nested macro that gives the maximum of three values


/*   This is not nested
#define max(a,b,c) ( (a>b) && (a>c) ? a : (b>a) && (b>c) ? b : c) ;
*/

// This is nested macro
// creating a macro for 2 numbers 
#define max2(a,b) (a<b ? b : a)
// creating macro for 3 numbers
#define max3(a,b,c) (max2(max2(a,b),c)) 


int main( ){

    int a , b , c ;
    printf("Enter first number : ") ;
    scanf("%d",&a);
    printf("Enter second number : ") ;
    scanf("%d",&b);
    printf("Enter third number : ") ;
    scanf("%d",&c);
    int max = max3(a, b, c);
    printf("The maximum of %d , %d and %d is %d",a,b,c,max) ;

    return 0;
}