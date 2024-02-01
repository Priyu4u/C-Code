#include <stdio.h>
int main( ){
    // if the ages of Ram , Shyam and Ajay are input through the keyboard, write a program to determine the youngest of three
    int ram, shyam, ajay;
    printf("Enter the age of Ram : ");
    scanf("%d",&ram);
    printf("Enter the age of Shyam : ");
    scanf("%d",&shyam);
    printf("Enter the age of Ajay : ");
    scanf("%d",&ajay);
    if(ram < shyam && ram < ajay){
        printf("Ram is the youngest");
    }
    else if(shyam < ram && shyam < ajay){
        printf("Shyam is the youngest");
    }
    else if(ajay < ram && ajay < shyam){
        printf("Ajay is the youngest");
    }
    else{
        printf("All the three are of same age");
    }
    return 0;
}