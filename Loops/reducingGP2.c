#include <stdio.h>
int main( ){
    // Display this GP - 100 50 25  .. upto n terms
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    float a = 100 ;
    for(int i=1; i<=n; i++){
        printf("%f ",a);
        a = a / 2;
    }
    return 0;
}