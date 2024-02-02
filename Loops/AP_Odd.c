#include <stdio.h>
int main( ){
    // Display this AP - 1, 3, 5, 7, 9.. upto n terms 
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i=1; i<=2*n-1; i=i+2){
        printf("%d ",i);
    }
    return 0;
}