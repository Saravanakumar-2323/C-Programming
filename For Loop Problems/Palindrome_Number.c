#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int rev=0;
    int check = n;

    for(;n!=0;){
        int rem = n%10;
        rev = rev * 10 + rem;
        n /=10;
    }
    if(rev == check){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}