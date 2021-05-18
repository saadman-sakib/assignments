#include<stdio.h>
#include<string.h>

void int_to_string(int integer, char string[])
{
    int integer_array[10];
    int i = 0;
    while(integer != 0)
    {
        integer_array[i] = integer%10;
        i++;
        integer = integer/10;
    }
    string[i] = '\0';
    int length = i;
    while (i != 0)
    {
        string[length-i] = integer_array[i-1] + 48;
        i--;
    }
}

struct student
{
    char nickname[20];
    int roll;
    char name_with_roll[30];
};

int main()
{
    struct student array[10];
    char temp;
    printf("Input 10 students' info:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("input roll:");
        scanf("%d", &array[i].roll);
        temp = getchar();
        printf("input nickname:");
        gets(array[i].nickname);
    }
    
    for (int i = 0; i < 10; i++)
    {
        strcpy(array[i].name_with_roll, array[i].nickname);
        for (int j = 0; j < 10; j++)
        {
            if ( i!=j && strcmp(array[i].nickname, array[j].nickname) == 0)
            {
                char temp[20];
                int_to_string(array[i].roll, temp);
                strcat(array[i].name_with_roll, temp);
                break;
            }
        }
    }
    
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("nickname: %s\n", array[i].name_with_roll);
    }

    return 0;
}
