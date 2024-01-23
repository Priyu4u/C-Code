#include<stdio.h>
int main(){
    // Ques: Write a program to find the surface area of a sphere taking radius as input from user
    // surface area of sphere = 4*pi*r^2

    float radius ;
    printf("Enter the value of r : ");
    scanf("%f",&radius);

    float area = 4*3.14159265359*radius*radius;
    printf("Surface Area = %f",area);
    return 0;
}