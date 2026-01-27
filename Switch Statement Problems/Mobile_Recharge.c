#include <stdio.h>
int main() {
    int plan, payment;
    printf("Plan(1/2): ");
    scanf("%d", &plan);
    printf("Payment Mode(11/12/13): ");
    scanf("%d", &payment);

    switch (plan) {
        case 1:
            switch (payment) {
                case 11:
                case 12:
                    printf("Pay Rs.179");
                    break;
                case 13:
                    printf("Pay Rs.199");
                    break;
                default:
                    printf("Unavailable Option");
            }
            break;

        case 2:
            switch (payment) {
                case 11:
                case 12:
                    printf("Pay Rs.379");
                    break;
                case 13:
                    printf("Pay Rs.399");
                    break;
                default:
                    printf("Unavailable Option");
            }
            break;  

        default:
            printf("Unavailable Plan");
    }
    return 0;
}