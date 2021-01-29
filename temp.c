#include<stdio.h>
int compare(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0')
    {
        if (str1[i]>str2[i])
        {
            return 1;
        }
        else if (str2[i]>str1[i])
        {
            return 0;
        }
        else if(str2[i] == '\0')
        {
            return 1;
        }
        else
        {
            i++;
        }
    }
    return 0;
}



int main()
{
    printf("%d",compare("boy","good"));
    return 0;
}
