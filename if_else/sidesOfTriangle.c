#include <stdio.h>
int main( ){
    // take three numbers input and tell if they can be the sides of a triangle
    float a, b, c;
    printf("Enter 1st side : ");
    scanf("%f",&a);
    printf("Enter 2nd side : ");
    scanf("%f",&b);
    printf("Enter 3rd side : ");
    scanf("%f",&c);
    if((a+b) > c && (b+c) > a && (c+a) > b){
        printf("They can be the sides of a triangle");
    }
    else{
        printf("They cannot be the sides of a triangle");
    }
    return 0;
}