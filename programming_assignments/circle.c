#include<stdio.h>
#include <math.h>
#define pi acos(-1)
int main ()
{
    float radius;
    printf("Radius = ");
    scanf("%f", &radius);
    printf("Area of the circle is %.2f \n", pi*pow(radius,2));
    printf("Perimeter of the circle is %.2f", 2*pi*radius);
}