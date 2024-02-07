#include <stdio.h>
int main( ){
    /*
    Print the given pattern
    1 2 3 4 3 2 1
    1 2 3    3 2 1
    1 2          2 1
    1                1
    */


   int n;
   printf("Enter number of rows : ");
   scanf("%d",&n);
   int temp = 1;
   for(int i=1; i<=2*n-1; i++){
        printf("%d ",temp);
        if(i<n) temp++;
        else temp--;
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
        }
        for(int l=n-i; l>=1; l--){
            printf("%d ",l);
        }
        nst--;
        nsp+=2;
        printf("\n");
   }
    return 0;
}