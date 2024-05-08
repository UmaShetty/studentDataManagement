/*
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
*/
#include <stdio.h>
#include <string.h>

int addStudent() {
    FILE *file = fopen("Data.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return -1; // Return error code
    }

    printf("Add the Students Details\n");
    printf("-------------------------\n");

    printf("Enter the first name of student: \n");
    scanf("%s", st.name);
    printf("Enter the Roll Number: \n");
    scanf("%d", &st.reg_no);
    printf("Enter the age of student: \n");
    scanf("%d", &st.age);
    printf("Enter the branch of student: \n");
    scanf("%s", st.branch);

    // Write student details to the file
    fprintf(file, "Name of the student: %s \n", st.name);
    fprintf(file, "Register Number: %d \n", st.reg_no);
    fprintf(file, "Age: %d \n", st.age);
    fprintf(file, "Branch: %s \n\n", st.branch);

    printf("Student records added successfully.\n");

    // Check if the file closes successfully
    if (fclose(file) == EOF) {
        printf("Error closing file.\n");
        return -1; // Return error code
    }

    return 0; // Return success
}
