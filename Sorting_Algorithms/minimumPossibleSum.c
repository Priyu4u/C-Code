#include <stdio.h>
#include <limits.h>
int main( ){    
    // Given an array of digits(values are from 0 to 9) , the task is to find the minimum possible sum of two numbers formed from digits of the array.
    // Please note that all digits of the given array must be used to form the two numbers
    int n ;
    printf("Enter number of elements in array : ");
    scanf("%d",&n) ;
    int arr[n] ;
    printf("Enter elements of array  : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]) ; 
    }

    // sorting
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

    int minNum = 0 ;
    for(int i=0; i<n; i++){
        minNum = minNum *10 + arr[i] ;
    } 
    

    return 0;
}