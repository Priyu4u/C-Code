#include <stdio.h>
int main( ){
    // WAP to print the wave structure of an array
    // 1 2
    // 3 4
    // 5 6
    // output -> 1 2 4 3 5 6
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
    for(int i=0; i<r; i++){
        if(i%2 == 0){
            for(int j=0; j<c; j++){
                printf("%d ",arr[i][j]) ;
            }
        }
        else{
            for(int j=c-1; j>=0; j--){
                printf("%d ",arr[i][j]) ;
            }
        }
        printf("\n") ;
    } 


    return 0;
}