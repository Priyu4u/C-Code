#include <stdio.h>
int main( ){
    // WAP to print the sum of this series 1 - 2 + 3 - 4 + 5 - 6 ... upto 'n'
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(n%2==0) sum = -(n/2);
        else sum = (n/2)+1 ;
    }
    printf("The sum of series is %d",sum);


    // alternate method
    // for(int i=1; i<=n; i++){
    //     if(i%2 != 0)  sum = sum + i;
    //     else sum = sum - i;
    // }
    // printf("The sum of series is %d",sum);

    return 0;
}