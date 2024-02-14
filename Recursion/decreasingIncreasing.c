#include <stdio.h>
void decInc(int n){
    if(n==0) return;
    printf("%d\n",n);
    decInc(n-1);
    printf("%d\n",n);
    return;
}
int main(){
    // Print n to 1 and 1 to n using recursion
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    decInc(n);

    return 0;
}