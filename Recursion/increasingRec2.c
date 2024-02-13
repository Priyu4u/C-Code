#include <stdio.h>
void increasing(int n){
    if(n==0) return;  // base call
    increasing(n-1);  // recursive call
    printf("%d\n",n);  // code
    return ;
}
int main( ){
    // Print n to 1 using recursion(using code after recursive call)
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    increasing(n);
    return 0;
}