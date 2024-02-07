#include <stdio.h>
int main( ){
    /*
    Print the given pattern
    A B C D E F G
    A B C     E F G
    A B           F G
    A                 G
    */
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    char ch = 'A';
    for(int i=1; i<=2*n-1;i++){
        printf("%c ",ch);
        ch++;
    }
    printf("\n");
    int nsp = 1;
    int nst = n-1;
    for(int i=1; i<=n-1; i++){
        char ch = 'A';
        for(int j=1; j<=nst; j++){
            printf("%c ",ch);
            ch++;
        }
        for(int k=1; k<=nsp; k++){
            printf("  ");
            ch++;
        }
        for(int j=1; j<=nst; j++){
            printf("%c ",ch);
            ch++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}