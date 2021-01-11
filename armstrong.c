#include<stdio.h>
#include<math.h>

int main()
{
    int initial, final;

    printf("initial, final:");
    scanf("%d%d", &initial, &final);

    for (int n = initial; n <= final; n++)
    {
        int temp, _power;
        int digit=0, prediction=0;

        temp = n;
        while (temp != 0)
        {
            digit += 1;
            temp = temp/10;
        }

        temp = n;

        for (int i = 1; i <= digit; i++)
        {
            _power = 1;
            for (int j = 1; j <= digit; j++)
            {
                _power *= temp%10;
            }
            prediction += _power;

            temp = temp/10;
        }

        if (prediction == n)
        {
            printf("%d\n",prediction);
        }
    }
}
