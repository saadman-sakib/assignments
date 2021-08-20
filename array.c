#include<stdio.h>

int main() {
    int array[10];
    float sum=0;
    printf("print 10 numbers:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &array[i]);
    for (int i = 0; i < 10; i++)
        sum += array[i];
    printf("average: %.2f\n", sum/10);
    return 0;
}








/////////////////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>

// int main()
// {
//     int array[10];

//     int n=10;
//     int m=10;

//     printf("print 10 numbers:\n");

//     while (n != 0)
//     {   
//         n--;
//         scanf("%d", &array[n]);
        
//     }

//     printf("numbers:\n");

//     while(m != 0)
//     {
//         m--;
//         printf("%d ", array[m]);
//     }

//     printf("\n");

//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>

// int main()
// {
//     int array[10];

//     int n=10;
//     int m=10;

//     printf("print 10 numbers:\n");

//     while (n != 0)
//     {   
//         n--;
//         scanf("%d", &array[n]);
        
//     }

//     printf("numbers:\n");

//     do
//     {
//         m--;
//         printf("%d ", array[m]);
//     }while(m != 0);

//     printf("\n");

//     return 0;
// }
