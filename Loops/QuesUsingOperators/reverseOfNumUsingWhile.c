#include <stdio.h>
int main( ){
    // WAP to print the reverse of a number using while loop
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int reverse = 0;
    while(n > 0){
        reverse = reverse * 10;
        reverse = reverse + (n%10);
        n = n / 10;
    }
    printf("The reverse of the given number is : %d",reverse);
    return 0;
}