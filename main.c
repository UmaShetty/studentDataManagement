#include <stdio.h>
#include "sdm.h"
#include "viewRecord.c"
#include "searchStudent.c"
#include "addStudent.c"

//main function to display menu options
int main()
{
    int choice;
    printf("STUDENT DATABASE MANAGEMENT\n");
    printf("---------------------------\n");

    printf("1.Student Records\n");
    printf("2.Search for a student\n");
    printf("3.Add a Student\n");
    printf("4.Delete a Record\n");
    printf("5.Update Student Details\n");
    printf("6.Exit\n");


    do{

        printf("\nEnter your choice :\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:viewRecord();
            break;
            case 2:searchStudent();
            break;
            case 3:addStudent();
            break;
            case 4://deleteRecord();
            break;
            case 5://update();
            break;
            default:printf("Invalid Choice.Please enter a valid option.\n");
        }
    }while(choice!=5);

    return 0;
}



