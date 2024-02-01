#include <stdio.h>
int main( ){
    // take three positive integers input and print greatest of them
    int a, b, c;
    printf("Enter 1st positive integer : ");
    scanf("%d",&a);
    printf("Enter 2nd positive integer : ");
    scanf("%d",&b);
    printf("Enter 3rd positive integer : ");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("%d is the greatest",a);
    }
    else if (b>a && b>c){
        printf("%d is the greatest",b);
    }
    else if(c>a && c>b){
        printf("%d is the greatest",c);
    }
    else{
        printf("please enter distinct values");
    }
    return 0;
}