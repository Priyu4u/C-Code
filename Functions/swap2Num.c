#include <stdio.h>
int main( ){
    int a, b;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);

    // using temporary variable

    int temp = a;
    a = b;
    b = temp;
    printf("First Number = %d\n",a);
    printf("Second Number = %d",b);

    return 0;
}