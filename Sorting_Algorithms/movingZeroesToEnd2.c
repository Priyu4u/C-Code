#include <stdio.h>
int main( ){
    // Given an integer array arr, move all 0's to the end of it while maintaining the relative orders of the non-zero elements
    // Note that you must do this in place without making a copy of the array
    int n ;
    printf("Enter number of elements in array : ");
    scanf("%d",&n) ;
    int arr[n] ;
    printf("Enter elements of array  : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]) ; 
    }
    // pushing zeroes to end
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] == 0){
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }
    printf("After pushing zeroes to end : \n") ;
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]) ;
    }
    return 0;
}