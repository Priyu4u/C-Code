#include <stdio.h>
int main( ){
    // expression 1 ? expression 2 : expression 3
    // codition  ? code if true  :  code if false
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    // for even odd
    // if(n%2==0) printf("Even Number");
    // else printf("Odd Number");

    // using ternary operator
    n%2==0  ?  printf("Even Number")  :  printf("Odd Number") ;


    return 0;
}