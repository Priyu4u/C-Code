#include <stdio.h>
int main( ){
    // Print all the odd numbers from 1 to 100
    for(int i=1; i<=100; i++){
        if(i%2 == 0){    // Even number
            continue;   // continue means skip karo is iterration ko 
        }
        printf("%d ",i);
    }
    return 0;
}