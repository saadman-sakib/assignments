#include<stdio.h>

int main()
{
    int weight;
    char act_factor;
    scanf("%d %c", &weight, &act_factor);

    if (act_factor == 'A')
    {
        printf("recommended number of calories: %d", weight*15);
    } else if (act_factor == 'I')
    {
        printf("recommended number of calories: %d", weight*13);
    } else
    {
        printf("Invalid Input");
    }
}