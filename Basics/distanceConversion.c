#include <stdio.h>
int main(){
    // Ques: WAP to convert km into m,feet, inches and centimeter taking input from user in km.
    float km, m, inches, feet, cm ;
    printf("Enter distance(in km) : ");
    scanf("%f",&km);

    m = km*1000;
    cm = 100*m;
    inches = cm/2.54 ;
    feet = inches/12;
    printf("Distance in meters = %f\n",m);
    printf("Distance in centimeter = %f\n",cm);
    printf("Distance in feet = %f\n",feet);
    printf("Distance in inches = %f\n",inches);

    return 0;
}