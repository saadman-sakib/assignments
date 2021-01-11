// #include <stdio.h>

// int main()
// {
//     int n, min, max;

//     scanf("%d", &n);

//     int array[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &array[i]);
//     }

//     min = array[0];
//     max = array[0];

//     for (int i = 0; i < n; i++)
//     {
//         if (array[i] > max)
//         {
//             max = array[i];
//         }

//         if (array[i] < min)
//         {
//             min = array[i];
//         }
//     }

//     printf("maximum:%d minimum%d\n", max, min);

//     return 0;
// }



#include<stdio.h>

int main()
{
    int n, temp;
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n/2; i++)
    {
        temp = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
