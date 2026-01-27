#include<stdio.h>
int main() {
    int room;
    char season;
    printf("Room Type(1/2): ");
    scanf("%d",&room);
    printf("Season(A/B/C/D): ");
    scanf("%c ",&season);

    switch(room){
        case 1:
            if(season == 'A'){
                printf("Rs.2500");
            }
            else{
                printf("Rs.2000");
            }
            break;
        
        case 2:
            if(season == 'C'){
                printf("Rs.4000");
            }
            else{
                printf("Rs.3000");
            }
            break; 
            
        default:
            printf("Unavailable Room Type");
            break;           
    }
    return 0;
}