#include <stdio.h>
int main( ){
    // take a positive integer input and tell if it is divisible by 5 or 3
    int n;
    printf("Enter a positive integer : ");
    scanf("%d",&n);
    if(n % 5 == 0 || n % 3 == 0){
        printf("%d is divisible by 5 or 3",n);
    }
    else{
        printf("%d is not divisible by 5 or 3",n);
    }
    return 0;
}