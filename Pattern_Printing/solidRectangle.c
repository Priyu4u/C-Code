#include <stdio.h>
int main( ){
    /*
        Print the given pattern
        * * * * *
        * * * * *
        * * * * *
    */ 
   int rows,columns;
   printf("Enter number of rows : ");
   scanf("%d",&rows);
   printf("Enter number of columns : ");
   scanf("%d",&columns);

   for(int i=1; i<=rows; i++){      // outer loop -> number of lines 
        for(int j=1; j<=columns; j++){    // inner loop -> number of stars in each line
            printf("* ");
        }
        printf("\n");
   }

    return 0;
}