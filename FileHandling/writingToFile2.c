#include <stdio.h>
int main( ){
    // writing into a file 
    FILE *fptr ;
    fptr = fopen("writingToFile.txt","w") ;

    char ch ;
    printf("Enter a character :");
    scanf("%c",&ch) ;
    
    fprintf(fptr,"Entered character is : %c",ch) ;
    


    fclose(fptr);
    return 0;
}