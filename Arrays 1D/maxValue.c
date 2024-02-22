#include <stdio.h>
#include <limits.h>
int main( ){
    // Find the maximum value out of all the elements in the array
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max = arr[0]; 
    // int max = INT_MAX;          ->   due to <limits.h> library INT_MAX includes the minimum value of integer 
    for(int i=1; i<=n-1; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("Maximum Value = %d",max);
    return 0;
}