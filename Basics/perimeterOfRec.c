#include <stdio.h>
int main( ){
    float l, b;
    printf("Enter length : ");
    scanf("%f",&l);
    printf("Enter breadth : ");
    scanf("%f",&b);
    float permtr = 2*(l + b);
    printf("Perimeter = %f",permtr);
    return 0;
}