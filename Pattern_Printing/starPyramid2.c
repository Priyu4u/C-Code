#include <stdio.h>
int main( ){
    /*
    Print the given pattern
          *
        * * *
      * * * * * 
    * * * * * * *
    */
   int n;
   printf("Enter number of rows : ");
   scanf("%d",&n);
    int nst = 1;   // no. of stars
    int nsp = n-1;   // no. of spaces
   for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            printf("  ");
        }
        for(int k=1; k<=nst ;k++){
            printf("* ");
        }
        nsp--;
        nst = nst + 2;
        printf("\n");
   }
    return 0;
}