#include <stdio.h>
int main( ){
    // print Hello world n times , takes 'n' as input from user
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("Hello World\n");
    }
    return 0;
}