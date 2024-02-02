#include <stdio.h>
int main( ){
    // take input percentage of students in integer and print the grades according to marks 
    // 90 - 100 excellent
    // 80 - 90 very good
    // 70 - 80 good
    // 60 - 70 can do better
    // 50 - 60 average
    // 40 - 50 below average
    // < 40 - Fail
    int percent;
    printf("Enter your percentage : ");
    scanf("%d",&percent);
    if(percent >= 91 && percent < 100){
        printf("Excellent");
    }
    else if(percent >= 81 && percent < 91){
        printf("Very Good");
    }
    else if(percent >= 71 && percent < 81){
        printf("Good");
    }
    else if(percent >= 61 && percent < 71){
        printf("Can Do Better !");
    }
    else if(percent >= 51 && percent < 61){
        printf("Average");
    }
    else if(percent >= 41 && percent < 51){
        printf("Below Average");
    }
    else{
        printf("Fail");
    }

    return 0;
}