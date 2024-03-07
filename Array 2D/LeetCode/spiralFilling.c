#include <stdio.h>
int main( ){
    // Given a positive integer n, generate a n * n matrix filled with elements from 1 to n(square) in spiral order (Leetcode - 59)
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n][n];
    

    int minR = 0;
    int maxR = n-1;
    int minC = 0;
    int maxC = n-1;
    int tne = n * n;
    int count = 0;
    int num = 1;
    printf("After spiral printing : \n");
    while(count<tne){
        // printing first row
        for(int j=minC; j<=maxC  ; j++){
            arr[minR][j] = num;
            num++;
            count++;
        }
        minR++;
        for(int i=minR; i<=maxR ; i++){
            arr[i][maxC] = num;
            num++;
            count++;
        }
        maxC--;
        for(int j=maxC; j>=minC ; j--){
            arr[maxR][j] = num;
            num++;
            count++;
        }
        maxR--;
        for(int i=maxR; i>=minR ; i-- ){ 
            arr[i][minC] = num;
            num++;
            count++; 
        }
        minC++;
    }

    // printing the array
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]) ;
        }
        printf("\n") ;
    }
    
    return 0;
} 