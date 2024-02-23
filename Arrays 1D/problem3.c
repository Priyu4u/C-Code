#include <stdio.h>
int main( ){
    /*
    Count the number of elements in a given array greater than a given number x 
    */
    int n,x;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter value of x : ");
    scanf("%d",&x);
    int count = 0;
    for(int i=0; i<=n-1; i++){
        if(arr[i]>x) count++ ;
    }
    printf("Number of elements greater than %d = %d ",x ,count);
    return 0;
}