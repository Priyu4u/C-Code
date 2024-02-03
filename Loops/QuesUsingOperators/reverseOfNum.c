#include <stdio.h>
int main( ){
    // WAP to print the reverse of a given number
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int reverse = 0;
    int lastDigit ;
    for(int i=1; n != 0; i++){
        lastDigit = n % 10;
        reverse = (reverse*10) + lastDigit;
        n = n / 10;
    }
    printf("The reverse of given number is %d",reverse);
    return 0;
}