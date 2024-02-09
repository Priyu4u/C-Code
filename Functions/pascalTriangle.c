#include <stdio.h>
int factorial(int num){
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact = fact * i;
    }
    return fact;
}
int combination(int n , int r){
    int ncr = factorial(n) / (factorial(r) * factorial(n-r));
    return ncr;
}

/*
Print the given pattern
                                1
                              1  1
                            1  2   1
                         1   3  3   1
                      1   4   6   4   1
                   1   5  10  10  5   1
*/

// inefficient method

int main( ){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);

    for(int i=0; i<=n-1; i++){
        for(int j=1; j<=n-1-i; j++){
            printf("  ");
        }
        for(int j=0; j<=i; j++){
            int icj = combination(i,j);
            printf("%d   ",icj);
        }
        printf("\n");
    }
    return 0;

}