#include <stdio.h>
int main( ){
    // WAP to print all the even numbers from 1 to 100 using continue statement
    for(int i=1; i<=100; i++){
        if(i%2 != 0){
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}