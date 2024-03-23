#include <stdio.h>
#include <limits.h>
int main( ){
    // Given an integer array and an integer k where k<=size of array, We need to return the k-th smallest element of the array
    int n, k;
    printf("Enter number of elements in array : ");
    scanf("%d",&n) ;
    int arr[n] ;
    printf("Enter elements of array  : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]) ; 
    }
    printf("Enter the value of k : ");
    scanf("%d",&k) ;

    // using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    printf("%d-th smallest number = %d",k,arr[k-1]) ;


    return 0;
} 