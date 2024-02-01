#include <stdio.h>
int main( ){
    int x = 32768;
    printf("%d\n",x);

    short y = 32769;
    printf("%d",y);

    // short is also used to store integers but in range of -32768 to 32767
    // short data type stores 2 bytes of memory in computer
    // 8 bits -> 1 bytes
    // n bits -> 2^n numbers can be stored
    // 2^16 -> 65536 (-32768 to 32767)
    // range of short -> -2^15 to 2^15-1

    // int data type stores 4 bytes of memory in computer
    // 4 bytes -> 32 bits
    // range of int data type -> -2^31 to 2^31-1

    // similarly long data type stores 8 bytes of memory in computer
    return 0;
}