#include<stdio.h>

int main(){
    int num_std,num_teams;
    printf("Enter number of students:");
    scanf("%d",&num_std);
    printf("Enter number of teams:");
    scanf("%d",&num_teams);
    int num_left = num_std%num_teams;
    printf("The number of student in each teams is: %d",(num_std-num_left)/num_teams);
    printf(" and left out is:%d",num_left);
}