#include<stdio.h>


struct Student{
    char name[20];
    int roll;
};

int main(){

    struct Student student;

    printf("Enter Name of student : ");
    scanf("%s", &student.name);

    printf("Enter roll of student : ");
    scanf("%d", student.roll);

    printf("Success fully Entered student.name = %s , student.roll = %d", student.name, student.roll);

    return 0;
}