// #include<stdio.h>

// int main()
// {
//     int range_i, range_f;
//     printf("intial value, final value:");
//     scanf("%d %d", &range_i, &range_f);

//     for (int i = range_i; i <= range_f; i++)
//     {
//         if (i == 1)
//         {
//             continue;
//         }
        
//         int is_prime = 1;
//         for (int j = 2; j*j <= i; j++)
//         {
//             if (i%j == 0)
//             {
//                 is_prime = 0;
//                 break;
//             } 
//         }
//         if (is_prime == 1)
//         {
//             printf("%d is prime\n", i);
//         }
//     }
//     return 0;
// }

#include<stdio.h>

int main()
{
    unsigned long long int n;
    unsigned long long int factorial = 1;
    scanf("%llu", &n);

    for (unsigned long long int i = 1; i <= n; i++)
    {
        factorial*=i;
    }
    
    printf("%llu", factorial);
    
}

