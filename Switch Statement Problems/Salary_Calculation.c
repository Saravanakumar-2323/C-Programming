#include <stdio.h>

int main()
{
    int role, exp;
    printf("Role (1/2): ");
    scanf("%d",&role);
    printf("Experience: ");
    scanf("%d",&exp);

    switch (role)
    {
        case 1:
        {
            int salary = 50000;
            int total_salary = salary + exp * 5000;

            if (exp >= 3)
                printf("Salary Rs.%d", total_salary);
            else
                printf("Salary Rs.%d", salary);
            break;
        }

        case 2:
        {
            int salary = 35000;
            int total_salary = salary + exp * 5000;

            if (exp >= 3)
                printf("Salary Rs.%d", total_salary);
            else
                printf("Salary Rs.%d", salary);
            break;
        }

        default:
            printf("Unavailable Option");
    }
    return 0;
}
