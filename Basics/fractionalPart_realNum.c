#include <stdio.h>
int main( ){
    // Take float input and print fractional part of the real number 
    float x;
    printf("Enter a decimal number : ");
    scanf("%f",&x);
    int y = x;
    float fractionalPart = x - y;
    printf("The fractional part of %f is : %f",x , fractionalPart);
    return 0;
}