#include <stdio.h>
int main()
{
    int m, n;

    printf("rows, comoumns:");
    scanf("%d %d", &m, &n);

    int matrix1[m][n];
    int matrix2[m][n];
    int sum[m][n];
    printf("first matrix\n");
    printf("print elements:");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("second matrix\n");
    printf("print elements:");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("matrx 1:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("matrx 2:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("sum:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
