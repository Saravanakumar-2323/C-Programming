#include<stdio.h>
int main(){
    int type,trip,amount;
    printf("Vehicle Type: ");
    scanf("%d",&type);
    printf("Trips: ");
    scanf("%d",&trip);

    switch (type)
    {
    case 1:
        if(trip==1){
            amount = 100;
        }
        else if(trip>=2 && trip<=30){
            amount=800;
        }
        break;

    case 2:
        amount = trip*240;
        break;
    
    default:
        printf("Invalid Vehicle Type");
        break;
    }
    printf("Rs.%d",amount);
    return 0;
}