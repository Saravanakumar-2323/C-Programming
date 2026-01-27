#include<stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int qut = a/b;
    int rem = a%b;
    printf("Quotient=%d ",qut);
    printf("Remainder=%d",rem);
    return 0;   
}