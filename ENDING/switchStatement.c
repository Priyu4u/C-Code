#include <stdio.h>
int main( ){
    // switch statement -> alternate to if-else ladder
    /*
    SYNTAX
    switch(integer expression){
        case constant 1:
            do this ;
        case constant 2:
            do this ;
        case constant 3:
            do this ;
        default :
            do this ;
    }
    */
   // Write a program to input week number(1-7) and print day of week name using switch case
   int n;
   printf("Enter day number(1-7) : ");
   scanf("%d",&n) ;

   switch(n){
        case 1:
            printf("Monday") ;
            break;
        case 2:
            printf("Tuesday") ;
            break;
        case 3:
            printf("Wednesday") ;
            break;
        case 4:
            printf("Thursday") ;
            break;
        case 5:
            printf("Friday") ;
            break;
        case 6:
            printf("Saturday") ;
            break;
        case 7:
            printf("Sunday") ;
            break; 
        default :
        printf("Invalid Input") ;
   }
    return 0;
}