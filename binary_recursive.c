#include <stdio.h>

int bin_search(int a[100], int low, int high, int search)
{

    int mid = (high + low) / 2;
    if (high < low)
    {
        return -1;
    }
    if (a[mid] == search)
    {
        return mid;
    }
    else if (a[mid] < search)
    {
        return bin_search(a, mid+1, high, search);
    }
    else if (a[mid] > search)
    {
        return bin_search(a, low, mid-1, search);
    }
}

int main()
{
    int n,x;
    int array[100];
    printf("array length:");
    scanf("%d", &n);
    printf("your array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("what do you want to search:");
    scanf("%d", &x);
    
    int index = bin_search(array, 0, n-1, x);

    if (index == -1)
    {
        printf("your element is not in the array");
    } else
    {
        printf("index: %d", index);
    }
    return 0;
}
