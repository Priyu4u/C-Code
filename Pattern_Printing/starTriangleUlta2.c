#include <stdio.h>
int main( ){
    /*
    * * * *
    * * * 
    * * 
    * 
    */
   int n;
   printf("Enter number of rows and columns : ");
   scanf("%d",&n);
   // using extra variable
   int a = n;
   for(int i=1; i<=n; i++){
        for(int j=1; j<=a; j++){
            printf("* ");
        }
        a--;
        printf("\n");
        
   }
    return 0;
}