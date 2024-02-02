#include <stdio.h>
int main( ){
    // if the ages of Ram , Shyam and Ajay are input through the keyboard, write a program to determine the youngest of three using nested if else without using logical operators
    int ram, shyam, ajay;
    printf("Enter the age of Ram : ");
    scanf("%d",&ram);
    printf("Enter the age of Shyam : ");
    scanf("%d",&shyam);
    printf("Enter the age of Ajay : ");
    scanf("%d",&ajay);
    

    if(ram > shyam){  // ram will not be the youngest
        if(shyam < ajay){
            printf("Shyam is the youngest");
        }
        else{
            printf("Ajay is the youngest");
        }
    }
    else{  // ram < shyam    -> shyam cannot be the youngest
        if(ram < ajay){
            printf("Ram is the youngest");
        }
        else{
            printf("Ajay is the youngest");
        }
    }

    return 0;
}