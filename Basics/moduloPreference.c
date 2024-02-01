#include <stdio.h>
int main( ){
    int x = 2%8;
    printf("%d\n",x);
    int y = 2 % -8;
    printf("%d",y);

    // 2 % 8 is equal to 2 % -8
    return 0;
}