#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int end = n*2-1;

    for(int i=end;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(i%2!=0)
                printf("*");
        }
        printf("\n");
    }
    return 0;
}