#include <stdio.h>
int main( ){
    /*
    Print the given pattern
             A
          A B C
       A B C D E
    A B C D E F G
    */
   int n;
   printf("Enter the number of rows : ");
   scanf("%d",&n);
   for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        char ch = 'A';
        for(int k=1; k<=2*i-1; k++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
   }
    return 0;
}