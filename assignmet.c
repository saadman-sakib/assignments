#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);

    if (n%3 == 0)
    {
        if (n%5 == 0)
        {
            if (n%7 == 0)
            {
                printf("divisible by 3,5,7");
            }
            else
            {
                printf("divisible by 3, 5");
            }  
        } else if(n%7 == 0)
        {
            printf("divisible by 3, 7");
        } else
        {
            printf("divisible by 3");
        }
    } else if(n%5 == 0)
    {
        if (n%7 == 0)
        {
            printf("divisible by 5,7");
        }
        else
        {
            printf("divisible by 5");
        }
    } else if (n%7 == 0)
    {
        printf("divisible by 7");
    } else
    {
        printf("divisible by none");
    }
}

