#include<stdio.h>
int gcd(int a, int b) {
    if (a % b == 0)
    {
        return b;
    }
    return gcd(b , a%b);
}
int main()
{
    int m, n;
    printf("inputs:");
    scanf("%d %d", &m, &n);
    printf("%d", gcd(m,n));
    return 0;
}
