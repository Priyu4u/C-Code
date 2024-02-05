#include <stdio.h>
int main( ){
    /*
    Print the given pattern
    A
    A B
    A B C
    A B C D
    */
   int n;
   printf("Enter the number of rows : ");
   scanf("%d",&n);
   for(int i=1; i<=n; i++){
        char ch = 'A';
        for(int j=1; j<=i; j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
   }
    return 0;
}