#include <stdio.h>
int main( ){
    /*
    Print the given pattern
    1 
    1 3 
    1 3 5
    1 3 5 7
    */

   int n;
   printf("Enter the number of rows : ");
   scanf("%d",&n);
   for(int i=1; i<=n; i++){
        for(int j=1; j<=2*i-1 ; j++){
            if(j%2 != 0){
                printf("%d ",j);
            }
        }
        printf("\n");
   }
   // Alternate method using extra variable
    for(int i=1; i<=n; i++){
        int a = 1;
        for(int j=1; j<=i; j++){
            printf("%d ",a);
            a = a+ 2;
        }
        printf("\n");
    }

    return 0;
}