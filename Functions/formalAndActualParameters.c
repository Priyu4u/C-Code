#include <stdio.h>
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main( ){
    int a, b;          // a and b are formal parameters  
    // The value which is passing from a and b are actual parameters
    
    printf("Enter first number : ");
    scanf("%d",&a);          
    printf("Enter second number : ");
    scanf("%d",&b);
    swap(a,b);
    printf("First Num = %d\n",a);
    printf("Second Num = %d",b);
    return 0;
}