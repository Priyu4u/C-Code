#include <stdio.h>
int main( ){
    /*
             A
          A B
       A B C 
    A B C D
    */
   int n;
   printf("Enter the number of rows : ");
   scanf("%d",&n);
   for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        char ch = 'A';
        for(int k=1; k<=i; k++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
   }
    return 0;
}