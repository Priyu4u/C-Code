#include <stdio.h>
int main( ){
    // write a C program to read integer elements from a DATA file and insert odd numbers in ODD file and even numbers in EVEN file

    FILE *fptr1 , *fptr2 , *fptr3;

    fptr1 = fopen("DATA.txt", "r") ;
    if(fptr1 == NULL){
        printf("Error opening DATA File !") ;
        return 1;
    }

    fptr2 = fopen("ODD.txt", "w") ;
    if(fptr2 == NULL){
        printf("Error opening ODD File !") ;
        return 1;
    }

    fptr3 = fopen("EVEN.txt", "w") ;
    if(fptr3 == NULL){
        printf("Error opening EVEN File !") ;
        return 1;
    }

    int n;
    while(fscanf(fptr1, "%d",&n) != EOF){
        if(n%2 == 0){
            fprintf(fptr3, "%d ",n) ;
        }
        else{
            fprintf(fptr2 ,"%d ",n) ;
        }
    }

    

    printf("Operation completed successfully") ;

    fclose(fptr1) ;
    fclose(fptr2) ;
    fclose(fptr3) ;

    
    return 0;
}