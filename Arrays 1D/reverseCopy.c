#include <stdio.h>
int main( ){
    // WAP to copy the contents of one array into another array in the reverse order
    int n ;
    printf("Enter number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int arrCopy[n] ; 
    for(int i=n-1; i >= 0; i--){
        arrCopy[n-1-i] = arr[i] ;
    }
    for(int i=0; i<=n-1; i++){
        printf("%d ",arrCopy[i]);
    }
    
    return 0;
}