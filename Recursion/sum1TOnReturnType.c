#include<stdio.h>
// Print sum from 1 to n using return type
int sum(int n){
    if(n==1 || n==0) return n;
    int s = n+sum(n-1);
    return s;
}
int main( ){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int s = sum(n);
    printf("Sum = %d",s);
    return 0;
}