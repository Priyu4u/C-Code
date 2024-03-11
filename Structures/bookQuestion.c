#include <stdio.h>
#include <string.h>
int main( ){
    // create a structure type 'book' with name , price and number of pages as it's attributes
    struct book{
        char name[40] ;
        float price ;
        int noOfPages ;
    } richDad , secretSeven ; 
    // struct book richDad;
    // printf("Enter price of Rich Dad Poor Dad : ");
    // scanf("%d",&richDad.price) ;
    // printf("You entered : %d",richDad.price) ; 

    // richDad.name = "Rich Dad Poor Dad" ;   -> we cannot enter value directly in such direct initialization
    
    richDad.noOfPages = 240 ;
    richDad.price = 409.52 ;
    strcpy(richDad.name, "Rich Dad Poor Dad") ;    // for string initialization 

    secretSeven.noOfPages = 400 ;
    secretSeven.price = 140 ;
    strcpy(secretSeven.name, "Secret Seven") ;    // for string initialization 

    printf("%s\n",richDad.name) ; 
    printf("%f\n",richDad.price) ; 
    printf("%d\n",richDad.noOfPages) ; 

    printf("%s\n",secretSeven.name) ; 
    printf("%f\n",secretSeven.price) ; 
    printf("%d\n",secretSeven.noOfPages) ; 


    return 0;
} 