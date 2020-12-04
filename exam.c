#include<stdio.h>
int main()
{
    int sum = 0, total_num = 0;

    printf("numbers: ");
    for (int i = 300; i <= 600; i++)
    {
        if (i%6 == 0 && i%4 != 0)
        {
            sum += i;
            total_num += 1;
            printf("%d ", i);
        }
    }
    printf("\ntotal sum = %d\ntotal number of such values = %d", sum, total_num);
    
    return 0;
}
