#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c,d,distance;
    printf("Enter 1st point’s x co-ordinate: ");
    scanf("%f",&a);
    printf("Enter 1st point’s y co-ordinate: ");
    scanf("%f",&b);
    printf("Enter 2nd point’s x co-ordinate: ");
    scanf("%f",&c);
    printf("Enter 2nd point’s y co-ordinate: ");
    scanf("%f",&d);
    distance = sqrt((pow((a-c),2)+pow((b-d),2)));
    printf("Distance = %.2f",distance);
    return 0;
}