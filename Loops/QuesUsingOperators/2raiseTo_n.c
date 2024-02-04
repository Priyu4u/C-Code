#include <stdio.h>
int main( ){
    // WAP to print 2 raise to the power n numbers taking n as input from the user
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int temp = 1;
    for(int i=1; i<=n; i++){
        temp = temp * 2;
        printf("2 raise to the power %d = %d\n",i ,temp);
    }
    return 0;
}