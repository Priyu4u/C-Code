#include <stdio.h>
int main( ){

    char arr[ ] = {'H', 'e', 'l', 'l', 'o'} ;
    // int a = (int)ch;
    // printf("%d",a); 
    for(int i=0; i<5; i++){
        printf("%c",arr[i]); 
    } 

    printf("\n") ;
    char ch = '\0' ;     // null character
    printf("%c",ch) ;
    printf("%d \n",ch) ;

    char a[ ] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // printing this string using while loop
    int i=0; 
    while(a[i] != '\0'){
        printf("%c ",a[i]);
        i++;
    } 


    return 0;
}     