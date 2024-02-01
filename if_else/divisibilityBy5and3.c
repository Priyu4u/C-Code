#include <stdio.h>
int main( ){
    // take positive integer input and tell if it is divisible by 5 and 3
    int n;
    printf("Enter a positive integer : ");
    scanf("%d",&n);
    if(n % 5 == 0 && n % 3 == 0){
        printf("%d is divisible 5 and 3 both",n);
    }
    else{
        printf("%d is not divisible 5 and 3 both",n);
    }
    return 0;
}