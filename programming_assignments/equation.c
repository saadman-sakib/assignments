#include<stdio.h>
#include <math.h>
void main ()
{
    float a,b,c,root1,root2,discriminant;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);
    discriminant = b*b-4*a*c;
    if (discriminant < 0)
    {
        printf("x = %.2f+%.2fi, %.2f-%.2fi",-b/(2*a),sqrt(-discriminant)/(2*a),-b/(2*a),sqrt(-discriminant)/(2*a));
    } 
    else 
    {
        root1 = (-b+ sqrt(b*b-4*a*c))/(2*a);
        root2 = (-b- sqrt(b*b-4*a*c))/(2*a);
        printf("x = %.2f , %.2f ", root2, root1);
    }
}