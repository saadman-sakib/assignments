#include<stdio.h>

int main()
{
    int n;
    char s;

    printf("enter number and character:");
    scanf("%d %c", &n, &s);

    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < n-i; k++)
        {
            printf("  ");
        }
        
        for (int j = 1; j <= 2*i-1; j++)
        {
            printf("%c ", s);
        }
        printf("\n");
    }

    for (int i = n-1; i >= 1; i--)
    {
        for (int k = 0; k < n-i; k++)
        {
            printf("  ");
        }
        
        for (int j = 1; j <= 2*i-1; j++)
        {
            printf("%c ", s);
        }
        printf("\n");
    }

    return 0;
}