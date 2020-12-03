#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        printf("\n%d is the largest number",a);
        if(b>c)
        {
          printf("\n%d is the smallest number",c);
        }else
        {
          printf("\n%d is the smallest number",b); 
        }
    }
    else if((a<b)&&(b>c))
    {
        printf("%\n %d is the largest number",b);
        if(a>c)
        {
          printf("\n%d is the smallest number",c);
        }else
        {
          printf("\n%d is the smallest number",a); 
        }
    }
    else
    {
        printf("\n%d is the largest number",c);
        if(b>a)
        {
          printf("\n%d is the smallest number",a);
        } else
        {
          printf("\n%d is the smallest number",b); 
        }
    }
    return 0;
}