#include<stdio.h>
int main() {
    int n,p;
    scanf("%d %d",&n,&p);
    int result = 1;
    for(int i=1;i<=p;i++){
        result = result * n;
    }
    printf("%d",result);
    return 0;
}