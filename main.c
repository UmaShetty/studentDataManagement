#include <stdio.h>

void studentRecords();
//void search();
//void add();
//void deleteRecord();
//void update();
//void exit();

int main()
{
    int choice;
    printf("STUDENT DATABASE MANAGEMENT\n");
    printf("---------------------------\n");

    do{

        printf("1.Student Records\n");
        printf("2.Search for a student\n");
        printf("3.Add a Student\n");
        printf("4.Delete a Record\n");
        printf("5.Update Student Details\n");
        printf("6.Exit\n");

        printf("Enter your choice :\n");
        scanf("%u",&choice);

        switch(choice)
        {
            case 1:studentRecords();
            break;
            case 2://search();
            break;
            case 3://add();
            break;
            case 4://deleteRecord();
            break;
            case 5://update();
            break;
            case 6://exit();
            break;
            default:printf("Invalid Choice.Please enter a valid option.\n");
        }
    }while(choice!=6);
}

void studentRecords()
{
    //char name[50];
    printf("\n\n");
    puts("STUDENT RECORDS\n");
    puts("---------------------------\n");

    puts("1.Name of the student: Anu\n");
    puts("  Roll No. :01\n");
    puts("---------------------------\n");

    puts("2.Name of the student: Asha\n");
    puts("  Roll No. :02\n");
    puts("---------------------------\n");

    puts("3.Name of the student: Ram\n");
    puts("  Roll No. :03\n");
    puts("---------------------------\n");

}
