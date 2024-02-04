#include<stdio.h>
int main( ){
    // Print the factorial of a given number
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial = factorial * i;
    }
    printf("%d! = %d",n ,factorial);
    return 0;
}