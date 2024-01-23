#include <stdio.h>
int main(){
     // Ques: Write a program to find the area of a circle taking radius as input from user
    // area of sphere = pi*r^2
    float radius ;
    printf("Enter the value of radius : ");
    scanf("%f",&radius);

    float area = 3.14159265359 * radius * radius ;
    printf("Area of circle : %f",area);

    return 0;
}