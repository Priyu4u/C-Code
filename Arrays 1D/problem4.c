#include <stdio.h>
int main( ){
    // Find the difference between sum of elements at even indices to the sum of elements at odd indices
    int n;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    } 
    int evenSum = 0;
    int oddSum = 0;
    for(int i=0; i<=n-1; i++){
        if(i%2 == 0) evenSum = evenSum + arr[i] ;
        else oddSum = oddSum + arr[i] ;
    }
    printf("Difference = %d",evenSum-oddSum);
    return 0;
}