#include<stdio.h>
#include<math.h>
#define pi acos(-1)
void main()
{
    float angle;
    printf("Enter angle:");
    scanf("%f", &angle);
    printf("Radian: %.2f\nsin(%.2f) = %.2f\ncos(%.2f) = %.2f",
            angle*pi/180,angle,sin(angle*pi/180),angle,cos(angle*pi/180));
}
