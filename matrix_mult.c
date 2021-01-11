#include <stdio.h>

int main()
{
    int a, b, m;

    printf("rows, comoumns for 1st matrix:");
    scanf("%d %d", &a, &m);
    int matrix1[a][m];
    int sum = 0;
    printf("elements of first matrix:");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("comoumns for 2nd matrix:");
    scanf("%d", &b);
    int matrix2[m][b], matrix[a][b];
    printf("elements of 2nd matrix:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < m; k++)
            {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            matrix[i][j] = sum;
            sum = 0;
        }
    }

    printf("multiplication: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}