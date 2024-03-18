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
    // printing original array
    // for(int i=0; i<n; i++){
    //     printf("%d ",arr[i]) ;
    // }


    // bubble sort
    for(int i=0; i<n-1; i++){ 
        bool flag = true ;
        for(int j=0; j<=n-2-i; j++){
            if(arr[j]>arr[j+1]){
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

    // Time complexity of bubble sort in worst case is O(n^2) 
    // Time complexity of bubble sort in average case is O(n^2) 
    // Time complexity of bubble sort in best case is O(n) 

    // Space complexity in all the cases in O(1)


    // Maximum number of swaps in worst case in bubble sort
    // Soln -> if the size of the array in n -> (n-1) + (n-2) + (n-3) ..... 3 + 2 + 1 = n(n-1) / 2 


    // How to optimise bubble sort in the case of nearly sorted arrays ?
    // -> check if array after every pass is already sorted or not 
    // -> with the help of a checkmark(bool) 

    
    return 0;
}