#include <stdio.h>
int main( ){
    // WAP to add two matrices
    int r ,c ;
    printf("Enter number of rows : ") ;
    scanf("%d",&r) ;
    printf("Enter number of columns : ") ;
    scanf("%d",&c) ;
    int arr[r][c] ;
    int brr[r][c] ;
    printf("Enter elements of first matrix : \n") ;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]) ;
        }
    }
    printf("\n") ;
    printf("Enter elements of second matrix : \n") ;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&brr[i][j]) ;
        }
    }
    printf("\n") ;
    // adding
    int sumArr[r][c] ;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sumArr[i][j] = arr[i][j] + brr[i][j] ;
            printf("%d ",sumArr[i][j]) ;
        }
        printf("\n") ;
    }

    return 0;
}