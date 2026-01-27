#include<stdio.h>
int main(){
    int loan,score;
    printf("Loan Type: ");
    scanf("%d",&loan);
    printf("Credit Score: ");
    scanf("%d",&score);

    switch (loan)
    {
    case 1:
        if(score>=700){
            printf("Approval");
        }
        else if(score>=650 && score <=699){
            printf("Manual Review");
        }
        break;

    case 2:
         if(score>=700){
            printf("Approval");
        }
        else if(score<700){
            printf("Rejected");
        }
        break;
    
    default:
        printf("Invalid Loan Type");
        break;
    }
    return 0;
}