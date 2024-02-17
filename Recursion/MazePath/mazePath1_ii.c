#include <stdio.h>
int maze(int n, int m){
    int rightWays = 0;
    int downWays = 0;
    if(n==1 && m==1) return 1;
    if(n==1){   // cannot go down
        rightWays += maze(n,m-1);
    }
    if(m==1){   // cannot go right
        downWays += maze(n-1,m);
    }
    if(n>1 && m>1){
        rightWays += maze(n,m-1);
        downWays += maze(n-1,m);
    }
    int totalWays = rightWays + downWays ;
    return totalWays ;
}
int main( ){
    int n, m;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    printf("Enter number of columns : ");
    scanf("%d",&m);
    int numOfWays = maze(n,m);
    printf("Number of ways to reach %d-th row and %d-th column = %d",n ,m , numOfWays);
    return 0;
}