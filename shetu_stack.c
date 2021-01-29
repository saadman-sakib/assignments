#include <stdio.h>
#define MAX 20
int tos = -1;
int stack[MAX];

int pop()
{
    if (tos > -1)//not empty stack
    {
        int temp = stack[tos];
        tos--;
        return temp;
    }
    else
    {
        printf("empty stack\n");
    }
}

void push(int input)
{
    if (tos < MAX)
    {
        tos++;
        stack[tos] = input;
    }
    else
    {
        printf("stack overflow\n");
    }
}

void display()
{
    if (tos == -1)
    {
        printf("empty stack\n");
    }
    for (int i = 0; i <= tos; i++)
    {
        printf("%d ",stack[i]);
    }
    printf("\n"); 
}

int main()
{
    printf("0 -> exit\n");
    printf("1 -> pop\n");
    printf("2 -> push\n");
    printf("3 -> display\n");
    while(1)
    {
        int operation;
        printf("operation: ");
        scanf("%d", &operation);
        if (operation == 0)
        {
            printf("program exitted\n");
            return 0;
        }
        else if(operation == 1)
        {
            printf("poping out last element: %d\n", pop());
        }
        else if(operation == 2)
        {
            int input;
            printf("input: ");
            scanf("%d", &input);
            push(input);
            printf("pushed %d at index %d\n",input, tos);
        }
        else if (operation == 3)
        {
            display();
        }
        else
        {
            printf("invalid input\n");
        }
    }
}

//sadlife
