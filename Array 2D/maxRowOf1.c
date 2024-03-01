#include <stdio.h>
int main( ){
    //Given a matrix having 0 and 1 only , find the row with the maximum number of 1's
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
    int count = 0, maxRow ;
    for(int i=0; i<r; i++){
        int maxOne = 0;
        for(int j=0; j<c; j++){
            if(arr[i][j] == 1) maxOne++ ;
        }
        if(count < maxOne){
            count = maxOne;
            maxRow = i;
        }
    }
    printf("%d-th row has maximum number of 1's",maxRow+1) ;
    return 0;
}