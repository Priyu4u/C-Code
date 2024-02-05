#include <stdio.h>
int main( ){
    /*
    Print the given pattern
    A B C D
    A B C D
    A B C D
    A B C D
    */
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n); 
    for(int i=1; i<=n; i++){
        char ch = 'A';
        for(int j=1; j<=n; j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}