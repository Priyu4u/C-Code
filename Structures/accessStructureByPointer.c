#include <stdio.h>
#include <string.h>
typedef struct person{
    int age ;
    float weight ;
} person ;
int main( ){
    // create a structure 'person' having atrributes as age and weight . Access it's structure variables using pointers .

    person priyanshu ;
    priyanshu.age = 20 ;
    // priyanshu.weight = 55.25 ;

    person* ptr = &priyanshu ; // person* ptr = &priyanshu.age is invalid 
    (*ptr).age = 21 ; 
    (*ptr).weight = 55.55 ;
    printf("Age of Priyanshu is %d\n",(*ptr).age) ; 
    printf("Weight of Priyanshu is %f\n",(*ptr).weight) ; 
    return 0;
}