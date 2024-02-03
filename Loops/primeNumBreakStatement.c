#include <stdio.h>
int main( ){
    // WAP to check if a number is prime or not
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a = 0;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){   // i is a factor of n
            a = 1;
            break;  // Its is used for terminating  or breaking the loop instead of running it again and again
        }
    }
    if(n==1 || n==0) printf("%d is neither prime nor composite",n);
    else if(a==1)  printf("The number you entered is composite"); 
    else printf("The number you entered is prime");
        
    return 0;
}