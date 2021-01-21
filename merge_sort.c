#include<stdio.h>

int* merge_sort(int arr[], int array[], int n) {
    if (n == 1) {
        return array;
    }
    return merge(merge_sort(array),merge_sort())
}

int* merge(int array[],int a[], int n, int b[], int m) {
    int i = m+n;
    int temp = i;
    while (n!=0 && m!=0)
    {
        if (a[n-1] > b[m-1])
        {
            array[i-1] = a[n-1];
            n--;
        }
        else
        {
            array[i-1] = b[m-1];
            m--;
        }
        i--;
    }

    if (n == 0)
    {
        while (i!=0)
        {
            array[i-1] = b[i-1];
            i--;
        }
    }
    else if(m == 0)
    {
        while (i!=0)
        {
            array[i-1] = a[i-1];
            i--;
        }
    }

    return array;
}

int main()
{
    int a[4] = {1,3,8,9}, b[4] = {2,4,5,6};
    int arr[100];
    int* new;
    new = merge(arr,a,4,b,4);

    for (int i = 0; i < 8; i++)
    {
        printf("%d \n",new[i]);
    }
    return 0;
}
