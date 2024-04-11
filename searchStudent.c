#include <stdio.h>
#include <string.h>
#include "sdm.h"

struct student Student[15];

//user defined function to search for a particular student using their name
int searchStudent()
{
    char sName[50];
    printf("Enter Name of the student: ");
    scanf("%s",sName);

    char name;

    int found=0;
    for(int i=0;i<15;i++)
    {
        if(strcmp(Student[i].name,sName)==0)
        {
            printf("\nName of the student: %s\n",Student[i].name);
            printf("Register Number of the student: %d\n",Student[i].reg_no);
            printf("Branch: %s\n",Student[i].branch);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("Student data not found");
    }
}

