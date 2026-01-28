#include <stdio.h>

int main() {
    int category,distance;

    printf("User category (1/2: ");
    scanf("%d",&category);

    printf("Distance travelled: ");
    scanf("%d",&distance);

    switch (category) {
        case 1:  
            if (distance <= 30)
                printf("Eligible");
            else
                printf("Eligible with Extra Fee");
            break;

        case 2:   
            if (distance <= 30)
                printf("Eligible");
            else
                printf("Not Eligible");
            break;

        default:  
            if (distance <= 30)
                printf("Eligible");
            else
                printf("Not Eligible");
    }

    return 0;
}
