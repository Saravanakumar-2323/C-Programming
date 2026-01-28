#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int decimal=0;
    int base=1;

    for(;n>0;){
       int rem = n%10;
       decimal = decimal + rem * base;
       base*=2;
       n/=10;
    }
    printf("%d",decimal);
    return 0;
}