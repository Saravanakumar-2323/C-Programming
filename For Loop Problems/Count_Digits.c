#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i;

    for(i=0;n!=0;i++){
        n = n/10;
    }
    printf("%d",i);
    return 0;
}