#include<stdio.h>
#include<string.h>

int main()
{
    char string[100];
    int n = 0;

    printf("string: ");
    gets(string);

    while (string[n]!='\0')
    {
        n++;
    }

    for (int i = 0; i < n/2; i++)
    {
        if (string[i] != string[n-i-1])
        {
            printf("not palindrome");
            return 0;
        }
    }
    printf("it's a palindrome");
}