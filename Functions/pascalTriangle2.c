#include <stdio.h>
int main( ){
    /*
    Print the given pattern without using functions. Use maths
                                1
                              1  1
                            1  2   1
                         1   3  3   1
                      1   4   6   4   1
                   1   5  10  10  5   1
    */
   int n;
   printf("Enter number of rows : ");
   scanf("%d",&n);
    for(int i=0; i<=n-1; i++){
         for(int k=1; k<=n-i; k++){
            printf(" ");
         }
         int first = 1;
         for(int j=0; j<=i; j++){
            printf("%d ",first);
            first = first * (i-j) / (j+1);
         }
      printf("\n");
   }

   return 0;
}