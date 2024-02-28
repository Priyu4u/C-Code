#include <stdio.h>
#include <limits.h>
int main( ){
    // WAP to find the maximum and minimum element in a 2D array also find thier index
    int r ,c ;
    printf("Enter number of rows : ") ;
    scanf("%d",&r) ;
    printf("Enter number of columns : ") ;
    scanf("%d",&c) ;
    int arr[r][c] ;
    printf("Enter elements of array : \n") ;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]) ;
        }
    } 
    int max = INT_MIN ;
    int min = INT_MAX ;
    int maxRow, maxCol, minRow, minCol ;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(max < arr[i][j]){
                max = arr[i][j] ;
                maxRow = i;
                maxCol = j;
            } 
            if(min >  arr[i][j]){
                min = arr[i][j] ;
                minRow = i;
                minCol = j;
            } 
        }
    }
    printf("Max Element = %d\n with index(%d,%d)\n",max, maxRow,maxCol);
    printf("Min Element = %d\n with index(%d,%d)",min,minRow, minCol);
    return 0;
}