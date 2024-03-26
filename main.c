#include <stdio.h>

void studentRecords();
int search();
//void add();
//void deleteRecord();
//void update();
//void exit();

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

        printf("Enter your choice :\n");
        scanf("%u",&choice);

        switch(choice)
        {
            case 1:studentRecords();
            break;
            case 2:search();
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

    char name1[30], name2[30], name3[30];
    strcpy(name1,"Anu");
    strcpy(name2,"Asha");
    strcpy(name3,"Ram");
    int reg_No[]={01,02,03};
    char DOB1[50],DOB2[50],DOB3[50];
    strcpy(DOB1,"12/02/2010");
    strcpy(DOB2,"10/8/2010");
    strcpy(DOB3,"6/6/2010");

    printf("Student 1:\n \n Name of the student: %s \n Registration NO: %d \n DOB : %s\n------------------\n",name1,reg_No[0],DOB1);
    printf("Student 2:\n \n Name of the student: %s \n Registration NO: %d \n DOB : %s\n------------------\n",name2,reg_No[1],DOB2);
    printf("Student 3:\n \n Name of the student: %s \n Registration NO: %d \n DOB : %s\n------------------\n",name3,reg_No[2],DOB3);

}


int search(int r)
{
        void studentRecords();
        int reg_No[3];
        char name1[50],name2[50],name3[50];
        char DOB1[50],DOB2[50],DOB3[50];

        printf("Enter Register Number of the student: \n");
        scanf("%d\n",&r); //r is the register number

        switch(r)
        {
            if(r==1)
            {
                studentRecords();
                printf("Student 1:\n \n Name of the student: %s \n Registration NO: %d \n DOB : %s\n------------------\n",name1,reg_No[0],DOB1);

            }
            else if(r==2)
            {
                studentRecords();
                printf("Student 2:\n \n Name of the student: %s \n Registration NO: %d \n DOB : %s\n------------------\n",name2,reg_No[2],DOB2);

            }
            else if(r==3)
            {
                studentRecords();
                printf("Student 3:\n \n Name of the student: %s \n Registration NO: %d \n DOB : %s\n------------------\n",name3,reg_No[2],DOB3);

            }
            else
            {
                printf("Enter a valid Register number\n");
            }


        }

}

