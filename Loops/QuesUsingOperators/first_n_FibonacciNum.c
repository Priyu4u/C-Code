#include <stdio.h>
int main( ){
    // Print first 'n' fibonacci numbers   1 1 2 3 5 8 13 21 ... 
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int a = 1;
    int b = 1;
    int sum = 1;
    if(n==1){
    printf("The 1th fibonacci number is %d\n",a );
    }
    else if(n==2){
    printf("The 1th fibonacci number is %d\n",a );
    printf("The 2th fibonacci number is %d\n",b);
    }
    else{
        printf("The 1th fibonacci number is %d\n",a );
        printf("The 2th fibonacci number is %d\n",b);
        for(int i=1; i<=n-2; i++){
        sum = a + b;
        a = b;
        b = sum;
        printf("The %dth fibonacci number is %d\n",i+2 , sum);
        }
    }
    
    
    return 0;
}