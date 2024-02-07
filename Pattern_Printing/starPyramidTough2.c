#include <stdio.h>
int main( ){
    /*
    Print the given pattern
    * * * * * * *
    * * *    * * *
    * *         * *
    *              *
    */
   int n;
   printf("Enter number of rows : ");
   scanf("%d",&n);
   for(int i=1; i<=2*n-1; i++){
        printf("* ");
   }
   printf("\n");
   int nst = n-1;
   int nsp = 1;
   for(int i=1; i<=n-1; i++){
        for(int j=1; j<=nst; j++){
            printf("* ");
        }
        for(int k=1; k<=nsp; k++){
            printf("  ");
        }
        for(int j=1; j<=nst; j++){
            printf("* ");
        }
        nst--;
        nsp+=2;
        printf("\n");
   }
    return 0;
}