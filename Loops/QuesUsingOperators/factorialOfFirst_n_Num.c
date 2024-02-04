#include <stdio.h>
int main( ){
    // Print the factorial of first n numbers 
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial = factorial * i;
        printf("%d! = %d\n",i , factorial);
    }
    return 0;
}