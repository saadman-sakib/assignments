#include<stdio.h>
int fibonacci(int n){
    if (n == 0) {
        return 1;
    } else if(n == 1) {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int n;
    printf("position:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", fibonacci(i));
    } 
    return 0;
}