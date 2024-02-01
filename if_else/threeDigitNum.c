#include <stdio.h>
int main( ){
    // take positive integer input and tell if it is a three digit number or not 
    int n;
    printf("Enter a positive integer : ");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("%d is a three digit number",n);
    }
    else{
        printf("%d is not a three digit number",n);
    }
    return 0;
}