#include <stdio.h>
int main( ){
    // Question: Given an array of integers number that is sorted in non-decreasing order , find two numbers such that they add upto a specific target number 
    int n ;
    printf("Enter number of elements in array : ");
    scanf("%d",&n) ;
    int arr[n] ;
    printf("Enter elements of array in sorted manner : \n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]) ; 
    } 
    int targetSum ;
    printf("Enter target sum number : ");
    scanf("%d",&targetSum) ;

    int i = 0;
    int j = n - 1;
    while(i < j){
        if(arr[i] + arr[j] == targetSum){
            printf("%d + %d = %d\n",arr[i] , arr[j],targetSum) ;
            break;  
        }
        else if(arr[i] + arr[j] > targetSum){
            j-- ;
        }
        else{
            i++; 
        }
    }



    // What is sorting ?
    // sorting an array means arranging it in ascending order 
    // sort means ascending order
    // sort in descending means arranging in descending order
    return 0;
}