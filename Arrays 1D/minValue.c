#include <stdio.h>
int main( ){
    // Find the Minimum value out of all the elements in the array
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int min = arr[0]; 
    for(int i=1; i<=n-1; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("Minimum Value = %d",min);
    return 0;
}