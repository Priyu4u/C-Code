#include <stdio.h>
#include <string.h>
int main( ){
    // A record contains name of cricketer, his age, number of test matches that he has played and the average runs that he has scored in each test match . Create an array of structure to hold records of 20 such cricketer and then write a program to read these records

    typedef struct cricketer{
        char name[25] ;
        int age ;
        int testMatch ;
        float avgRuns ;
    } cricketer ;

    cricketer arr[3] ;       // taking 3 instead of 20

    // taking input
    for(int i=0; i<3; i++){
        printf("Enter name of cricketer %d : ",i+1) ; 
        scanf(" %[^\n]s",arr[i].name) ;              // provide space before % sign -> This will consume the newline character left in the input buffer by the previous scanf call  
        printf("Enter age : "); 
        scanf("%d",&arr[i].age) ;
        printf("Enter number of test matches he has played : ");
        scanf("%d",&arr[i].testMatch) ;
        printf("Enter his average runs : ") ;
        scanf("%f",&arr[i].avgRuns) ;

    }

    // printing
    for(int i=0; i<3; i++){
        printf("%s\n",arr[i].name) ;
        printf("Age : %d\n",arr[i].age) ;
        printf("No. of test matches played : %d\n",arr[i].testMatch) ;
        printf("Average Runs Scored : %f\n",arr[i].avgRuns) ;
    }  
    return 0;
}