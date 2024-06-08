#include <stdio.h>
#include "sdm.h"
#include "viewRecord.c"
#include "searchStudent.c"
#include "addStudent.c"
#include "deleteRecord.c"


//main function to display menu options
int main()
{
    int choice;
    printf("STUDENT DATABASE MANAGEMENT\n");
    printf("---------------------------\n");

    printf("1.View Student Records\n");
    printf("2.Search for a student\n");
    printf("3.Add a Student\n");
    printf("4.Delete a Student\n");
    printf("5.Exit\n");


    do{

        printf("\n\nEnter your choice :\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:viewRecord();
            break;
            case 2:searchStudent();
            break;
            case 3:addStudent();
            break;
            case 4:deleteRecord();
            break;
            case 5:printf("......Exiting the Program.......\n");
            break;
            default:printf("Invalid Choice.Please enter a valid option.\n");
        }
    }while(choice!=5);

    return 0;
}



