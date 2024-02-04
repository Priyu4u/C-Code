#include <stdio.h>
int main( ){
    // Print the n-th fibonacci number
    /* 
    Fibonacci series
                            1
                        1       1
                    1       2       1
                1       3       3       1
            1       4       6       4       1
        1       5       10      10      5       1

        1 1 2 3 5 8 13 21 ... 
    */
   int n;
   printf("Enter the value of n : ");
   scanf("%d",&n);
   int a = 1;
   int b = 1;
   int sum = 1;
   for(int i=1; i<=n-2; i++){
        sum = a + b;
        a = b;
        b = sum; 
   }
   printf("The %dth fibonacci number is %d",n , sum);

    return 0;
}