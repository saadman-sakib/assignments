#include<stdio.h>

struct student
{
    char name[20];
    int marks[3];
    float average;
};

void bubble_sort(struct student array[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if (array[j].average > array[j+1].average)
            {
                struct student temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}


int main()
{
    struct student s[3];
    int i;
    char temp;
    for (i = 0; i < 3; i++)
    {
        //for resolving gets issue...
        if (i != 0)
        {
            temp = getchar();
        }
        printf("Student %d info:\n", i);
        printf("Name: ");
        gets(s[i].name);
        s[i].average = 0;
        printf("Marks: ");
        //taking numbers as inputs, and adding them in avaerage
        // And finally dividing the total number by 3 to get the actual average
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &s[i].marks[j]);
            s[i].average += s[i].marks[j];
        }
        s[i].average /= 3;
    }

    bubble_sort(s,3);

    printf("\n\n");
    printf("Sorted student info:\n\n");
    for (i = 0; i < 3; i++)
    {
        printf("Student %d info:\n",i);
        printf("Name: %s\n", s[i].name);
        printf("Marks: ");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", s[i].marks[j]);
        }
        printf("\n");
        printf("%.2f\n\n", s[i].average);
    }
    
    return 0;
}
