#include <stdio.h>
int main( ){
    // WAP to print the wave structure of an array
    // 1 2 3
    // 4 5 6
    // 7 8 9
    // output ->  1 4 7 8 5 2 3 6 9
    // 1 8 3
    // 4 5 6
    // 7 2 9

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
    printf("After wave printing : \n");
    for(int j=0; j<c; j++){
        if(j%2==0){
            for(int i=0; i<r; i++){
                printf("%d ",arr[i][j]) ;
            }
        }
        else{
            for(int i=r-1; i>=0; i--){
                printf("%d ",arr[i][j]) ;
            }
        }
    }

    return 0;
}