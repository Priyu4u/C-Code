#include <stdio.h>
int main( ){
    // Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of each digit is equal to the number itself, then the number is called an Armstrong number . For example 153 = (1*1*1) + (5*5*5) + (3*3*3)
    for(int i=1; i<= 500; i++){
        int originalNum = i;
        int sum = 0; 
        int digit ;
        while (originalNum != 0){
            digit = originalNum % 10;
            sum = sum + digit * digit * digit;
            originalNum = originalNum / 10;
        }
        if(sum == i){
            printf("%d ",i);
        }
        
    }
    return 0;
}