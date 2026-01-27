#include<stdio.h>
int main() {
    int amt,speed;
    printf("Order Amount: ");
    scanf("%d",&amt);
    printf("Delivery Speed(1/2): ");
    scanf("%d",&speed);

    switch (speed)
    {
    case 1:
        printf("Delivery Charge Rs.50");
        break;
        
    case 2:
        if(amt < 1000)
            printf("Delivery Charge Rs.100");
        else
            printf("No Delivery Charge");
        break;

    default:
        printf("Unaivalable Option");
        break;
    }
}