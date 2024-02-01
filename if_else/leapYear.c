#include <stdio.h>
int main( ){
    // Any year is input through the keyboard. WAP to determine whether the year is leap year or not(considering leap year occurs after every 4 years)

    int year;
    printf("Enter a year : ");
    scanf("%d",&year);
    if(year % 4 == 0){
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is not a leap year",year);
    }
    return 0;
}