#include <stdio.h>
#include <string.h>
#include "sdm.h"

struct student Student[15];
// Function to add a new student record
int addStudent() {

    int student=15;
    printf("Enter details of the new student:\n");
    printf("Name: ");
    scanf("%s", Student[student].name); // Assuming name is a string without spaces
    printf("Registration Number: ");
    scanf("%d", &Student[student].reg_no);
    printf("Branch: ");
    scanf("%s", Student[student].branch); // Assuming branch is a string without spaces
    student++;

    printf("Student record added successfully.\n");
}
