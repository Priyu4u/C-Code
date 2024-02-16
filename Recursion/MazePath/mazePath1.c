#include <stdio.h>
int maze(int cr, int cc, int er, int ec){
    int rightWays = 0;
    int downWays = 0;
    if(cr == er && cc == ec) return 1;
    if(cr == er){   // only rightWays call
        rightWays += maze(cr, cc+1, er, ec);
    }
    if(cc == ec){   // only downWays call
        downWays += maze(cr+1, cc, er, ec);
    }
    if(cr<er && cc<ec){
        rightWays += maze(cr, cc+1, er, ec);
        downWays += maze(cr+1, cc, er, ec);
    }
    // int rightWays = maze(cr, cc+1, er, ec);
    // int downWays = maze(cr+1, cc, er, ec);
    int numOfWays = rightWays + downWays ;
}
int main( ){
    int n, m;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    printf("Enter number of columns : ");
    scanf("%d",&m);
    int numOfWays = maze(1,1,n,m);
    printf("Number of ways to reach %d-th row and %d-th column = %d",n ,m , numOfWays);
    return 0;
}