#include <stdio.h>
int main( ){
    // WAP to print sum of digits of a given number 
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum = 0;
    int lastDigit;
    for(int i=1; n != 0; i++){
        lastDigit = n%10;
        n = n / 10;
        sum = sum + lastDigit;
    }
    printf("The sum of digits is %d",sum);
    return 0;
}