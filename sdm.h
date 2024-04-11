#ifndef SDM_H
#define SDM_H

#include <stdio.h>

struct student{
    int sl_No; //serial number
    char name[50]; //name of the student
    int reg_no; //register number of the student
    char branch[50];
};

struct student Student[15]={{1,"std_A",01,"CSE"},{2,"std_B",02,"CSE"},{3,"std_C",03,"ECE"},{4,"std_D",04,"CSE"},{5,"std_E",05,"ECE"},
{6,"std_F",06,"CSE"},{7,"std_G",07,"ECE"},{0x8,"std_H",0x8,"CSE"},{0x9,"std_I",0x9,"CSE"},{0xA,"std_J",0xA,"EEE"},
{0xB,"std_K",0xB,"ECE"},{0XC,"std_L",0xC,"CSE"},{0xD,"std_M",0xD,"ECE"},{0xE,"std_N",0xE,"ECE"},{0xF,"std_O",0xF,"CSE"}};


int viewRecord();
int searchStudent();
int addStudent();

#endif
