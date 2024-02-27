#include <stdio.h>
void reverse(int arr[ ] , int n, int si, int ei){
    for(int i=si, j=ei; i<j; i++,j--){ 
        arr[i] = arr[i] + arr[j] ;
        arr[j] = arr[i] - arr[j] ;
        arr[i] = arr[i] - arr[j] ;
    }
    return;
}
int main( ){
    // WAP to reverse the part of array 
    int n ;
    printf("Enter number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int si , ei ;
    printf("Enter starting index for reverse : ");
    scanf("%d",&si);
    printf("Enter ending index for reverse : ");
    scanf("%d",&ei);

    reverse(arr , n , si , ei) ;
    for(int i=0; i<=n-1; i++){
        printf("%d ",arr[i]);
    }
    return 0; 
}