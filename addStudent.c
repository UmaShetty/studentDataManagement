#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "sdm.h"

#define MAX_STUDENTS 100

struct student students[MAX_STUDENTS];
int studentCount = 0;

int isValidName(const char *name) {
    for (int i = 0; name[i] != '\0'; i++) {
        if (!isalpha(name[i]) && !isspace(name[i]))
        {
            return 0;
        }
    }
    return 1;
}

int isValidBranch(const char *branch) {
    return (strcmp(branch, "ece") == 0 || strcmp(branch, "cse") == 0);
}

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Error: Maximum limit of students reached.\n");
        return;
    }

    struct student newStudent;

    while (1) {
        printf("Enter student name: ");
        scanf(" %[^\n]%*c", newStudent.name); // Read full line including spaces
        if (isValidName(newStudent.name)) {
            break;
        } else {
            printf("Invalid name. Name should only consist of alphabets and spaces.\n");
        }
    }

    while (1) {
        printf("Enter student registration number: ");
        if (scanf("%d", &newStudent.reg_no) == 1 && newStudent.reg_no > 15) {
            break;
        } else {
            printf("Invalid registration number. Please enter a valid number greater than 15.\n");
            while (getchar() != '\n'); // Clear the input buffer
        }
    }

    while (1) {
        printf("Enter student age: ");
        if (scanf("%d", &newStudent.age) == 1 && newStudent.age > 20) {
            break;
        } else {
            printf("Invalid age. Age must be greater than 20.\n");
            while (getchar() != '\n'); // Clear the input buffer
        }
    }

    while (1) {
        printf("Enter student branch (ece/cse): ");
        scanf("%s", newStudent.branch);
        if (isValidBranch(newStudent.branch)) {
            break;
        } else {
            printf("Invalid branch. Branch should be either 'ece' or 'cse'.\n");
        }
    }

    students[studentCount++] = newStudent;

    printf("\nStudent record added successfully.\n");

    FILE *file = fopen("Data.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    fprintf(file, "\nName of the student: %s\n", newStudent.name);
    fprintf(file, "Register Number of the student: %d\n", newStudent.reg_no);
    fprintf(file, "Age: %d\n", newStudent.age);
    fprintf(file, "Branch: %s\n", newStudent.branch);
    fprintf(file, "\n");

    fclose(file);

    printf("\nSTUDENT ADDED\n");
    printf("___________________\n");
    printf("\nName of the student: %s\n", newStudent.name);
    printf("Register Number of the student: %d\n", newStudent.reg_no);
    printf("Age: %d\n", newStudent.age);
    printf("Branch: %s\n", newStudent.branch);
    printf("___________________\n");
    printf("\n");
}
