#include <stdio.h>
int main( ){
    // Take integer as input and print half of the number
    int x ;
    printf("Enter an integer value : ");
    scanf("%d",&x);
    // float a = 2;
    // float y = x / a ;
    float y = x / 2.0;
    printf("The half of %d is : %f" ,x ,y);
    return 0;
}