#include <stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2) ;
}
int main( ){
    // Write a function to calculate nth fibonacci number using recursion
    // 1 1 2 3 5 8 13 21 ....
    int n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    int x = fibo(n);
    printf("The %d-th fibonacci term = %d",n ,x);
    return 0;
}