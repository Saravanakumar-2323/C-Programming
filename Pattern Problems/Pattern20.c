#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }

        int space = 10-(i*2);
        for(int s=0;s<space;s++){
            printf(" ");
        }

        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("**********\n");
    for(int i=1;i<=4;i++){
        for(int j=i;j<=4;j++){
            printf("*");
        }
        
        int space = i*2;
        for(int s=0;s<space;s++){
            printf(" ");
        }

        for(int j=i;j<=4;j++){
            printf("*");
        }
        printf("\n");
    }
}