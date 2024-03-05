#include <stdio.h>
int main( ){
    // WAP to  print the multiplication of two matrices given by the user
    // taking input of matrix 1
    int r1,c1 ;
    printf("Enter number of rows of matrix 1 : ") ;
    scanf("%d",&r1) ;
    printf("Enter number of columns of matrix 1: ") ;
    scanf("%d",&c1) ;
    int arr[r1][c1] ;
    printf("Enter elements of matrix 1 : \n") ;
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            scanf("%d",&arr[i][j]) ;
        }
    } 
    // taking input of matrix 2
    int r2,c2 ;
    printf("Enter number of rows of matrix 2 : ") ;
    scanf("%d",&r2) ;
    printf("Enter number of columns of matrix 2 : ") ;
    scanf("%d",&c2) ;
    int brr[r2][c2] ;
    printf("Enter elements of matrix 2 : \n") ;
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            scanf("%d",&brr[i][j]) ;
        }
    }
    int rest[r1][c2] ;
    // multiplying
    if(c1==r2){
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                //    i-th row of arr[ ][ ] and j-th column of brr[ ][ ]
                //  (arr[i][0] , arr[i][1] , arr[i][2] .... ) * (brr[0][j] , brr[1][j] , brr[2][j] .... )
                rest[i][j] = 0;
                for(int k=0; k<r2; k++){
                    rest[i][j] = rest[i][j] + arr[i][k] * brr[k][j] ;
                }
            } 
        } 
        printf("Matrix 1 multiplied by Matrix 2 :\n");
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                printf("%d ",rest[i][j]) ;
            }
            printf("\n");
        }
    }
    
    else{
        printf("Multiplication is not possible\n");
    }
    
    
    return 0;
}