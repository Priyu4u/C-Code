#include <stdio.h>
#include <stdbool.h>
int main(){ 
    int n ;
    printf("Enter number of elements in array : ");
    scanf("%d",&n) ;
    int arr[n] ;
    printf("Enter elements of array  : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]) ; 
    }

    // bubble sort
    for(int i=0; i<n-1; i++){ 
        bool flag = true ;
        for(int j=0; j<=n-2-i; j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j] ; 
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
                flag = false ;
            }  
        } 
        if(flag==true) break; 
    } 

    printf("\n") ;
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]) ;
    } 

    return 0;
}