#include<stdio.h>


struct Student
{
    char name[20];
    int roll;
    char email[50];
    float percentage;

    struct DOB
    {
        int day;
        int month;
        int year;
    } dob;

};



int main(){

    struct Student students[5];
    int break_number;

    printf("Enter How much Students(< 5): ");
    scanf("%d", &break_number);

    for(int i; i<break_number; i++){

        printf("\n\nStudent Number[%d]\n", i);

        printf("Enter name:");
        scanf("%s", students[i].name);
        
        printf("Enter email:");
        scanf("%s", students[i].email);
        
        printf("Enter roll:");
        scanf("%d", &students[i].roll);
        
        printf("Enter dob(yyyy-dd-mm):");
        scanf("%d-%d-%d", &students[i].dob.year, &students[i].dob.day, &students[i].dob.month);

    }

    printf("\n\nSTUDENT RECORDS\n\n");

    for(int i; i<break_number; i++){

        printf("\n\nStudent Number[%d]\n", i);
        printf("\nName: %s", students[i].name);
        printf("\nEmail: %s", students[i].email);
        printf("\nRoll: %d", students[i].roll);
        printf("\nDOB: %d-%d-%d", students[i].dob.year, students[i].dob.day, students[i].dob.month);

    }
    return 0;
}