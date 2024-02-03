#include <stdio.h>
int main( ){
    // WAP to print the sum of a given number and it's reverse
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int userInput = n;
    int reverse = 0;
    for(int i=1; n != 0; i++){
        reverse = (reverse * 10) + (n%10) ;
        n = n/10; 
    }
    printf("The sum of this digit and it's reverse is %d",userInput + reverse);
    return 0;
}