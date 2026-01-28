#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int temp = n;

    for(;n!=0;){
        int rem = n%10;
        int fact = 1;
        for(int i=1;i<=rem;i++){
            fact*=i;
        }
        sum+=fact;
        n/=10;
    }
    if(sum ==temp ){
        printf("Yes");
    }
    else{
    printf("No");
    }
    return 0;
}