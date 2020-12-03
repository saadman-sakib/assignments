#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Multiplication table for %d\n",n);
    printf("******************\n");

    for (i = 1; i <= 10; i++)
    {
        printf("%dX%d = %d\n",n,i,n*i);
    }
    
    printf("******************");

    return 0;
}
