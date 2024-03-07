#include <stdio.h>
int main( ){
    // Given a m*n matrix 'a', print all the elements of matrix in spiral order (Leetcode - 54) 
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
    
    int minR = 0;
    int maxR = r-1;
    int minC = 0;
    int maxC = c-1;
    int tne = r * c;
    int count = 0;
    printf("After spiral printing : \n");
    while(count<tne){
        // printing first row
        for(int j=minC; j<=maxC && count<tne ; j++){
            printf("%d ",arr[minR][j]);
            count++;
        }
        minR++;
        for(int i=minR; i<=maxR && count<tne; i++){
            printf("%d ",arr[i][maxC]);
            count++;
        }
        maxC--;
        for(int j=maxC; j>=minC && count<tne; j--){
            printf("%d ",arr[maxR][j]);
            count++;
        }
        maxR--;
        for(int i=maxR; i>=minR && count<tne; i-- ){ 
            printf("%d ",arr[i][minC]);
            count++; 
        }
        minC++;
    }

    return 0;
}