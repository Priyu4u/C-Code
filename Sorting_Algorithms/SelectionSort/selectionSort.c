#include <stdio.h>
#include <limits.h>
int main(){ 
    int n ;
    printf("Enter number of elements in array : ");
    scanf("%d",&n) ;
    int arr[n] ;
    printf("Enter elements of array  : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]) ; 
    }

    // selection sort
    for(int i=0; i<n-1; i++){ 
        int min = INT_MAX  ; 
        int minIdx = -1; 
        for(int j=i; j<=n-1; j++){
            if(min > arr[j]){
                min = arr[j] ;
                minIdx = j ;
            } 
        }
        // swap arr[i] and arr[minIdx]
        int temp = arr[i] ;
        arr[i] = arr[minIdx] ;
        arr[minIdx] = temp ;
    } 

    // printing sorted array
    printf("Sorted Array : \n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]) ;
    } 

    // Time complexity of selection sort
    // best case -> O(n^2)
    // average case -> O(n^2)
    // worst case -> O(n^2)

    // Is selection sort stable -> NO

    return 0;
}