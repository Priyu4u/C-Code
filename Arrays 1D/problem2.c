#include <stdio.h>
void operation(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        if(i%2 != 0) arr[i] = arr[i] * 2;
        else arr[i] = arr[i] + 10;
    }
    return;
}
int main( ){
    /*
    Given an array of integers, change the value of all odd indexed elements to it's second multiple and increment all even indexed value by 10 .
    */
    int n;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    operation(arr,n);
    printf("After applying condition : ");
    for(int i=0; i<=n-1; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}