void deleteRecord()
{
    int a;
    printf("Enter the Roll Number which you want to delete\n");
    scanf("%d", &a);
    for (int i = 1; i <= 15; i++)
    {
        if (a == Student[i].reg_no)
        {
            for (int j = i; j < 15; j++)
                Student[j] = Student[j + 1];
            i--;
        }
    }
    printf("The Roll Number is removed Successfully\n");
}
