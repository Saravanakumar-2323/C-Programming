#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int sum=0;
    int check = n;

    for(;n!=0;){
        int rem = n%10;
        int temp = 1;
        for(int i=1;i<=3;i++){
            temp*=rem;
        }
        sum+=temp;
        n/=10;
    }
    if(check==sum){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}