#include <stdio.h>
int main( ){
    // Print the table of n. Here n is an integer which user will input
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i=n; i<=n*10; i=i+n){
        printf("%d \n",i);
    }
    return 0;
}