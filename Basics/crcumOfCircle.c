#include <stdio.h>
int main( ){
    // WAP: write a program to find circumference of a circle taking radius from user as input 
    float rad ;
    printf("Enter radius : ");
    scanf("%f",&rad);

    float circumference = 2 * 3.14159265359 * rad ;
    printf("Circumference = %f",circumference);
    return 0;
}