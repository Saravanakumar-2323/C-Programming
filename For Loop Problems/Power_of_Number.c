#include<stdio.h>
#include<math.h>
int main() {
    int n,p;
    scanf("%d %d",&n,&p);

    int power = pow(n,p);
    printf("%d",power);
    
    return 0;
}