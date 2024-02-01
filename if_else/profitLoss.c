#include <stdio.h>
int main( ){
    // if cost price and selling price of an item is entered through the keyboard, WAP to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss incurred .

    int CP, SP, profit ,loss;
    printf("Enter cost price : ");
    scanf("%d",&CP);
    printf("Enter selling price : ");
    scanf("%d",&SP);

    if(CP < SP){
        profit = SP - CP;
        printf("Profit of %d",profit);
    }
    else if(CP > SP){
        loss = CP - SP;
        printf("Loss of %d",loss);
    }
    else{
        printf("Neither profit nor loss");
    }
    return 0;
}