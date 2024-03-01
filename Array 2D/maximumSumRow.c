#include <stdio.h>
int main( ){
    // WAP to print the row number having the maximum sum in a given matrix , also print sum
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
    int max = 0, maxRow ;
    for(int i=0; i<r; i++){
        int sum = 0;
        for(int j=0; j<c; j++){
            sum = sum + arr[i][j] ;
        } 
        if(max < sum){
            max = sum ;
            maxRow = i ;
        } 
    }
    printf("%d-th row has maximum sum which is %d",maxRow+1, max) ;
    return 0;
} 