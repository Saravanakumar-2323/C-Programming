#include <stdio.h>

int main() {
    int role,time;

    printf("Role (1/2): ");
    scanf("%d",&role);

    printf("Login time: ");
    scanf("%d",&time);

    switch (role) {
        case 1:   
            printf("Full Access");
            break;

        case 2:   
            if (time >= 9 && time <= 18)
                printf("Limited Access");
            else
                printf("Access Denied");
            break;

        default:
            printf("Invalid Role");
    }
    return 0;
}
