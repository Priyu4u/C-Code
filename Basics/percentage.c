#include <stdio.h>
int main(){

    // Ques: WAP to calculate the percentage of 5 subjects taken as input from the user

    float sub1, sub2, sub3, sub4, sub5 ;
    
    printf("Enter marks of first subject : ");
    scanf("%f",&sub1);
    printf("Enter marks of second subject : ");
    scanf("%f",&sub2);
    printf("Enter marks of third subject : ");
    scanf("%f",&sub3);
    printf("Enter marks of fourth subject : ");
    scanf("%f",&sub4);
    printf("Enter marks of fifth subject : ");
    scanf("%f",&sub5);

    float percent = (sub1 + sub2 + sub3 + sub4 + sub5) / 5 ;
    printf("Percentage : %f",percent);
    return 0;
}