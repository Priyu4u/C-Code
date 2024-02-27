#include <stdio.h>
int main( ){
    // WAP to find duplicate element from a given array of integers
    int arr[7] = { 1, 2, 3, 5, 5, 6, 3} ;
    for(int i=0; i<=6; i++){
        for(int j=i+1; j<=6; j++){
            if(arr[i] == arr[j]){
                printf("%d is the duplicate element\n",arr[i]);
            }
        }
    }
    return 0;
}