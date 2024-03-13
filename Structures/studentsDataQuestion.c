#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct student{
    int rollNum ;
    char name[20] ;
    char deptmnt[15] ;
    char course[10] ;
    int joinYear ;
} students ;

void depCheck(students a, students b){
    bool flag = true ;
    for(int i=0 ; a.deptmnt[i] != '\0' || b.deptmnt[i] != '\0'; i++){
        if(a.deptmnt[i] != b.deptmnt[i]){
            flag = false ;
            break;
        }
    }
    if(flag == true) printf("Same Department") ;
    else printf("Different Department") ;
    return ;
}
int main( ){
    // Create a structure to specify data on students with these attributs : Roll number , Name, Department, Course, Year of joining. Create 2 structure variables . Now create a function to check if two students have the same Department . Pass the two structure variable as input to this function 

    students ram , shyam ;
    ram.rollNum = 20 ;
    ram.joinYear = 2021 ;
    strcpy(ram.course, "BCA") ;
    strcpy(ram.name, "Ram") ;
    strcpy(ram.deptmnt, "CS") ;

    shyam.rollNum = 21 ;
    shyam.joinYear = 2021 ;
    strcpy(shyam.course, "MCA") ;
    strcpy(shyam.name, "Shyam") ;
    strcpy(shyam.deptmnt, "CS") ; 

    depCheck(ram,shyam) ;

    return 0;
}