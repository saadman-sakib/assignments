#include<stdio.h>

int main()
{
    int n;
    printf("Input: ");
    scanf("%d",&n);
    printf("Output: %d", n*(n + 1)*(2*n + 1)/6);
    return 0;
}
