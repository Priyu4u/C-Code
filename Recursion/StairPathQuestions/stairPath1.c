#include <stdio.h>
int stair(int n){
    if(n==1 || n==2) return n;
    return stair(n-1) + stair(n-2);
}
int main( ){
    // calculate number of ways to reach n-th stair, maximum 2 stairs allowed
    int n;
    printf("Enter number of stairs : ");
    scanf("%d",&n);
    printf("Total number of ways to reach %d-th stair = %d",n ,stair(n));
    return 0;
}