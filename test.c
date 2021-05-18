#include<stdio.h>

void swap(int a ,int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void change(int a[])
{
    int temp;
    temp = a[1];
    a[1] = a[2];
    a[2] = temp;
}

void main()
{
    int a[] = {1,2,3,4};

    change(a);

    for (int i = 0; i < 4; i++)
    {
        printf("%d ",a[i]);
    }
}