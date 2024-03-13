#include <stdio.h>
#include <string.h>

typedef struct person{
    int age ;
    float weight ;
} person ;

void modify(person* a){
    (*a).age = 22 ;
    // (*a).weight = 60 ;
    a->weight = 65 ;      // (*a)attribute == a-> attribute
    return  ; 
}

int main( ){
    // modifying a structure using pass by reference through pointers
    person priyanshu ;
    priyanshu.age = 20 ;
    priyanshu.weight = 55 ;
    printf("Age : %d\n",priyanshu.age) ;
    printf("Weight : %f\n",priyanshu.weight) ;
    // person* ptr = &priyanshu ;
    modify(&priyanshu) ;
    printf("Age : %d\n",priyanshu.age) ;
    printf("Weight : %f\n",priyanshu.weight) ;
    return 0;
} 