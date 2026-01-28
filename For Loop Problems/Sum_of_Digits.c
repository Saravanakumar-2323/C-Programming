#include<stdio.h>
int main() {
    int n,res;
    scanf("%d",&n);
    int sum = 0;

    for(;n!=0;){
        res = n % 10;
        sum = sum + res;
        n = n / 10; 
    }
    printf("%d",sum);
    return 0;
}