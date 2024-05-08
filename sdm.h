#ifndef SDM_H
#define SDM_H


#include <stdio.h>

struct student{
    int sl_No; //serial number
    char name[50]; //name of the student
    int reg_no; //register number of the student
    int age;
    char branch[50];
};

struct student Student[15] = {{1,"stdA",01,20,"CSE"},{2,"stdB",02,21,"CSE"},{3,"stdC",03,20,"ECE"},{4,"stdD",04,19,"CSE"},
{5,"stdE",05,20,"ECE"},{6,"stdF",06,21,"CSE"},{7,"stdG",07,21,"ECE"},{0x8,"stdH",0x8,20,"CSE"},
{0x9,"stdI",0x9,19,"CSE"},{0xA,"stdJ",0xA,20,"EEE"},{0xB,"stdK",0xB,21,"ECE"},{0XC,"stdL",0xC,20,"CSE"},
{0xD,"stdM",0xD,19,"ECE"},{0xE,"stdN",0xE,21,"ECE"},{0xF,"stdO",0xF,22,"CSE"}};

struct Student1 {
    char name[50];
    int reg_no;
    int age;
    char branch[50];
}st;



int viewRecord();
int searchStudent();
int addStudent();
int countStudent();

#endif
