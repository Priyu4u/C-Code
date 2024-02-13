#include <stdio.h>
void fibonacci(int n){
    int a = 1;
    int b = 1;
    int sum ;
    if(n==1) printf("%d ",a);
    if(n>=2) printf("1 1 ");
    for(int i=3; i<=n; i++){
        sum = a + b;
        printf("%d ",sum);
        a = b;
        b = sum;
    }
    return ;
}
int main( ){
    // Print first 'n' fibonacci numbers using functions
    // 1 1 2 3 5 8 13 21 34 55 ...
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}