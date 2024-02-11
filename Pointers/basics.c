#include <stdio.h>
int main( ){
    // pointer stores addresses of variables

    int x = 3;
    printf("%p\n",&x);    // %p format specifier is used to print address
    // & holds the address

    int* a = &x;   // int* a(int *a) is the declaration of pointer 
    printf("%p\n",a);

    // pointers holds addresses also they have their own address
    printf("%p\n",&a);    // -> address of pointer

    printf("%d\n",*a);
    // *a ->  It means point to the variable whose address is stored in a and print the value of that variable


    int p = 45;
    int *q = &p;
    printf("p = %d\n",p);
    printf("%p\n",q);
    printf("%p\n",&p);
    printf("%d\n",*q);
    *q = 12;
    printf("p = %d\n",p);

    return 0;
}