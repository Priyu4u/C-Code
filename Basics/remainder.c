#include <stdio.h>
int main( ){
    // WAP to take two integers as input ,a and b : a > b, and find the remainder when a is divided by b and print the remainder

    int a, b,  q;
    printf("Enter the value of dividend : ");
    scanf("%d",&a);
    printf("Enter the value of divisor : ");
    scanf("%d",&b);
    q = a / b;
    int remainder = a - (b * q); 
    // dividend = divisor * quotient + remainder
    printf("The remainder when %d is divided by %d is : %d",a , b, remainder);
    return 0;
}