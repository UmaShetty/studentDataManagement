#include <stdio.h>
#include <string.h>
#include "sdm.h"

struct Student {
    char name[50];
    int reg_no;
    int age;
    char branch[50];
};

// Function to add a new student record
int addStudent()
{
    int num;

    FILE *file = fopen(FILENAME, "a");

    int count = countStudent();
    printf("\n");

    struct Student newStudent;

    printf("Enter details of the new student:\n");

    printf("slNo: %d\n",count+1);

    printf("Name: ");
    scanf("%s\n", newStudent.name);

    printf("Registration Number: ");
    scanf("%d\n", &newStudent.reg_no);

    printf("Age: ");
    scanf("%d\n", &newStudent.age);

    printf("Branch: ");
    scanf("%s\n", newStudent.branch);

    fprintf(file, "%s %d %d %s\n", newStudent.name, newStudent.reg_no, newStudent.age, newStudent.branch);

    printf("Student record added successfully.\n");

    fclose(file);
    return 0;
}
