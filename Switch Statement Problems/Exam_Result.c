#include<stdio.h>
int main() {
    int marks,attendance;
    printf("Marks: ");
    scanf("%d",&marks);
    printf("Attendance: ");
    scanf("%d",&attendance);

    if(attendance >=75 && marks >=75)
        printf("Distinction");
    else if(attendance >=75 && marks >50)
        printf("Pass");
    else if(attendance >=75 && marks < 50)
        printf("Fail");
    else
        printf("Fail");
        
    return 0;
}