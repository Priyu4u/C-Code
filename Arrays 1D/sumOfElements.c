#include <stdio.h>
int main( ){
    // Calculate the sum of all the elements in the given array
    int arr[5];
    for(int i=0; i<=4; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i=0; i<=4; i++){
        sum = sum + arr[i];
    }
    printf("Sum of array = %d",sum);
    return 0;
}