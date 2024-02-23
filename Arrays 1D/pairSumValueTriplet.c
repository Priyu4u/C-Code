#include <stdio.h>
int main( ){
    // Find total number of triplets in the array whose sum is equal to the given value x .
    int n, x ;
    printf("Enter number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of x : ");
    scanf("%d",&x);
    int count = 0; 
    for(int i=0; i<=n-1; i++){
        for(int j=i+1; j<=n-1; j++){
            for(int k=j+1; k<=n-1; k++){
                if(arr[i] + arr[j] + arr[k] == x){
                    count++;
                    printf("(%d,%d,%d)\n",arr[i] ,arr[j] ,arr[k]);
                }
            }
        }
    }
    printf("Number of pairs = %d",count);
    return 0;
}