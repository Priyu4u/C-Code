#include <stdio.h>
int main( ){
    // take 4 positive integer and print greatest of them
    int a, b, c, d;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);
    printf("Enter 4th number : ");
    scanf("%d",&d);

    if(a>b && a>c && a>d){
        printf("%d is the greatest",a);
    }
    else if(b>a && b>c && b>d){
        printf("%d is the greatest",b);
    }
    else if(c>a && c>b && c>d){
        printf("%d is the greatest",c);
    }
    else if(d>b && d>c && d>a){
        printf("%d is the greatest",d);
    }
    else{
        printf("please enter distinct values");
    }

    return 0;
}