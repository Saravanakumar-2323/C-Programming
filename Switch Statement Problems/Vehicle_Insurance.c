#include <stdio.h>

int main() {
    int category, years;
    int price;

    printf("Enter vehicle category (1,2): ");
    scanf("%d", &category);

    printf("Enter vehicle years: ");
    scanf("%d", &years);

    switch (category) {
        case 1:
            if (years <= 5)
                price = 1500;
            else
                price = 2500;
            break;

        case 2: 
            if (years <= 5)
                price = 4000;
            else
                price = 6000;
            break;

        default:
            printf("Invalid vehicle category");
            return 0;
    }

    printf("Rs. %d", price);
    return 0;
}
