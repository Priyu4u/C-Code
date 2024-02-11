#include <stdio.h>
int main( ){
    int x = 5;
    int* a = &x; // int* -> stores address of integer
    printf("%p\n",a);
    printf("%d\n",x);
    *a = 8;
    printf("%d\n",x);
    int** y = &a;  // int** -> stores address of pointer
    printf("%p\n",y);
    printf("%d\n",**y);
    return 0;
}