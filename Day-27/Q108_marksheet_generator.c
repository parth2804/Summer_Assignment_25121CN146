#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks1, marks2, marks3;
    float total, percentage;
    char grade;
};

int main()
{
    struct Student s;

    printf("===== Marksheet Generator =====\n");

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter marks of Subject 1: ");
    scanf("%f", &s.marks1);

    printf("Enter marks of Subject 2: ");
    scanf("%f", &s.marks2);

    printf("Enter marks of Subject 3: ");
    scanf("%f", &s.marks3);

    s.total = s.marks1 + s.marks2 + s.marks3;
    s.percentage = s.total / 3;

    if (s.percentage >= 90)
        s.grade = 'A';
    else if (s.percentage >= 75)
        s.grade = 'B';
    else if (s.percentage >= 60)
        s.grade = 'C';
    else if (s.percentage >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';

    printf("\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("Subject 1   : %.2f\n", s.marks1);
    printf("Subject 2   : %.2f\n", s.marks2);
    printf("Subject 3   : %.2f\n", s.marks3);
    printf("Total Marks : %.2f\n", s.total);
    printf("Percentage  : %.2f\n", s.percentage);
    printf("Grade       : %c\n", s.grade);
    printf("===============================\n");

    return 0;
}