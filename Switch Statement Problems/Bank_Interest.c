#include<stdio.h>
int main() {
    int type,years;
    printf("Account Type(1,2): ");
    scanf("%d",&type);
    scanf("%d",&years);

    switch (type)
    {
    case 1:
        printf("Intrest Percent:4");
        break;
    case 2:
        if(years<=3) 
            printf("Intrest Percent:5");
        else
            printf("Intrest Percent:7");
        break;
    default:
        printf("Unaivalable Type");
        break;
    }
    return 0;
}