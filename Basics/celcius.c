#include <stdio.h>
int main( ){
    // Ques: WAP to convert celcius into farhenheit

    float a;
    printf("Enter temperature in degree celcius : ");
    scanf("%f",&a);

    float farht ;
    farht = (9*a)/5 + 32;
    printf("The value in farheinheit = %f",farht);
    return 0;
}