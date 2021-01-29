#include <stdio.h>
#define MAX_IND  20
int array[MAX_IND];
int TOS = -1;

void push(int n){
    if (TOS == MAX_IND)
    {
        printf("Stack is going to over flow...\nMax index exceed\n");
    }
    else
    {
        TOS += 1;
        array[TOS] = n;
    }
}

int pop(){
    if (TOS == -1)
    {
        printf("Stack is going to under flow...\nlowest index exeeded\n");
        return -1;
    }
    else
    {
        TOS -= 1;
        return array[TOS+1];
    }
}

void print()
{
    for (int i = 0; i <= TOS; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int operation;
    printf("there is an empty Stack of length %d.\n",MAX_IND);
    printf("You can perfor 4 operation.\n");
    printf("input 1 for push()\n");
    printf("input 2 for pop()\n");
    printf("input 3 for print()\n");
    printf("input 0 to exit\n");
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
            int input;
            printf("enter element that you want to push: ");
            scanf("%d", &input);
            //push function called:
            push(input);
            printf("element %d pushed in the index %d\n", array[TOS], TOS);
        }
        else if (operation == 2)
        {
            printf("poping out the last element at index %d...\n", TOS);
            //pop function called:
            printf("%d\n", pop());
        }
        else if (operation == 3)
        {
            printf("printing the elements of the satck...\n");
            print();
        }
        else
        {
            printf("invalid input\n");
        }
        
    }
}
