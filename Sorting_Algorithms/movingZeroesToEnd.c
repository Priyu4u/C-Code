#include <stdio.h>
int main( ){
    // Given an integer array arr, move all 0's to the end of it while maintaining the relative orders of the non-zero elements
    int n ;
    printf("Enter number of elements in array : ");
    scanf("%d",&n) ;
    int arr[n] ;
    printf("Enter elements of array  : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]) ; 
    }
    int ans[n] ;
    // applying condition
    int idx = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            ans[idx] = arr[i] ;
            idx++ ;
        }
    } 
    for(int i=idx ; i<n; i++){
        ans[i] = 0 ;
    }
    for(int i=0; i<n; i++){
        printf("%d ",ans[i]) ; 
    }
    return 0;
}