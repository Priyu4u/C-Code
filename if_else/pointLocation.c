#include <stdio.h>
int main( ){
    // Given a point (x, y) WAP to find out if it lies on the x-axis , y-axis or at origin
    double x, y;
    printf("Enter x and y coordinates : ");
    scanf("%lf %lf",&x ,&y);
    if(x == 0 && y == 0){
        printf("The point lies at origin");
    } 
    else if(y == 0){
        printf("The point lies at x-axis");
    }
    else if(x == 0){
        printf("The point lies at y-axis");
    }
    else{
        printf("The point does not lies at origin, x-axis or y-axis");
    }
    return 0;
}