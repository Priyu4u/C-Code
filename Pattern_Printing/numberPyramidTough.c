#include <stdio.h>
int main( ){
    /*
    Print the given pattern
             1
          1 2 1
       1 2 3 2 1
    1 2 3 4 3 2 1
    */
   int n;
   printf("Enter number of rows : ");
   scanf("%d",&n);
   for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        int a = 1;
        for(int k=1; k<=i; k++){
            printf("%d ",a);
            a++;
        }
        int b = i - 1;
        for(int l=1; l<=i-1; l++){
            printf("%d ",b);
            b--;
        }
        printf("\n");
   }
    return 0;
}