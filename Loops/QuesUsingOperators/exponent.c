#include <stdio.h>
int main( ){
    // Two numbers are throught the keyboard. Write a program to find the value of one number raised to the power of another
    int a, b;
    printf("Enter base : ");
    scanf("%d",&a);
    printf("Enter exponent : ");
    scanf("%d",&b);
    int power = 1;
    for(int i=1; i<=b; i++){
        power = power * a;
    }
    printf("%d raise to the power %d = %d",a ,b, power);
    return 0;
}