#include <stdio.h>

int main() {
    int Type,hours;
    int rate;

    printf("Enter vehicle type (1/2): ");
    scanf("%d", &Type);

    printf("Enter parking hours: ");
    scanf("%d", &hours);

    switch (Type) {
        case 1:
            rate = 10;   
            break;

        case 2:
            rate = 20;  
            break;

        default:
            rate = 20;
            break;   
    }

    printf("Rs.%d", rate * hours);
    return 0;
}
