#include <stdio.h>
int main( ){
    /*
    Print the given pattern
              A
           A B A
        A B C B A
     A B C D C B A
    */
   int n;
   printf("Enter number of rows : ");
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
        int a = i-1;
        for(int l=1; l<=i-1; l++){
            char chh = (char)(a+64);
            printf("%c ",chh);
            a--;
        }
        printf("\n");
   }
    return 0;
}