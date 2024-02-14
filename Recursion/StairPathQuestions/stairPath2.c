#include <stdio.h>
int stair(int n){
    if(n==1 || n==2) return n;
    if(n==3) return n+1;
    return stair(n-1) + stair(n-2) + stair(n-3);
}
int main( ){
    // Calculate number of ways to reach nth stair , maximum 3 stairs allowed
    int n;
    printf("Enter number of stairs : ");
    scanf("%d",&n);
    printf("The number of ways to reach %d-th stair = %d",n , stair(n));
    return 0;
}