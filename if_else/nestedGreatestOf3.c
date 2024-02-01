#include <stdio.h>
int main( ){
    // take three positive integers input and print greatest of them using nested if else and not using logical operators
    int a, b, c;
    printf("Enter 1st positive integer : ");
    scanf("%d",&a);
    printf("Enter 2nd positive integer : ");
    scanf("%d",&b);
    printf("Enter 3rd positive integer : ");
    scanf("%d",&c);
   if(a>b){  // b cannot be the greatest
        if(a>c){
        printf("%d is the greatest",a);
        }
        else{
        printf("%d is the greatest",c);
        }
   }
   else{           // b > a
        if(b>c){
            printf("%d is the greatest",b);
        }
        else{
            printf("%d is the greatest",c);
        }
   }
    
    return 0;
}