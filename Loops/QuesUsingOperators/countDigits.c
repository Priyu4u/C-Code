#include <stdio.h>
int main( ){
    // WAP to count digits of a given number 
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int count = 0;
    for(int i=1; n!=0; i++){ 
        n = n / 10 ;
        count++;
    }
    printf("The number of digits are  %d",count);
    return 0;
}