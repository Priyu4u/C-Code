#include <stdio.h>
int main( ){
    char ch[ ] = "Priyanshu Gupta" ;  // when initialising a string in this manner , computer automatically puts a null character(\0) at the end of the string
    for(int i=0; ch[i] != '\0'; i++){
        printf("%c",ch[i]) ;
    }
    printf("\n") ;

    char a[ ] = "CollegeWallah" ;
    // size of the string a[ ] is ?
    // 13(wrong) -> 14(right) as in this type of initialisation computer automatically puts a null character at end of the string
    return 0;
}  