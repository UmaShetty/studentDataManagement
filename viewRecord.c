#include <stdio.h>
#include <string.h>
#include "sdm.h"


int viewRecord()
{
    FILE *file = fopen("Data.txt", "a");


    fprintf(file,"STUDENT DETAILS\n");
    for(int i=0;i<15;i++)
    {
        fprintf(file,"\nName of the student: %s\n",Student[i].name);
        fprintf(file,"Register Number of the student: %d\n",Student[i].reg_no);
        fprintf(file,"Age: %d\n",Student[i].age);
        fprintf(file,"Branch: %s\n",Student[i].branch);
        fprintf(file,"\n");
        printf("\nName of the student: %s\n",Student[i].name);
        printf("Register Number of the student: %d\n",Student[i].reg_no);
        printf("Age: %d\n",Student[i].age);
        printf("Branch: %s\n",Student[i].branch);
        printf("\n");
    }

    //file = fopen("Data.txt", "a");

    fclose(file);

    return 0;
}
