#include <stdio.h>
void factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
        printf("%d! = %d\n",i , fact);
    }
    return ;
}
int main( ){
    // Print the factorials of first n numbers using functions

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    factorial(n);
    return 0;
}