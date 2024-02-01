#include <stdio.h>
int main( ){
    // take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15
    int n;
    printf("Enter a positive integer : ");
    scanf("%d",&n);
    // if(n%5 == 0 || n%3 == 0){
    //     if(n%15 != 0){
    //         printf("It is divisible by 5 or 3 but not 15");
    //     }
    //     else{
    //         printf("It is divisible 5 or 3 and 15 also");
    //     }
    // }
    // else{
    //     printf("It is not divisible by 5 or 3");
    // }

    // alternate method
    if((n%5 == 0 || n%3 == 0) && n%15 != 0){
        printf("It is divisible by 5 or 3 but not 15");
    }
    else{
        printf("It is not matching the condition");
    }
    return 0;
}