#include <stdio.h>
int powerLog(int a, int b){
    if(b==1) return a;
    // if(b==0) return 1;
    int x = powerLog(a,b/2) ;
    if(b%2==0) return x * x ;
    else return x * x * a ;
    return x;
}
int main( ){
    // Make a function which calculates 'a' raised to the power 'b' using recursion

    int a,b;
    printf("Enter base : ");
    scanf("%d",&a);
    printf("Enter power : ");
    scanf("%d",&b);
    int power = powerLog(a,b);
    printf("%d raise to the power %d = %d",a ,b ,power);
    return 0;
}