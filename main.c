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
    char name[]={'Anu','Asha','Ram'};
    int reg_No[]={01,02,03};
    char DOB[]={'12/02/2010','10/8/2010','6/6/2010'};

    for(int i=0;i<(sizeof(name)/sizeof(char));i++)
    {
                printf("Name of the student: %c\n",name[i]);
                printf("Registration Number: %d\n",reg_No[i]);
                printf("D.O.B : %c\n",name[i]);
                printf("------------------------------------\n");
    }
}

int search(int r)
{
        printf("Enter Register Number of the student: \n");
        scanf("%d\n",&r); //r is the register number
        int reg_No[3];
        char name[3],DOB[3];

        if(r==1)
        {
            studentRecords(0);
            return name[0];
            return reg_No[0];
            return DOB[0];
        }
        else if(r==2)
        {
            studentRecords(1);
            return name[1];
            return reg_No[1];
            return DOB[1];
        }
        else if(r==3)
        {
            studentRecords(2);
            return name[2];
            return reg_No[2];
            return DOB[2];
        }
        else
        {
            printf("Enter a valid Register number\n");
        }
}
