#include <stdio.h>
// Write a function to obtain sum of two numbers
int add(int x, int y){  // arguments/parameters -> x and y
    return x+y;
}
int main( ){
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("Sum = %d",sum);
    return 0;
}