#include<stdio.h>
#include<string.h>

int main()
{
    int i = 0, j = 0;
    char string1[100], string2[100], string3[200];
    printf("string1: ");
    gets(string1);
    printf("string2: ");
    gets(string2);
    
    while (string1[i] != '\0')
    {
        if (string1[i] != string2[i])
        {
            printf("not same");
            return 0;
        }
        
        i++;
    }

    if (string2[i]!='\0')
    {
        printf("not same");
        return 0;
    }

    printf("same");

    return 0;
}
