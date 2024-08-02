#include <stdio.h>
typedef struct studentInfo
{
    char Name[50] ;
    int rollNo ;
    float percent ;
} sInfo ;

int main( ){
    FILE* fptr; 
    fptr = fopen("studentInfo.txt","a") ;

    sInfo Stu ;     // creating variable of type struct

    printf("Enter student name : ");
    scanf("%s",Stu.Name);
    printf("Enter student roll number  : ");
    scanf("%d",&Stu.rollNo);
    printf("Enter student percentage : ");
    scanf("%f",&Stu.percent);

    fprintf(fptr,"\n \nStudent Name : %s",Stu.Name);
    fprintf(fptr,"\nStudent Roll Number : %d",Stu.rollNo);
    fprintf(fptr,"\nStudent Percentage : %f",Stu.percent);

    fclose(fptr) ;
    return 0;
}