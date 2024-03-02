#include <stdio.h>
int main( ){
    // WAP to change the given matrix to it's transpose .(Leetcode - 867)
    int n ;
    printf("Enter number of rows or column: ") ;
    scanf("%d",&n) ;

    int arr[n][n] ;
    printf("Enter elements of matrix : \n") ;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]) ;
        }
    }
    // swapping arr[i][j] with arr[j][i]
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp = arr[i][j] ;
            arr[i][j] = arr[j][i] ;
            arr[j][i] = temp ;  
        }
    }
    printf("Transpose of given matrix : \n") ;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]) ;
        }
        printf("\n") ;
    }
    return 0;
} 