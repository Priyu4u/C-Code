#include<stdio.h>
int main(){
    // Ques: WAP to calculate the simple interest 

    float Principal, rate, time,SI;
    printf("Enter Principal :");
    scanf("%f",&Principal);
    printf("Enter Rate : ");
    scanf("%f",&rate);
    printf("Enter Time :");
    scanf("%f",&time);

    SI = Principal*rate*time/100;
    printf("Simple Interest = %f",SI);
    return 0;
}