#include <stdio.h>

int main() {
    int mode,fee;
    char category;;

    printf("Enter course mode (1/2): ");
    scanf("%d", &mode);

    printf("Enter student category (R,S): ");
    scanf(" %c", &category);  

    switch (mode) {
        case 1:  
            switch (category) {
                case 'R':
                case 'r':
                    fee = 5000;
                    break;
                case 'S':
                case 's':
                    fee = 3000;
                    break;
                default:
                    printf("Invalid category");
                    return 0;
            }
            break;

        case 2:   
            switch (category) {
                case 'R':
                case 'r':
                    fee = 9000;
                    break;
                case 'S':
                case 's':
                    fee = 7000;
                    break;
                default:
                    printf("Invalid category");
                    return 0;
            }
            break;

        default:
            printf("Invalid course mode");
            return 0;
    }

    printf("Rs. %d", fee);
    return 0;
}
