#include <stdio.h>
int main( ){
    // take a string input from user and print it's reverse
    char str[40] ;
    printf("Enter a string : ");
    gets(str);   // scanf("%[^\n]s",str)

    // code for calculating the size of string
    int size = 0;
    for(int i=0; str[i] != '\0' ; i++){
        size++;
    } 
    for(int i=0, j=size-1; i<j; i++,j--){
        char temp = str[i] ;
        str[i] = str[j] ;
        str[j] = temp ;
    }

    printf("The reverse of this string is : ") ;   // automatically gives a \n 
    puts(str) ;
    return 0;
} 