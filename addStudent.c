#include <stdio.h>
#include <string.h>
#include "sdm.h"

struct Student {
    char name[50];
    int reg_no;
    int age;
    char branch[50];
}s;

// Function to add a new student record
int addStudent()
{
    FILE *file = fopen("Data.txt", "a");

    printf("Enter details of the new student:\n");

    printf("Name: ");
    fgets(s.name,sizeof(s.name),stdin);
    printf("Registration Number: ");
    scanf("%d",&s.reg_no);
    printf("Age: ");
    scanf("%d",&s.age);
    printf("Branch: ");
    scanf("%s",s.branch);


    fprintf(file, "Name of the student: %s \n", s.name);
    fprintf(file, "Register Number: %s \n", s.reg_no);
    fprintf(file, "Age: %d \n", s.age);
    fprintf(file, "Branch: %s \n", s.branch);

    printf("Student record added successfully.\n");

    fclose(file);
    return 0;
}
