#include <stdio.h>
void reverse(int arr[ ] , int n){
    int i = 0;
    int j = n-1-i;
    while (i < j){                    // for(int i=0, j=n-1; i<j; i++,j--)
        arr[i] = arr[i] + arr[j] ;
        arr[j] = arr[i] - arr[j] ;
        arr[i] = arr[i] - arr[j] ;
        i++;
        j--;
    }
    return;
}
int main( ){
    // WAP to reverse the array without using any extra array 
    int n ;
    printf("Enter number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr , n) ;
    for(int i=0; i<=n-1; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}