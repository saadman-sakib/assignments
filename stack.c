#include<stdio.h>

// ma'am, even though u did not show us how to use pointer yet, I had to use pointer because i found no other way to edit a variable with a function :D
int pop(int array[], int* TOS){
    if (*TOS == 0)
    {
        printf("underflow\n");
    } else
    {
        *TOS = *TOS - 1;
        return array[*TOS];
    }
}

void push(int array[], int* TOS, int element){
    if (*TOS >= 500)
    {
        printf("overflow\n");
    }
    else
    {
        array[*TOS] = element;
        *TOS = *TOS + 1;
    }
}

int main()
{
    //testing...
    int TOS = 3;
    int array[500] = {1,2,3};
    int x = pop(array,&TOS);
    printf("at index 2: %d\n", array[2]);
    printf("x = %d tos = %d",x,TOS);
}
