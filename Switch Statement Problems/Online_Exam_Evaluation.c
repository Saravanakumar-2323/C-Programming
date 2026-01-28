#include <stdio.h>

int main() {
    int attempt, marks;

    printf("Attempt number(1 to 3): ");
    scanf("%d", &attempt);
    printf("Marks: ");
    scanf("%d", &marks);

    switch (attempt) {
        case 1:
            if (marks >= 80)
                printf("Excellent");
            else
                printf("Not Qualified");
            break;

        case 2:
            if (marks >= 60)
                printf("Good");
            else
                printf("Not Qualified");
            break;

        case 3:
            printf("Needs Improvement");
            break;

        default:
            printf("Invalid attempt number");
    }

    return 0;
}
