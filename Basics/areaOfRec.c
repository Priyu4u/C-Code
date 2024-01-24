#include <stdio.h>
int main( ){
    // Ques: WAP to calculate the area of a rectangle

    float a;
    printf("Enter lenght : ");
    scanf("%f",&a);
    float b;
    printf("Enter width : ");
    scanf("%f",&b);

    float area = a * b ;
    printf("The area of rectangle = %f",area);
    return 0;
}