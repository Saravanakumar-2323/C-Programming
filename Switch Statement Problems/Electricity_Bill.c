#include<stdio.h>
int main(){
    int type,units;
    printf("Type 1 or Type 2: ");
    scanf("%d",&type);
    printf("Units: ");
    scanf("%d",&units);
    int cost;
    int sub;

    switch(type){
        case 1:
            if(units <= 100){
                cost=units*3;
                printf("Bill Rs.%d",cost);
            }
            else{
                cost=100*3 + (units-100)*5;
                sub = (units-100)*1;
                printf("Bill Rs.%d",cost-sub);
            }
            break;

        
        case 2:
            if(units <=100){
                cost=units*7;
                printf("Bill Rs.%d",cost);
            }
            else{
                cost=100*7 + (units-100)*10;
                printf("Bill Rs.%d",cost);
            }
            break;

        default:
            printf("Wrong Type");
    }
    return 0;
}