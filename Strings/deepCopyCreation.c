#include <stdio.h>
#include <string.h>
int main( ){
    // calculating the size of an array and putting that size into the initialization of another array thus creating a copy of first array
    char str1[ ] = "Hello World !" ;
    // calculating size
    int size = 0;
    for(int i=0; str1[i] != '\0' ; i++){
        size++ ;
    }
    printf("%d\n",size) ;
    char str2[size] ;
    for(int i=0; str1[i] != '\0' ; i++){
        str2[i] = str1[i] ;
    }
    puts(str2) ;
    return 0;
}