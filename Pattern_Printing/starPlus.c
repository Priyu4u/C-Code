#include <stdio.h>
int main( ){
    /*
    Print the given pattern
         * 
         *  
    * * * * *
         *  
         * 
    */
   int n;
   printf("Enter number of rows(only odd numbers) : ");
   scanf("%d",&n);
    if(n%2==0){
        printf("Please enter odd number only...");
    }
    else{
        int a = n / 2 + 1;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(i==a || j==a){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        printf("\n");
        }

    }

   
    return 0;
}