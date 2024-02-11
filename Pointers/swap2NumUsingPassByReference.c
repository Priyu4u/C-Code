#include <stdio.h>
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main( ){
    int a, b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("First Num = %d\n",a);
    printf("Second Num = %d",b);
    return 0;
}



// pass by value means we are sending the values stored in variables
// pass by reference means we are sending the address of variables 

// int a; -> this a container has address in memory