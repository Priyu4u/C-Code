#include <stdio.h>
int main( ){
    int x = 4, y, z;
    y = --x;   
    z = x--;
    printf("\n %d %d %d",x ,y ,z);

    /* 
    x ++ -> x = x + 1;     [Post increment]

    ++ x -> x = x + 1;     [Pre increment]

    x --   ->   x = x - 1;    [Post decrement]

    -- x   ->   x = x - 1;    [Pre decrement]
    */
    return 0;
}