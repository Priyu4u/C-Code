#include <stdio.h>
#include <math.h>
int main( ){
    int base,power;
    printf("Enter base : ");
    scanf("%d",&base);
    printf("Enter power : ");
    scanf("%d",&power);
    int exp = pow(base,power);
    printf("%d raise to power %d = %d",base ,power ,exp);
    return 0;
}