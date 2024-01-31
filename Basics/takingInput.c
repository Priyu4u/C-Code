#include <stdio.h>
int main( ){
    int x = 3;
    scanf("%d",&x); 
    // &x denotes the address of variable x
    printf("The number you entered is :%d",x);
    return 0;
}