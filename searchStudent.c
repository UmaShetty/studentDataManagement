#include <stdio.h>
#include <string.h>
#include "sdm.h"

struct student Student[Max_students];
extern struct student students[Max_students];

//user defined function to search for a particular student using their name
int searchStudent()
{
    char sName[50];
    printf("Enter Name of the student: ");
    scanf("%s",sName);

    FILE *file = fopen("Data.txt","r");

    int found=0;

    for(int i=0;i<15;i++)
    {
        fscanf(file,"\nName of the student: %s\n",Student[i].name);
        fscanf(file,"Register Number of the student: %d\n",&Student[i].reg_no);
        fscanf(file,"Age: %d",&Student[i].age);
        fscanf(file,"Branch: %s\n",Student[i].branch);

        //Compares entered name with existing data
        if(strcmp(Student[i].name,sName) == 0)
        {
            printf("\nName of the student: %s\n",Student[i].name);
            printf("Register Number of the student: %d\n",Student[i].reg_no);
            printf("Age: %d\n",Student[i].age);
            printf("Branch: %s\n",Student[i].branch);
            found=1;
            break;
        }

    }

    for(int i=0;i<studentCount;i++)
    {
        fscanf(file,"\nName of the student: %s\n",students[i].name);
        fscanf(file,"Register Number of the student: %d\n",&students[i].reg_no);
        fscanf(file,"Age: %d",&students[i].age);
        fscanf(file,"Branch: %s\n",students[i].branch);

        //Compares entered name with existing data
        if(strcmp(students[i].name,sName) == 0)
        {
            printf("\nName of the student: %s\n",students[i].name);
            printf("Register Number of the student: %d\n",students[i].reg_no);
            printf("Age: %d\n",students[i].age);
            printf("Branch: %s\n",students[i].branch);
            found=1;
            break;
        }

    }

    fclose(file);

    if(!found)
    {
        printf("Student data not found");
    }
    return found;
}

