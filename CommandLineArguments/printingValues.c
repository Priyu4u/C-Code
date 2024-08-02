#include <stdio.h>
int main( int argc, char* argv[]){

    // printing the value of arguments at respective indexes
    for(int i=0; i<argc; i++){
        printf("Value of argument at index %d is %s \n",i, argv[i]);
    }

    // value at 0th index is always the path of the file
    return 0;
}