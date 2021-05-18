#include<stdio.h>


void swap (a, b)
{
    int temp = a;
    a = b;
    b = temp;
}


int main()
{
    int x = 9;
    int *y;
    y = &x;


    char m = 'a';
    char *n;
    n = &m;

    printf("%d", (*(&(*y))));
}