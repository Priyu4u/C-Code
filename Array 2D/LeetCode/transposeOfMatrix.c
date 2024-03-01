#include <stdio.h>
int main( ){
    // WAP to print the transpose of the matrix entered by the user and store it in separate matrix .
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
    int arrTrans[c][r] ;
    printf("Transpose of matrix : \n") ;
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            // printf("%d ",arr[j][i]) ;
            arrTrans[i][j] = arr[j][i] ;
        }
    }
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d ",arrTrans[i][j]) ;
        }
        printf("\n") ;
    }
    return 0;
}