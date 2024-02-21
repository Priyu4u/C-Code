#include <stdio.h>
int main( ){
    /*
    Given an array of marks of 10 students , if the mark of any student is less than 35 print its roll no. [roll no. here refers to the index of the array]
    */
   int marks[10] ;
   for(int i=0; i<=9; i++){
        printf("Enter marks of student %d : ",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0; i<=9; i++){
        if(marks[i] <35){
            printf("%d ",i);
        }
    }
    return 0;
}