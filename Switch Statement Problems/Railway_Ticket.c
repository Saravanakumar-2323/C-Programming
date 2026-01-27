#include<stdio.h>
int main() {
    int class,age;
    printf("Class(1/2): ");
    scanf("%d",&class);
    printf("Age: ");
    scanf("%d",&age);
    int price;

    switch (class)
    {
    case 1:
        if(age<12){
            price = 300 * 0.50;
            printf("Fare Rs.%d",price);
        }
        else if(age>=60){
            price = 300 * 0.67;
            printf("Fare Rs.%d",price);
        }
        else{
            price = 300;
            printf("Fare Rs.%d",price);
        }
        break;

    case 2:
        printf("Fare Rs.1000");
        break;
    
    default:
        printf("Unavilable Type");
        break;
    }
    return 0;
}