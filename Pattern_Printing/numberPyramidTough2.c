#include <stdio.h>
int main( ){
    /*
    Print the given pattern
    1 2 3 4 5 6 7
    1 2 3    5 6 7
    1 2          6 7
    1                7
    */
   int n;
   printf("Enter number of rows : ");
   scanf("%d",&n);
   for(int i=1; i<=2*n-1; i++){
        printf("%d ",i);
   }
   printf("\n");
   int nst = n-1;
   int nsp = 1;
   for(int i=1; i<=n-1; i++){
        int a = 1;
        for(int j=1; j<=nst; j++){
            printf("%d ",a);
            a++;
        }
        for(int k=1; k<=nsp; k++){
            printf("  ");
            a++;
        }
        for(int j=1; j<=nst; j++){
            printf("%d ",a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
   }
    return 0;
}