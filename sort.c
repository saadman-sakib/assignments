#include<stdio.h>

int main()
{


    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int temp;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <n-i+1; j++)
        {
            if (a[j] < a[j-1])
            {
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }   
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    


    return 0;
}
