#include <stdio.h>
int main( ){
    /*
    Print the given pattern
           *
        * * *
      * * * * *
    * * * * * * *
      * * * * *
        * * *
           *
    */
   int n;
   printf("Enter number of rows(only odd number) : ");
   scanf("%d",&n);
   if(n%2==0){
        printf("shape is valid for odd number only : ");
   }
   else{
        int nst = 1;
        int nsp = n/2;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=nsp; j++){
                printf("  ");
            }
            for(int k=1; k<=nst; k++){
                printf("* ");
            }
            if(i<n/2 + 1){
                nsp--;
                nst+=2;
            }
            else{
                nst-=2;
                nsp++;
            }
            printf("\n");
        }
   }
   
    return 0;
}