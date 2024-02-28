#include <stdio.h>
int main( ){
    int a [4][3] ;          
    // [4] -> representing the rows of array and
    // [3] -> representing the columns of array

    int arr[2][3] = {{4, 8, 5} , { 2, 9, 0}} ;

    // printing the elements of the array
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}