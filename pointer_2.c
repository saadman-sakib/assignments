#include<stdio.h>


int* array(int n)
{
    int a[n];

    for(int i=0; i<n; i++)
    {
        a[i] = i;
    }

    return a;
}


void main()
{
    int* m = array(6);
    printf("%d",m[2]);
}



// int main()
// {

//     int a = 10;
//     int b = 20;

//     printf("a = %d b = %d\n",a,b);

//     int *p1;
//     int *p2;

//     p1 = &a;
//     p2 = &b;

//     int temp = *p1;

//     *p1 = *p2;
//     *p2 = temp;

//     printf("a = %d b = %d",a,b);

// }


// int sum(int *a, int *b)
// {
//     return *a + *b;
// }

// int main()
// {
//     int a = 10;
//     int b = 20;

//     int *p1;
//     int *p2;

//     p1 = &a;
//     p2 = &b;

//     int c;
//     int *p3;
//     p3 = &c;

//     *p3 = *p1 + *p2;


//     printf("%d",c);

// }