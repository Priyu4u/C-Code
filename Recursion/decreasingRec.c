#include <stdio.h>
void decreasing(int n){
    if(n==0) return;
    printf("%d\n",n);
    decreasing(n-1);
    return ;
}
int main( ){
    // Print n to 1 using recursion
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}