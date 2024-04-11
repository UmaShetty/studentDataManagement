#include <stdio.h>
#include <string.h>
#include "sdm.h"

struct student Student[15];

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
