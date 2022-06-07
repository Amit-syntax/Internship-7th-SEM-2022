#include<stdio.h>

int main(){
    int roll;
    char name[10];
    char grade;
    float percentage;

    printf("\nEnter roll : ");
    scanf("%d",&roll);
    printf("\nEnter name : ");
    scanf("%s", name);
    printf("\nEnter grade : ");
    scanf(" %c",&grade);
    printf("\nEnter percentage : ");
    scanf("%f",&percentage);

    printf("\nroll : %d", roll);
    printf("\nname : %s", name);
    printf("\ngrade : %c", grade);
    printf("\npercentage : %f", percentage);

    return 0;
}