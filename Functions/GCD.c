#include <stdio.h>
int min(int a, int b){
    if(a<b) return a;
    else return b;
}
int gcd(int a, int b){
    int hcf = 1;

    for(int i=1; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            hcf = i;
        }
    }

    // using alternate loop
    // for(int i=min(a,b); i>=1; i--){
    //     if(a%i==0 && b%i==0){
    //         hcf = i;
    //         break;
    //     }
    // }
    // 

    return hcf;
}
int main( ){
    // Write a function to compute the greatest common divisor of two given numbers.
    int a, b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    int hcf = gcd(a,b);
    printf("HCF / GCD of %d and %d = %d",a ,b ,hcf);
    return 0;
}