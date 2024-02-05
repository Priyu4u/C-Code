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
        int a = 1;
        for(int j=1; j<=i; j++){
            int d = a + 64;
            char ch = (char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
   }
    return 0;
}