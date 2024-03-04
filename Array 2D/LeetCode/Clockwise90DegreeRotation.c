#include <stdio.h>
int main( ){
    // WAP to rotate a matrix 90 degree clockwise (Leetcode - 48)
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
    for(int i=0; i<n; i++){
        for(int j=0, k=n-1; j<k; j++,k--){
            int temp = arr[i][j] ;
            arr[i][j] = arr[i][k];
            arr[i][k] = temp ; 
        }
    }
    printf("After Rotating 90 degree clockwise : \n") ;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]) ;
        }
        printf("\n") ;
    }
    
    return 0;
}