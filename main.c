#include <stdio.h>
#include <string.h>
#pragma pack(1)

int viewRecord();
int searchStudent();
//void addStudent();
//void deleteStudent();
//void updateRecord();
//void exit();

struct student{
    int sl_No; //serial number
    char name[50]; //name of the student
    int reg_no; //register number of the student
    char branch[50];
};

struct student Student[15]={{1,"std_A",01,"CSE"},{2,"std_B",02,"CSE"},{3,"std_C",03,"ECE"},{4,"std_D",04,"CSE"},{5,"std_E",05,"ECE"},{6,"std_F",06,"CSE"},{7,"std_G",07,"ECE"},{0x8,"std_H",0x8,"CSE"},{0x9,"std_I",0x9,"CSE"},{0xA,"std_J",0xA,"EEE"},{0xB,"std_K",0xB,"ECE"},{0XC,"std_L",0xC,"CSE"},{0xD,"std_M",0xD,"ECE"},{0xE,"std_N",0xE,"ECE"},{0xF,"std_O",0xF,"CSE"}};

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
        scanf("%u",&choice);

        switch(choice)
        {
            case 1:viewRecord();
            break;
            case 2:searchStudent();
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
    return 0;
}


//user defined function to view details of all the students
int viewRecord()
{
    printf("SL.No \t\t Name \t\t Register Number \t\t Branch\n");
    printf("---------------------------------------------------------------------------\n");
    for(int i=0;i<15;i++)
    {
        printf("%d \t\t %s \t\t\t %d \t\t\t %s\n",Student[i].sl_No,Student[i].name,Student[i].reg_no,Student[i].branch);
    }
    return 0;
}

//user defined function to search for a particular student using their name
int searchStudent()
{
    char sName[50];
    printf("Enter Name of the student: ");
    scanf("%s",sName);

    for(int i=0;i<15;i++)
    {
        if(strcmp(Student[i].name,sName)==0)
        {
            printf("\nName of the student: %s\n",Student[i].name);
            printf("Register Number of the student: %d\n",Student[i].reg_no);
            printf("Branch: %s\n",Student[i].branch);
        }
    }
}
