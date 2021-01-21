#include<stdio.h>
#define MAX 20

// ma'am, even though u did not show us how to use pointer yet, I had to use pointer because i found no other way to edit a variable with a function :D
int dequeue(int array[], int* front, int* rear)
{
    if ((*front + 1 + MAX) % MAX != *rear) 
    {
        *front = (*front + 1 + MAX) % MAX;
        return array[*front];
    } else
    {
        printf("underflow\n");
    }
}
void enqueue(int array[], int* front, int* rear, int element)
{
    if ((*rear + 1) % MAX != *front) 
    {
        *rear = (*rear + 1) % MAX;
        array[*rear] = element;
    } else
    {
        printf("overflow\n");
    }   
}

int main()
{
    int queue[MAX] = {1,2,3,4,5};
    int front = 0;
    int rear = 4;
    int temp;

    //checking...
    enqueue(queue, &front, &rear, 1);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    enqueue(queue, &front, &rear, 2);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    enqueue(queue, &front, &rear, 3);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    enqueue(queue, &front, &rear, 6);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    enqueue(queue, &front, &rear, 8);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    enqueue(queue, &front, &rear, 11);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    enqueue(queue, &front, &rear, 9);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    enqueue(queue, &front, &rear, 4);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    enqueue(queue, &front, &rear, 3);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    enqueue(queue, &front, &rear, 455);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    enqueue(queue, &front, &rear, 23);
    temp = dequeue(queue, &front, &rear);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    temp = dequeue(queue, &front, &rear);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    temp = dequeue(queue, &front, &rear);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    temp = dequeue(queue, &front, &rear);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    temp = dequeue(queue, &front, &rear);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    temp = dequeue(queue, &front, &rear);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    temp = dequeue(queue, &front, &rear);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    temp = dequeue(queue, &front, &rear);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    temp = dequeue(queue, &front, &rear);
    enqueue(queue, &front, &rear, 123);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    enqueue(queue, &front, &rear, 234);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    enqueue(queue, &front, &rear, 456);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    enqueue(queue, &front, &rear, 23);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    enqueue(queue, &front, &rear, 4247);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    enqueue(queue, &front, &rear, 213);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
    enqueue(queue, &front, &rear, 170);
    printf("front: %d rear: %d queue[rear]: %d\n", front, rear, queue[rear]);
}