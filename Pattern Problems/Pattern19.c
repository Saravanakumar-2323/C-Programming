#include<stdio.h>
int main() {
    printf("**********\n");
    for(int i=1;i<=4;i++){
        for(int j=i;j<=4;j++){
            printf("*");
        }

        int spaces = i*2;
        for (int s=0;s<spaces;s++) {
            printf(" ");
        }

        for(int j=i;j<=4;j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }

        int spaces = 10-(i*2);
        for (int s=0;s<spaces;s++) {
            printf(" ");
        }

        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("**********");
    return 0;
}