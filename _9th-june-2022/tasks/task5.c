#include<stdio.h>


struct Student{

    int roll;
    char name[20];

    struct DOB
    {
        int month;
        int day;
        int year;
    };
    
    struct DOB dob;
};

int main(){

    struct Student student;

    printf("Enter Name of student: ");
    scanf("%s", &student.name);

    student.roll = 1901010147;

    student.dob.day = 10;
    student.dob.month = 4;
    student.dob.year = 1980;

    printf("\nAll other information is auto filled :-)");

    return 0;
}