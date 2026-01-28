#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int isPrime;


    for(int i=2;i<=n;i++){
        isPrime = 1;

        for (int j=2;j<i;j++){
            if(i%j==0) {
                isPrime = 0;
                break;
            }
        }
    }
    if(isPrime == 1){
        printf("Prime");
    } 
    else{
        printf("Not Prime");
    }
    return 0;   
}