#include <stdio.h>
int main( ){
    // take integer as input and print the absolute value of that integer
    int n;
    printf("Enter an integer : ");
    scanf("%d",&n);
    if(n < 0){
        n = n * (-1);
    }
    printf("The absolute value is %d",n);
    return 0;   
}