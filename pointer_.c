#include<stdio.h>

int main()
{
    // int x,y;
    // x = 10;
    // int *p;
    // p = &x;
    // y = *p;

    // printf("%d\n",x);
    // printf("%d %u\n",x, &x);
    // printf("%d %u\n",*&x, &x);
    // printf("%d %u\n",*p, p);
    // printf("%d %u\n",p, &p);
    // printf("%d %u\n",y, &y);
    // *p = 20;
    // printf("%d", x);


    int *p;
    int x[10];
    p = x;
    printf("%u\n",p);
    p++;
    printf("%u\n",p);
    
    return 0;
}
