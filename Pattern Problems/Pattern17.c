#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        char c = 'A';
        for(int j=1;j<=i;j++){
            printf("%c ",c++);
        }

        char d = 'A'+i-2;
        for(int j=1;j<i;j++){
            printf("%c ",d--);
        }
        printf("\n");
    }
    return 0;
}