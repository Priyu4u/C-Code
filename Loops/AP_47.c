#include <stdio.h>
int main( ){
    // Display this AP 4 7 10 13 16 upto n terms
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i=4; i<=3*n+1; i=i+3){
        printf("%d ",i);
    }
    return 0;
}