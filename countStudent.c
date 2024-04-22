#include <stdio.h>
#include "sdm.h"

int countStudent()
{
    int count=0;
    for(int i=0;i<15;i++)
    {
        count++;
    }
    printf("Number of students: %d",count);
    return count;
}
