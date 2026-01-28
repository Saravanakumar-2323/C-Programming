#include<stdio.h>
int main() {
    int n,res;
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        res = n*i;
        printf("%d ",res);
    }
    return 0;
}