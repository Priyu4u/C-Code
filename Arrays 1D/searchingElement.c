#include <stdio.h>
#include <stdbool.h>
int main( ){
    // Given an array and a number 'x' . Find out if 'x' lies in the array or not , if yes print the index.
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;
    int x;
    printf("Enter the value of x : ") ;
    scanf("%d",&x) ;
    bool flag = false; // false means data is absent
    int idx = 0;
    for(int i=0; i<=9; i++){
        if(arr[i] == x){
            flag = true ;   // true means data is present
            idx = i ;
            break; 
        } 
    }
    if(flag == true){
        printf("%d is present in the array with index %d",x,idx) ;
    }
    else{
        printf("%d is not present int the array");
    }
    return 0;   
}