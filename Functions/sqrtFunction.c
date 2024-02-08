#include <stdio.h>
#include <math.h>
int main( ){
    int n;
    printf("Enter a perfect square number : ");
    scanf("%d",&n);
    int root = sqrt(n);
    printf("The square root of %d = %d",n,root);
    return 0;
}