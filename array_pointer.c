#include<stdio.h>

int main()
{
    int a[100];
    int length;

    printf("length of the array: ");
    scanf("%d", &length);

    printf("elements of the array: ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d",&a[i]);
    }
    

    int *p = a+length-1;

    for (int i = 0; i < length; i++)
    {
        printf("%d ", *p);
        p--;
    }
}