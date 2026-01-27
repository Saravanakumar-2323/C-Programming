#include<stdio.h>
int main() {
    int plan;
    printf("Plan(1/2): ");
    scanf("%d",&plan);
    float data;
    printf("Used Data: ");\
    scanf("%f",&data);

    switch (plan)
    {
    case 1:
        if(data < 1.0)
            printf("Normal Speed");
        else
            printf("Speed Reduced");
        break;

    case 2:
        if(data < 2.0)
            printf("Normal Speed");
        else
            printf("Extra Charges Applied");
    
    default:
        printf("Unavailable Option");
        break;
    }
    }