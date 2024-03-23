#include <stdio.h>
int main( ){
    // Write a program to create a calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case. The calculator should input two numbers and an operator from user
    int a , b ;
    printf("Enter number 1 : ") ;
    scanf("%d",&a) ;
    char ch ;
    printf("Enter operator : ") ;
    scanf(" %c",&ch) ;
    printf("Enter number 2 : ") ;
    scanf("%d",&b) ; 

    switch(ch){
        case '+' :
            printf("%d",a+b) ;
            break;
        case '-' :
            printf("%d",a-b) ;
            break;
        case '*' :
            printf("%d",a*b) ;
            break;
        case '/' :
            printf("%f",(float)a/b) ;
            break;
        default :
            printf("Invalid Operation") ;
    } 


    return 0;
}