#include <stdio.h>
int power(int a, int b){
    if(b==0) return 1;
    int pow = a*power(a,b-1);
    return pow ;
}
int main( ){
    // Make a function which calculates 'a' raised to the power 'b' using recursion

    int a,b;
    printf("Enter base : ");
    scanf("%d",&a);
    printf("Enter power : ");
    scanf("%d",&b);
    int pow = power(a,b);
    printf("%d raise to the power %d = %d",a ,b ,pow);
    return 0;
}