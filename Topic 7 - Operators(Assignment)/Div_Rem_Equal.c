#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int div = a / b;
    int rem = a % b;
    printf("%d %d", div, rem);
    return 0;
}
