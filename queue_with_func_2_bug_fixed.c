#include<stdio.h>
#define MAX 5
int front = 0;
int rear = -1;
int array[MAX];
int is_empty = 1;

void enqueue(int input)
{
    if (front == -1 && rear == MAX-1 && is_empty == 0)
    {
        printf("overflow\n");
    }
    else if (((rear + 1) % MAX != front) || is_empty == 1)
    {

        is_empty = 0;
        rear = (rear + 1) % MAX;
        array[rear] = input;
    }
    else
    {
        printf("overflow\n");
    }
}

int dequeue()
{
    if (is_empty == 0)
    {
        int temp = array[front];
        front = (front + 1 + MAX) % MAX;

        if (((front + MAX - 1) % MAX == rear))
        {
            is_empty = 1;
        }
        return temp;
    }
    else
    {
        printf("underflow\n");
        return -1;
    }
}

void print()
{
    if (is_empty == 0)
    { 
        int n = front;
        int special_case = 0;
        if (n == rear+1)
        {
            special_case = 1;
        }
        while (n != rear+1 || special_case == 1)
        {
            special_case = 0;
            printf("%d ", array[n]);
            n++;
            if (n == MAX)
            {
                if (n == rear + 1)
                {
                    break;
                }

                n = 0;
            }
        }
        printf("\n");
    }
    else
    {
        printf("underflow..\n");
    }
}

int main()
{
    int operation;
    printf("there is an empty Queue of lenght %d.\n",MAX);
    printf("You can perfor 5 operation.\n");
    printf("input 0 to exit\n");
    printf("input 1 to enqueue()\n");
    printf("input 2 to dequeue()\n");
    printf("input 3 to know the index of front and rear\n");
    printf("input 4 to print the queue\n");
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
            int temp;
            printf("enter element that you want to enqueue: ");
            scanf("%d",&temp);
            enqueue(temp);
            printf("element %d enqueued in the index %d\n", array[rear], rear);

        }
        else if (operation == 2)
        {
            
            printf("dequeueing the first element at index %d...\n", front);
            printf("%d\n", dequeue());
        }
        else if (operation == 3)
        {
            //actual front has to be 1 greater than the fron variable to maintain the logistics.
            printf("front at index: %d\nrear at index %d\n",front ,rear); 
        }
        else if (operation == 4)
        {
            printf("printing the elements of queue (from front to rear)...\n");
            print();
        }
        else
        {
            printf("invalid operation\n");
        }
    }
}
