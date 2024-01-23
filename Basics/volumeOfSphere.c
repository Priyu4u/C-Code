#include <stdio.h>
int main(){
    // Ques: Write a program to find the volume of a sphere taking radius as input from user
    // volume of sphere = 4/3*pi*r^3

    float radius;
    printf("Enter the value of radius : ");
    scanf("%f",&radius);

    float volume = (4*3.14159265359*radius*radius*radius)/3;
    printf("Volume of Sphere : %f",volume);
    return 0;
}