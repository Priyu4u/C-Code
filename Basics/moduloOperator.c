#include <stdio.h>
int main( ){
    int a, b ;
    printf("Enter the value of dividend : ");
    scanf("%d",&a);
    printf("Enter the value of divisor : ");
    scanf("%d",&b);
    // q = a / b;
    // int remainder = a - (b * q); 
    // // dividend = divisor * quotient + remainder
    // printf("The remainder when %d is divided by %d is : %d",a , b, remainder);

    int r = a % b;
    printf("The remainder when %d is divided by %d is : %d",a , b, r);
    return 0;

    // if a > b then
    // a % b = remainder , but also
    // b % a = a (fact)
}