#include <stdio.h>
#include <limits.h>
int main( ){
    // Find the second largest element in a given array
    int n ;
    printf("Enter number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN ;
    int secMax = INT_MIN;

    // method 1
    // for(int i=0; i<=n-1; i++){
    //     if(max<arr[i]){
    //         max = arr[i];
    //     }
    // }
    // for(int i=0; i<=n-1; i++){
    //     if(arr[i] != max && secMax < arr[i]){
    //         secMax = arr[i] ;
    //     }
    // }

    // alternate method 
    for(int i=0; i<=n-1; i++){
        if(max < arr[i]){
            secMax = max; 
            max = arr[i] ;
        }
        else if(secMax < arr[i] && max != arr[i]){
            secMax = arr[i] ;
        }

    }

    printf("Second largest element = %d",secMax);
    return 0;
}