#include<stdio.h>

#define MAX 20
int main()
{
    int front = -1;
    int rear = -1;
    int array[MAX];
    int operation;
    printf("there is an empty Queue. you can perfor 4 operation.\ninput 1 for enqueue()\ninput 2 for dequeue()\ninput 0 to exit\ninput 3 to know the index of front and rear\n");
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
            if ((rear + 1) % MAX != front) 
            {
                rear = (rear + 1) % MAX;
                printf("enter element that you want to enqueue: ");
                scanf("%d", &array[rear]);
                printf("element %d enqueued in the index %d\n", array[rear], rear);
            } 
            else
            {
                printf("overflow\n");
            } 
        }
        else if (operation == 2)
        {
            if ((front + 1 + MAX) % MAX != rear) 
            {
                front = (front + 1 + MAX) % MAX;
                printf("dequeueing the first element at index %d...\n", front);
                printf("%d\n", array[front]);
            } 
            else
            {
                printf("underflow\n");
            }
        }
        else if (operation == 3)
        {
            //actual front has to be 1 greater than the fron variable to maintain the logistics.
            printf("front at index: %d\nrear at index %d\n",front + 1,rear); 
        }
    }
}