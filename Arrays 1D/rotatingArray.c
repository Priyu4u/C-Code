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
    // Rotate the given array 'arr' by k steps , where k is non negative
    // Note: k can be greater than n as well where n is the size of the array 'arr'
    int n ;
    printf("Enter number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int k ;
    printf("Enter the value of k : ");
    scanf("%d",&k);
    k = k % n;

    reverse(arr , n , 0 , n-1) ;
    reverse(arr , n , 0 , k-1) ;
    reverse(arr , n , k , n-1) ;

    for(int i=0; i<=n-1; i++){
        printf("%d ",arr[i]);
    }
    return 0; 
}
