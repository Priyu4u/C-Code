#include <stdio.h>
int main( ){
    // Given the lenght and breadth of a rectangle , WAP to find whether the area of rectangle is greater than its perimeter.
    float l, b;
    printf("Enter lenght : ");
    scanf("%f",&l);
    printf("Enter breadth : ");
    scanf("%f",&b);
    float area = l * b;
    float perimeter = 2  * (l + b);
    if(area > perimeter){
        printf("Area is greater than perimeter");
    }
    else if(area < perimeter){
        printf("Area is smaller than perimeter");
    }
    else{
        printf("Area is equal to perimeter");
    }
    return 0;
}