#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sdm.h"

int addStudent() {

    struct student *Student = (struct student *)malloc(Max_students * sizeof(struct student)); // Allocate memory for the new student

    if (Student == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    FILE *file = fopen("Data.txt", "a");

    if (file == NULL) {
        printf("Error opening file.\n");
        free(Student); // Free allocated memory on error
        return 1;
    }

    printf("Add the Student's Details\n");
    printf("-------------------------\n");

    printf("Name of the student: ");
    scanf("%s", Student->name);

    printf("Registration number: ");
    scanf("%d", &Student->reg_no);

    printf("Age: ");
    scanf("%d", &Student->age);  // Corrected to read integer for age

    printf("Branch enrolled: ");
    scanf("%s", Student->branch);

    printf("\nStudent record added successfully.\n");

    fprintf(file, "\nName of the student: %s\n", Student->name);
    fprintf(file, "Register Number of the student: %d\n", Student->reg_no);
    fprintf(file, "Age: %d\n", Student->age);
    fprintf(file, "Branch: %s\n", Student->branch);
    fprintf(file, "\n");
    fclose(file);


    return 0;
}
