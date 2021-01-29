#include <stdio.h>
int main()
{
    const int MAX_IND = 50;
    int TOS = -1;
    int array[MAX_IND];
    int operation;
    printf("there is an empty Stack. you can perfor 3 operation.\ninput 1 for push()\ninput 2 for pop()\ninput 0 to exit\n");
    while (1)
    {
        printf("input operation: ");
        scanf("%d", &operation);

        if (operation == 0)
        {
            printf("program exitted\n");
            return 0;
        }
        else if (operation == 1)
        {
            if (TOS == MAX_IND)
            {
                printf("Stack is going to over flow...\nMax index exceed\n");
                continue;
            }

            printf("enter element that you want to push: ");
            TOS += 1;
            scanf("%d", &array[TOS]);
            printf("element %d pushed in the index %d\n", array[TOS], TOS);
        }
        else if (operation == 2)
        {
            if (TOS == -1)
            {
                printf("Stack is going to under flow...\nlowest index exeeded\n");
                continue;
            }
            printf("poping out the last element at index %d...\n", TOS);
            printf("%d\n", array[TOS]);
            TOS -= 1;
        }
    }
}
