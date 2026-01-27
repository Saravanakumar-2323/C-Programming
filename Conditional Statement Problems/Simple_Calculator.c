#include<Stdio.h>
int main() {
    int a,b;
    char operator;
    scanf("%d %c %d",&a,&operator,&b);

    switch(operator) {
        case '+':
            printf("Result = %d",a+b);
            break;
        case '-':
            printf("Result = %d",a-b);
            break;
        case '*':
            printf("Result = %d",a*b);
            break;
        case '/':
            printf("Result = %d",a/b);
            break;
        default:
            printf("Invalid Operator");
        
    }
    return 0;
}