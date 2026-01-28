#include <stdio.h>

int main() {
    int flightClass,weight;
    int charge;

    printf("Flight class (1/2): ");
    scanf("%d", &flightClass);

    printf("Baggage weight: ");
    scanf("%d", &weight);

    switch (flightClass) {
        case 1:   
            charge = weight * 300;
            printf("Rs.%d", charge);
            break;

        case 2:   
            if (weight <= 3) {
                printf("Free");
            } else {
                charge = (weight - 3) * 300;
                printf("Rs.%d", charge);
            }
            break;

        default:
            printf("Invalid flight class");
    }

    return 0;
}
