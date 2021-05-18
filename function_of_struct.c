#include<stdio.h>
#include<string.h>

union test
{
    int a;
    char b;
    int array[3];
};

// struct testing(struct test a)
// {

// }

int main()
{
    union test x ;

    printf("%d",sizeof(x));
    return 0;
}
