#include <stdio.h>

int main()
{
    int a;

    printf("number of rows for matrix:");
    scanf("%d", &a);
    int matrix1[a][a];
    printf("elements of matrix:\n");
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i == j)
            {
                if (matrix1[i][j] != 1)
                {
                    printf("Not an Identity Matrix\n");
                    return 0;
                }
            } else if(i != j)
            {
                if (matrix1[i][j] != 0)
                {
                    printf("Not an Identity Matrix\n");
                    return 0;
                }
            }
            
        }
    }

    printf("This is an Identity Matrix\n");
    return 0;
}
