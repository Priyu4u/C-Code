#include <stdio.h>
int factorial(int num){
    int fact = 1;
    for(int i=2; i<=num; i++){
        fact = fact * i;
    }
    return fact;
}

// n^C.r = n! / r!(n-r)!

int main( ){
    int n, r;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter r : ");
    scanf("%d",&r);
    // int nfact = factorial(n);
    // int rfact = factorial(r);
    // int nrfact = factorial(n-r);
    
    int ncr = factorial(n) / (factorial(r) * factorial(n-r));
    printf("combination = %d\n",ncr);
    int npr = factorial(n) / factorial(n-r);
    printf("permutation = %d",npr);
    return 0;
}