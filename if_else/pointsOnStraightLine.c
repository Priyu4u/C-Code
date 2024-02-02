#include <stdio.h>
int main( ){
    // Given three points (x1, y1), (x2, y2) and (x3, y3) , write a program to check if all the three points fall of a straight line 

    double x1, x2, x3, y1, y2, y3 ;
    printf("Enter coordinates of first point : ");
    scanf("%f %f",&x1, &y1);
    printf("Enter coordinates of second point : ");
    scanf("%f %f",&x2, &y2);
    printf("Enter coordinates of third point : ");
    scanf("%f %f",&x3, &y3);

    // wrong 
    // float area = (1/2) * (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));
    // if(area == 0){
    //     printf("All the three points fall on a straight line");
    // }
    // else{
    //     printf("All the three  points does not fall on a straight line");
    // }

    // using slope formula
    double slope1 = (y2 - y1)/(x2 - x1);
    double slope2 = (y3 - y2)/(x3 - x2);
    if(slope1 == slope2){
        printf("All the three points fall on a straight line");
    }
    else{
        printf("All the three points does not fall on a straight line");
    }

    return 0;
}