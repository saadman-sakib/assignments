#include<stdio.h>
#include<math.h>
void main()
{
    float a, b, c, s;
    printf("Enter sides: ");
    scanf("%f%f%f",&a,&b,&c);
    s = (a+b+c)/2;
    printf("Area = %.2f",sqrt(s*(s-a)*(s-b)*(s-c)));
}