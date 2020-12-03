#include<stdio.h>
#include<math.h>
int main()
{
    float x, n;
    printf("Enter x = ");
    scanf("%f",&x);
    printf("Enter n = ");
    scanf("%f",&n);
    printf("%.2f^%.2f = %.2f",x,n,pow(x,n));
}
