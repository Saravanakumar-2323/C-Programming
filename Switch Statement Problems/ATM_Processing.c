#include<stdio.h>
int main() {
    int Ac_Type,Bal,Amt;
    printf("Account Type: ");
    scanf("%d",&Ac_Type);
    printf("Balance: ");
    scanf("%d",&Bal);
    printf("Withdrwal Amount: ");
    scanf("%d",&Amt);

    switch (Ac_Type)
    {
    case 1:
        if(Bal>=Amt)
            printf("Transaction Successful");
        else
            printf("Insufficient Balance");
        break;
    case 2:
        if(Amt<5000)
            printf("Transaction Successful");
        else
            printf("Limit Exceeded");
        break;
    
    default:
        printf("Unavaible Account Type");
        break;
    }
    return 0;
}