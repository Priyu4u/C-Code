#include <stdio.h>
int main( ){
    // Calculate the product of all the elements in the given array
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int product = 1;
    for(int i=0; i<=n-1; i++){
        product = product * arr[i];
    }
    printf("Product of all elements of array = %d",product);
    return 0;
}