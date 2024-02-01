#include <stdio.h>
int main( ){
    // take a positive integer input and tell if it is divisible by 5 and 3 without using %% and ||  operator
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%5 == 0){
        if(n%3 == 0){
            printf("It is divisible by 5 and 3");
        }
        else{
            printf("It is not divisible by 5 and 3");
        }
    }
    else{
        printf("It is not divisible by 5 and 3");
    }
    return 0;
}