#include <stdio.h>
int main( ){
    // take a positive integer as input and tell if it is even or odd
    int x ;
    printf("Enter a positive integer : ");
    scanf("%d",&x);
    if ( x % 2 == 0){
        printf("%d is an even number",x);
    }
    else{
        printf("%d is an odd number",x);
    }
    return 0;
}