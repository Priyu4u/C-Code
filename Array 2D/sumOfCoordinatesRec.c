#include <stdio.h>
int main( ){
    // Given a matrix 'a' of dimension n*m and two coordinates (l1,r1) and (l2,r2) . Return the sum of rectangle from (l1,r1) to (l2,r2) .
    int r ,c ;
    printf("Enter number of rows : ") ;
    scanf("%d",&r) ;
    printf("Enter number of columns : ") ;
    scanf("%d",&c) ;
    int arr[r][c] ;
    printf("Enter elements of matrix : \n") ;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]) ;
        }
    }
    int l1, r1, l2, r2 ;
    printf("Enter l1 and r1 : \n",l1,r1);
    scanf("%d %d",&l1, &r1) ;
    printf("Enter l2 and r2 : \n",l2,r2);
    scanf("%d %d",&l2, &r2) ;

    // checking if the coordinates are valid or not
    if (l1 < 0 || l1 >= r || r1 < 0 || r1 >= c || l2 < 0 || l2 >= r || r2 < 0 || r2 >= c) {
        printf("Invalid coordinates\n");
        return 1;
    }
    
    int sum = 0;
    for(int i=l1; i<=l2; i++){
        for(int j=r1; j<=r2; j++){
            sum = sum + arr[i][j] ;
        } 
    } 
    printf("Sum of matrix = %d",sum);
    return 0;
}