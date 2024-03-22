#include <stdio.h>
int main( ){
    int n ;
    printf("Enter number of elements in array : ");
    scanf("%d",&n) ;
    int arr[n] ;
    printf("Enter elements of array  : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]) ; 
    }

    // code for insertion sort
    for(int i=1; i<=n-1; i++){
        int j = i;
        while( j>=1 && arr[j] < arr[j-1]){ 
            // swap arr[j] and arr[j-1]
            int temp = arr[j] ;
            arr[j] = arr[j-1] ;
            arr[j-1] = temp ;
            j-- ;
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]) ; 
    }

    // TIME COMPLEXITY
    // worst case -> O(n^2)
    // average case -> O(n^2)
    // best case -> O(n)

    // IS INSERTION SORT STABLE ?
    // Yes
    
    return 0;
}