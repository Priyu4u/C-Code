#include <stdio.h>
int main( ){
    // Find the sum of a given matrix of n * m 
    int r ,c ;
    printf("Enter number of rows : ") ;
    scanf("%d",&r) ;
    printf("Enter number of columns : ") ;
    scanf("%d",&c) ;
    int arr[r][c] ;
    printf("Enter elements of matrix : \n") ;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]) ;
        }
    } 
    int sum = 0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sum = sum + arr[i][j] ;
        }
    } 
    printf("Sum of matrix = %d",sum);
    return 0;
}