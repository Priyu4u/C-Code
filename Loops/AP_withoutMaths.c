#include <stdio.h>
int main( ){
    // Display this AP 4 7 10 13 16 upto n terms 
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int a = 4;
    for(int i=1; i<=n; i++){
        printf("%d ",a);
        a = a + 3;
    }
    return 0;
}