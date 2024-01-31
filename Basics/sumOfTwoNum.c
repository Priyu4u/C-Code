#include <stdio.h>
int main( ){
    // WAP taking two numbers as input from user and providing their sum

    int x, y, sum;
    printf("Enter first number : \n");
    scanf("%d",&x);
    printf("Enter second number : \n");
    scanf("%d",&y);
    sum = x + y;
    printf("The sum of numbers = %d",sum);
    return 0;
}