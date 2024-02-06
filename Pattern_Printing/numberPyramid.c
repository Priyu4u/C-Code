#include <stdio.h>
int main( ){
    /*
    Print the given pattern
             1
          1 2 3
       1 2 3 4 5
    1 2 3 4 5 6 7
    */
   int n;
   printf("Enter number of rows : ");
   scanf("%d",&n);
   for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        int a = 1;
        for(int k=1; k<=2*i-1; k++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
   }
    return 0;
}