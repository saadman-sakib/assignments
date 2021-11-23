#include<stdio.h>

void swap(int* a ,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
}


int binary_search(int arr[], int l, int r,int x){
    if(r>=l) {
        int mid = (l+r)/2;
        if(arr[mid] == x)
            return mid;

        if(arr[mid] > x)
            return binary_search(arr,l,mid-1,x);
        else 
            return binary_search(arr,mid+1,r,x);
    }
    return -1;
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
    int funct(int x);
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[10] = {10,9,1,2,4,3,8,5,7,6};
    bubble_sort(b,10);
    //print b
    for(int i=0;i<10;i++)
        printf("%d ",b[i]);
    printf("\n%d\n",binary_search(a,0,9,5));
    funct(5);
}

int funct(int x){
    printf("hello");
}