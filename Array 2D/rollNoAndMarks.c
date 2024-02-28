#include <stdio.h>
int main( ){
    // WAP to store roll no. and marks of student side by side in a matrix takig input from the user
    int n;
    printf("Enter number of students : "); 
    scanf("%d",&n) ;
    int arr[n][4] ;
    printf("Enter Roll no. , marks of physics , chemistry , maths of students : ") ;
    // taking input
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            scanf("%d",&arr[i][j]) ;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            printf("%d ",arr[i][j]) ;
        }
        printf("\n") ;
    }
    return 0;
}