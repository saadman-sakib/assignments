#include<stdio.h>

int main()
{
    float deposit, rate, interest;
    float total_interest = 0;
    printf("Enter initial money: ");
    scanf("%f", &deposit);
    printf("Enter interest rate in percentage: ");
    scanf("%f", &rate);
    printf("\n\n");
    printf("Year            Interest           Total Interest          Accrued Amount\n");
    printf("_________________________________________________________________________\n");

    for (int i = 1; i <= 4; i++)
    {
        interest = deposit*rate/100;
        printf("%d               %.2f             %.2f                  %.2f\n", i, interest, interest+total_interest, deposit+interest);
        deposit += interest;
        total_interest += interest;
    }
    
    return 0;
}