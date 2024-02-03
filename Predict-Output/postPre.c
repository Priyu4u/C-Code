#include <stdio.h>
int main( ){
     /* 
    x ++ -> x = x + 1;     [Post increment]
    x++ means use x and then increment

    ++ x -> x = x + 1;     [Pre increment]
    ++x means first increment then use x
    
    x --   ->   x = x - 1;    [Post decrement]

    -- x   ->   x = x - 1;    [Pre decrement]
    */

   int x = 5;
   printf("%d\n",x);
   x++;
   printf("%d\n",x);
   ++x;
   printf("%d\n",x);

    printf("%d\n",x++);
    printf("%d\n",++x);

    return 0;
}